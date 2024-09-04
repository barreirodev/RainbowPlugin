// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class kAIrosEditor : ModuleRules
{
	public kAIrosEditor(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] {
				"kAIrosEditor/Public"
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				"kAIrosEditor/Private"
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core" ,
				"CoreUObject",
				"Projects",
				"UnrealEd",
				"InterchangeEngine"
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore"
				// ... add private dependencies that you statically link with here ...	
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
	}
}
