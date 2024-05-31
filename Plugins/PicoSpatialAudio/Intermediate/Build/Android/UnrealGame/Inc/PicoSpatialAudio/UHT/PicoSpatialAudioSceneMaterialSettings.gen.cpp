// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PicoSpatialAudio/Public/PicoSpatialAudioSceneMaterialSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePicoSpatialAudioSceneMaterialSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	PICOSPATIALAUDIO_API UClass* Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings();
	PICOSPATIALAUDIO_API UClass* Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_NoRegister();
	PICOSPATIALAUDIO_API UEnum* Z_Construct_UEnum_PicoSpatialAudio_EPxrAudioSpatializer_SceneMaterialPreset();
	UPackage* Z_Construct_UPackage__Script_PicoSpatialAudio();
// End Cross Module References
	void UPicoSpatialAudioSceneMaterialSettings::StaticRegisterNativesUPicoSpatialAudioSceneMaterialSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPicoSpatialAudioSceneMaterialSettings);
	UClass* Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_NoRegister()
	{
		return UPicoSpatialAudioSceneMaterialSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MaterialPreset_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialPreset_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MaterialPreset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbsorptionBand0_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AbsorptionBand0;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbsorptionBand1_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AbsorptionBand1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbsorptionBand2_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AbsorptionBand2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbsorptionBand3_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AbsorptionBand3;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scattering_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scattering;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transmission_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Transmission;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PicoSpatialAudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PicoSpatialAudioSceneMaterialSettings.h" },
		{ "ModuleRelativePath", "Public/PicoSpatialAudioSceneMaterialSettings.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::NewProp_MaterialPreset_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::NewProp_MaterialPreset_MetaData[] = {
		{ "Category", "Presets" },
		{ "Comment", "//\x09Material setups\n" },
		{ "ModuleRelativePath", "Public/PicoSpatialAudioSceneMaterialSettings.h" },
		{ "ToolTip", "Material setups" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::NewProp_MaterialPreset = { "MaterialPreset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPicoSpatialAudioSceneMaterialSettings, MaterialPreset), Z_Construct_UEnum_PicoSpatialAudio_EPxrAudioSpatializer_SceneMaterialPreset, METADATA_PARAMS(Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::NewProp_MaterialPreset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::NewProp_MaterialPreset_MetaData)) }; // 4008255086
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::NewProp_AbsorptionBand0_MetaData[] = {
		{ "Category", "Acoustic Properties | Absorption" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/PicoSpatialAudioSceneMaterialSettings.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::NewProp_AbsorptionBand0 = { "AbsorptionBand0", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPicoSpatialAudioSceneMaterialSettings, AbsorptionBand0), METADATA_PARAMS(Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::NewProp_AbsorptionBand0_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::NewProp_AbsorptionBand0_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::NewProp_AbsorptionBand1_MetaData[] = {
		{ "Category", "Acoustic Properties | Absorption" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/PicoSpatialAudioSceneMaterialSettings.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::NewProp_AbsorptionBand1 = { "AbsorptionBand1", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPicoSpatialAudioSceneMaterialSettings, AbsorptionBand1), METADATA_PARAMS(Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::NewProp_AbsorptionBand1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::NewProp_AbsorptionBand1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::NewProp_AbsorptionBand2_MetaData[] = {
		{ "Category", "Acoustic Properties | Absorption" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/PicoSpatialAudioSceneMaterialSettings.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::NewProp_AbsorptionBand2 = { "AbsorptionBand2", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPicoSpatialAudioSceneMaterialSettings, AbsorptionBand2), METADATA_PARAMS(Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::NewProp_AbsorptionBand2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::NewProp_AbsorptionBand2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::NewProp_AbsorptionBand3_MetaData[] = {
		{ "Category", "Acoustic Properties | Absorption" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/PicoSpatialAudioSceneMaterialSettings.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::NewProp_AbsorptionBand3 = { "AbsorptionBand3", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPicoSpatialAudioSceneMaterialSettings, AbsorptionBand3), METADATA_PARAMS(Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::NewProp_AbsorptionBand3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::NewProp_AbsorptionBand3_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::NewProp_Scattering_MetaData[] = {
		{ "Category", "Acoustic Properties" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/PicoSpatialAudioSceneMaterialSettings.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::NewProp_Scattering = { "Scattering", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPicoSpatialAudioSceneMaterialSettings, Scattering), METADATA_PARAMS(Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::NewProp_Scattering_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::NewProp_Scattering_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::NewProp_Transmission_MetaData[] = {
		{ "Category", "Acoustic Properties" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/PicoSpatialAudioSceneMaterialSettings.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::NewProp_Transmission = { "Transmission", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPicoSpatialAudioSceneMaterialSettings, Transmission), METADATA_PARAMS(Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::NewProp_Transmission_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::NewProp_Transmission_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::NewProp_MaterialPreset_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::NewProp_MaterialPreset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::NewProp_AbsorptionBand0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::NewProp_AbsorptionBand1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::NewProp_AbsorptionBand2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::NewProp_AbsorptionBand3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::NewProp_Scattering,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::NewProp_Transmission,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPicoSpatialAudioSceneMaterialSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::ClassParams = {
		&UPicoSpatialAudioSceneMaterialSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings()
	{
		if (!Z_Registration_Info_UClass_UPicoSpatialAudioSceneMaterialSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPicoSpatialAudioSceneMaterialSettings.OuterSingleton, Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPicoSpatialAudioSceneMaterialSettings.OuterSingleton;
	}
	template<> PICOSPATIALAUDIO_API UClass* StaticClass<UPicoSpatialAudioSceneMaterialSettings>()
	{
		return UPicoSpatialAudioSceneMaterialSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPicoSpatialAudioSceneMaterialSettings);
	UPicoSpatialAudioSceneMaterialSettings::~UPicoSpatialAudioSceneMaterialSettings() {}
	struct Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PicoSpatialAudio_Source_PicoSpatialAudio_Public_PicoSpatialAudioSceneMaterialSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PicoSpatialAudio_Source_PicoSpatialAudio_Public_PicoSpatialAudioSceneMaterialSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings, UPicoSpatialAudioSceneMaterialSettings::StaticClass, TEXT("UPicoSpatialAudioSceneMaterialSettings"), &Z_Registration_Info_UClass_UPicoSpatialAudioSceneMaterialSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPicoSpatialAudioSceneMaterialSettings), 90123370U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PicoSpatialAudio_Source_PicoSpatialAudio_Public_PicoSpatialAudioSceneMaterialSettings_h_4015264946(TEXT("/Script/PicoSpatialAudio"),
		Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PicoSpatialAudio_Source_PicoSpatialAudio_Public_PicoSpatialAudioSceneMaterialSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PicoSpatialAudio_Source_PicoSpatialAudio_Public_PicoSpatialAudioSceneMaterialSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
