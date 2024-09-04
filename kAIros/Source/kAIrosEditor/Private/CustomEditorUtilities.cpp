#include "CustomEditorUtilities.h"
#include "Editor.h"
#include "Engine/GameViewportClient.h"
#include "EditorViewportClient.h"
#include "Engine/LocalPlayer.h"
#include "Misc/Paths.h"
#include "HAL/PlatformProcess.h"
#include "HighResScreenshot.h"
#include "ImageResult.h"
#include "LevelEditorViewport.h"
#include "kAIrosEditor/Public/Utils.h"
#include "Kismet/KismetMathLibrary.h"
#include "Misc/DateTime.h"

/**
 * Take screenshot, interact with python files and show the final result
 */
UCustomEditorUtilities::UCustomEditorUtilities()
{
	ImageProcessingFinished.BindLambda([this]()
	{
		ConvertScreenshotToGrayscale();
		CallSpade();
	});
}

void UCustomEditorUtilities::Reset()
{
	ProgressBarUpdated.Broadcast(0.0f);
	OutputText = TEXT("");
}

void UCustomEditorUtilities::ProcessScreenshot()
{
	Reset();
	
	DateTime =  FDateTime::Now().ToString(TEXT("%d%m%Y_%H%M%S"));
	StartProcessTime = FPlatformTime::Seconds();
	Filename = ScreenShotParams.Filename + DateTime;
	
	SetOutputString(TEXT("Start process at ") + FDateTime::Now().ToString(TEXT("%d%m%Y_%H%M%S")));
	
	const FString imagePath = UUtils::GetPluginRelativePath("ThirdParty/SPADE/datasets/SPADEDataset/val_img/" + Filename);
	const FString instancePath = UUtils::GetPluginRelativePath("ThirdParty/SPADE/datasets/SPADEDataset/val_inst/" + Filename);
	const FString labelPath = UUtils::GetPluginRelativePath("ThirdParty/SPADE/datasets/SPADEDataset/val_label/" + Filename);

	Paths[0] = imagePath;
	Paths[1] = labelPath ;
	Paths[2] = instancePath;

	UUtils::ToggleGameView();
	UUtils::SetUnlitMode(true);
	
	ProgressBarUpdated.Broadcast(0.25f);
	
	TakeHighResScreenshot();
}

void UCustomEditorUtilities::TakeHighResScreenshot()
{
	FHighResScreenshotConfig& Config		   = GetHighResScreenshotConfig();
		Config.SetResolution(ScreenShotParams.ResolutionX, ScreenShotParams.ResolutionY, 1.0f);
		Config.bDateTimeBasedNaming			   = true;
		Config.SetFilename(Paths[0]); //important in order to save it in other path
	
	FScreenshotRequest::RequestScreenshot(Paths[0], true, true);
	
	SetOutputString(FString::Printf(
		TEXT("\nTake screenshot %s with this parameters: resx %d resy %d"),
		*Paths[0],
		ScreenShotParams.ResolutionX, ScreenShotParams.ResolutionY
		));
	
	if (const UWorld* World = GEngine->GetWorldFromContextObjectChecked(GetWorld()))
	{
		FTimerHandle TimerHandle;
		FTimerDelegate TimerDelegate;
		
		TimerDelegate.BindLambda([this]()
		{
			FString TextResult;
			bool Result;

			UUtils::CopyFiles(Paths[0] + PNG ,Paths[1]+ PNG,
		 TEXT("\nCopy image to label folder\n"),Result,TextResult);

			ProgressBarUpdated.Broadcast(0.45f);
			
			SetOutputString(TextResult);
		 });
		
		 World->GetTimerManager().SetTimer(TimerHandle, TimerDelegate, 0.1f, false);
	}
	
	if (const UWorld* World = GEngine->GetWorldFromContextObjectChecked(GetWorld()))
	{
		FTimerHandle TimerHandle;
		FTimerDelegate TimerDelegate;
		
		TimerDelegate.BindLambda([this]()
		{
			UUtils::SetUnlitMode(false);
			UUtils::ToggleGameView();
			ImageProcessingFinished.Execute();
			ProgressBarUpdated.Broadcast(0.65f);
		});
		
		World->GetTimerManager().SetTimer(TimerHandle, TimerDelegate, 0.1f, false);
	}
}

void UCustomEditorUtilities::ConvertScreenshotToGrayscale() const
{
	FString TextResult;
	bool Result;
		
	const FString TransformImagePath = UUtils::GetPluginRelativePath("ThirdParty/ColourToGreyscale.py");
		
	const FString TransformImageParameters = FString::Printf(TEXT("%s %s %s"),
		*(Paths[1] + PNG + TEXT(" ")),
		*(Paths[2] + PNG + TEXT(" ")),
		*UUtils::GetPluginRelativePath("ThirdParty/srgbmap.txt "));
		
	UUtils::CallPythonProcess(TransformImagePath, TransformImageParameters,TEXT("Transforming label and instance image..."),Result,TextResult);
		
	ProgressBarUpdated.Broadcast(0.85f);
}

