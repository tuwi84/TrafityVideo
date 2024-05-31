// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PICOXREditor/Public/PXR_EditorSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePXR_EditorSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	PICOXREDITOR_API UClass* Z_Construct_UClass_UPICOXREditorSettings();
	PICOXREDITOR_API UClass* Z_Construct_UClass_UPICOXREditorSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PICOXREditor();
// End Cross Module References
	void UPICOXREditorSettings::StaticRegisterNativesUPICOXREditorSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPICOXREditorSettings);
	UClass* Z_Construct_UClass_UPICOXREditorSettings_NoRegister()
	{
		return UPICOXREditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPICOXREditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowPICOXRInputToolbarButton_MetaData[];
#endif
		static void NewProp_bShowPICOXRInputToolbarButton_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowPICOXRInputToolbarButton;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPICOXREditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXREditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXREditorSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PXR_EditorSettings.h" },
		{ "ModuleRelativePath", "Public/PXR_EditorSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXREditorSettings_Statics::NewProp_bShowPICOXRInputToolbarButton_MetaData[] = {
		{ "Category", "PICOXR Editor Settings" },
		{ "Comment", "/** Whether or not to show the PICOXR Input settings toolbar button */" },
		{ "ModuleRelativePath", "Public/PXR_EditorSettings.h" },
		{ "ToolTip", "Whether or not to show the PICOXR Input settings toolbar button" },
	};
#endif
	void Z_Construct_UClass_UPICOXREditorSettings_Statics::NewProp_bShowPICOXRInputToolbarButton_SetBit(void* Obj)
	{
		((UPICOXREditorSettings*)Obj)->bShowPICOXRInputToolbarButton = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPICOXREditorSettings_Statics::NewProp_bShowPICOXRInputToolbarButton = { "bShowPICOXRInputToolbarButton", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPICOXREditorSettings), &Z_Construct_UClass_UPICOXREditorSettings_Statics::NewProp_bShowPICOXRInputToolbarButton_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPICOXREditorSettings_Statics::NewProp_bShowPICOXRInputToolbarButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXREditorSettings_Statics::NewProp_bShowPICOXRInputToolbarButton_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPICOXREditorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXREditorSettings_Statics::NewProp_bShowPICOXRInputToolbarButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPICOXREditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPICOXREditorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPICOXREditorSettings_Statics::ClassParams = {
		&UPICOXREditorSettings::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPICOXREditorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXREditorSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UPICOXREditorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXREditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPICOXREditorSettings()
	{
		if (!Z_Registration_Info_UClass_UPICOXREditorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPICOXREditorSettings.OuterSingleton, Z_Construct_UClass_UPICOXREditorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPICOXREditorSettings.OuterSingleton;
	}
	template<> PICOXREDITOR_API UClass* StaticClass<UPICOXREditorSettings>()
	{
		return UPICOXREditorSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPICOXREditorSettings);
	UPICOXREditorSettings::~UPICOXREditorSettings() {}
	struct Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXREditor_Public_PXR_EditorSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXREditor_Public_PXR_EditorSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPICOXREditorSettings, UPICOXREditorSettings::StaticClass, TEXT("UPICOXREditorSettings"), &Z_Registration_Info_UClass_UPICOXREditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPICOXREditorSettings), 2725359021U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXREditor_Public_PXR_EditorSettings_h_2689409792(TEXT("/Script/PICOXREditor"),
		Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXREditor_Public_PXR_EditorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXREditor_Public_PXR_EditorSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
