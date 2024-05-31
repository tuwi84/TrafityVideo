// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PICOXRHMD/Public/PXR_HMDTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePXR_HMDTypes() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	PICOXRHMD_API UEnum* Z_Construct_UEnum_PICOXRHMD_EPICOXRAdaptiveResolutionPowerSetting();
	PICOXRHMD_API UEnum* Z_Construct_UEnum_PICOXRHMD_EPICOXRCoordinateType();
	PICOXRHMD_API UScriptStruct* Z_Construct_UScriptStruct_FPXRSplashDesc();
	UPackage* Z_Construct_UPackage__Script_PICOXRHMD();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PXRSplashDesc;
class UScriptStruct* FPXRSplashDesc::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PXRSplashDesc.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PXRSplashDesc.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPXRSplashDesc, Z_Construct_UPackage__Script_PICOXRHMD(), TEXT("PXRSplashDesc"));
	}
	return Z_Registration_Info_UScriptStruct_PXRSplashDesc.OuterSingleton;
}
template<> PICOXRHMD_API UScriptStruct* StaticStruct<FPXRSplashDesc>()
{
	return FPXRSplashDesc::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPXRSplashDesc_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplashTexturePath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SplashTexturePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplashTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SplashTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplashQuadSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SplashQuadSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplashTextureOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SplashTextureOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplashTextureScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SplashTextureScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNoAlpha_MetaData[];
#endif
		static void NewProp_bNoAlpha_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNoAlpha;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PXR_HMDTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPXRSplashDesc>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::NewProp_SplashTexturePath_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.Texture" },
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PXR_HMDTypes.h" },
		{ "ToolTip", "Splash texture to show" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::NewProp_SplashTexturePath = { "SplashTexturePath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPXRSplashDesc, SplashTexturePath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::NewProp_SplashTexturePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::NewProp_SplashTexturePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::NewProp_SplashTransform_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PXR_HMDTypes.h" },
		{ "ToolTip", "The center transform" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::NewProp_SplashTransform = { "SplashTransform", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPXRSplashDesc, SplashTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::NewProp_SplashTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::NewProp_SplashTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::NewProp_SplashQuadSize_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PXR_HMDTypes.h" },
		{ "ToolTip", "The splash layer quad size" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::NewProp_SplashQuadSize = { "SplashQuadSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPXRSplashDesc, SplashQuadSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::NewProp_SplashQuadSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::NewProp_SplashQuadSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::NewProp_SplashTextureOffset_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PXR_HMDTypes.h" },
		{ "ToolTip", "Splash texture offset relative to the upper left corner" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::NewProp_SplashTextureOffset = { "SplashTextureOffset", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPXRSplashDesc, SplashTextureOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::NewProp_SplashTextureOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::NewProp_SplashTextureOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::NewProp_SplashTextureScale_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PXR_HMDTypes.h" },
		{ "ToolTip", "Splash texture scale (default=1.0f)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::NewProp_SplashTextureScale = { "SplashTextureScale", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPXRSplashDesc, SplashTextureScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::NewProp_SplashTextureScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::NewProp_SplashTextureScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::NewProp_bNoAlpha_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PXR_HMDTypes.h" },
		{ "ToolTip", "Ignore the splash texture alpha channel" },
	};
#endif
	void Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::NewProp_bNoAlpha_SetBit(void* Obj)
	{
		((FPXRSplashDesc*)Obj)->bNoAlpha = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::NewProp_bNoAlpha = { "bNoAlpha", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPXRSplashDesc), &Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::NewProp_bNoAlpha_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::NewProp_bNoAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::NewProp_bNoAlpha_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::NewProp_SplashTexturePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::NewProp_SplashTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::NewProp_SplashQuadSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::NewProp_SplashTextureOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::NewProp_SplashTextureScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::NewProp_bNoAlpha,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRHMD,
		nullptr,
		&NewStructOps,
		"PXRSplashDesc",
		sizeof(FPXRSplashDesc),
		alignof(FPXRSplashDesc),
		Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPXRSplashDesc()
	{
		if (!Z_Registration_Info_UScriptStruct_PXRSplashDesc.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PXRSplashDesc.InnerSingleton, Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PXRSplashDesc.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPICOXRCoordinateType;
	static UEnum* EPICOXRCoordinateType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPICOXRCoordinateType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPICOXRCoordinateType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PICOXRHMD_EPICOXRCoordinateType, Z_Construct_UPackage__Script_PICOXRHMD(), TEXT("EPICOXRCoordinateType"));
		}
		return Z_Registration_Info_UEnum_EPICOXRCoordinateType.OuterSingleton;
	}
	template<> PICOXRHMD_API UEnum* StaticEnum<EPICOXRCoordinateType>()
	{
		return EPICOXRCoordinateType_StaticEnum();
	}
	struct Z_Construct_UEnum_PICOXRHMD_EPICOXRCoordinateType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PICOXRHMD_EPICOXRCoordinateType_Statics::Enumerators[] = {
		{ "EPICOXRCoordinateType::Local", (int64)EPICOXRCoordinateType::Local },
		{ "EPICOXRCoordinateType::Global_BoundarySystem", (int64)EPICOXRCoordinateType::Global_BoundarySystem },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PICOXRHMD_EPICOXRCoordinateType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Global_BoundarySystem.DisplayName", "BoundarySystem Coordinate" },
		{ "Global_BoundarySystem.Name", "EPICOXRCoordinateType::Global_BoundarySystem" },
		{ "Local.DisplayName", "Local Coordinate" },
		{ "Local.Name", "EPICOXRCoordinateType::Local" },
		{ "ModuleRelativePath", "Public/PXR_HMDTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PICOXRHMD_EPICOXRCoordinateType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PICOXRHMD,
		nullptr,
		"EPICOXRCoordinateType",
		"EPICOXRCoordinateType",
		Z_Construct_UEnum_PICOXRHMD_EPICOXRCoordinateType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PICOXRHMD_EPICOXRCoordinateType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PICOXRHMD_EPICOXRCoordinateType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PICOXRHMD_EPICOXRCoordinateType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PICOXRHMD_EPICOXRCoordinateType()
	{
		if (!Z_Registration_Info_UEnum_EPICOXRCoordinateType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPICOXRCoordinateType.InnerSingleton, Z_Construct_UEnum_PICOXRHMD_EPICOXRCoordinateType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPICOXRCoordinateType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPICOXRAdaptiveResolutionPowerSetting;
	static UEnum* EPICOXRAdaptiveResolutionPowerSetting_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPICOXRAdaptiveResolutionPowerSetting.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPICOXRAdaptiveResolutionPowerSetting.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PICOXRHMD_EPICOXRAdaptiveResolutionPowerSetting, Z_Construct_UPackage__Script_PICOXRHMD(), TEXT("EPICOXRAdaptiveResolutionPowerSetting"));
		}
		return Z_Registration_Info_UEnum_EPICOXRAdaptiveResolutionPowerSetting.OuterSingleton;
	}
	template<> PICOXRHMD_API UEnum* StaticEnum<EPICOXRAdaptiveResolutionPowerSetting>()
	{
		return EPICOXRAdaptiveResolutionPowerSetting_StaticEnum();
	}
	struct Z_Construct_UEnum_PICOXRHMD_EPICOXRAdaptiveResolutionPowerSetting_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PICOXRHMD_EPICOXRAdaptiveResolutionPowerSetting_Statics::Enumerators[] = {
		{ "EPICOXRAdaptiveResolutionPowerSetting::HighQuality", (int64)EPICOXRAdaptiveResolutionPowerSetting::HighQuality },
		{ "EPICOXRAdaptiveResolutionPowerSetting::Balanced", (int64)EPICOXRAdaptiveResolutionPowerSetting::Balanced },
		{ "EPICOXRAdaptiveResolutionPowerSetting::BatterySaving", (int64)EPICOXRAdaptiveResolutionPowerSetting::BatterySaving },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PICOXRHMD_EPICOXRAdaptiveResolutionPowerSetting_Statics::Enum_MetaDataParams[] = {
		{ "Balanced.Name", "EPICOXRAdaptiveResolutionPowerSetting::Balanced" },
		{ "Balanced.ToolTip", "Balance quality with power consumption" },
		{ "BatterySaving.Name", "EPICOXRAdaptiveResolutionPowerSetting::BatterySaving" },
		{ "BatterySaving.ToolTip", "Optimize for low power consumption" },
		{ "HighQuality.Name", "EPICOXRAdaptiveResolutionPowerSetting::HighQuality" },
		{ "HighQuality.ToolTip", "Optimize for high resolution" },
		{ "ModuleRelativePath", "Public/PXR_HMDTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PICOXRHMD_EPICOXRAdaptiveResolutionPowerSetting_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PICOXRHMD,
		nullptr,
		"EPICOXRAdaptiveResolutionPowerSetting",
		"EPICOXRAdaptiveResolutionPowerSetting",
		Z_Construct_UEnum_PICOXRHMD_EPICOXRAdaptiveResolutionPowerSetting_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PICOXRHMD_EPICOXRAdaptiveResolutionPowerSetting_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PICOXRHMD_EPICOXRAdaptiveResolutionPowerSetting_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PICOXRHMD_EPICOXRAdaptiveResolutionPowerSetting_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PICOXRHMD_EPICOXRAdaptiveResolutionPowerSetting()
	{
		if (!Z_Registration_Info_UEnum_EPICOXRAdaptiveResolutionPowerSetting.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPICOXRAdaptiveResolutionPowerSetting.InnerSingleton, Z_Construct_UEnum_PICOXRHMD_EPICOXRAdaptiveResolutionPowerSetting_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPICOXRAdaptiveResolutionPowerSetting.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRHMD_Public_PXR_HMDTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRHMD_Public_PXR_HMDTypes_h_Statics::EnumInfo[] = {
		{ EPICOXRCoordinateType_StaticEnum, TEXT("EPICOXRCoordinateType"), &Z_Registration_Info_UEnum_EPICOXRCoordinateType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3089733492U) },
		{ EPICOXRAdaptiveResolutionPowerSetting_StaticEnum, TEXT("EPICOXRAdaptiveResolutionPowerSetting"), &Z_Registration_Info_UEnum_EPICOXRAdaptiveResolutionPowerSetting, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3346958997U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRHMD_Public_PXR_HMDTypes_h_Statics::ScriptStructInfo[] = {
		{ FPXRSplashDesc::StaticStruct, Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::NewStructOps, TEXT("PXRSplashDesc"), &Z_Registration_Info_UScriptStruct_PXRSplashDesc, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPXRSplashDesc), 1647497233U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRHMD_Public_PXR_HMDTypes_h_3911010541(TEXT("/Script/PICOXRHMD"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRHMD_Public_PXR_HMDTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRHMD_Public_PXR_HMDTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRHMD_Public_PXR_HMDTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRHMD_Public_PXR_HMDTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
