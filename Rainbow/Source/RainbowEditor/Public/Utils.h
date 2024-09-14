#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Utils.generated.h"

UCLASS()
class RAINBOWEDITOR_API UUtils : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	static FString GetPluginRelativePath(const FString& RelativePath);
	static void CallPythonProcess(const FString& ScriptAbsolutePath, const FString& Parameters, const FString& Description,
	bool& OutbResult, FString& OutResult);
	static void SetUnlitMode(const bool bActive);
	static void ToggleGameView();
	static void ImportTextureHelper(const FString& TextureFilePath, const FString& SavePath, const FString& TextureName);
	static void CopyFiles(const FString& File, const FString& Dest, const FString& Description,
	bool& OutbResult, FString& OutResult);
};
