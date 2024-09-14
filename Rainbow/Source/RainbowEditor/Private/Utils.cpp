#include "RainbowEditor/Public/Utils.h"
#include "AssetImportTask.h"
#include "AssetToolsModule.h"
#include "IAssetTools.h"
#include "InterchangeManager.h"
#include "LevelEditorViewport.h"
#include "Interfaces/IPluginManager.h"

/**
 * Different utilities that are used throughout the project
 */
void UUtils::CallPythonProcess(const FString& ScriptAbsolutePath, const FString& Parameters, const FString& Description,
                           bool& OutbResult, FString& OutResult)
{
	OutResult += Description;

	const FString PythonInterpreterPath = TEXT("python");
	const FString Command = FString::Printf(TEXT("%s %s"), *ScriptAbsolutePath, *Parameters);

    // Capture output
    void* ReadPipe;
    void* WritePipe;
	
    FPlatformProcess::CreatePipe(ReadPipe, WritePipe);
	
    FProcHandle ProcessHandle = FPlatformProcess::CreateProc(
    	*PythonInterpreterPath, *Command, true,
    	true, true, nullptr, 0,
    	nullptr, WritePipe, ReadPipe);

    if (!ProcessHandle.IsValid())
    {
    	OutResult += FString::Printf(TEXT("\nFailed to create process for script: %s"), *ScriptAbsolutePath);
        FPlatformProcess::ClosePipe(ReadPipe, WritePipe);
    	OutbResult = false;
        return;
    }

    // Read the output of the process
    FString Output;
    FString ErrorOutput;
	
    while (FPlatformProcess::IsProcRunning(ProcessHandle))
    {
        FString NewOutput = FPlatformProcess::ReadPipe(ReadPipe);
        Output += NewOutput;
        FPlatformProcess::Sleep(0.1f);
    }

    Output += FPlatformProcess::ReadPipe(ReadPipe);

    // Close the process handle
    FPlatformProcess::CloseProc(ProcessHandle);

    // Close pipes
    FPlatformProcess::ClosePipe(ReadPipe, WritePipe);
	
    if (Output.Contains(TEXT("Error")))
    {
    	OutbResult = false;
    }
    else
    {
    	OutbResult = true;
    }
	
	 OutResult += FString::Printf(TEXT("%s"),*Output);
	 OutResult += FString::Printf(TEXT("Finished execution of script: %s\n"), *ScriptAbsolutePath);
}

void UUtils::SetUnlitMode(const bool bActive)
{
	if (GEditor->GetActiveViewport())
	{
		if (FEditorViewportClient* ViewportClient = (FEditorViewportClient*)GEditor->GetActiveViewport()->GetClient())
		{
			ViewportClient->SetViewMode(bActive ? VMI_Unlit : VMI_Lit);
		}
	}
}

FString UUtils::GetPluginRelativePath(const FString& RelativePath)
{
	const TSharedPtr<IPlugin> Plugin = IPluginManager::Get().FindPlugin(TEXT("Rainbow"));
	
	if (Plugin.IsValid())
	{
		return FPaths::Combine(Plugin->GetBaseDir(), RelativePath);
	}
	
	return FPaths::Combine(FPaths::ProjectSavedDir(), RelativePath);
}

void UUtils::ToggleGameView()
{
	for(FLevelEditorViewportClient* LevelViewportClient : GEditor->GetLevelViewportClients())
	{
		if(LevelViewportClient && LevelViewportClient->IsPerspective())
		{
			LevelViewportClient->SetGameView(!LevelViewportClient->IsInGameView());
			LevelViewportClient->Invalidate(); //redraw the viewport
		}
	}
}

void UUtils::ImportTextureHelper(const FString& TextureFilePath, const FString& SavePath,
	const FString& TextureName)
{
	const FAssetToolsModule& AssetToolsModule = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools");
	IAssetTools& AssetTools = AssetToolsModule.Get();

	UInterchangeManager::SetInterchangeImportEnabled(false);
	
	UAssetImportTask* ImportTask = NewObject<UAssetImportTask>();
	ImportTask->Filename = TextureFilePath;
	ImportTask->DestinationPath = SavePath;
	ImportTask->DestinationName = TextureName;
	ImportTask->bAutomated = true;
	ImportTask->bSave = true;
	
	TArray<UAssetImportTask*> ImportTasks;
	ImportTasks.Add(ImportTask);
	AssetTools.ImportAssetTasks(ImportTasks);
	
	if (ImportTask->ImportedObjectPaths.Num() > 0)
	{
		const FString ImportedAssetPath = ImportTask->ImportedObjectPaths[0];
		UE_LOG(LogTemp, Log, TEXT("Successfully imported texture: %s"), *ImportedAssetPath);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to import texture: %s"), *TextureName);
	}
}

void UUtils::CopyFiles(const FString& File, const FString& Dest, const FString& Description,
	bool& OutbResult, FString& OutResult)
{
	CallPythonProcess(GetPluginRelativePath("ThirdParty/CopyFiles.py"),
		File + TEXT(" ") + Dest,Description,OutbResult,OutResult);
}

