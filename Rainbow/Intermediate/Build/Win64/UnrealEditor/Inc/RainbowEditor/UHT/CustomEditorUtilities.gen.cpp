// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RainbowEditor/Public/CustomEditorUtilities.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomEditorUtilities() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	RAINBOWEDITOR_API UClass* Z_Construct_UClass_AImageResult_NoRegister();
	RAINBOWEDITOR_API UClass* Z_Construct_UClass_UCustomEditorUtilities();
	RAINBOWEDITOR_API UClass* Z_Construct_UClass_UCustomEditorUtilities_NoRegister();
	RAINBOWEDITOR_API UFunction* Z_Construct_UDelegateFunction_RainbowEditor_OnOutputTextChanged__DelegateSignature();
	RAINBOWEDITOR_API UFunction* Z_Construct_UDelegateFunction_RainbowEditor_OnProcessFinished__DelegateSignature();
	RAINBOWEDITOR_API UFunction* Z_Construct_UDelegateFunction_RainbowEditor_OnProgressBarUpdated__DelegateSignature();
	RAINBOWEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FScreenShotParams();
	UPackage* Z_Construct_UPackage__Script_RainbowEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ScreenShotParams;
class UScriptStruct* FScreenShotParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ScreenShotParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ScreenShotParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FScreenShotParams, (UObject*)Z_Construct_UPackage__Script_RainbowEditor(), TEXT("ScreenShotParams"));
	}
	return Z_Registration_Info_UScriptStruct_ScreenShotParams.OuterSingleton;
}
template<> RAINBOWEDITOR_API UScriptStruct* StaticStruct<FScreenShotParams>()
{
	return FScreenShotParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FScreenShotParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResolutionX_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ResolutionX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResolutionY_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ResolutionY;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenShotParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CustomEditorUtilities.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FScreenShotParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScreenShotParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenShotParams_Statics::NewProp_Filename_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/CustomEditorUtilities.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FScreenShotParams_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScreenShotParams, Filename), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenShotParams_Statics::NewProp_Filename_MetaData), Z_Construct_UScriptStruct_FScreenShotParams_Statics::NewProp_Filename_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenShotParams_Statics::NewProp_ResolutionX_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/CustomEditorUtilities.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FScreenShotParams_Statics::NewProp_ResolutionX = { "ResolutionX", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScreenShotParams, ResolutionX), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenShotParams_Statics::NewProp_ResolutionX_MetaData), Z_Construct_UScriptStruct_FScreenShotParams_Statics::NewProp_ResolutionX_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenShotParams_Statics::NewProp_ResolutionY_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/CustomEditorUtilities.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FScreenShotParams_Statics::NewProp_ResolutionY = { "ResolutionY", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScreenShotParams, ResolutionY), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenShotParams_Statics::NewProp_ResolutionY_MetaData), Z_Construct_UScriptStruct_FScreenShotParams_Statics::NewProp_ResolutionY_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScreenShotParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenShotParams_Statics::NewProp_Filename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenShotParams_Statics::NewProp_ResolutionX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenShotParams_Statics::NewProp_ResolutionY,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScreenShotParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RainbowEditor,
		nullptr,
		&NewStructOps,
		"ScreenShotParams",
		Z_Construct_UScriptStruct_FScreenShotParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenShotParams_Statics::PropPointers),
		sizeof(FScreenShotParams),
		alignof(FScreenShotParams),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenShotParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FScreenShotParams_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenShotParams_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FScreenShotParams()
	{
		if (!Z_Registration_Info_UScriptStruct_ScreenShotParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ScreenShotParams.InnerSingleton, Z_Construct_UScriptStruct_FScreenShotParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ScreenShotParams.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_RainbowEditor_OnProcessFinished__DelegateSignature_Statics
	{
		struct _Script_RainbowEditor_eventOnProcessFinished_Parms
		{
			bool Result;
		};
		static void NewProp_Result_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_RainbowEditor_OnProcessFinished__DelegateSignature_Statics::NewProp_Result_SetBit(void* Obj)
	{
		((_Script_RainbowEditor_eventOnProcessFinished_Parms*)Obj)->Result = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_RainbowEditor_OnProcessFinished__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_RainbowEditor_eventOnProcessFinished_Parms), &Z_Construct_UDelegateFunction_RainbowEditor_OnProcessFinished__DelegateSignature_Statics::NewProp_Result_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RainbowEditor_OnProcessFinished__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RainbowEditor_OnProcessFinished__DelegateSignature_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RainbowEditor_OnProcessFinished__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomEditorUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RainbowEditor_OnProcessFinished__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RainbowEditor, nullptr, "OnProcessFinished__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_RainbowEditor_OnProcessFinished__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RainbowEditor_OnProcessFinished__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_RainbowEditor_OnProcessFinished__DelegateSignature_Statics::_Script_RainbowEditor_eventOnProcessFinished_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RainbowEditor_OnProcessFinished__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RainbowEditor_OnProcessFinished__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RainbowEditor_OnProcessFinished__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_RainbowEditor_OnProcessFinished__DelegateSignature_Statics::_Script_RainbowEditor_eventOnProcessFinished_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_RainbowEditor_OnProcessFinished__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RainbowEditor_OnProcessFinished__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnProcessFinished_DelegateWrapper(const FMulticastScriptDelegate& OnProcessFinished, bool Result)
{
	struct _Script_RainbowEditor_eventOnProcessFinished_Parms
	{
		bool Result;
	};
	_Script_RainbowEditor_eventOnProcessFinished_Parms Parms;
	Parms.Result=Result ? true : false;
	OnProcessFinished.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_RainbowEditor_OnOutputTextChanged__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RainbowEditor_OnOutputTextChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomEditorUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RainbowEditor_OnOutputTextChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RainbowEditor, nullptr, "OnOutputTextChanged__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RainbowEditor_OnOutputTextChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RainbowEditor_OnOutputTextChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_RainbowEditor_OnOutputTextChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RainbowEditor_OnOutputTextChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnOutputTextChanged_DelegateWrapper(const FMulticastScriptDelegate& OnOutputTextChanged)
{
	OnOutputTextChanged.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_RainbowEditor_OnProgressBarUpdated__DelegateSignature_Statics
	{
		struct _Script_RainbowEditor_eventOnProgressBarUpdated_Parms
		{
			float Value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_RainbowEditor_OnProgressBarUpdated__DelegateSignature_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RainbowEditor_eventOnProgressBarUpdated_Parms, Value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RainbowEditor_OnProgressBarUpdated__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RainbowEditor_OnProgressBarUpdated__DelegateSignature_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RainbowEditor_OnProgressBarUpdated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomEditorUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RainbowEditor_OnProgressBarUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RainbowEditor, nullptr, "OnProgressBarUpdated__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_RainbowEditor_OnProgressBarUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RainbowEditor_OnProgressBarUpdated__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_RainbowEditor_OnProgressBarUpdated__DelegateSignature_Statics::_Script_RainbowEditor_eventOnProgressBarUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RainbowEditor_OnProgressBarUpdated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RainbowEditor_OnProgressBarUpdated__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RainbowEditor_OnProgressBarUpdated__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_RainbowEditor_OnProgressBarUpdated__DelegateSignature_Statics::_Script_RainbowEditor_eventOnProgressBarUpdated_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_RainbowEditor_OnProgressBarUpdated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RainbowEditor_OnProgressBarUpdated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnProgressBarUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnProgressBarUpdated, float Value)
{
	struct _Script_RainbowEditor_eventOnProgressBarUpdated_Parms
	{
		float Value;
	};
	_Script_RainbowEditor_eventOnProgressBarUpdated_Parms Parms;
	Parms.Value=Value;
	OnProgressBarUpdated.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UCustomEditorUtilities::execProcessScreenshot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ProcessScreenshot();
		P_NATIVE_END;
	}
	void UCustomEditorUtilities::StaticRegisterNativesUCustomEditorUtilities()
	{
		UClass* Class = UCustomEditorUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ProcessScreenshot", &UCustomEditorUtilities::execProcessScreenshot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCustomEditorUtilities_ProcessScreenshot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomEditorUtilities_ProcessScreenshot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/CustomEditorUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomEditorUtilities_ProcessScreenshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomEditorUtilities, nullptr, "ProcessScreenshot", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomEditorUtilities_ProcessScreenshot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomEditorUtilities_ProcessScreenshot_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UCustomEditorUtilities_ProcessScreenshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomEditorUtilities_ProcessScreenshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomEditorUtilities);
	UClass* Z_Construct_UClass_UCustomEditorUtilities_NoRegister()
	{
		return UCustomEditorUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UCustomEditorUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScreenShotParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScreenShotParams;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputText_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutputText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResultImgClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ResultImgClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProcessFinished_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ProcessFinished;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputTextChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OutputTextChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProgressBarUpdated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ProgressBarUpdated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResultImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ResultImage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomEditorUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RainbowEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomEditorUtilities_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UCustomEditorUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCustomEditorUtilities_ProcessScreenshot, "ProcessScreenshot" }, // 197662303
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomEditorUtilities_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomEditorUtilities_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CustomEditorUtilities.h" },
		{ "ModuleRelativePath", "Public/CustomEditorUtilities.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomEditorUtilities_Statics::NewProp_ScreenShotParams_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/CustomEditorUtilities.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomEditorUtilities_Statics::NewProp_ScreenShotParams = { "ScreenShotParams", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomEditorUtilities, ScreenShotParams), Z_Construct_UScriptStruct_FScreenShotParams, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomEditorUtilities_Statics::NewProp_ScreenShotParams_MetaData), Z_Construct_UClass_UCustomEditorUtilities_Statics::NewProp_ScreenShotParams_MetaData) }; // 2782095874
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomEditorUtilities_Statics::NewProp_OutputText_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/CustomEditorUtilities.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCustomEditorUtilities_Statics::NewProp_OutputText = { "OutputText", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomEditorUtilities, OutputText), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomEditorUtilities_Statics::NewProp_OutputText_MetaData), Z_Construct_UClass_UCustomEditorUtilities_Statics::NewProp_OutputText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomEditorUtilities_Statics::NewProp_ResultImgClass_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/CustomEditorUtilities.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCustomEditorUtilities_Statics::NewProp_ResultImgClass = { "ResultImgClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomEditorUtilities, ResultImgClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AImageResult_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomEditorUtilities_Statics::NewProp_ResultImgClass_MetaData), Z_Construct_UClass_UCustomEditorUtilities_Statics::NewProp_ResultImgClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomEditorUtilities_Statics::NewProp_ProcessFinished_MetaData[] = {
		{ "ModuleRelativePath", "Public/CustomEditorUtilities.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCustomEditorUtilities_Statics::NewProp_ProcessFinished = { "ProcessFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomEditorUtilities, ProcessFinished), Z_Construct_UDelegateFunction_RainbowEditor_OnProcessFinished__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomEditorUtilities_Statics::NewProp_ProcessFinished_MetaData), Z_Construct_UClass_UCustomEditorUtilities_Statics::NewProp_ProcessFinished_MetaData) }; // 1434264506
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomEditorUtilities_Statics::NewProp_OutputTextChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/CustomEditorUtilities.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCustomEditorUtilities_Statics::NewProp_OutputTextChanged = { "OutputTextChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomEditorUtilities, OutputTextChanged), Z_Construct_UDelegateFunction_RainbowEditor_OnOutputTextChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomEditorUtilities_Statics::NewProp_OutputTextChanged_MetaData), Z_Construct_UClass_UCustomEditorUtilities_Statics::NewProp_OutputTextChanged_MetaData) }; // 1361902438
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomEditorUtilities_Statics::NewProp_ProgressBarUpdated_MetaData[] = {
		{ "ModuleRelativePath", "Public/CustomEditorUtilities.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCustomEditorUtilities_Statics::NewProp_ProgressBarUpdated = { "ProgressBarUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomEditorUtilities, ProgressBarUpdated), Z_Construct_UDelegateFunction_RainbowEditor_OnProgressBarUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomEditorUtilities_Statics::NewProp_ProgressBarUpdated_MetaData), Z_Construct_UClass_UCustomEditorUtilities_Statics::NewProp_ProgressBarUpdated_MetaData) }; // 814124910
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomEditorUtilities_Statics::NewProp_ResultImage_MetaData[] = {
		{ "ModuleRelativePath", "Public/CustomEditorUtilities.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCustomEditorUtilities_Statics::NewProp_ResultImage = { "ResultImage", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomEditorUtilities, ResultImage), Z_Construct_UClass_AImageResult_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomEditorUtilities_Statics::NewProp_ResultImage_MetaData), Z_Construct_UClass_UCustomEditorUtilities_Statics::NewProp_ResultImage_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomEditorUtilities_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomEditorUtilities_Statics::NewProp_ScreenShotParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomEditorUtilities_Statics::NewProp_OutputText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomEditorUtilities_Statics::NewProp_ResultImgClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomEditorUtilities_Statics::NewProp_ProcessFinished,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomEditorUtilities_Statics::NewProp_OutputTextChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomEditorUtilities_Statics::NewProp_ProgressBarUpdated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomEditorUtilities_Statics::NewProp_ResultImage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomEditorUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomEditorUtilities>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomEditorUtilities_Statics::ClassParams = {
		&UCustomEditorUtilities::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCustomEditorUtilities_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomEditorUtilities_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomEditorUtilities_Statics::Class_MetaDataParams), Z_Construct_UClass_UCustomEditorUtilities_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomEditorUtilities_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCustomEditorUtilities()
	{
		if (!Z_Registration_Info_UClass_UCustomEditorUtilities.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomEditorUtilities.OuterSingleton, Z_Construct_UClass_UCustomEditorUtilities_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomEditorUtilities.OuterSingleton;
	}
	template<> RAINBOWEDITOR_API UClass* StaticClass<UCustomEditorUtilities>()
	{
		return UCustomEditorUtilities::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomEditorUtilities);
	UCustomEditorUtilities::~UCustomEditorUtilities() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Rainbow_Source_RainbowEditor_Public_CustomEditorUtilities_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Rainbow_Source_RainbowEditor_Public_CustomEditorUtilities_h_Statics::ScriptStructInfo[] = {
		{ FScreenShotParams::StaticStruct, Z_Construct_UScriptStruct_FScreenShotParams_Statics::NewStructOps, TEXT("ScreenShotParams"), &Z_Registration_Info_UScriptStruct_ScreenShotParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FScreenShotParams), 2782095874U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Rainbow_Source_RainbowEditor_Public_CustomEditorUtilities_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomEditorUtilities, UCustomEditorUtilities::StaticClass, TEXT("UCustomEditorUtilities"), &Z_Registration_Info_UClass_UCustomEditorUtilities, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomEditorUtilities), 1290189517U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Rainbow_Source_RainbowEditor_Public_CustomEditorUtilities_h_1890462838(TEXT("/Script/RainbowEditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Rainbow_Source_RainbowEditor_Public_CustomEditorUtilities_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Rainbow_Source_RainbowEditor_Public_CustomEditorUtilities_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Rainbow_Source_RainbowEditor_Public_CustomEditorUtilities_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Rainbow_Source_RainbowEditor_Public_CustomEditorUtilities_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
