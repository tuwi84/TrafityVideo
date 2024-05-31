// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PicoSpatialAudio/Public/PicoAmbisonicsSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePicoAmbisonicsSettings() {}
// Cross Module References
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_USoundfieldEncodingSettingsBase();
	PICOSPATIALAUDIO_API UClass* Z_Construct_UClass_UPicoAmbisonicsSettings();
	PICOSPATIALAUDIO_API UClass* Z_Construct_UClass_UPicoAmbisonicsSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PicoSpatialAudio();
// End Cross Module References
	void UPicoAmbisonicsSettings::StaticRegisterNativesUPicoAmbisonicsSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPicoAmbisonicsSettings);
	UClass* Z_Construct_UClass_UPicoAmbisonicsSettings_NoRegister()
	{
		return UPicoAmbisonicsSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPicoAmbisonicsSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Order_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Order;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPicoAmbisonicsSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundfieldEncodingSettingsBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PicoSpatialAudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoAmbisonicsSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PicoAmbisonicsSettings.h" },
		{ "ModuleRelativePath", "Public/PicoAmbisonicsSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoAmbisonicsSettings_Statics::NewProp_Order_MetaData[] = {
		{ "Category", "AmbisonicsSettings" },
		{ "ClampMax", "7" },
		{ "ClampMin", "1" },
		{ "Comment", "//Which order of ambisonics to use for this submix.\n" },
		{ "ModuleRelativePath", "Public/PicoAmbisonicsSettings.h" },
		{ "ToolTip", "Which order of ambisonics to use for this submix." },
		{ "UIMax", "7" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPicoAmbisonicsSettings_Statics::NewProp_Order = { "Order", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPicoAmbisonicsSettings, Order), METADATA_PARAMS(Z_Construct_UClass_UPicoAmbisonicsSettings_Statics::NewProp_Order_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoAmbisonicsSettings_Statics::NewProp_Order_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPicoAmbisonicsSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoAmbisonicsSettings_Statics::NewProp_Order,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPicoAmbisonicsSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPicoAmbisonicsSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPicoAmbisonicsSettings_Statics::ClassParams = {
		&UPicoAmbisonicsSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPicoAmbisonicsSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPicoAmbisonicsSettings_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPicoAmbisonicsSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoAmbisonicsSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPicoAmbisonicsSettings()
	{
		if (!Z_Registration_Info_UClass_UPicoAmbisonicsSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPicoAmbisonicsSettings.OuterSingleton, Z_Construct_UClass_UPicoAmbisonicsSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPicoAmbisonicsSettings.OuterSingleton;
	}
	template<> PICOSPATIALAUDIO_API UClass* StaticClass<UPicoAmbisonicsSettings>()
	{
		return UPicoAmbisonicsSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPicoAmbisonicsSettings);
	UPicoAmbisonicsSettings::~UPicoAmbisonicsSettings() {}
	struct Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PicoSpatialAudio_Source_PicoSpatialAudio_Public_PicoAmbisonicsSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PicoSpatialAudio_Source_PicoSpatialAudio_Public_PicoAmbisonicsSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPicoAmbisonicsSettings, UPicoAmbisonicsSettings::StaticClass, TEXT("UPicoAmbisonicsSettings"), &Z_Registration_Info_UClass_UPicoAmbisonicsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPicoAmbisonicsSettings), 3652552935U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PicoSpatialAudio_Source_PicoSpatialAudio_Public_PicoAmbisonicsSettings_h_1820266886(TEXT("/Script/PicoSpatialAudio"),
		Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PicoSpatialAudio_Source_PicoSpatialAudio_Public_PicoAmbisonicsSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PicoSpatialAudio_Source_PicoSpatialAudio_Public_PicoAmbisonicsSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
