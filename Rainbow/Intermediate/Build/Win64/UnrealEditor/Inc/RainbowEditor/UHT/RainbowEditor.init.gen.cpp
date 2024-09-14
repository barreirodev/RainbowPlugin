// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRainbowEditor_init() {}
	RAINBOWEDITOR_API UFunction* Z_Construct_UDelegateFunction_RainbowEditor_OnOutputTextChanged__DelegateSignature();
	RAINBOWEDITOR_API UFunction* Z_Construct_UDelegateFunction_RainbowEditor_OnProcessFinished__DelegateSignature();
	RAINBOWEDITOR_API UFunction* Z_Construct_UDelegateFunction_RainbowEditor_OnProgressBarUpdated__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_RainbowEditor;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_RainbowEditor()
	{
		if (!Z_Registration_Info_UPackage__Script_RainbowEditor.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_RainbowEditor_OnOutputTextChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_RainbowEditor_OnProcessFinished__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_RainbowEditor_OnProgressBarUpdated__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/RainbowEditor",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000040,
				0xDF0FCD7A,
				0x28C95AEC,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_RainbowEditor.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_RainbowEditor.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_RainbowEditor(Z_Construct_UPackage__Script_RainbowEditor, TEXT("/Script/RainbowEditor"), Z_Registration_Info_UPackage__Script_RainbowEditor, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xDF0FCD7A, 0x28C95AEC));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
