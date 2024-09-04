#include "FkAirosEditorModule.h"
#include "Modules/ModuleManager.h"
#include "Modules/ModuleInterface.h"

IMPLEMENT_GAME_MODULE(FkAIrosEditorModule, kAIrosEditor);
DEFINE_LOG_CATEGORY(kAIrosEditor)

#define LOCTEXT_NAMESPACE "kAIrosEditor"

void FkAIrosEditorModule::StartupModule()
{
    UE_LOG(kAIrosEditor, Warning, TEXT("kAIrosEditor: Log Started"));
}

void FkAIrosEditorModule::ShutdownModule()
{
    UE_LOG(kAIrosEditor, Warning, TEXT("kAIrosEditor: Log Ended"));
}

#undef LOCTEXT_NAMESPACE