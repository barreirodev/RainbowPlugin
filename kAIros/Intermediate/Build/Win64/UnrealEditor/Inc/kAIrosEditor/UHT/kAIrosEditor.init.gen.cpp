// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodekAIrosEditor_init() {}
	KAIROSEDITOR_API UFunction* Z_Construct_UDelegateFunction_kAIrosEditor_OnOutputTextChanged__DelegateSignature();
	KAIROSEDITOR_API UFunction* Z_Construct_UDelegateFunction_kAIrosEditor_OnProcessFinished__DelegateSignature();
	KAIROSEDITOR_API UFunction* Z_Construct_UDelegateFunction_kAIrosEditor_OnProgressBarUpdated__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_kAIrosEditor;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_kAIrosEditor()
	{
		if (!Z_Registration_Info_UPackage__Script_kAIrosEditor.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_kAIrosEditor_OnOutputTextChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_kAIrosEditor_OnProcessFinished__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_kAIrosEditor_OnProgressBarUpdated__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/kAIrosEditor",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000040,
				0x4DE40593,
				0x72943977,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_kAIrosEditor.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_kAIrosEditor.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_kAIrosEditor(Z_Construct_UPackage__Script_kAIrosEditor, TEXT("/Script/kAIrosEditor"), Z_Registration_Info_UPackage__Script_kAIrosEditor, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x4DE40593, 0x72943977));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
