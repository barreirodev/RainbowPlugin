// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "kAIrosEditor/Public/Utils.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUtils() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	KAIROSEDITOR_API UClass* Z_Construct_UClass_UUtils();
	KAIROSEDITOR_API UClass* Z_Construct_UClass_UUtils_NoRegister();
	UPackage* Z_Construct_UPackage__Script_kAIrosEditor();
// End Cross Module References
	void UUtils::StaticRegisterNativesUUtils()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUtils);
	UClass* Z_Construct_UClass_UUtils_NoRegister()
	{
		return UUtils::StaticClass();
	}
	struct Z_Construct_UClass_UUtils_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUtils_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_kAIrosEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUtils_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUtils_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Utils.h" },
		{ "ModuleRelativePath", "Public/Utils.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUtils_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUtils>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUtils_Statics::ClassParams = {
		&UUtils::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUtils_Statics::Class_MetaDataParams), Z_Construct_UClass_UUtils_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UUtils()
	{
		if (!Z_Registration_Info_UClass_UUtils.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUtils.OuterSingleton, Z_Construct_UClass_UUtils_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUtils.OuterSingleton;
	}
	template<> KAIROSEDITOR_API UClass* StaticClass<UUtils>()
	{
		return UUtils::StaticClass();
	}
	UUtils::UUtils(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUtils);
	UUtils::~UUtils() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_kAIros_Source_kAIrosEditor_Public_Utils_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_kAIros_Source_kAIrosEditor_Public_Utils_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUtils, UUtils::StaticClass, TEXT("UUtils"), &Z_Registration_Info_UClass_UUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUtils), 1825408521U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_kAIros_Source_kAIrosEditor_Public_Utils_h_4041842913(TEXT("/Script/kAIrosEditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_kAIros_Source_kAIrosEditor_Public_Utils_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_kAIros_Source_kAIrosEditor_Public_Utils_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
