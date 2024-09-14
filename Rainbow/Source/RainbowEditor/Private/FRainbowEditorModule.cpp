#include "FRainbowEditorModule.h"
#include "Modules/ModuleManager.h"
#include "Modules/ModuleInterface.h"

IMPLEMENT_GAME_MODULE(FRainbowEditorModule, RainbowEditor);
DEFINE_LOG_CATEGORY(RainbowEditor)

#define LOCTEXT_NAMESPACE "RainbowEditor"

void FRainbowEditorModule::StartupModule()
{
	UE_LOG(RainbowEditor, Warning, TEXT("RainbowEditor: Log Started"));
}

void FRainbowEditorModule::ShutdownModule()
{
	UE_LOG(RainbowEditor, Warning, TEXT("RainbowEditor: Log Ended"));
}

#undef LOCTEXT_NAMESPACE
