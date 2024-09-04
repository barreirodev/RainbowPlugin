// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "kAIrosEditor/Public/ImageResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImageResult() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	KAIROSEDITOR_API UClass* Z_Construct_UClass_AImageResult();
	KAIROSEDITOR_API UClass* Z_Construct_UClass_AImageResult_NoRegister();
	UPackage* Z_Construct_UPackage__Script_kAIrosEditor();
// End Cross Module References
	void AImageResult::StaticRegisterNativesAImageResult()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AImageResult);
	UClass* Z_Construct_UClass_AImageResult_NoRegister()
	{
		return AImageResult::StaticClass();
	}
	struct Z_Construct_UClass_AImageResult_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AImageResult_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_kAIrosEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AImageResult_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AImageResult_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ImageResult.h" },
		{ "ModuleRelativePath", "Public/ImageResult.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AImageResult_Statics::NewProp_BaseMaterial_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/ImageResult.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AImageResult_Statics::NewProp_BaseMaterial = { "BaseMaterial", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AImageResult, BaseMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AImageResult_Statics::NewProp_BaseMaterial_MetaData), Z_Construct_UClass_AImageResult_Statics::NewProp_BaseMaterial_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AImageResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AImageResult_Statics::NewProp_BaseMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AImageResult_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AImageResult>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AImageResult_Statics::ClassParams = {
		&AImageResult::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AImageResult_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AImageResult_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AImageResult_Statics::Class_MetaDataParams), Z_Construct_UClass_AImageResult_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AImageResult_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AImageResult()
	{
		if (!Z_Registration_Info_UClass_AImageResult.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AImageResult.OuterSingleton, Z_Construct_UClass_AImageResult_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AImageResult.OuterSingleton;
	}
	template<> KAIROSEDITOR_API UClass* StaticClass<AImageResult>()
	{
		return AImageResult::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AImageResult);
	AImageResult::~AImageResult() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_kAIros_Source_kAIrosEditor_Public_ImageResult_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_kAIros_Source_kAIrosEditor_Public_ImageResult_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AImageResult, AImageResult::StaticClass, TEXT("AImageResult"), &Z_Registration_Info_UClass_AImageResult, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AImageResult), 2551830734U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_kAIros_Source_kAIrosEditor_Public_ImageResult_h_1551527763(TEXT("/Script/kAIrosEditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_kAIros_Source_kAIrosEditor_Public_ImageResult_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_kAIros_Source_kAIrosEditor_Public_ImageResult_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