void UCustomEditorUtilities::CallSpade()
{
	FString TextResult;
	bool Result;
	
	const FString TestPath = UUtils::GetPluginRelativePath("ThirdParty/SPADE/test.py");
	const FString ModelName = TEXT("--name  coco_pretrained ");
	const FString DatabaseMode = TEXT("--dataset_mode coco ");
	const FString Dataroot = FString::Printf(TEXT("--dataroot %s "), *UUtils::GetPluginRelativePath("/ThirdParty/SPADE/datasets/SPADEDataset/"));
	const FString CheckpointsDir = FString::Printf(TEXT("--checkpoints_dir %s "), *UUtils::GetPluginRelativePath("/ThirdParty/SPADE/checkpoints "));
	const FString ResultsDir = FString::Printf(TEXT("--results_dir %s "), *UUtils::GetPluginRelativePath("/ThirdParty/SPADE/results "));
	const FString ExtendedParameters = TEXT("--no_instance --contain_dontcare_label --label_nc 255");
	const FString Parameters = ModelName + DatabaseMode + Dataroot + CheckpointsDir + ResultsDir;// + ExtendedParameters;
		
	UUtils::CallPythonProcess(TestPath, Parameters,TEXT("\nCalling SPADE "),Result,TextResult);

	SetOutputString(TextResult);
	ProcessFinished.Broadcast(Result);

	CheckResult(TextResult);
}

void UCustomEditorUtilities::CheckResult(const FString& TextResult)
{
	if (TextResult.Contains(TEXT("Error")))
	{
		ProcessFinished.Broadcast(false);
	}
	else
	{
		if (const UWorld* World = GEngine->GetWorldFromContextObjectChecked(GetWorld()))
		{
			FTimerHandle TimerHandle;
			FTimerDelegate TimerDelegate;
				
			TimerDelegate.BindLambda([this]()
			{
			   ProcessFinished.Broadcast(true);
			   ShowResult();
			});
				
			World->GetTimerManager().SetTimer(TimerHandle, TimerDelegate, 0.1f, false);
		}
	}
}

void UCustomEditorUtilities::ShowResult()
{
	const FString ImagePath = UUtils::GetPluginRelativePath("ThirdParty/SPADE/results/coco_pretrained/test_latest/images/synthesized_image/" + ScreenShotParams.Filename + DateTime + PNG);

	const FVector CameraPosition = GCurrentLevelEditingViewportClient->GetViewLocation();
	FTransform Transform;
	Transform.SetLocation(CameraPosition);
	
	ResultImage = GetWorld()->SpawnActor<AImageResult>(ResultImgClass,Transform);
	ResultImage->Setup(ImagePath,TEXT("/kAIros/Textures/ResourcesSaved"),TEXT("/kAIros/Materials/ResourcesSaved"),ScreenShotParams.Filename + DateTime);
	ResultImage->SetActorLabel(FString::Printf(TEXT("%s%s"),*ScreenShotParams.Filename, *DateTime));

	const FRotator CameraRotation = GCurrentLevelEditingViewportClient->GetViewRotation();
	const auto ForwardVec = CameraRotation.Vector();
	const float Far = 2500.0f;
	const FVector NewActorLocation = FVector(CameraPosition + ( ForwardVec * Far));
	ResultImage->SetActorLocation(NewActorLocation);
	const FVector ActorLocation = ResultImage->GetActorLocation();
	const FRotator NewRotation = UKismetMathLibrary::FindLookAtRotation(CameraPosition, ActorLocation);
	ResultImage->SetActorRotation(NewRotation);
	
	ProgressBarUpdated.Broadcast(0.9f);
	
	MoveScreenshots();
}

void UCustomEditorUtilities::MoveScreenshots()
{
	FString TextResult;
	bool Result;
	FString ValPaths[3];
	ValPaths[0] = "val_img";
	ValPaths[1] = "val_inst";
	ValPaths[2] = "val_label";
	
	for(int i = 0; i <= 2 ; ++i)
	{
		UUtils::CopyFiles(Paths[i] + PNG + TEXT(" "),
		UUtils::GetPluginRelativePath("ThirdParty/OldScreenshots/" + ValPaths[i] + "/" + Filename + PNG),
		FString::Printf(TEXT("\nCopying image %s to OldScreenshots\n"),*Paths[i] ),Result,TextResult);
		UUtils::CallPythonProcess(UUtils::GetPluginRelativePath("ThirdParty/DeleteFiles.py"),
			Paths[i] + PNG + TEXT(" "),TEXT("Deleting used image\n"),Result,TextResult);
	}
	
	SetOutputString(TextResult);

	SetOutputString(FString::Printf(TEXT("Script execution time: %f seconds"),FPlatformTime::Seconds() - StartProcessTime));

	ProgressBarUpdated.Broadcast(1.0f);
}

void UCustomEditorUtilities::SetOutputString(const FString& NewString)
{
	OutputText += TEXT("\n") + NewString;
	OutputTextChanged.Broadcast();
}
