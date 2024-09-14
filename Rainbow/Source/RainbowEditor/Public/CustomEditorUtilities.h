#pragma once

#include "CoreMinimal.h"
#include "CustomEditorUtilities.generated.h"

class AImageResult;

USTRUCT(BlueprintType)
struct FScreenShotParams
{
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Category = "Setup")
	FString Filename;
	UPROPERTY(BlueprintReadWrite, Category = "Setup")
	int ResolutionX;
	UPROPERTY(BlueprintReadWrite, Category = "Setup")
	int ResolutionY;
};

DECLARE_DELEGATE(OnImageProcessingFinished);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnProcessFinished, bool, Result);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnOutputTextChanged);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnProgressBarUpdated, float, Value);

UCLASS(BlueprintType)
class RAINBOWEDITOR_API UCustomEditorUtilities : public UObject
{
	GENERATED_BODY()
public:
	UCustomEditorUtilities();

	UPROPERTY(BlueprintReadWrite, Category = "Setup")
	FScreenShotParams ScreenShotParams;
	UPROPERTY(BlueprintReadWrite, Category = "Setup")
	FString OutputText;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Setup")
	TSubclassOf<AImageResult> ResultImgClass;
	UPROPERTY(BlueprintAssignable)
	FOnProcessFinished ProcessFinished;
	UPROPERTY(BlueprintAssignable)
	FOnOutputTextChanged OutputTextChanged;
	UPROPERTY(BlueprintAssignable)
	FOnProgressBarUpdated ProgressBarUpdated;

	UFUNCTION(BlueprintCallable, Category= "Setup")
	void ProcessScreenshot();

private:
	OnImageProcessingFinished ImageProcessingFinished;

	UPROPERTY()
	AImageResult* ResultImage;
	FString Paths[3];
	FString DateTime;
	FString Filename;
	double StartProcessTime;
	const FString PNG = TEXT(".png");

	void Reset();
	void TakeHighResScreenshot();
	void ConvertScreenshotToGrayscale() const;
	void CallSpade();
	void CheckResult(const FString& TextResult);
	void ShowResult();
	void SetOutputString(const FString& NewString);
	void MoveScreenshots();
};

