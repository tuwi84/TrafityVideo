// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PICOXRMR/Public/PXR_MRTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePXR_MRTypes() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	PICOXRMR_API UEnum* Z_Construct_UEnum_PICOXRMR_EPICOAnchorComponentTypeFlag();
	PICOXRMR_API UEnum* Z_Construct_UEnum_PICOXRMR_EPICOAnchorSceneLabel();
	PICOXRMR_API UEnum* Z_Construct_UEnum_PICOXRMR_EPICOLoadFilterType();
	PICOXRMR_API UEnum* Z_Construct_UEnum_PICOXRMR_EPICOPersistLocation();
	PICOXRMR_API UEnum* Z_Construct_UEnum_PICOXRMR_EPICOResult();
	PICOXRMR_API UEnum* Z_Construct_UEnum_PICOXRMR_EPICOSpatialSceneCaptureStatus();
	PICOXRMR_API UEnum* Z_Construct_UEnum_PICOXRMR_EPICOSpatialSceneDataTypeFlags();
	PICOXRMR_API UEnum* Z_Construct_UEnum_PICOXRMR_EPICOSpatialTrackingState();
	PICOXRMR_API UEnum* Z_Construct_UEnum_PICOXRMR_EPICOSpatialTrackingStateMessage();
	PICOXRMR_API UScriptStruct* Z_Construct_UScriptStruct_FAnchorLoadResult();
	PICOXRMR_API UScriptStruct* Z_Construct_UScriptStruct_FPICOAnchor();
	PICOXRMR_API UScriptStruct* Z_Construct_UScriptStruct_FPICOAnchorLoadInfo();
	PICOXRMR_API UScriptStruct* Z_Construct_UScriptStruct_FPICOAnchorPlaneBoundaryInfo();
	PICOXRMR_API UScriptStruct* Z_Construct_UScriptStruct_FPICOAnchorPlanePolygonInfo();
	PICOXRMR_API UScriptStruct* Z_Construct_UScriptStruct_FPICOAnchorUUID();
	PICOXRMR_API UScriptStruct* Z_Construct_UScriptStruct_FPICOAnchorVolumeInfo();
	UPackage* Z_Construct_UPackage__Script_PICOXRMR();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPICOResult;
	static UEnum* EPICOResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPICOResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPICOResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PICOXRMR_EPICOResult, Z_Construct_UPackage__Script_PICOXRMR(), TEXT("EPICOResult"));
		}
		return Z_Registration_Info_UEnum_EPICOResult.OuterSingleton;
	}
	template<> PICOXRMR_API UEnum* StaticEnum<EPICOResult>()
	{
		return EPICOResult_StaticEnum();
	}
	struct Z_Construct_UEnum_PICOXRMR_EPICOResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PICOXRMR_EPICOResult_Statics::Enumerators[] = {
		{ "EPICOResult::PXR_Success", (int64)EPICOResult::PXR_Success },
		{ "EPICOResult::PXR_TimeoutExpired", (int64)EPICOResult::PXR_TimeoutExpired },
		{ "EPICOResult::PXR_Error_ValidationFailure", (int64)EPICOResult::PXR_Error_ValidationFailure },
		{ "EPICOResult::PXR_Error_RuntimeFailure", (int64)EPICOResult::PXR_Error_RuntimeFailure },
		{ "EPICOResult::PXR_Error_OutOfMemory", (int64)EPICOResult::PXR_Error_OutOfMemory },
		{ "EPICOResult::PXR_Error_APIVersionUnsupported", (int64)EPICOResult::PXR_Error_APIVersionUnsupported },
		{ "EPICOResult::PXR_Error_InitializationFailed", (int64)EPICOResult::PXR_Error_InitializationFailed },
		{ "EPICOResult::PXR_Error_FunctionUnsupported", (int64)EPICOResult::PXR_Error_FunctionUnsupported },
		{ "EPICOResult::PXR_Error_FeatureUnsupported", (int64)EPICOResult::PXR_Error_FeatureUnsupported },
		{ "EPICOResult::PXR_Error_LimitReached", (int64)EPICOResult::PXR_Error_LimitReached },
		{ "EPICOResult::PXR_Error_SizeInsufficient", (int64)EPICOResult::PXR_Error_SizeInsufficient },
		{ "EPICOResult::PXR_Error_HandleInvalid", (int64)EPICOResult::PXR_Error_HandleInvalid },
		{ "EPICOResult::PXR_Error_SpatialLocalizationRunning", (int64)EPICOResult::PXR_Error_SpatialLocalizationRunning },
		{ "EPICOResult::PXR_Error_SpatialLocalizationNotRunning", (int64)EPICOResult::PXR_Error_SpatialLocalizationNotRunning },
		{ "EPICOResult::PXR_Error_SpatialMapCreated", (int64)EPICOResult::PXR_Error_SpatialMapCreated },
		{ "EPICOResult::PXR_Error_SpatialMapNotCreated", (int64)EPICOResult::PXR_Error_SpatialMapNotCreated },
		{ "EPICOResult::PXR_Error_ComponentNotSupported", (int64)EPICOResult::PXR_Error_ComponentNotSupported },
		{ "EPICOResult::PXR_Error_ComponentConflict", (int64)EPICOResult::PXR_Error_ComponentConflict },
		{ "EPICOResult::PXR_Error_ComponentNotAdded", (int64)EPICOResult::PXR_Error_ComponentNotAdded },
		{ "EPICOResult::PXR_Error_ComponentAdded", (int64)EPICOResult::PXR_Error_ComponentAdded },
		{ "EPICOResult::PXR_Error_AnchorEntityNotFound", (int64)EPICOResult::PXR_Error_AnchorEntityNotFound },
		{ "EPICOResult::PXR_Error_Unknow", (int64)EPICOResult::PXR_Error_Unknow },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PICOXRMR_EPICOResult_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PXR_MRTypes.h" },
		{ "PXR_Error_AnchorEntityNotFound.Name", "EPICOResult::PXR_Error_AnchorEntityNotFound" },
		{ "PXR_Error_APIVersionUnsupported.Name", "EPICOResult::PXR_Error_APIVersionUnsupported" },
		{ "PXR_Error_ComponentAdded.Name", "EPICOResult::PXR_Error_ComponentAdded" },
		{ "PXR_Error_ComponentConflict.Name", "EPICOResult::PXR_Error_ComponentConflict" },
		{ "PXR_Error_ComponentNotAdded.Name", "EPICOResult::PXR_Error_ComponentNotAdded" },
		{ "PXR_Error_ComponentNotSupported.Name", "EPICOResult::PXR_Error_ComponentNotSupported" },
		{ "PXR_Error_FeatureUnsupported.Name", "EPICOResult::PXR_Error_FeatureUnsupported" },
		{ "PXR_Error_FunctionUnsupported.Name", "EPICOResult::PXR_Error_FunctionUnsupported" },
		{ "PXR_Error_HandleInvalid.Name", "EPICOResult::PXR_Error_HandleInvalid" },
		{ "PXR_Error_InitializationFailed.Name", "EPICOResult::PXR_Error_InitializationFailed" },
		{ "PXR_Error_LimitReached.Name", "EPICOResult::PXR_Error_LimitReached" },
		{ "PXR_Error_OutOfMemory.Name", "EPICOResult::PXR_Error_OutOfMemory" },
		{ "PXR_Error_RuntimeFailure.Name", "EPICOResult::PXR_Error_RuntimeFailure" },
		{ "PXR_Error_SizeInsufficient.Name", "EPICOResult::PXR_Error_SizeInsufficient" },
		{ "PXR_Error_SpatialLocalizationNotRunning.Name", "EPICOResult::PXR_Error_SpatialLocalizationNotRunning" },
		{ "PXR_Error_SpatialLocalizationRunning.Name", "EPICOResult::PXR_Error_SpatialLocalizationRunning" },
		{ "PXR_Error_SpatialMapCreated.Name", "EPICOResult::PXR_Error_SpatialMapCreated" },
		{ "PXR_Error_SpatialMapNotCreated.Name", "EPICOResult::PXR_Error_SpatialMapNotCreated" },
		{ "PXR_Error_Unknow.Name", "EPICOResult::PXR_Error_Unknow" },
		{ "PXR_Error_ValidationFailure.Name", "EPICOResult::PXR_Error_ValidationFailure" },
		{ "PXR_Success.Name", "EPICOResult::PXR_Success" },
		{ "PXR_TimeoutExpired.Name", "EPICOResult::PXR_TimeoutExpired" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PICOXRMR_EPICOResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PICOXRMR,
		nullptr,
		"EPICOResult",
		"EPICOResult",
		Z_Construct_UEnum_PICOXRMR_EPICOResult_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PICOXRMR_EPICOResult_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PICOXRMR_EPICOResult_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PICOXRMR_EPICOResult_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PICOXRMR_EPICOResult()
	{
		if (!Z_Registration_Info_UEnum_EPICOResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPICOResult.InnerSingleton, Z_Construct_UEnum_PICOXRMR_EPICOResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPICOResult.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPICOSpatialTrackingState;
	static UEnum* EPICOSpatialTrackingState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPICOSpatialTrackingState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPICOSpatialTrackingState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PICOXRMR_EPICOSpatialTrackingState, Z_Construct_UPackage__Script_PICOXRMR(), TEXT("EPICOSpatialTrackingState"));
		}
		return Z_Registration_Info_UEnum_EPICOSpatialTrackingState.OuterSingleton;
	}
	template<> PICOXRMR_API UEnum* StaticEnum<EPICOSpatialTrackingState>()
	{
		return EPICOSpatialTrackingState_StaticEnum();
	}
	struct Z_Construct_UEnum_PICOXRMR_EPICOSpatialTrackingState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PICOXRMR_EPICOSpatialTrackingState_Statics::Enumerators[] = {
		{ "EPICOSpatialTrackingState::SpatialTrackingState_Invalid", (int64)EPICOSpatialTrackingState::SpatialTrackingState_Invalid },
		{ "EPICOSpatialTrackingState::SpatialTrackingState_Valid", (int64)EPICOSpatialTrackingState::SpatialTrackingState_Valid },
		{ "EPICOSpatialTrackingState::SpatialTrackingState_Limited", (int64)EPICOSpatialTrackingState::SpatialTrackingState_Limited },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PICOXRMR_EPICOSpatialTrackingState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PXR_MRTypes.h" },
		{ "SpatialTrackingState_Invalid.Name", "EPICOSpatialTrackingState::SpatialTrackingState_Invalid" },
		{ "SpatialTrackingState_Limited.Name", "EPICOSpatialTrackingState::SpatialTrackingState_Limited" },
		{ "SpatialTrackingState_Valid.Name", "EPICOSpatialTrackingState::SpatialTrackingState_Valid" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PICOXRMR_EPICOSpatialTrackingState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PICOXRMR,
		nullptr,
		"EPICOSpatialTrackingState",
		"EPICOSpatialTrackingState",
		Z_Construct_UEnum_PICOXRMR_EPICOSpatialTrackingState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PICOXRMR_EPICOSpatialTrackingState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PICOXRMR_EPICOSpatialTrackingState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PICOXRMR_EPICOSpatialTrackingState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PICOXRMR_EPICOSpatialTrackingState()
	{
		if (!Z_Registration_Info_UEnum_EPICOSpatialTrackingState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPICOSpatialTrackingState.InnerSingleton, Z_Construct_UEnum_PICOXRMR_EPICOSpatialTrackingState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPICOSpatialTrackingState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPICOSpatialTrackingStateMessage;
	static UEnum* EPICOSpatialTrackingStateMessage_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPICOSpatialTrackingStateMessage.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPICOSpatialTrackingStateMessage.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PICOXRMR_EPICOSpatialTrackingStateMessage, Z_Construct_UPackage__Script_PICOXRMR(), TEXT("EPICOSpatialTrackingStateMessage"));
		}
		return Z_Registration_Info_UEnum_EPICOSpatialTrackingStateMessage.OuterSingleton;
	}
	template<> PICOXRMR_API UEnum* StaticEnum<EPICOSpatialTrackingStateMessage>()
	{
		return EPICOSpatialTrackingStateMessage_StaticEnum();
	}
	struct Z_Construct_UEnum_PICOXRMR_EPICOSpatialTrackingStateMessage_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PICOXRMR_EPICOSpatialTrackingStateMessage_Statics::Enumerators[] = {
		{ "EPICOSpatialTrackingStateMessage::SpatialTrackingStateMessage_Unknown", (int64)EPICOSpatialTrackingStateMessage::SpatialTrackingStateMessage_Unknown },
		{ "EPICOSpatialTrackingStateMessage::SpatialTrackingStateMessage_InternalError", (int64)EPICOSpatialTrackingStateMessage::SpatialTrackingStateMessage_InternalError },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PICOXRMR_EPICOSpatialTrackingStateMessage_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PXR_MRTypes.h" },
		{ "SpatialTrackingStateMessage_InternalError.Name", "EPICOSpatialTrackingStateMessage::SpatialTrackingStateMessage_InternalError" },
		{ "SpatialTrackingStateMessage_Unknown.Name", "EPICOSpatialTrackingStateMessage::SpatialTrackingStateMessage_Unknown" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PICOXRMR_EPICOSpatialTrackingStateMessage_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PICOXRMR,
		nullptr,
		"EPICOSpatialTrackingStateMessage",
		"EPICOSpatialTrackingStateMessage",
		Z_Construct_UEnum_PICOXRMR_EPICOSpatialTrackingStateMessage_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PICOXRMR_EPICOSpatialTrackingStateMessage_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PICOXRMR_EPICOSpatialTrackingStateMessage_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PICOXRMR_EPICOSpatialTrackingStateMessage_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PICOXRMR_EPICOSpatialTrackingStateMessage()
	{
		if (!Z_Registration_Info_UEnum_EPICOSpatialTrackingStateMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPICOSpatialTrackingStateMessage.InnerSingleton, Z_Construct_UEnum_PICOXRMR_EPICOSpatialTrackingStateMessage_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPICOSpatialTrackingStateMessage.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPICOAnchorComponentTypeFlag;
	static UEnum* EPICOAnchorComponentTypeFlag_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPICOAnchorComponentTypeFlag.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPICOAnchorComponentTypeFlag.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PICOXRMR_EPICOAnchorComponentTypeFlag, Z_Construct_UPackage__Script_PICOXRMR(), TEXT("EPICOAnchorComponentTypeFlag"));
		}
		return Z_Registration_Info_UEnum_EPICOAnchorComponentTypeFlag.OuterSingleton;
	}
	template<> PICOXRMR_API UEnum* StaticEnum<EPICOAnchorComponentTypeFlag>()
	{
		return EPICOAnchorComponentTypeFlag_StaticEnum();
	}
	struct Z_Construct_UEnum_PICOXRMR_EPICOAnchorComponentTypeFlag_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PICOXRMR_EPICOAnchorComponentTypeFlag_Statics::Enumerators[] = {
		{ "EPICOAnchorComponentTypeFlag::ComponentFlag_None", (int64)EPICOAnchorComponentTypeFlag::ComponentFlag_None },
		{ "EPICOAnchorComponentTypeFlag::ComponentFlag_Pose", (int64)EPICOAnchorComponentTypeFlag::ComponentFlag_Pose },
		{ "EPICOAnchorComponentTypeFlag::ComponentFlag_Persistence", (int64)EPICOAnchorComponentTypeFlag::ComponentFlag_Persistence },
		{ "EPICOAnchorComponentTypeFlag::ComponentFlag_SceneLabel", (int64)EPICOAnchorComponentTypeFlag::ComponentFlag_SceneLabel },
		{ "EPICOAnchorComponentTypeFlag::ComponentFlag_Plane", (int64)EPICOAnchorComponentTypeFlag::ComponentFlag_Plane },
		{ "EPICOAnchorComponentTypeFlag::ComponentFlag_Volume", (int64)EPICOAnchorComponentTypeFlag::ComponentFlag_Volume },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PICOXRMR_EPICOAnchorComponentTypeFlag_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ComponentFlag_None.Name", "EPICOAnchorComponentTypeFlag::ComponentFlag_None" },
		{ "ComponentFlag_Persistence.Name", "EPICOAnchorComponentTypeFlag::ComponentFlag_Persistence" },
		{ "ComponentFlag_Plane.Name", "EPICOAnchorComponentTypeFlag::ComponentFlag_Plane" },
		{ "ComponentFlag_Pose.Name", "EPICOAnchorComponentTypeFlag::ComponentFlag_Pose" },
		{ "ComponentFlag_SceneLabel.Name", "EPICOAnchorComponentTypeFlag::ComponentFlag_SceneLabel" },
		{ "ComponentFlag_Volume.Name", "EPICOAnchorComponentTypeFlag::ComponentFlag_Volume" },
		{ "ModuleRelativePath", "Public/PXR_MRTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PICOXRMR_EPICOAnchorComponentTypeFlag_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PICOXRMR,
		nullptr,
		"EPICOAnchorComponentTypeFlag",
		"EPICOAnchorComponentTypeFlag",
		Z_Construct_UEnum_PICOXRMR_EPICOAnchorComponentTypeFlag_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PICOXRMR_EPICOAnchorComponentTypeFlag_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PICOXRMR_EPICOAnchorComponentTypeFlag_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PICOXRMR_EPICOAnchorComponentTypeFlag_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PICOXRMR_EPICOAnchorComponentTypeFlag()
	{
		if (!Z_Registration_Info_UEnum_EPICOAnchorComponentTypeFlag.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPICOAnchorComponentTypeFlag.InnerSingleton, Z_Construct_UEnum_PICOXRMR_EPICOAnchorComponentTypeFlag_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPICOAnchorComponentTypeFlag.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPICOSpatialSceneDataTypeFlags;
	static UEnum* EPICOSpatialSceneDataTypeFlags_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPICOSpatialSceneDataTypeFlags.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPICOSpatialSceneDataTypeFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PICOXRMR_EPICOSpatialSceneDataTypeFlags, Z_Construct_UPackage__Script_PICOXRMR(), TEXT("EPICOSpatialSceneDataTypeFlags"));
		}
		return Z_Registration_Info_UEnum_EPICOSpatialSceneDataTypeFlags.OuterSingleton;
	}
	template<> PICOXRMR_API UEnum* StaticEnum<EPICOSpatialSceneDataTypeFlags>()
	{
		return EPICOSpatialSceneDataTypeFlags_StaticEnum();
	}
	struct Z_Construct_UEnum_PICOXRMR_EPICOSpatialSceneDataTypeFlags_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PICOXRMR_EPICOSpatialSceneDataTypeFlags_Statics::Enumerators[] = {
		{ "EPICOSpatialSceneDataTypeFlags::SpatialSceneDataTypeFlag_None", (int64)EPICOSpatialSceneDataTypeFlags::SpatialSceneDataTypeFlag_None },
		{ "EPICOSpatialSceneDataTypeFlags::SpatialSceneDataTypeFlag_Unknown", (int64)EPICOSpatialSceneDataTypeFlags::SpatialSceneDataTypeFlag_Unknown },
		{ "EPICOSpatialSceneDataTypeFlags::SpatialSceneDataTypeFlag_Floor", (int64)EPICOSpatialSceneDataTypeFlags::SpatialSceneDataTypeFlag_Floor },
		{ "EPICOSpatialSceneDataTypeFlags::SpatialSceneDataTypeFlag_Ceiling", (int64)EPICOSpatialSceneDataTypeFlags::SpatialSceneDataTypeFlag_Ceiling },
		{ "EPICOSpatialSceneDataTypeFlags::SpatialSceneDataTypeFlag_Wall", (int64)EPICOSpatialSceneDataTypeFlags::SpatialSceneDataTypeFlag_Wall },
		{ "EPICOSpatialSceneDataTypeFlags::SpatialSceneDataTypeFlag_Door", (int64)EPICOSpatialSceneDataTypeFlags::SpatialSceneDataTypeFlag_Door },
		{ "EPICOSpatialSceneDataTypeFlags::SpatialSceneDataTypeFlag_Window", (int64)EPICOSpatialSceneDataTypeFlags::SpatialSceneDataTypeFlag_Window },
		{ "EPICOSpatialSceneDataTypeFlags::SpatialSceneDataTypeFlag_Opening", (int64)EPICOSpatialSceneDataTypeFlags::SpatialSceneDataTypeFlag_Opening },
		{ "EPICOSpatialSceneDataTypeFlags::SpatialSceneDataTypeFlag_Object", (int64)EPICOSpatialSceneDataTypeFlags::SpatialSceneDataTypeFlag_Object },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PICOXRMR_EPICOSpatialSceneDataTypeFlags_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PXR_MRTypes.h" },
		{ "SpatialSceneDataTypeFlag_Ceiling.Name", "EPICOSpatialSceneDataTypeFlags::SpatialSceneDataTypeFlag_Ceiling" },
		{ "SpatialSceneDataTypeFlag_Door.Name", "EPICOSpatialSceneDataTypeFlags::SpatialSceneDataTypeFlag_Door" },
		{ "SpatialSceneDataTypeFlag_Floor.Name", "EPICOSpatialSceneDataTypeFlags::SpatialSceneDataTypeFlag_Floor" },
		{ "SpatialSceneDataTypeFlag_None.Name", "EPICOSpatialSceneDataTypeFlags::SpatialSceneDataTypeFlag_None" },
		{ "SpatialSceneDataTypeFlag_Object.Name", "EPICOSpatialSceneDataTypeFlags::SpatialSceneDataTypeFlag_Object" },
		{ "SpatialSceneDataTypeFlag_Opening.Name", "EPICOSpatialSceneDataTypeFlags::SpatialSceneDataTypeFlag_Opening" },
		{ "SpatialSceneDataTypeFlag_Unknown.Name", "EPICOSpatialSceneDataTypeFlags::SpatialSceneDataTypeFlag_Unknown" },
		{ "SpatialSceneDataTypeFlag_Wall.Name", "EPICOSpatialSceneDataTypeFlags::SpatialSceneDataTypeFlag_Wall" },
		{ "SpatialSceneDataTypeFlag_Window.Name", "EPICOSpatialSceneDataTypeFlags::SpatialSceneDataTypeFlag_Window" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PICOXRMR_EPICOSpatialSceneDataTypeFlags_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PICOXRMR,
		nullptr,
		"EPICOSpatialSceneDataTypeFlags",
		"EPICOSpatialSceneDataTypeFlags",
		Z_Construct_UEnum_PICOXRMR_EPICOSpatialSceneDataTypeFlags_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PICOXRMR_EPICOSpatialSceneDataTypeFlags_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PICOXRMR_EPICOSpatialSceneDataTypeFlags_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PICOXRMR_EPICOSpatialSceneDataTypeFlags_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PICOXRMR_EPICOSpatialSceneDataTypeFlags()
	{
		if (!Z_Registration_Info_UEnum_EPICOSpatialSceneDataTypeFlags.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPICOSpatialSceneDataTypeFlags.InnerSingleton, Z_Construct_UEnum_PICOXRMR_EPICOSpatialSceneDataTypeFlags_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPICOSpatialSceneDataTypeFlags.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPICOAnchorSceneLabel;
	static UEnum* EPICOAnchorSceneLabel_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPICOAnchorSceneLabel.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPICOAnchorSceneLabel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PICOXRMR_EPICOAnchorSceneLabel, Z_Construct_UPackage__Script_PICOXRMR(), TEXT("EPICOAnchorSceneLabel"));
		}
		return Z_Registration_Info_UEnum_EPICOAnchorSceneLabel.OuterSingleton;
	}
	template<> PICOXRMR_API UEnum* StaticEnum<EPICOAnchorSceneLabel>()
	{
		return EPICOAnchorSceneLabel_StaticEnum();
	}
	struct Z_Construct_UEnum_PICOXRMR_EPICOAnchorSceneLabel_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PICOXRMR_EPICOAnchorSceneLabel_Statics::Enumerators[] = {
		{ "EPICOAnchorSceneLabel::SceneLabel_Unknown", (int64)EPICOAnchorSceneLabel::SceneLabel_Unknown },
		{ "EPICOAnchorSceneLabel::SceneLabel_Floor", (int64)EPICOAnchorSceneLabel::SceneLabel_Floor },
		{ "EPICOAnchorSceneLabel::SceneLabel_Ceiling", (int64)EPICOAnchorSceneLabel::SceneLabel_Ceiling },
		{ "EPICOAnchorSceneLabel::SceneLabel_Wall", (int64)EPICOAnchorSceneLabel::SceneLabel_Wall },
		{ "EPICOAnchorSceneLabel::SceneLabel_Door", (int64)EPICOAnchorSceneLabel::SceneLabel_Door },
		{ "EPICOAnchorSceneLabel::SceneLabel_Window", (int64)EPICOAnchorSceneLabel::SceneLabel_Window },
		{ "EPICOAnchorSceneLabel::SceneLabel_Opening", (int64)EPICOAnchorSceneLabel::SceneLabel_Opening },
		{ "EPICOAnchorSceneLabel::SceneLabel_Table", (int64)EPICOAnchorSceneLabel::SceneLabel_Table },
		{ "EPICOAnchorSceneLabel::SceneLabel_Sofa", (int64)EPICOAnchorSceneLabel::SceneLabel_Sofa },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PICOXRMR_EPICOAnchorSceneLabel_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PXR_MRTypes.h" },
		{ "SceneLabel_Ceiling.Name", "EPICOAnchorSceneLabel::SceneLabel_Ceiling" },
		{ "SceneLabel_Door.Name", "EPICOAnchorSceneLabel::SceneLabel_Door" },
		{ "SceneLabel_Floor.Name", "EPICOAnchorSceneLabel::SceneLabel_Floor" },
		{ "SceneLabel_Opening.Name", "EPICOAnchorSceneLabel::SceneLabel_Opening" },
		{ "SceneLabel_Sofa.Name", "EPICOAnchorSceneLabel::SceneLabel_Sofa" },
		{ "SceneLabel_Table.Name", "EPICOAnchorSceneLabel::SceneLabel_Table" },
		{ "SceneLabel_Unknown.Name", "EPICOAnchorSceneLabel::SceneLabel_Unknown" },
		{ "SceneLabel_Wall.Name", "EPICOAnchorSceneLabel::SceneLabel_Wall" },
		{ "SceneLabel_Window.Name", "EPICOAnchorSceneLabel::SceneLabel_Window" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PICOXRMR_EPICOAnchorSceneLabel_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PICOXRMR,
		nullptr,
		"EPICOAnchorSceneLabel",
		"EPICOAnchorSceneLabel",
		Z_Construct_UEnum_PICOXRMR_EPICOAnchorSceneLabel_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PICOXRMR_EPICOAnchorSceneLabel_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PICOXRMR_EPICOAnchorSceneLabel_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PICOXRMR_EPICOAnchorSceneLabel_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PICOXRMR_EPICOAnchorSceneLabel()
	{
		if (!Z_Registration_Info_UEnum_EPICOAnchorSceneLabel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPICOAnchorSceneLabel.InnerSingleton, Z_Construct_UEnum_PICOXRMR_EPICOAnchorSceneLabel_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPICOAnchorSceneLabel.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPICOPersistLocation;
	static UEnum* EPICOPersistLocation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPICOPersistLocation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPICOPersistLocation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PICOXRMR_EPICOPersistLocation, Z_Construct_UPackage__Script_PICOXRMR(), TEXT("EPICOPersistLocation"));
		}
		return Z_Registration_Info_UEnum_EPICOPersistLocation.OuterSingleton;
	}
	template<> PICOXRMR_API UEnum* StaticEnum<EPICOPersistLocation>()
	{
		return EPICOPersistLocation_StaticEnum();
	}
	struct Z_Construct_UEnum_PICOXRMR_EPICOPersistLocation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PICOXRMR_EPICOPersistLocation_Statics::Enumerators[] = {
		{ "EPICOPersistLocation::PersistLocation_None", (int64)EPICOPersistLocation::PersistLocation_None },
		{ "EPICOPersistLocation::PersistLocation_Local", (int64)EPICOPersistLocation::PersistLocation_Local },
		{ "EPICOPersistLocation::PersistLocation_Remote", (int64)EPICOPersistLocation::PersistLocation_Remote },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PICOXRMR_EPICOPersistLocation_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PXR_MRTypes.h" },
		{ "PersistLocation_Local.Name", "EPICOPersistLocation::PersistLocation_Local" },
		{ "PersistLocation_None.Hidden", "" },
		{ "PersistLocation_None.Name", "EPICOPersistLocation::PersistLocation_None" },
		{ "PersistLocation_Remote.Name", "EPICOPersistLocation::PersistLocation_Remote" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PICOXRMR_EPICOPersistLocation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PICOXRMR,
		nullptr,
		"EPICOPersistLocation",
		"EPICOPersistLocation",
		Z_Construct_UEnum_PICOXRMR_EPICOPersistLocation_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PICOXRMR_EPICOPersistLocation_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PICOXRMR_EPICOPersistLocation_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PICOXRMR_EPICOPersistLocation_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PICOXRMR_EPICOPersistLocation()
	{
		if (!Z_Registration_Info_UEnum_EPICOPersistLocation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPICOPersistLocation.InnerSingleton, Z_Construct_UEnum_PICOXRMR_EPICOPersistLocation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPICOPersistLocation.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPICOLoadFilterType;
	static UEnum* EPICOLoadFilterType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPICOLoadFilterType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPICOLoadFilterType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PICOXRMR_EPICOLoadFilterType, Z_Construct_UPackage__Script_PICOXRMR(), TEXT("EPICOLoadFilterType"));
		}
		return Z_Registration_Info_UEnum_EPICOLoadFilterType.OuterSingleton;
	}
	template<> PICOXRMR_API UEnum* StaticEnum<EPICOLoadFilterType>()
	{
		return EPICOLoadFilterType_StaticEnum();
	}
	struct Z_Construct_UEnum_PICOXRMR_EPICOLoadFilterType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PICOXRMR_EPICOLoadFilterType_Statics::Enumerators[] = {
		{ "EPICOLoadFilterType::LoadFilterType_None", (int64)EPICOLoadFilterType::LoadFilterType_None },
		{ "EPICOLoadFilterType::LoadFilterType_UUID", (int64)EPICOLoadFilterType::LoadFilterType_UUID },
		{ "EPICOLoadFilterType::LoadFilterType_SpatialSceneData", (int64)EPICOLoadFilterType::LoadFilterType_SpatialSceneData },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PICOXRMR_EPICOLoadFilterType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "LoadFilterType_None.Name", "EPICOLoadFilterType::LoadFilterType_None" },
		{ "LoadFilterType_SpatialSceneData.Name", "EPICOLoadFilterType::LoadFilterType_SpatialSceneData" },
		{ "LoadFilterType_UUID.Name", "EPICOLoadFilterType::LoadFilterType_UUID" },
		{ "ModuleRelativePath", "Public/PXR_MRTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PICOXRMR_EPICOLoadFilterType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PICOXRMR,
		nullptr,
		"EPICOLoadFilterType",
		"EPICOLoadFilterType",
		Z_Construct_UEnum_PICOXRMR_EPICOLoadFilterType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PICOXRMR_EPICOLoadFilterType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PICOXRMR_EPICOLoadFilterType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PICOXRMR_EPICOLoadFilterType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PICOXRMR_EPICOLoadFilterType()
	{
		if (!Z_Registration_Info_UEnum_EPICOLoadFilterType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPICOLoadFilterType.InnerSingleton, Z_Construct_UEnum_PICOXRMR_EPICOLoadFilterType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPICOLoadFilterType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPICOSpatialSceneCaptureStatus;
	static UEnum* EPICOSpatialSceneCaptureStatus_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPICOSpatialSceneCaptureStatus.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPICOSpatialSceneCaptureStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PICOXRMR_EPICOSpatialSceneCaptureStatus, Z_Construct_UPackage__Script_PICOXRMR(), TEXT("EPICOSpatialSceneCaptureStatus"));
		}
		return Z_Registration_Info_UEnum_EPICOSpatialSceneCaptureStatus.OuterSingleton;
	}
	template<> PICOXRMR_API UEnum* StaticEnum<EPICOSpatialSceneCaptureStatus>()
	{
		return EPICOSpatialSceneCaptureStatus_StaticEnum();
	}
	struct Z_Construct_UEnum_PICOXRMR_EPICOSpatialSceneCaptureStatus_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PICOXRMR_EPICOSpatialSceneCaptureStatus_Statics::Enumerators[] = {
		{ "EPICOSpatialSceneCaptureStatus::SpatialSceneCaptureStatus_NotDefined", (int64)EPICOSpatialSceneCaptureStatus::SpatialSceneCaptureStatus_NotDefined },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PICOXRMR_EPICOSpatialSceneCaptureStatus_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PXR_MRTypes.h" },
		{ "SpatialSceneCaptureStatus_NotDefined.Name", "EPICOSpatialSceneCaptureStatus::SpatialSceneCaptureStatus_NotDefined" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PICOXRMR_EPICOSpatialSceneCaptureStatus_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PICOXRMR,
		nullptr,
		"EPICOSpatialSceneCaptureStatus",
		"EPICOSpatialSceneCaptureStatus",
		Z_Construct_UEnum_PICOXRMR_EPICOSpatialSceneCaptureStatus_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PICOXRMR_EPICOSpatialSceneCaptureStatus_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PICOXRMR_EPICOSpatialSceneCaptureStatus_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PICOXRMR_EPICOSpatialSceneCaptureStatus_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PICOXRMR_EPICOSpatialSceneCaptureStatus()
	{
		if (!Z_Registration_Info_UEnum_EPICOSpatialSceneCaptureStatus.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPICOSpatialSceneCaptureStatus.InnerSingleton, Z_Construct_UEnum_PICOXRMR_EPICOSpatialSceneCaptureStatus_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPICOSpatialSceneCaptureStatus.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PICOAnchor;
class UScriptStruct* FPICOAnchor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PICOAnchor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PICOAnchor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPICOAnchor, Z_Construct_UPackage__Script_PICOXRMR(), TEXT("PICOAnchor"));
	}
	return Z_Registration_Info_UScriptStruct_PICOAnchor.OuterSingleton;
}
template<> PICOXRMR_API UScriptStruct* StaticStruct<FPICOAnchor>()
{
	return FPICOAnchor::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPICOAnchor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPICOAnchor_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PXR_MRTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPICOAnchor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPICOAnchor>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPICOAnchor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRMR,
		nullptr,
		&NewStructOps,
		"PICOAnchor",
		sizeof(FPICOAnchor),
		alignof(FPICOAnchor),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPICOAnchor_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPICOAnchor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPICOAnchor()
	{
		if (!Z_Registration_Info_UScriptStruct_PICOAnchor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PICOAnchor.InnerSingleton, Z_Construct_UScriptStruct_FPICOAnchor_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PICOAnchor.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PICOAnchorUUID;
class UScriptStruct* FPICOAnchorUUID::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PICOAnchorUUID.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PICOAnchorUUID.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPICOAnchorUUID, Z_Construct_UPackage__Script_PICOXRMR(), TEXT("PICOAnchorUUID"));
	}
	return Z_Registration_Info_UScriptStruct_PICOAnchorUUID.OuterSingleton;
}
template<> PICOXRMR_API UScriptStruct* StaticStruct<FPICOAnchorUUID>()
{
	return FPICOAnchorUUID::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPICOAnchorUUID_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPICOAnchorUUID_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PXR_MRTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPICOAnchorUUID_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPICOAnchorUUID>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPICOAnchorUUID_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRMR,
		nullptr,
		&NewStructOps,
		"PICOAnchorUUID",
		sizeof(FPICOAnchorUUID),
		alignof(FPICOAnchorUUID),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPICOAnchorUUID_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPICOAnchorUUID_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPICOAnchorUUID()
	{
		if (!Z_Registration_Info_UScriptStruct_PICOAnchorUUID.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PICOAnchorUUID.InnerSingleton, Z_Construct_UScriptStruct_FPICOAnchorUUID_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PICOAnchorUUID.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PICOAnchorPlaneBoundaryInfo;
class UScriptStruct* FPICOAnchorPlaneBoundaryInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PICOAnchorPlaneBoundaryInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PICOAnchorPlaneBoundaryInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPICOAnchorPlaneBoundaryInfo, Z_Construct_UPackage__Script_PICOXRMR(), TEXT("PICOAnchorPlaneBoundaryInfo"));
	}
	return Z_Registration_Info_UScriptStruct_PICOAnchorPlaneBoundaryInfo.OuterSingleton;
}
template<> PICOXRMR_API UScriptStruct* StaticStruct<FPICOAnchorPlaneBoundaryInfo>()
{
	return FPICOAnchorPlaneBoundaryInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPICOAnchorPlaneBoundaryInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Extent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Extent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPICOAnchorPlaneBoundaryInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PXR_MRTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPICOAnchorPlaneBoundaryInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPICOAnchorPlaneBoundaryInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPICOAnchorPlaneBoundaryInfo_Statics::NewProp_Center_MetaData[] = {
		{ "Category", "PXR|MR" },
		{ "ModuleRelativePath", "Public/PXR_MRTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPICOAnchorPlaneBoundaryInfo_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPICOAnchorPlaneBoundaryInfo, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPICOAnchorPlaneBoundaryInfo_Statics::NewProp_Center_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPICOAnchorPlaneBoundaryInfo_Statics::NewProp_Center_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPICOAnchorPlaneBoundaryInfo_Statics::NewProp_Extent_MetaData[] = {
		{ "Category", "PXR|MR" },
		{ "ModuleRelativePath", "Public/PXR_MRTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPICOAnchorPlaneBoundaryInfo_Statics::NewProp_Extent = { "Extent", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPICOAnchorPlaneBoundaryInfo, Extent), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FPICOAnchorPlaneBoundaryInfo_Statics::NewProp_Extent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPICOAnchorPlaneBoundaryInfo_Statics::NewProp_Extent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPICOAnchorPlaneBoundaryInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPICOAnchorPlaneBoundaryInfo_Statics::NewProp_Center,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPICOAnchorPlaneBoundaryInfo_Statics::NewProp_Extent,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPICOAnchorPlaneBoundaryInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRMR,
		nullptr,
		&NewStructOps,
		"PICOAnchorPlaneBoundaryInfo",
		sizeof(FPICOAnchorPlaneBoundaryInfo),
		alignof(FPICOAnchorPlaneBoundaryInfo),
		Z_Construct_UScriptStruct_FPICOAnchorPlaneBoundaryInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPICOAnchorPlaneBoundaryInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPICOAnchorPlaneBoundaryInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPICOAnchorPlaneBoundaryInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPICOAnchorPlaneBoundaryInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_PICOAnchorPlaneBoundaryInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PICOAnchorPlaneBoundaryInfo.InnerSingleton, Z_Construct_UScriptStruct_FPICOAnchorPlaneBoundaryInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PICOAnchorPlaneBoundaryInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PICOAnchorPlanePolygonInfo;
class UScriptStruct* FPICOAnchorPlanePolygonInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PICOAnchorPlanePolygonInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PICOAnchorPlanePolygonInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPICOAnchorPlanePolygonInfo, Z_Construct_UPackage__Script_PICOXRMR(), TEXT("PICOAnchorPlanePolygonInfo"));
	}
	return Z_Registration_Info_UScriptStruct_PICOAnchorPlanePolygonInfo.OuterSingleton;
}
template<> PICOXRMR_API UScriptStruct* StaticStruct<FPICOAnchorPlanePolygonInfo>()
{
	return FPICOAnchorPlanePolygonInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPICOAnchorPlanePolygonInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VerticesNum_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_VerticesNum;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Vertices;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPICOAnchorPlanePolygonInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PXR_MRTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPICOAnchorPlanePolygonInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPICOAnchorPlanePolygonInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPICOAnchorPlanePolygonInfo_Statics::NewProp_VerticesNum_MetaData[] = {
		{ "Category", "PXR|MR" },
		{ "ModuleRelativePath", "Public/PXR_MRTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPICOAnchorPlanePolygonInfo_Statics::NewProp_VerticesNum = { "VerticesNum", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPICOAnchorPlanePolygonInfo, VerticesNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FPICOAnchorPlanePolygonInfo_Statics::NewProp_VerticesNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPICOAnchorPlanePolygonInfo_Statics::NewProp_VerticesNum_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPICOAnchorPlanePolygonInfo_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPICOAnchorPlanePolygonInfo_Statics::NewProp_Vertices_MetaData[] = {
		{ "Category", "PXR|MR" },
		{ "ModuleRelativePath", "Public/PXR_MRTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPICOAnchorPlanePolygonInfo_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPICOAnchorPlanePolygonInfo, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPICOAnchorPlanePolygonInfo_Statics::NewProp_Vertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPICOAnchorPlanePolygonInfo_Statics::NewProp_Vertices_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPICOAnchorPlanePolygonInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPICOAnchorPlanePolygonInfo_Statics::NewProp_VerticesNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPICOAnchorPlanePolygonInfo_Statics::NewProp_Vertices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPICOAnchorPlanePolygonInfo_Statics::NewProp_Vertices,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPICOAnchorPlanePolygonInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRMR,
		nullptr,
		&NewStructOps,
		"PICOAnchorPlanePolygonInfo",
		sizeof(FPICOAnchorPlanePolygonInfo),
		alignof(FPICOAnchorPlanePolygonInfo),
		Z_Construct_UScriptStruct_FPICOAnchorPlanePolygonInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPICOAnchorPlanePolygonInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPICOAnchorPlanePolygonInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPICOAnchorPlanePolygonInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPICOAnchorPlanePolygonInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_PICOAnchorPlanePolygonInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PICOAnchorPlanePolygonInfo.InnerSingleton, Z_Construct_UScriptStruct_FPICOAnchorPlanePolygonInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PICOAnchorPlanePolygonInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PICOAnchorVolumeInfo;
class UScriptStruct* FPICOAnchorVolumeInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PICOAnchorVolumeInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PICOAnchorVolumeInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPICOAnchorVolumeInfo, Z_Construct_UPackage__Script_PICOXRMR(), TEXT("PICOAnchorVolumeInfo"));
	}
	return Z_Registration_Info_UScriptStruct_PICOAnchorVolumeInfo.OuterSingleton;
}
template<> PICOXRMR_API UScriptStruct* StaticStruct<FPICOAnchorVolumeInfo>()
{
	return FPICOAnchorVolumeInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPICOAnchorVolumeInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Extent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Extent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPICOAnchorVolumeInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PXR_MRTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPICOAnchorVolumeInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPICOAnchorVolumeInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPICOAnchorVolumeInfo_Statics::NewProp_Center_MetaData[] = {
		{ "Category", "PXR|MR" },
		{ "ModuleRelativePath", "Public/PXR_MRTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPICOAnchorVolumeInfo_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPICOAnchorVolumeInfo, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPICOAnchorVolumeInfo_Statics::NewProp_Center_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPICOAnchorVolumeInfo_Statics::NewProp_Center_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPICOAnchorVolumeInfo_Statics::NewProp_Extent_MetaData[] = {
		{ "Category", "PXR|MR" },
		{ "ModuleRelativePath", "Public/PXR_MRTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPICOAnchorVolumeInfo_Statics::NewProp_Extent = { "Extent", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPICOAnchorVolumeInfo, Extent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPICOAnchorVolumeInfo_Statics::NewProp_Extent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPICOAnchorVolumeInfo_Statics::NewProp_Extent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPICOAnchorVolumeInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPICOAnchorVolumeInfo_Statics::NewProp_Center,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPICOAnchorVolumeInfo_Statics::NewProp_Extent,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPICOAnchorVolumeInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRMR,
		nullptr,
		&NewStructOps,
		"PICOAnchorVolumeInfo",
		sizeof(FPICOAnchorVolumeInfo),
		alignof(FPICOAnchorVolumeInfo),
		Z_Construct_UScriptStruct_FPICOAnchorVolumeInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPICOAnchorVolumeInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPICOAnchorVolumeInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPICOAnchorVolumeInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPICOAnchorVolumeInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_PICOAnchorVolumeInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PICOAnchorVolumeInfo.InnerSingleton, Z_Construct_UScriptStruct_FPICOAnchorVolumeInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PICOAnchorVolumeInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PICOAnchorLoadInfo;
class UScriptStruct* FPICOAnchorLoadInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PICOAnchorLoadInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PICOAnchorLoadInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPICOAnchorLoadInfo, Z_Construct_UPackage__Script_PICOXRMR(), TEXT("PICOAnchorLoadInfo"));
	}
	return Z_Registration_Info_UScriptStruct_PICOAnchorLoadInfo.OuterSingleton;
}
template<> PICOXRMR_API UScriptStruct* StaticStruct<FPICOAnchorLoadInfo>()
{
	return FPICOAnchorLoadInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadMaxCount_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_LoadMaxCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Timeout_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PersistLocation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PersistLocation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PersistLocation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_IncludeFilterType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IncludeFilterType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_IncludeFilterType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_IncludeUUIDFilter_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IncludeUUIDFilter_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IncludeUUIDFilter;
		static const UECodeGen_Private::FBytePropertyParams NewProp_IncludeSpatialSceneDataTypeFilter_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_IncludeSpatialSceneDataTypeFilter_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IncludeSpatialSceneDataTypeFilter_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IncludeSpatialSceneDataTypeFilter;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ExcludeFilterType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExcludeFilterType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ExcludeFilterType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExcludeUUIDFilter_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExcludeUUIDFilter_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExcludeUUIDFilter;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ExcludeSpatialSceneDataTypeFilter_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ExcludeSpatialSceneDataTypeFilter_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExcludeSpatialSceneDataTypeFilter_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExcludeSpatialSceneDataTypeFilter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PXR_MRTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPICOAnchorLoadInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_LoadMaxCount_MetaData[] = {
		{ "Category", "PXR|MR" },
		{ "ModuleRelativePath", "Public/PXR_MRTypes.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_LoadMaxCount = { "LoadMaxCount", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPICOAnchorLoadInfo, LoadMaxCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_LoadMaxCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_LoadMaxCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_Timeout_MetaData[] = {
		{ "Category", "PXR|MR" },
		{ "ModuleRelativePath", "Public/PXR_MRTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPICOAnchorLoadInfo, Timeout), METADATA_PARAMS(Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_Timeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_Timeout_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_PersistLocation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_PersistLocation_MetaData[] = {
		{ "Category", "PXR|MR" },
		{ "ModuleRelativePath", "Public/PXR_MRTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_PersistLocation = { "PersistLocation", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPICOAnchorLoadInfo, PersistLocation), Z_Construct_UEnum_PICOXRMR_EPICOPersistLocation, METADATA_PARAMS(Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_PersistLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_PersistLocation_MetaData)) }; // 438259623
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_IncludeFilterType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_IncludeFilterType_MetaData[] = {
		{ "Category", "PXR|MR" },
		{ "ModuleRelativePath", "Public/PXR_MRTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_IncludeFilterType = { "IncludeFilterType", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPICOAnchorLoadInfo, IncludeFilterType), Z_Construct_UEnum_PICOXRMR_EPICOLoadFilterType, METADATA_PARAMS(Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_IncludeFilterType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_IncludeFilterType_MetaData)) }; // 1485077985
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_IncludeUUIDFilter_Inner = { "IncludeUUIDFilter", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPICOAnchorUUID, METADATA_PARAMS(nullptr, 0) }; // 1646233693
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_IncludeUUIDFilter_MetaData[] = {
		{ "Category", "PXR|MR" },
		{ "ModuleRelativePath", "Public/PXR_MRTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_IncludeUUIDFilter = { "IncludeUUIDFilter", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPICOAnchorLoadInfo, IncludeUUIDFilter), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_IncludeUUIDFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_IncludeUUIDFilter_MetaData)) }; // 1646233693
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_IncludeSpatialSceneDataTypeFilter_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_IncludeSpatialSceneDataTypeFilter_Inner = { "IncludeSpatialSceneDataTypeFilter", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_PICOXRMR_EPICOSpatialSceneDataTypeFlags, METADATA_PARAMS(nullptr, 0) }; // 3259630888
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_IncludeSpatialSceneDataTypeFilter_MetaData[] = {
		{ "Category", "PXR|MR" },
		{ "ModuleRelativePath", "Public/PXR_MRTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_IncludeSpatialSceneDataTypeFilter = { "IncludeSpatialSceneDataTypeFilter", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPICOAnchorLoadInfo, IncludeSpatialSceneDataTypeFilter), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_IncludeSpatialSceneDataTypeFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_IncludeSpatialSceneDataTypeFilter_MetaData)) }; // 3259630888
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_ExcludeFilterType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_ExcludeFilterType_MetaData[] = {
		{ "Category", "PXR|MR" },
		{ "ModuleRelativePath", "Public/PXR_MRTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_ExcludeFilterType = { "ExcludeFilterType", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPICOAnchorLoadInfo, ExcludeFilterType), Z_Construct_UEnum_PICOXRMR_EPICOLoadFilterType, METADATA_PARAMS(Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_ExcludeFilterType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_ExcludeFilterType_MetaData)) }; // 1485077985
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_ExcludeUUIDFilter_Inner = { "ExcludeUUIDFilter", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPICOAnchorUUID, METADATA_PARAMS(nullptr, 0) }; // 1646233693
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_ExcludeUUIDFilter_MetaData[] = {
		{ "Category", "PXR|MR" },
		{ "ModuleRelativePath", "Public/PXR_MRTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_ExcludeUUIDFilter = { "ExcludeUUIDFilter", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPICOAnchorLoadInfo, ExcludeUUIDFilter), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_ExcludeUUIDFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_ExcludeUUIDFilter_MetaData)) }; // 1646233693
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_ExcludeSpatialSceneDataTypeFilter_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_ExcludeSpatialSceneDataTypeFilter_Inner = { "ExcludeSpatialSceneDataTypeFilter", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_PICOXRMR_EPICOSpatialSceneDataTypeFlags, METADATA_PARAMS(nullptr, 0) }; // 3259630888
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_ExcludeSpatialSceneDataTypeFilter_MetaData[] = {
		{ "Category", "PXR|MR" },
		{ "ModuleRelativePath", "Public/PXR_MRTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_ExcludeSpatialSceneDataTypeFilter = { "ExcludeSpatialSceneDataTypeFilter", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPICOAnchorLoadInfo, ExcludeSpatialSceneDataTypeFilter), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_ExcludeSpatialSceneDataTypeFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_ExcludeSpatialSceneDataTypeFilter_MetaData)) }; // 3259630888
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_LoadMaxCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_Timeout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_PersistLocation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_PersistLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_IncludeFilterType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_IncludeFilterType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_IncludeUUIDFilter_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_IncludeUUIDFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_IncludeSpatialSceneDataTypeFilter_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_IncludeSpatialSceneDataTypeFilter_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_IncludeSpatialSceneDataTypeFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_ExcludeFilterType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_ExcludeFilterType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_ExcludeUUIDFilter_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_ExcludeUUIDFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_ExcludeSpatialSceneDataTypeFilter_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_ExcludeSpatialSceneDataTypeFilter_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_ExcludeSpatialSceneDataTypeFilter,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRMR,
		nullptr,
		&NewStructOps,
		"PICOAnchorLoadInfo",
		sizeof(FPICOAnchorLoadInfo),
		alignof(FPICOAnchorLoadInfo),
		Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPICOAnchorLoadInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_PICOAnchorLoadInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PICOAnchorLoadInfo.InnerSingleton, Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PICOAnchorLoadInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnchorLoadResult;
class UScriptStruct* FAnchorLoadResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnchorLoadResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnchorLoadResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnchorLoadResult, Z_Construct_UPackage__Script_PICOXRMR(), TEXT("AnchorLoadResult"));
	}
	return Z_Registration_Info_UScriptStruct_AnchorLoadResult.OuterSingleton;
}
template<> PICOXRMR_API UScriptStruct* StaticStruct<FAnchorLoadResult>()
{
	return FAnchorLoadResult::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnchorLoadResult_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnchorHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnchorHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnchorUUID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnchorUUID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PersistLocation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PersistLocation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PersistLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnchorLoadResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PXR_MRTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnchorLoadResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnchorLoadResult>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnchorLoadResult_Statics::NewProp_AnchorHandle_MetaData[] = {
		{ "Category", "PXR|MR" },
		{ "ModuleRelativePath", "Public/PXR_MRTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnchorLoadResult_Statics::NewProp_AnchorHandle = { "AnchorHandle", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnchorLoadResult, AnchorHandle), Z_Construct_UScriptStruct_FPICOAnchor, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnchorLoadResult_Statics::NewProp_AnchorHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnchorLoadResult_Statics::NewProp_AnchorHandle_MetaData)) }; // 512787326
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnchorLoadResult_Statics::NewProp_AnchorUUID_MetaData[] = {
		{ "Category", "PXR|MR" },
		{ "ModuleRelativePath", "Public/PXR_MRTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnchorLoadResult_Statics::NewProp_AnchorUUID = { "AnchorUUID", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnchorLoadResult, AnchorUUID), Z_Construct_UScriptStruct_FPICOAnchorUUID, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnchorLoadResult_Statics::NewProp_AnchorUUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnchorLoadResult_Statics::NewProp_AnchorUUID_MetaData)) }; // 1646233693
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnchorLoadResult_Statics::NewProp_PersistLocation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnchorLoadResult_Statics::NewProp_PersistLocation_MetaData[] = {
		{ "Category", "PXR|MR" },
		{ "ModuleRelativePath", "Public/PXR_MRTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnchorLoadResult_Statics::NewProp_PersistLocation = { "PersistLocation", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnchorLoadResult, PersistLocation), Z_Construct_UEnum_PICOXRMR_EPICOPersistLocation, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnchorLoadResult_Statics::NewProp_PersistLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnchorLoadResult_Statics::NewProp_PersistLocation_MetaData)) }; // 438259623
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnchorLoadResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnchorLoadResult_Statics::NewProp_AnchorHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnchorLoadResult_Statics::NewProp_AnchorUUID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnchorLoadResult_Statics::NewProp_PersistLocation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnchorLoadResult_Statics::NewProp_PersistLocation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnchorLoadResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRMR,
		nullptr,
		&NewStructOps,
		"AnchorLoadResult",
		sizeof(FAnchorLoadResult),
		alignof(FAnchorLoadResult),
		Z_Construct_UScriptStruct_FAnchorLoadResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnchorLoadResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnchorLoadResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnchorLoadResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnchorLoadResult()
	{
		if (!Z_Registration_Info_UScriptStruct_AnchorLoadResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnchorLoadResult.InnerSingleton, Z_Construct_UScriptStruct_FAnchorLoadResult_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnchorLoadResult.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_MRTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_MRTypes_h_Statics::EnumInfo[] = {
		{ EPICOResult_StaticEnum, TEXT("EPICOResult"), &Z_Registration_Info_UEnum_EPICOResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3569735258U) },
		{ EPICOSpatialTrackingState_StaticEnum, TEXT("EPICOSpatialTrackingState"), &Z_Registration_Info_UEnum_EPICOSpatialTrackingState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3831885250U) },
		{ EPICOSpatialTrackingStateMessage_StaticEnum, TEXT("EPICOSpatialTrackingStateMessage"), &Z_Registration_Info_UEnum_EPICOSpatialTrackingStateMessage, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2407655479U) },
		{ EPICOAnchorComponentTypeFlag_StaticEnum, TEXT("EPICOAnchorComponentTypeFlag"), &Z_Registration_Info_UEnum_EPICOAnchorComponentTypeFlag, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 555251867U) },
		{ EPICOSpatialSceneDataTypeFlags_StaticEnum, TEXT("EPICOSpatialSceneDataTypeFlags"), &Z_Registration_Info_UEnum_EPICOSpatialSceneDataTypeFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3259630888U) },
		{ EPICOAnchorSceneLabel_StaticEnum, TEXT("EPICOAnchorSceneLabel"), &Z_Registration_Info_UEnum_EPICOAnchorSceneLabel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1984884780U) },
		{ EPICOPersistLocation_StaticEnum, TEXT("EPICOPersistLocation"), &Z_Registration_Info_UEnum_EPICOPersistLocation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 438259623U) },
		{ EPICOLoadFilterType_StaticEnum, TEXT("EPICOLoadFilterType"), &Z_Registration_Info_UEnum_EPICOLoadFilterType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1485077985U) },
		{ EPICOSpatialSceneCaptureStatus_StaticEnum, TEXT("EPICOSpatialSceneCaptureStatus"), &Z_Registration_Info_UEnum_EPICOSpatialSceneCaptureStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 239301979U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_MRTypes_h_Statics::ScriptStructInfo[] = {
		{ FPICOAnchor::StaticStruct, Z_Construct_UScriptStruct_FPICOAnchor_Statics::NewStructOps, TEXT("PICOAnchor"), &Z_Registration_Info_UScriptStruct_PICOAnchor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPICOAnchor), 512787326U) },
		{ FPICOAnchorUUID::StaticStruct, Z_Construct_UScriptStruct_FPICOAnchorUUID_Statics::NewStructOps, TEXT("PICOAnchorUUID"), &Z_Registration_Info_UScriptStruct_PICOAnchorUUID, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPICOAnchorUUID), 1646233693U) },
		{ FPICOAnchorPlaneBoundaryInfo::StaticStruct, Z_Construct_UScriptStruct_FPICOAnchorPlaneBoundaryInfo_Statics::NewStructOps, TEXT("PICOAnchorPlaneBoundaryInfo"), &Z_Registration_Info_UScriptStruct_PICOAnchorPlaneBoundaryInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPICOAnchorPlaneBoundaryInfo), 367312255U) },
		{ FPICOAnchorPlanePolygonInfo::StaticStruct, Z_Construct_UScriptStruct_FPICOAnchorPlanePolygonInfo_Statics::NewStructOps, TEXT("PICOAnchorPlanePolygonInfo"), &Z_Registration_Info_UScriptStruct_PICOAnchorPlanePolygonInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPICOAnchorPlanePolygonInfo), 2186853687U) },
		{ FPICOAnchorVolumeInfo::StaticStruct, Z_Construct_UScriptStruct_FPICOAnchorVolumeInfo_Statics::NewStructOps, TEXT("PICOAnchorVolumeInfo"), &Z_Registration_Info_UScriptStruct_PICOAnchorVolumeInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPICOAnchorVolumeInfo), 544164791U) },
		{ FPICOAnchorLoadInfo::StaticStruct, Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewStructOps, TEXT("PICOAnchorLoadInfo"), &Z_Registration_Info_UScriptStruct_PICOAnchorLoadInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPICOAnchorLoadInfo), 2787575804U) },
		{ FAnchorLoadResult::StaticStruct, Z_Construct_UScriptStruct_FAnchorLoadResult_Statics::NewStructOps, TEXT("AnchorLoadResult"), &Z_Registration_Info_UScriptStruct_AnchorLoadResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnchorLoadResult), 1274153048U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_MRTypes_h_1950607523(TEXT("/Script/PICOXRMR"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_MRTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_MRTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_MRTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_MRTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
