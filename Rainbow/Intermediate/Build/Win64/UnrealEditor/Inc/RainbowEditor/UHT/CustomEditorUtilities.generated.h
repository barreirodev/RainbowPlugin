// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CustomEditorUtilities.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RAINBOWEDITOR_CustomEditorUtilities_generated_h
#error "CustomEditorUtilities.generated.h already included, missing '#pragma once' in CustomEditorUtilities.h"
#endif
#define RAINBOWEDITOR_CustomEditorUtilities_generated_h

#define FID_HostProject_Plugins_Rainbow_Source_RainbowEditor_Public_CustomEditorUtilities_h_11_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FScreenShotParams_Statics; \
	RAINBOWEDITOR_API static class UScriptStruct* StaticStruct();


template<> RAINBOWEDITOR_API UScriptStruct* StaticStruct<struct FScreenShotParams>();

#define FID_HostProject_Plugins_Rainbow_Source_RainbowEditor_Public_CustomEditorUtilities_h_21_DELEGATE \
RAINBOWEDITOR_API void FOnProcessFinished_DelegateWrapper(const FMulticastScriptDelegate& OnProcessFinished, bool Result);


#define FID_HostProject_Plugins_Rainbow_Source_RainbowEditor_Public_CustomEditorUtilities_h_22_DELEGATE \
RAINBOWEDITOR_API void FOnOutputTextChanged_DelegateWrapper(const FMulticastScriptDelegate& OnOutputTextChanged);


#define FID_HostProject_Plugins_Rainbow_Source_RainbowEditor_Public_CustomEditorUtilities_h_23_DELEGATE \
RAINBOWEDITOR_API void FOnProgressBarUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnProgressBarUpdated, float Value);


#define FID_HostProject_Plugins_Rainbow_Source_RainbowEditor_Public_CustomEditorUtilities_h_28_SPARSE_DATA
#define FID_HostProject_Plugins_Rainbow_Source_RainbowEditor_Public_CustomEditorUtilities_h_28_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_Rainbow_Source_RainbowEditor_Public_CustomEditorUtilities_h_28_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_Rainbow_Source_RainbowEditor_Public_CustomEditorUtilities_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execProcessScreenshot);


#define FID_HostProject_Plugins_Rainbow_Source_RainbowEditor_Public_CustomEditorUtilities_h_28_ACCESSORS
#define FID_HostProject_Plugins_Rainbow_Source_RainbowEditor_Public_CustomEditorUtilities_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomEditorUtilities(); \
	friend struct Z_Construct_UClass_UCustomEditorUtilities_Statics; \
public: \
	DECLARE_CLASS(UCustomEditorUtilities, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RainbowEditor"), NO_API) \
	DECLARE_SERIALIZER(UCustomEditorUtilities)


#define FID_HostProject_Plugins_Rainbow_Source_RainbowEditor_Public_CustomEditorUtilities_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomEditorUtilities(UCustomEditorUtilities&&); \
	NO_API UCustomEditorUtilities(const UCustomEditorUtilities&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomEditorUtilities); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomEditorUtilities); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCustomEditorUtilities) \
	NO_API virtual ~UCustomEditorUtilities();


#define FID_HostProject_Plugins_Rainbow_Source_RainbowEditor_Public_CustomEditorUtilities_h_25_PROLOG
#define FID_HostProject_Plugins_Rainbow_Source_RainbowEditor_Public_CustomEditorUtilities_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_Rainbow_Source_RainbowEditor_Public_CustomEditorUtilities_h_28_SPARSE_DATA \
	FID_HostProject_Plugins_Rainbow_Source_RainbowEditor_Public_CustomEditorUtilities_h_28_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_Rainbow_Source_RainbowEditor_Public_CustomEditorUtilities_h_28_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_Rainbow_Source_RainbowEditor_Public_CustomEditorUtilities_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Rainbow_Source_RainbowEditor_Public_CustomEditorUtilities_h_28_ACCESSORS \
	FID_HostProject_Plugins_Rainbow_Source_RainbowEditor_Public_CustomEditorUtilities_h_28_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Rainbow_Source_RainbowEditor_Public_CustomEditorUtilities_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RAINBOWEDITOR_API UClass* StaticClass<class UCustomEditorUtilities>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_Rainbow_Source_RainbowEditor_Public_CustomEditorUtilities_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
