// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PICOXRMotionTracking/Public/PXR_MotionTrackingTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePXR_MotionTrackingTypes() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	PICOXRMOTIONTRACKING_API UEnum* Z_Construct_UEnum_PICOXRMotionTracking_EPICOEye();
	PICOXRMOTIONTRACKING_API UEnum* Z_Construct_UEnum_PICOXRMotionTracking_EPXREyeTrackingMode();
	PICOXRMOTIONTRACKING_API UEnum* Z_Construct_UEnum_PICOXRMotionTracking_EPXRFaceBlendShape();
	PICOXRMOTIONTRACKING_API UEnum* Z_Construct_UEnum_PICOXRMotionTracking_EPXRFaceTrackingMode();
	PICOXRMOTIONTRACKING_API UEnum* Z_Construct_UEnum_PICOXRMotionTracking_EPXRTrackingStateCode();
	PICOXRMOTIONTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FPXREyePupilInfo();
	PICOXRMOTIONTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FPXREyeTrackingData();
	PICOXRMOTIONTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FPXREyeTrackingDataGetInfo();
	PICOXRMOTIONTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FPXREyeTrackingStartInfo();
	PICOXRMOTIONTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FPXREyeTrackingState();
	PICOXRMOTIONTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FPXREyeTrackingStopInfo();
	PICOXRMOTIONTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FPXRFaceTrackingData();
	PICOXRMOTIONTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FPXRFaceTrackingDataGetInfo();
	PICOXRMOTIONTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FPXRFaceTrackingStartInfo();
	PICOXRMOTIONTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FPXRFaceTrackingState();
	PICOXRMOTIONTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FPXRFaceTrackingStopInfo();
	PICOXRMOTIONTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FPXRPerEyeData();
	UPackage* Z_Construct_UPackage__Script_PICOXRMotionTracking();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPXRTrackingStateCode;
	static UEnum* EPXRTrackingStateCode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPXRTrackingStateCode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPXRTrackingStateCode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PICOXRMotionTracking_EPXRTrackingStateCode, Z_Construct_UPackage__Script_PICOXRMotionTracking(), TEXT("EPXRTrackingStateCode"));
		}
		return Z_Registration_Info_UEnum_EPXRTrackingStateCode.OuterSingleton;
	}
	template<> PICOXRMOTIONTRACKING_API UEnum* StaticEnum<EPXRTrackingStateCode>()
	{
		return EPXRTrackingStateCode_StaticEnum();
	}
	struct Z_Construct_UEnum_PICOXRMotionTracking_EPXRTrackingStateCode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PICOXRMotionTracking_EPXRTrackingStateCode_Statics::Enumerators[] = {
		{ "EPXRTrackingStateCode::PXR_MT_SUCCESS", (int64)EPXRTrackingStateCode::PXR_MT_SUCCESS },
		{ "EPXRTrackingStateCode::PXR_MT_FAILURE", (int64)EPXRTrackingStateCode::PXR_MT_FAILURE },
		{ "EPXRTrackingStateCode::PXR_MT_MODE_NONE", (int64)EPXRTrackingStateCode::PXR_MT_MODE_NONE },
		{ "EPXRTrackingStateCode::PXR_MT_DEVICE_NOT_SUPPORT", (int64)EPXRTrackingStateCode::PXR_MT_DEVICE_NOT_SUPPORT },
		{ "EPXRTrackingStateCode::PXR_MT_SERVICE_NEED_START", (int64)EPXRTrackingStateCode::PXR_MT_SERVICE_NEED_START },
		{ "EPXRTrackingStateCode::PXR_MT_ET_PERMISSION_DENIED", (int64)EPXRTrackingStateCode::PXR_MT_ET_PERMISSION_DENIED },
		{ "EPXRTrackingStateCode::PXR_MT_FT_PERMISSION_DENIED", (int64)EPXRTrackingStateCode::PXR_MT_FT_PERMISSION_DENIED },
		{ "EPXRTrackingStateCode::PXR_MT_MIC_PERMISSION_DENIED", (int64)EPXRTrackingStateCode::PXR_MT_MIC_PERMISSION_DENIED },
		{ "EPXRTrackingStateCode::PXR_MT_SYSTEM_DENIED", (int64)EPXRTrackingStateCode::PXR_MT_SYSTEM_DENIED },
		{ "EPXRTrackingStateCode::PXR_MT_UNKNOW_ERROR", (int64)EPXRTrackingStateCode::PXR_MT_UNKNOW_ERROR },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PICOXRMotionTracking_EPXRTrackingStateCode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
		{ "PXR_MT_DEVICE_NOT_SUPPORT.Comment", "// Tracking mode not set.\n" },
		{ "PXR_MT_DEVICE_NOT_SUPPORT.Name", "EPXRTrackingStateCode::PXR_MT_DEVICE_NOT_SUPPORT" },
		{ "PXR_MT_DEVICE_NOT_SUPPORT.ToolTip", "Tracking mode not set." },
		{ "PXR_MT_ET_PERMISSION_DENIED.Comment", "// Tracking service needs to be enabled in the UE editor.\n" },
		{ "PXR_MT_ET_PERMISSION_DENIED.Name", "EPXRTrackingStateCode::PXR_MT_ET_PERMISSION_DENIED" },
		{ "PXR_MT_ET_PERMISSION_DENIED.ToolTip", "Tracking service needs to be enabled in the UE editor." },
		{ "PXR_MT_FAILURE.Comment", "// Tracking is successful.\n" },
		{ "PXR_MT_FAILURE.Name", "EPXRTrackingStateCode::PXR_MT_FAILURE" },
		{ "PXR_MT_FAILURE.ToolTip", "Tracking is successful." },
		{ "PXR_MT_FT_PERMISSION_DENIED.Comment", "// Eye tracking permission denied.\n" },
		{ "PXR_MT_FT_PERMISSION_DENIED.Name", "EPXRTrackingStateCode::PXR_MT_FT_PERMISSION_DENIED" },
		{ "PXR_MT_FT_PERMISSION_DENIED.ToolTip", "Eye tracking permission denied." },
		{ "PXR_MT_MIC_PERMISSION_DENIED.Comment", "// Face tracking permission denied.\n" },
		{ "PXR_MT_MIC_PERMISSION_DENIED.Name", "EPXRTrackingStateCode::PXR_MT_MIC_PERMISSION_DENIED" },
		{ "PXR_MT_MIC_PERMISSION_DENIED.ToolTip", "Face tracking permission denied." },
		{ "PXR_MT_MODE_NONE.Comment", "// Tracking failed.\n" },
		{ "PXR_MT_MODE_NONE.Name", "EPXRTrackingStateCode::PXR_MT_MODE_NONE" },
		{ "PXR_MT_MODE_NONE.ToolTip", "Tracking failed." },
		{ "PXR_MT_SERVICE_NEED_START.Comment", "// The PICO device does not support tracking.\n" },
		{ "PXR_MT_SERVICE_NEED_START.Name", "EPXRTrackingStateCode::PXR_MT_SERVICE_NEED_START" },
		{ "PXR_MT_SERVICE_NEED_START.ToolTip", "The PICO device does not support tracking." },
		{ "PXR_MT_SUCCESS.Name", "EPXRTrackingStateCode::PXR_MT_SUCCESS" },
		{ "PXR_MT_SYSTEM_DENIED.Comment", "// Microphone permission denied.\n" },
		{ "PXR_MT_SYSTEM_DENIED.Name", "EPXRTrackingStateCode::PXR_MT_SYSTEM_DENIED" },
		{ "PXR_MT_SYSTEM_DENIED.ToolTip", "Microphone permission denied." },
		{ "PXR_MT_UNKNOW_ERROR.Comment", "// System permission denied.\n" },
		{ "PXR_MT_UNKNOW_ERROR.Name", "EPXRTrackingStateCode::PXR_MT_UNKNOW_ERROR" },
		{ "PXR_MT_UNKNOW_ERROR.ToolTip", "System permission denied." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PICOXRMotionTracking_EPXRTrackingStateCode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PICOXRMotionTracking,
		nullptr,
		"EPXRTrackingStateCode",
		"EPXRTrackingStateCode",
		Z_Construct_UEnum_PICOXRMotionTracking_EPXRTrackingStateCode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PICOXRMotionTracking_EPXRTrackingStateCode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PICOXRMotionTracking_EPXRTrackingStateCode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PICOXRMotionTracking_EPXRTrackingStateCode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PICOXRMotionTracking_EPXRTrackingStateCode()
	{
		if (!Z_Registration_Info_UEnum_EPXRTrackingStateCode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPXRTrackingStateCode.InnerSingleton, Z_Construct_UEnum_PICOXRMotionTracking_EPXRTrackingStateCode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPXRTrackingStateCode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPXRFaceBlendShape;
	static UEnum* EPXRFaceBlendShape_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPXRFaceBlendShape.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPXRFaceBlendShape.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PICOXRMotionTracking_EPXRFaceBlendShape, Z_Construct_UPackage__Script_PICOXRMotionTracking(), TEXT("EPXRFaceBlendShape"));
		}
		return Z_Registration_Info_UEnum_EPXRFaceBlendShape.OuterSingleton;
	}
	template<> PICOXRMOTIONTRACKING_API UEnum* StaticEnum<EPXRFaceBlendShape>()
	{
		return EPXRFaceBlendShape_StaticEnum();
	}
	struct Z_Construct_UEnum_PICOXRMotionTracking_EPXRFaceBlendShape_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PICOXRMotionTracking_EPXRFaceBlendShape_Statics::Enumerators[] = {
		{ "EPXRFaceBlendShape::BrowInnerUp", (int64)EPXRFaceBlendShape::BrowInnerUp },
		{ "EPXRFaceBlendShape::BrowDown_R", (int64)EPXRFaceBlendShape::BrowDown_R },
		{ "EPXRFaceBlendShape::BrowDown_L", (int64)EPXRFaceBlendShape::BrowDown_L },
		{ "EPXRFaceBlendShape::BrowOuterUp_L", (int64)EPXRFaceBlendShape::BrowOuterUp_L },
		{ "EPXRFaceBlendShape::BrowOuterUp_R", (int64)EPXRFaceBlendShape::BrowOuterUp_R },
		{ "EPXRFaceBlendShape::CheekSquint_L", (int64)EPXRFaceBlendShape::CheekSquint_L },
		{ "EPXRFaceBlendShape::CheekSquint_R", (int64)EPXRFaceBlendShape::CheekSquint_R },
		{ "EPXRFaceBlendShape::CheekPuff", (int64)EPXRFaceBlendShape::CheekPuff },
		{ "EPXRFaceBlendShape::EyeLookDown_L", (int64)EPXRFaceBlendShape::EyeLookDown_L },
		{ "EPXRFaceBlendShape::EyeLookIn_L", (int64)EPXRFaceBlendShape::EyeLookIn_L },
		{ "EPXRFaceBlendShape::EyeLookIn_R", (int64)EPXRFaceBlendShape::EyeLookIn_R },
		{ "EPXRFaceBlendShape::EyeLookDown_R", (int64)EPXRFaceBlendShape::EyeLookDown_R },
		{ "EPXRFaceBlendShape::EyeSquint_L", (int64)EPXRFaceBlendShape::EyeSquint_L },
		{ "EPXRFaceBlendShape::EyeBlink_L", (int64)EPXRFaceBlendShape::EyeBlink_L },
		{ "EPXRFaceBlendShape::EyeLookUp_L", (int64)EPXRFaceBlendShape::EyeLookUp_L },
		{ "EPXRFaceBlendShape::EyeLookUp_R", (int64)EPXRFaceBlendShape::EyeLookUp_R },
		{ "EPXRFaceBlendShape::EyeBlink_R", (int64)EPXRFaceBlendShape::EyeBlink_R },
		{ "EPXRFaceBlendShape::EyeSquint_R", (int64)EPXRFaceBlendShape::EyeSquint_R },
		{ "EPXRFaceBlendShape::EyeLookOut_L", (int64)EPXRFaceBlendShape::EyeLookOut_L },
		{ "EPXRFaceBlendShape::EyeLookOut_R", (int64)EPXRFaceBlendShape::EyeLookOut_R },
		{ "EPXRFaceBlendShape::EyeWide_R", (int64)EPXRFaceBlendShape::EyeWide_R },
		{ "EPXRFaceBlendShape::EyeWide_L", (int64)EPXRFaceBlendShape::EyeWide_L },
		{ "EPXRFaceBlendShape::JawOpen", (int64)EPXRFaceBlendShape::JawOpen },
		{ "EPXRFaceBlendShape::JawRight", (int64)EPXRFaceBlendShape::JawRight },
		{ "EPXRFaceBlendShape::JawForward", (int64)EPXRFaceBlendShape::JawForward },
		{ "EPXRFaceBlendShape::JawLeft", (int64)EPXRFaceBlendShape::JawLeft },
		{ "EPXRFaceBlendShape::MouthClose", (int64)EPXRFaceBlendShape::MouthClose },
		{ "EPXRFaceBlendShape::MouthLowerDown_R", (int64)EPXRFaceBlendShape::MouthLowerDown_R },
		{ "EPXRFaceBlendShape::MouthUpperUp_R", (int64)EPXRFaceBlendShape::MouthUpperUp_R },
		{ "EPXRFaceBlendShape::MouthShrugUpper", (int64)EPXRFaceBlendShape::MouthShrugUpper },
		{ "EPXRFaceBlendShape::MouthFunnel", (int64)EPXRFaceBlendShape::MouthFunnel },
		{ "EPXRFaceBlendShape::MouthRollUpper", (int64)EPXRFaceBlendShape::MouthRollUpper },
		{ "EPXRFaceBlendShape::MouthShrugLower", (int64)EPXRFaceBlendShape::MouthShrugLower },
		{ "EPXRFaceBlendShape::MouthRollLower", (int64)EPXRFaceBlendShape::MouthRollLower },
		{ "EPXRFaceBlendShape::MouthSmile_L", (int64)EPXRFaceBlendShape::MouthSmile_L },
		{ "EPXRFaceBlendShape::MouthPress_L", (int64)EPXRFaceBlendShape::MouthPress_L },
		{ "EPXRFaceBlendShape::MouthSmile_R", (int64)EPXRFaceBlendShape::MouthSmile_R },
		{ "EPXRFaceBlendShape::MouthPress_R", (int64)EPXRFaceBlendShape::MouthPress_R },
		{ "EPXRFaceBlendShape::MouthDimple_R", (int64)EPXRFaceBlendShape::MouthDimple_R },
		{ "EPXRFaceBlendShape::MouthLeft", (int64)EPXRFaceBlendShape::MouthLeft },
		{ "EPXRFaceBlendShape::MouthFrown_L", (int64)EPXRFaceBlendShape::MouthFrown_L },
		{ "EPXRFaceBlendShape::MouthStretch_L", (int64)EPXRFaceBlendShape::MouthStretch_L },
		{ "EPXRFaceBlendShape::MouthPucker", (int64)EPXRFaceBlendShape::MouthPucker },
		{ "EPXRFaceBlendShape::MouthUpperUp_L", (int64)EPXRFaceBlendShape::MouthUpperUp_L },
		{ "EPXRFaceBlendShape::MouthFrown_R", (int64)EPXRFaceBlendShape::MouthFrown_R },
		{ "EPXRFaceBlendShape::MouthStretch_R", (int64)EPXRFaceBlendShape::MouthStretch_R },
		{ "EPXRFaceBlendShape::MouthRight", (int64)EPXRFaceBlendShape::MouthRight },
		{ "EPXRFaceBlendShape::MouthDimple_L", (int64)EPXRFaceBlendShape::MouthDimple_L },
		{ "EPXRFaceBlendShape::MouthLowerDown_L", (int64)EPXRFaceBlendShape::MouthLowerDown_L },
		{ "EPXRFaceBlendShape::NoseSneer_L", (int64)EPXRFaceBlendShape::NoseSneer_L },
		{ "EPXRFaceBlendShape::NoseSneer_R", (int64)EPXRFaceBlendShape::NoseSneer_R },
		{ "EPXRFaceBlendShape::TongueOut", (int64)EPXRFaceBlendShape::TongueOut },
		{ "EPXRFaceBlendShape::PP", (int64)EPXRFaceBlendShape::PP },
		{ "EPXRFaceBlendShape::CH", (int64)EPXRFaceBlendShape::CH },
		{ "EPXRFaceBlendShape::o", (int64)EPXRFaceBlendShape::o },
		{ "EPXRFaceBlendShape::O", (int64)EPXRFaceBlendShape::O },
		{ "EPXRFaceBlendShape::I", (int64)EPXRFaceBlendShape::I },
		{ "EPXRFaceBlendShape::u", (int64)EPXRFaceBlendShape::u },
		{ "EPXRFaceBlendShape::RR", (int64)EPXRFaceBlendShape::RR },
		{ "EPXRFaceBlendShape::XX", (int64)EPXRFaceBlendShape::XX },
		{ "EPXRFaceBlendShape::aa", (int64)EPXRFaceBlendShape::aa },
		{ "EPXRFaceBlendShape::i", (int64)EPXRFaceBlendShape::i },
		{ "EPXRFaceBlendShape::FF", (int64)EPXRFaceBlendShape::FF },
		{ "EPXRFaceBlendShape::U", (int64)EPXRFaceBlendShape::U },
		{ "EPXRFaceBlendShape::TH", (int64)EPXRFaceBlendShape::TH },
		{ "EPXRFaceBlendShape::kk", (int64)EPXRFaceBlendShape::kk },
		{ "EPXRFaceBlendShape::SS", (int64)EPXRFaceBlendShape::SS },
		{ "EPXRFaceBlendShape::e", (int64)EPXRFaceBlendShape::e },
		{ "EPXRFaceBlendShape::DD", (int64)EPXRFaceBlendShape::DD },
		{ "EPXRFaceBlendShape::E", (int64)EPXRFaceBlendShape::E },
		{ "EPXRFaceBlendShape::nn", (int64)EPXRFaceBlendShape::nn },
		{ "EPXRFaceBlendShape::sil", (int64)EPXRFaceBlendShape::sil },
		{ "EPXRFaceBlendShape::COUNT", (int64)EPXRFaceBlendShape::COUNT },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PICOXRMotionTracking_EPXRFaceBlendShape_Statics::Enum_MetaDataParams[] = {
		{ "aa.Name", "EPXRFaceBlendShape::aa" },
		{ "BlueprintType", "true" },
		{ "BrowDown_L.Name", "EPXRFaceBlendShape::BrowDown_L" },
		{ "BrowDown_R.Name", "EPXRFaceBlendShape::BrowDown_R" },
		{ "BrowInnerUp.Name", "EPXRFaceBlendShape::BrowInnerUp" },
		{ "BrowOuterUp_L.Name", "EPXRFaceBlendShape::BrowOuterUp_L" },
		{ "BrowOuterUp_R.Name", "EPXRFaceBlendShape::BrowOuterUp_R" },
		{ "CH.Name", "EPXRFaceBlendShape::CH" },
		{ "CheekPuff.Name", "EPXRFaceBlendShape::CheekPuff" },
		{ "CheekSquint_L.Name", "EPXRFaceBlendShape::CheekSquint_L" },
		{ "CheekSquint_R.Name", "EPXRFaceBlendShape::CheekSquint_R" },
		{ "COUNT.Name", "EPXRFaceBlendShape::COUNT" },
		{ "DD.Name", "EPXRFaceBlendShape::DD" },
		{ "e.Name", "EPXRFaceBlendShape::e" },
		{ "E.Name", "EPXRFaceBlendShape::E" },
		{ "EyeBlink_L.Name", "EPXRFaceBlendShape::EyeBlink_L" },
		{ "EyeBlink_R.Name", "EPXRFaceBlendShape::EyeBlink_R" },
		{ "EyeLookDown_L.Name", "EPXRFaceBlendShape::EyeLookDown_L" },
		{ "EyeLookDown_R.Name", "EPXRFaceBlendShape::EyeLookDown_R" },
		{ "EyeLookIn_L.Name", "EPXRFaceBlendShape::EyeLookIn_L" },
		{ "EyeLookIn_R.Name", "EPXRFaceBlendShape::EyeLookIn_R" },
		{ "EyeLookOut_L.Name", "EPXRFaceBlendShape::EyeLookOut_L" },
		{ "EyeLookOut_R.Name", "EPXRFaceBlendShape::EyeLookOut_R" },
		{ "EyeLookUp_L.Name", "EPXRFaceBlendShape::EyeLookUp_L" },
		{ "EyeLookUp_R.Name", "EPXRFaceBlendShape::EyeLookUp_R" },
		{ "EyeSquint_L.Name", "EPXRFaceBlendShape::EyeSquint_L" },
		{ "EyeSquint_R.Name", "EPXRFaceBlendShape::EyeSquint_R" },
		{ "EyeWide_L.Name", "EPXRFaceBlendShape::EyeWide_L" },
		{ "EyeWide_R.Name", "EPXRFaceBlendShape::EyeWide_R" },
		{ "FF.Name", "EPXRFaceBlendShape::FF" },
		{ "I.Name", "EPXRFaceBlendShape::I" },
		{ "i.Name", "EPXRFaceBlendShape::i" },
		{ "JawForward.Name", "EPXRFaceBlendShape::JawForward" },
		{ "JawLeft.Name", "EPXRFaceBlendShape::JawLeft" },
		{ "JawOpen.Name", "EPXRFaceBlendShape::JawOpen" },
		{ "JawRight.Name", "EPXRFaceBlendShape::JawRight" },
		{ "kk.Name", "EPXRFaceBlendShape::kk" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
		{ "MouthClose.Name", "EPXRFaceBlendShape::MouthClose" },
		{ "MouthDimple_L.Name", "EPXRFaceBlendShape::MouthDimple_L" },
		{ "MouthDimple_R.Name", "EPXRFaceBlendShape::MouthDimple_R" },
		{ "MouthFrown_L.Name", "EPXRFaceBlendShape::MouthFrown_L" },
		{ "MouthFrown_R.Name", "EPXRFaceBlendShape::MouthFrown_R" },
		{ "MouthFunnel.Name", "EPXRFaceBlendShape::MouthFunnel" },
		{ "MouthLeft.Name", "EPXRFaceBlendShape::MouthLeft" },
		{ "MouthLowerDown_L.Name", "EPXRFaceBlendShape::MouthLowerDown_L" },
		{ "MouthLowerDown_R.Name", "EPXRFaceBlendShape::MouthLowerDown_R" },
		{ "MouthPress_L.Name", "EPXRFaceBlendShape::MouthPress_L" },
		{ "MouthPress_R.Name", "EPXRFaceBlendShape::MouthPress_R" },
		{ "MouthPucker.Name", "EPXRFaceBlendShape::MouthPucker" },
		{ "MouthRight.Name", "EPXRFaceBlendShape::MouthRight" },
		{ "MouthRollLower.Name", "EPXRFaceBlendShape::MouthRollLower" },
		{ "MouthRollUpper.Name", "EPXRFaceBlendShape::MouthRollUpper" },
		{ "MouthShrugLower.Name", "EPXRFaceBlendShape::MouthShrugLower" },
		{ "MouthShrugUpper.Name", "EPXRFaceBlendShape::MouthShrugUpper" },
		{ "MouthSmile_L.Name", "EPXRFaceBlendShape::MouthSmile_L" },
		{ "MouthSmile_R.Name", "EPXRFaceBlendShape::MouthSmile_R" },
		{ "MouthStretch_L.Name", "EPXRFaceBlendShape::MouthStretch_L" },
		{ "MouthStretch_R.Name", "EPXRFaceBlendShape::MouthStretch_R" },
		{ "MouthUpperUp_L.Name", "EPXRFaceBlendShape::MouthUpperUp_L" },
		{ "MouthUpperUp_R.Name", "EPXRFaceBlendShape::MouthUpperUp_R" },
		{ "nn.Name", "EPXRFaceBlendShape::nn" },
		{ "NoseSneer_L.Name", "EPXRFaceBlendShape::NoseSneer_L" },
		{ "NoseSneer_R.Name", "EPXRFaceBlendShape::NoseSneer_R" },
		{ "o.Name", "EPXRFaceBlendShape::o" },
		{ "O.Name", "EPXRFaceBlendShape::O" },
		{ "PP.Name", "EPXRFaceBlendShape::PP" },
		{ "RR.Name", "EPXRFaceBlendShape::RR" },
		{ "sil.Name", "EPXRFaceBlendShape::sil" },
		{ "SS.Name", "EPXRFaceBlendShape::SS" },
		{ "TH.Name", "EPXRFaceBlendShape::TH" },
		{ "TongueOut.Name", "EPXRFaceBlendShape::TongueOut" },
		{ "u.Name", "EPXRFaceBlendShape::u" },
		{ "U.Name", "EPXRFaceBlendShape::U" },
		{ "XX.Name", "EPXRFaceBlendShape::XX" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PICOXRMotionTracking_EPXRFaceBlendShape_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PICOXRMotionTracking,
		nullptr,
		"EPXRFaceBlendShape",
		"EPXRFaceBlendShape",
		Z_Construct_UEnum_PICOXRMotionTracking_EPXRFaceBlendShape_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PICOXRMotionTracking_EPXRFaceBlendShape_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PICOXRMotionTracking_EPXRFaceBlendShape_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PICOXRMotionTracking_EPXRFaceBlendShape_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PICOXRMotionTracking_EPXRFaceBlendShape()
	{
		if (!Z_Registration_Info_UEnum_EPXRFaceBlendShape.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPXRFaceBlendShape.InnerSingleton, Z_Construct_UEnum_PICOXRMotionTracking_EPXRFaceBlendShape_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPXRFaceBlendShape.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPXRFaceTrackingMode;
	static UEnum* EPXRFaceTrackingMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPXRFaceTrackingMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPXRFaceTrackingMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PICOXRMotionTracking_EPXRFaceTrackingMode, Z_Construct_UPackage__Script_PICOXRMotionTracking(), TEXT("EPXRFaceTrackingMode"));
		}
		return Z_Registration_Info_UEnum_EPXRFaceTrackingMode.OuterSingleton;
	}
	template<> PICOXRMOTIONTRACKING_API UEnum* StaticEnum<EPXRFaceTrackingMode>()
	{
		return EPXRFaceTrackingMode_StaticEnum();
	}
	struct Z_Construct_UEnum_PICOXRMotionTracking_EPXRFaceTrackingMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PICOXRMotionTracking_EPXRFaceTrackingMode_Statics::Enumerators[] = {
		{ "EPXRFaceTrackingMode::PXR_FTM_NONE", (int64)EPXRFaceTrackingMode::PXR_FTM_NONE },
		{ "EPXRFaceTrackingMode::PXR_FTM_FACE", (int64)EPXRFaceTrackingMode::PXR_FTM_FACE },
		{ "EPXRFaceTrackingMode::PXR_FTM_LIPS", (int64)EPXRFaceTrackingMode::PXR_FTM_LIPS },
		{ "EPXRFaceTrackingMode::PXR_FTM_FACE_LIPS_VIS", (int64)EPXRFaceTrackingMode::PXR_FTM_FACE_LIPS_VIS },
		{ "EPXRFaceTrackingMode::PXR_FTM_FACE_LIPS_BS", (int64)EPXRFaceTrackingMode::PXR_FTM_FACE_LIPS_BS },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PICOXRMotionTracking_EPXRFaceTrackingMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
		{ "PXR_FTM_FACE.Name", "EPXRFaceTrackingMode::PXR_FTM_FACE" },
		{ "PXR_FTM_FACE_LIPS_BS.Name", "EPXRFaceTrackingMode::PXR_FTM_FACE_LIPS_BS" },
		{ "PXR_FTM_FACE_LIPS_VIS.Name", "EPXRFaceTrackingMode::PXR_FTM_FACE_LIPS_VIS" },
		{ "PXR_FTM_LIPS.Name", "EPXRFaceTrackingMode::PXR_FTM_LIPS" },
		{ "PXR_FTM_NONE.Name", "EPXRFaceTrackingMode::PXR_FTM_NONE" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PICOXRMotionTracking_EPXRFaceTrackingMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PICOXRMotionTracking,
		nullptr,
		"EPXRFaceTrackingMode",
		"EPXRFaceTrackingMode",
		Z_Construct_UEnum_PICOXRMotionTracking_EPXRFaceTrackingMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PICOXRMotionTracking_EPXRFaceTrackingMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PICOXRMotionTracking_EPXRFaceTrackingMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PICOXRMotionTracking_EPXRFaceTrackingMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PICOXRMotionTracking_EPXRFaceTrackingMode()
	{
		if (!Z_Registration_Info_UEnum_EPXRFaceTrackingMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPXRFaceTrackingMode.InnerSingleton, Z_Construct_UEnum_PICOXRMotionTracking_EPXRFaceTrackingMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPXRFaceTrackingMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PXRFaceTrackingState;
class UScriptStruct* FPXRFaceTrackingState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PXRFaceTrackingState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PXRFaceTrackingState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPXRFaceTrackingState, Z_Construct_UPackage__Script_PICOXRMotionTracking(), TEXT("PXRFaceTrackingState"));
	}
	return Z_Registration_Info_UScriptStruct_PXRFaceTrackingState.OuterSingleton;
}
template<> PICOXRMOTIONTRACKING_API UScriptStruct* StaticStruct<FPXRFaceTrackingState>()
{
	return FPXRFaceTrackingState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPXRFaceTrackingState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentTrackingMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTrackingMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentTrackingMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TrackingStateCode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackingStateCode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TrackingStateCode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXRFaceTrackingState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPXRFaceTrackingState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPXRFaceTrackingState>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPXRFaceTrackingState_Statics::NewProp_CurrentTrackingMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXRFaceTrackingState_Statics::NewProp_CurrentTrackingMode_MetaData[] = {
		{ "Category", "PXR|FaceTracking" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPXRFaceTrackingState_Statics::NewProp_CurrentTrackingMode = { "CurrentTrackingMode", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPXRFaceTrackingState, CurrentTrackingMode), Z_Construct_UEnum_PICOXRMotionTracking_EPXRFaceTrackingMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FPXRFaceTrackingState_Statics::NewProp_CurrentTrackingMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXRFaceTrackingState_Statics::NewProp_CurrentTrackingMode_MetaData)) }; // 372939206
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPXRFaceTrackingState_Statics::NewProp_TrackingStateCode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXRFaceTrackingState_Statics::NewProp_TrackingStateCode_MetaData[] = {
		{ "Category", "PXR|FaceTracking" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPXRFaceTrackingState_Statics::NewProp_TrackingStateCode = { "TrackingStateCode", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPXRFaceTrackingState, TrackingStateCode), Z_Construct_UEnum_PICOXRMotionTracking_EPXRTrackingStateCode, METADATA_PARAMS(Z_Construct_UScriptStruct_FPXRFaceTrackingState_Statics::NewProp_TrackingStateCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXRFaceTrackingState_Statics::NewProp_TrackingStateCode_MetaData)) }; // 326969825
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPXRFaceTrackingState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXRFaceTrackingState_Statics::NewProp_CurrentTrackingMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXRFaceTrackingState_Statics::NewProp_CurrentTrackingMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXRFaceTrackingState_Statics::NewProp_TrackingStateCode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXRFaceTrackingState_Statics::NewProp_TrackingStateCode,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPXRFaceTrackingState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRMotionTracking,
		nullptr,
		&NewStructOps,
		"PXRFaceTrackingState",
		sizeof(FPXRFaceTrackingState),
		alignof(FPXRFaceTrackingState),
		Z_Construct_UScriptStruct_FPXRFaceTrackingState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXRFaceTrackingState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPXRFaceTrackingState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXRFaceTrackingState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPXRFaceTrackingState()
	{
		if (!Z_Registration_Info_UScriptStruct_PXRFaceTrackingState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PXRFaceTrackingState.InnerSingleton, Z_Construct_UScriptStruct_FPXRFaceTrackingState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PXRFaceTrackingState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PXRFaceTrackingStartInfo;
class UScriptStruct* FPXRFaceTrackingStartInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PXRFaceTrackingStartInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PXRFaceTrackingStartInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPXRFaceTrackingStartInfo, Z_Construct_UPackage__Script_PICOXRMotionTracking(), TEXT("PXRFaceTrackingStartInfo"));
	}
	return Z_Registration_Info_UScriptStruct_PXRFaceTrackingStartInfo.OuterSingleton;
}
template<> PICOXRMOTIONTRACKING_API UScriptStruct* StaticStruct<FPXRFaceTrackingStartInfo>()
{
	return FPXRFaceTrackingStartInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPXRFaceTrackingStartInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_StartMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_StartMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXRFaceTrackingStartInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPXRFaceTrackingStartInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPXRFaceTrackingStartInfo>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPXRFaceTrackingStartInfo_Statics::NewProp_StartMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXRFaceTrackingStartInfo_Statics::NewProp_StartMode_MetaData[] = {
		{ "Category", "PXR|FaceTracking" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPXRFaceTrackingStartInfo_Statics::NewProp_StartMode = { "StartMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPXRFaceTrackingStartInfo, StartMode), Z_Construct_UEnum_PICOXRMotionTracking_EPXRFaceTrackingMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FPXRFaceTrackingStartInfo_Statics::NewProp_StartMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXRFaceTrackingStartInfo_Statics::NewProp_StartMode_MetaData)) }; // 372939206
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPXRFaceTrackingStartInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXRFaceTrackingStartInfo_Statics::NewProp_StartMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXRFaceTrackingStartInfo_Statics::NewProp_StartMode,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPXRFaceTrackingStartInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRMotionTracking,
		nullptr,
		&NewStructOps,
		"PXRFaceTrackingStartInfo",
		sizeof(FPXRFaceTrackingStartInfo),
		alignof(FPXRFaceTrackingStartInfo),
		Z_Construct_UScriptStruct_FPXRFaceTrackingStartInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXRFaceTrackingStartInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPXRFaceTrackingStartInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXRFaceTrackingStartInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPXRFaceTrackingStartInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_PXRFaceTrackingStartInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PXRFaceTrackingStartInfo.InnerSingleton, Z_Construct_UScriptStruct_FPXRFaceTrackingStartInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PXRFaceTrackingStartInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PXRFaceTrackingStopInfo;
class UScriptStruct* FPXRFaceTrackingStopInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PXRFaceTrackingStopInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PXRFaceTrackingStopInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPXRFaceTrackingStopInfo, Z_Construct_UPackage__Script_PICOXRMotionTracking(), TEXT("PXRFaceTrackingStopInfo"));
	}
	return Z_Registration_Info_UScriptStruct_PXRFaceTrackingStopInfo.OuterSingleton;
}
template<> PICOXRMOTIONTRACKING_API UScriptStruct* StaticStruct<FPXRFaceTrackingStopInfo>()
{
	return FPXRFaceTrackingStopInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPXRFaceTrackingStopInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pause_MetaData[];
#endif
		static void NewProp_Pause_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Pause;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXRFaceTrackingStopInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPXRFaceTrackingStopInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPXRFaceTrackingStopInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXRFaceTrackingStopInfo_Statics::NewProp_Pause_MetaData[] = {
		{ "Category", "PXR|FaceTracking" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPXRFaceTrackingStopInfo_Statics::NewProp_Pause_SetBit(void* Obj)
	{
		((FPXRFaceTrackingStopInfo*)Obj)->Pause = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPXRFaceTrackingStopInfo_Statics::NewProp_Pause = { "Pause", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPXRFaceTrackingStopInfo), &Z_Construct_UScriptStruct_FPXRFaceTrackingStopInfo_Statics::NewProp_Pause_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPXRFaceTrackingStopInfo_Statics::NewProp_Pause_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXRFaceTrackingStopInfo_Statics::NewProp_Pause_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPXRFaceTrackingStopInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXRFaceTrackingStopInfo_Statics::NewProp_Pause,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPXRFaceTrackingStopInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRMotionTracking,
		nullptr,
		&NewStructOps,
		"PXRFaceTrackingStopInfo",
		sizeof(FPXRFaceTrackingStopInfo),
		alignof(FPXRFaceTrackingStopInfo),
		Z_Construct_UScriptStruct_FPXRFaceTrackingStopInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXRFaceTrackingStopInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPXRFaceTrackingStopInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXRFaceTrackingStopInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPXRFaceTrackingStopInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_PXRFaceTrackingStopInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PXRFaceTrackingStopInfo.InnerSingleton, Z_Construct_UScriptStruct_FPXRFaceTrackingStopInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PXRFaceTrackingStopInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PXRFaceTrackingDataGetInfo;
class UScriptStruct* FPXRFaceTrackingDataGetInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PXRFaceTrackingDataGetInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PXRFaceTrackingDataGetInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPXRFaceTrackingDataGetInfo, Z_Construct_UPackage__Script_PICOXRMotionTracking(), TEXT("PXRFaceTrackingDataGetInfo"));
	}
	return Z_Registration_Info_UScriptStruct_PXRFaceTrackingDataGetInfo.OuterSingleton;
}
template<> PICOXRMOTIONTRACKING_API UScriptStruct* StaticStruct<FPXRFaceTrackingDataGetInfo>()
{
	return FPXRFaceTrackingDataGetInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPXRFaceTrackingDataGetInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayTime_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_DisplayTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXRFaceTrackingDataGetInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPXRFaceTrackingDataGetInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPXRFaceTrackingDataGetInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXRFaceTrackingDataGetInfo_Statics::NewProp_DisplayTime_MetaData[] = {
		{ "Category", "PXR|FaceTracking" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FPXRFaceTrackingDataGetInfo_Statics::NewProp_DisplayTime = { "DisplayTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPXRFaceTrackingDataGetInfo, DisplayTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FPXRFaceTrackingDataGetInfo_Statics::NewProp_DisplayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXRFaceTrackingDataGetInfo_Statics::NewProp_DisplayTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPXRFaceTrackingDataGetInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXRFaceTrackingDataGetInfo_Statics::NewProp_DisplayTime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPXRFaceTrackingDataGetInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRMotionTracking,
		nullptr,
		&NewStructOps,
		"PXRFaceTrackingDataGetInfo",
		sizeof(FPXRFaceTrackingDataGetInfo),
		alignof(FPXRFaceTrackingDataGetInfo),
		Z_Construct_UScriptStruct_FPXRFaceTrackingDataGetInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXRFaceTrackingDataGetInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPXRFaceTrackingDataGetInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXRFaceTrackingDataGetInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPXRFaceTrackingDataGetInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_PXRFaceTrackingDataGetInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PXRFaceTrackingDataGetInfo.InnerSingleton, Z_Construct_UScriptStruct_FPXRFaceTrackingDataGetInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PXRFaceTrackingDataGetInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PXRFaceTrackingData;
class UScriptStruct* FPXRFaceTrackingData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PXRFaceTrackingData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PXRFaceTrackingData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPXRFaceTrackingData, Z_Construct_UPackage__Script_PICOXRMotionTracking(), TEXT("PXRFaceTrackingData"));
	}
	return Z_Registration_Info_UScriptStruct_PXRFaceTrackingData.OuterSingleton;
}
template<> PICOXRMOTIONTRACKING_API UScriptStruct* StaticStruct<FPXRFaceTrackingData>()
{
	return FPXRFaceTrackingData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendShapeWeights_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendShapeWeights_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BlendShapeWeights;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeStamp_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_TimeStamp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaughingProb_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LaughingProb;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EyeValid_MetaData[];
#endif
		static void NewProp_EyeValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EyeValid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FaceValid_MetaData[];
#endif
		static void NewProp_FaceValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_FaceValid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPXRFaceTrackingData>();
	}
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::NewProp_BlendShapeWeights_Inner = { "BlendShapeWeights", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::NewProp_BlendShapeWeights_MetaData[] = {
		{ "Category", "PXR|FaceTracking" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::NewProp_BlendShapeWeights = { "BlendShapeWeights", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPXRFaceTrackingData, BlendShapeWeights), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::NewProp_BlendShapeWeights_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::NewProp_BlendShapeWeights_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::NewProp_TimeStamp_MetaData[] = {
		{ "Category", "PXR|FaceTracking" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::NewProp_TimeStamp = { "TimeStamp", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPXRFaceTrackingData, TimeStamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::NewProp_TimeStamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::NewProp_TimeStamp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::NewProp_LaughingProb_MetaData[] = {
		{ "Category", "PXR|FaceTracking" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::NewProp_LaughingProb = { "LaughingProb", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPXRFaceTrackingData, LaughingProb), METADATA_PARAMS(Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::NewProp_LaughingProb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::NewProp_LaughingProb_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::NewProp_EyeValid_MetaData[] = {
		{ "Category", "PXR|FaceTracking" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::NewProp_EyeValid_SetBit(void* Obj)
	{
		((FPXRFaceTrackingData*)Obj)->EyeValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::NewProp_EyeValid = { "EyeValid", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPXRFaceTrackingData), &Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::NewProp_EyeValid_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::NewProp_EyeValid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::NewProp_EyeValid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::NewProp_FaceValid_MetaData[] = {
		{ "Category", "PXR|FaceTracking" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::NewProp_FaceValid_SetBit(void* Obj)
	{
		((FPXRFaceTrackingData*)Obj)->FaceValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::NewProp_FaceValid = { "FaceValid", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPXRFaceTrackingData), &Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::NewProp_FaceValid_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::NewProp_FaceValid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::NewProp_FaceValid_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::NewProp_BlendShapeWeights_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::NewProp_BlendShapeWeights,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::NewProp_TimeStamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::NewProp_LaughingProb,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::NewProp_EyeValid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::NewProp_FaceValid,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRMotionTracking,
		nullptr,
		&NewStructOps,
		"PXRFaceTrackingData",
		sizeof(FPXRFaceTrackingData),
		alignof(FPXRFaceTrackingData),
		Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPXRFaceTrackingData()
	{
		if (!Z_Registration_Info_UScriptStruct_PXRFaceTrackingData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PXRFaceTrackingData.InnerSingleton, Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PXRFaceTrackingData.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPICOEye;
	static UEnum* EPICOEye_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPICOEye.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPICOEye.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PICOXRMotionTracking_EPICOEye, Z_Construct_UPackage__Script_PICOXRMotionTracking(), TEXT("EPICOEye"));
		}
		return Z_Registration_Info_UEnum_EPICOEye.OuterSingleton;
	}
	template<> PICOXRMOTIONTRACKING_API UEnum* StaticEnum<EPICOEye>()
	{
		return EPICOEye_StaticEnum();
	}
	struct Z_Construct_UEnum_PICOXRMotionTracking_EPICOEye_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PICOXRMotionTracking_EPICOEye_Statics::Enumerators[] = {
		{ "EPICOEye::Left", (int64)EPICOEye::Left },
		{ "EPICOEye::Right", (int64)EPICOEye::Right },
		{ "EPICOEye::Center", (int64)EPICOEye::Center },
		{ "EPICOEye::COUNT", (int64)EPICOEye::COUNT },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PICOXRMotionTracking_EPICOEye_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Center.Name", "EPICOEye::Center" },
		{ "COUNT.Name", "EPICOEye::COUNT" },
		{ "Left.Name", "EPICOEye::Left" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
		{ "Right.Name", "EPICOEye::Right" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PICOXRMotionTracking_EPICOEye_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PICOXRMotionTracking,
		nullptr,
		"EPICOEye",
		"EPICOEye",
		Z_Construct_UEnum_PICOXRMotionTracking_EPICOEye_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PICOXRMotionTracking_EPICOEye_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PICOXRMotionTracking_EPICOEye_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PICOXRMotionTracking_EPICOEye_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PICOXRMotionTracking_EPICOEye()
	{
		if (!Z_Registration_Info_UEnum_EPICOEye.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPICOEye.InnerSingleton, Z_Construct_UEnum_PICOXRMotionTracking_EPICOEye_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPICOEye.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPXREyeTrackingMode;
	static UEnum* EPXREyeTrackingMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPXREyeTrackingMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPXREyeTrackingMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PICOXRMotionTracking_EPXREyeTrackingMode, Z_Construct_UPackage__Script_PICOXRMotionTracking(), TEXT("EPXREyeTrackingMode"));
		}
		return Z_Registration_Info_UEnum_EPXREyeTrackingMode.OuterSingleton;
	}
	template<> PICOXRMOTIONTRACKING_API UEnum* StaticEnum<EPXREyeTrackingMode>()
	{
		return EPXREyeTrackingMode_StaticEnum();
	}
	struct Z_Construct_UEnum_PICOXRMotionTracking_EPXREyeTrackingMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PICOXRMotionTracking_EPXREyeTrackingMode_Statics::Enumerators[] = {
		{ "EPXREyeTrackingMode::PXR_ETM_BOTH", (int64)EPXREyeTrackingMode::PXR_ETM_BOTH },
		{ "EPXREyeTrackingMode::PXR_ETM_NONE", (int64)EPXREyeTrackingMode::PXR_ETM_NONE },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PICOXRMotionTracking_EPXREyeTrackingMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
		{ "PXR_ETM_BOTH.Name", "EPXREyeTrackingMode::PXR_ETM_BOTH" },
		{ "PXR_ETM_NONE.Name", "EPXREyeTrackingMode::PXR_ETM_NONE" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PICOXRMotionTracking_EPXREyeTrackingMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PICOXRMotionTracking,
		nullptr,
		"EPXREyeTrackingMode",
		"EPXREyeTrackingMode",
		Z_Construct_UEnum_PICOXRMotionTracking_EPXREyeTrackingMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PICOXRMotionTracking_EPXREyeTrackingMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PICOXRMotionTracking_EPXREyeTrackingMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PICOXRMotionTracking_EPXREyeTrackingMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PICOXRMotionTracking_EPXREyeTrackingMode()
	{
		if (!Z_Registration_Info_UEnum_EPXREyeTrackingMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPXREyeTrackingMode.InnerSingleton, Z_Construct_UEnum_PICOXRMotionTracking_EPXREyeTrackingMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPXREyeTrackingMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PXREyeTrackingState;
class UScriptStruct* FPXREyeTrackingState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PXREyeTrackingState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PXREyeTrackingState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPXREyeTrackingState, Z_Construct_UPackage__Script_PICOXRMotionTracking(), TEXT("PXREyeTrackingState"));
	}
	return Z_Registration_Info_UScriptStruct_PXREyeTrackingState.OuterSingleton;
}
template<> PICOXRMOTIONTRACKING_API UScriptStruct* StaticStruct<FPXREyeTrackingState>()
{
	return FPXREyeTrackingState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPXREyeTrackingState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentTrackingMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTrackingMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentTrackingMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TrackingStateCode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackingStateCode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TrackingStateCode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXREyeTrackingState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPXREyeTrackingState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPXREyeTrackingState>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPXREyeTrackingState_Statics::NewProp_CurrentTrackingMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXREyeTrackingState_Statics::NewProp_CurrentTrackingMode_MetaData[] = {
		{ "Category", "PXR|EyeTracking" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPXREyeTrackingState_Statics::NewProp_CurrentTrackingMode = { "CurrentTrackingMode", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPXREyeTrackingState, CurrentTrackingMode), Z_Construct_UEnum_PICOXRMotionTracking_EPXREyeTrackingMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FPXREyeTrackingState_Statics::NewProp_CurrentTrackingMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXREyeTrackingState_Statics::NewProp_CurrentTrackingMode_MetaData)) }; // 4106211548
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPXREyeTrackingState_Statics::NewProp_TrackingStateCode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXREyeTrackingState_Statics::NewProp_TrackingStateCode_MetaData[] = {
		{ "Category", "PXR|EyeTracking" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPXREyeTrackingState_Statics::NewProp_TrackingStateCode = { "TrackingStateCode", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPXREyeTrackingState, TrackingStateCode), Z_Construct_UEnum_PICOXRMotionTracking_EPXRTrackingStateCode, METADATA_PARAMS(Z_Construct_UScriptStruct_FPXREyeTrackingState_Statics::NewProp_TrackingStateCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXREyeTrackingState_Statics::NewProp_TrackingStateCode_MetaData)) }; // 326969825
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPXREyeTrackingState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXREyeTrackingState_Statics::NewProp_CurrentTrackingMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXREyeTrackingState_Statics::NewProp_CurrentTrackingMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXREyeTrackingState_Statics::NewProp_TrackingStateCode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXREyeTrackingState_Statics::NewProp_TrackingStateCode,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPXREyeTrackingState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRMotionTracking,
		nullptr,
		&NewStructOps,
		"PXREyeTrackingState",
		sizeof(FPXREyeTrackingState),
		alignof(FPXREyeTrackingState),
		Z_Construct_UScriptStruct_FPXREyeTrackingState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXREyeTrackingState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPXREyeTrackingState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXREyeTrackingState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPXREyeTrackingState()
	{
		if (!Z_Registration_Info_UScriptStruct_PXREyeTrackingState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PXREyeTrackingState.InnerSingleton, Z_Construct_UScriptStruct_FPXREyeTrackingState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PXREyeTrackingState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PXREyeTrackingStartInfo;
class UScriptStruct* FPXREyeTrackingStartInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PXREyeTrackingStartInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PXREyeTrackingStartInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPXREyeTrackingStartInfo, Z_Construct_UPackage__Script_PICOXRMotionTracking(), TEXT("PXREyeTrackingStartInfo"));
	}
	return Z_Registration_Info_UScriptStruct_PXREyeTrackingStartInfo.OuterSingleton;
}
template<> PICOXRMOTIONTRACKING_API UScriptStruct* StaticStruct<FPXREyeTrackingStartInfo>()
{
	return FPXREyeTrackingStartInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPXREyeTrackingStartInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NeedCalibration_MetaData[];
#endif
		static void NewProp_NeedCalibration_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_NeedCalibration;
		static const UECodeGen_Private::FBytePropertyParams NewProp_StartMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_StartMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXREyeTrackingStartInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPXREyeTrackingStartInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPXREyeTrackingStartInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXREyeTrackingStartInfo_Statics::NewProp_NeedCalibration_MetaData[] = {
		{ "Category", "PXR|EyeTracking" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPXREyeTrackingStartInfo_Statics::NewProp_NeedCalibration_SetBit(void* Obj)
	{
		((FPXREyeTrackingStartInfo*)Obj)->NeedCalibration = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPXREyeTrackingStartInfo_Statics::NewProp_NeedCalibration = { "NeedCalibration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPXREyeTrackingStartInfo), &Z_Construct_UScriptStruct_FPXREyeTrackingStartInfo_Statics::NewProp_NeedCalibration_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPXREyeTrackingStartInfo_Statics::NewProp_NeedCalibration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXREyeTrackingStartInfo_Statics::NewProp_NeedCalibration_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPXREyeTrackingStartInfo_Statics::NewProp_StartMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXREyeTrackingStartInfo_Statics::NewProp_StartMode_MetaData[] = {
		{ "Category", "PXR|EyeTracking" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPXREyeTrackingStartInfo_Statics::NewProp_StartMode = { "StartMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPXREyeTrackingStartInfo, StartMode), Z_Construct_UEnum_PICOXRMotionTracking_EPXREyeTrackingMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FPXREyeTrackingStartInfo_Statics::NewProp_StartMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXREyeTrackingStartInfo_Statics::NewProp_StartMode_MetaData)) }; // 4106211548
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPXREyeTrackingStartInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXREyeTrackingStartInfo_Statics::NewProp_NeedCalibration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXREyeTrackingStartInfo_Statics::NewProp_StartMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXREyeTrackingStartInfo_Statics::NewProp_StartMode,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPXREyeTrackingStartInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRMotionTracking,
		nullptr,
		&NewStructOps,
		"PXREyeTrackingStartInfo",
		sizeof(FPXREyeTrackingStartInfo),
		alignof(FPXREyeTrackingStartInfo),
		Z_Construct_UScriptStruct_FPXREyeTrackingStartInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXREyeTrackingStartInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPXREyeTrackingStartInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXREyeTrackingStartInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPXREyeTrackingStartInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_PXREyeTrackingStartInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PXREyeTrackingStartInfo.InnerSingleton, Z_Construct_UScriptStruct_FPXREyeTrackingStartInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PXREyeTrackingStartInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PXREyeTrackingStopInfo;
class UScriptStruct* FPXREyeTrackingStopInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PXREyeTrackingStopInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PXREyeTrackingStopInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPXREyeTrackingStopInfo, Z_Construct_UPackage__Script_PICOXRMotionTracking(), TEXT("PXREyeTrackingStopInfo"));
	}
	return Z_Registration_Info_UScriptStruct_PXREyeTrackingStopInfo.OuterSingleton;
}
template<> PICOXRMOTIONTRACKING_API UScriptStruct* StaticStruct<FPXREyeTrackingStopInfo>()
{
	return FPXREyeTrackingStopInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPXREyeTrackingStopInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXREyeTrackingStopInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPXREyeTrackingStopInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPXREyeTrackingStopInfo>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPXREyeTrackingStopInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRMotionTracking,
		nullptr,
		&NewStructOps,
		"PXREyeTrackingStopInfo",
		sizeof(FPXREyeTrackingStopInfo),
		alignof(FPXREyeTrackingStopInfo),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPXREyeTrackingStopInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXREyeTrackingStopInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPXREyeTrackingStopInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_PXREyeTrackingStopInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PXREyeTrackingStopInfo.InnerSingleton, Z_Construct_UScriptStruct_FPXREyeTrackingStopInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PXREyeTrackingStopInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PXREyeTrackingDataGetInfo;
class UScriptStruct* FPXREyeTrackingDataGetInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PXREyeTrackingDataGetInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PXREyeTrackingDataGetInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPXREyeTrackingDataGetInfo, Z_Construct_UPackage__Script_PICOXRMotionTracking(), TEXT("PXREyeTrackingDataGetInfo"));
	}
	return Z_Registration_Info_UScriptStruct_PXREyeTrackingDataGetInfo.OuterSingleton;
}
template<> PICOXRMOTIONTRACKING_API UScriptStruct* StaticStruct<FPXREyeTrackingDataGetInfo>()
{
	return FPXREyeTrackingDataGetInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPXREyeTrackingDataGetInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayTime_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_DisplayTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueryPosition_MetaData[];
#endif
		static void NewProp_QueryPosition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_QueryPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueryOrientation_MetaData[];
#endif
		static void NewProp_QueryOrientation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_QueryOrientation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXREyeTrackingDataGetInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPXREyeTrackingDataGetInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPXREyeTrackingDataGetInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXREyeTrackingDataGetInfo_Statics::NewProp_DisplayTime_MetaData[] = {
		{ "Category", "PXR|EyeTracking" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FPXREyeTrackingDataGetInfo_Statics::NewProp_DisplayTime = { "DisplayTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPXREyeTrackingDataGetInfo, DisplayTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FPXREyeTrackingDataGetInfo_Statics::NewProp_DisplayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXREyeTrackingDataGetInfo_Statics::NewProp_DisplayTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXREyeTrackingDataGetInfo_Statics::NewProp_QueryPosition_MetaData[] = {
		{ "Category", "PXR|EyeTracking" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPXREyeTrackingDataGetInfo_Statics::NewProp_QueryPosition_SetBit(void* Obj)
	{
		((FPXREyeTrackingDataGetInfo*)Obj)->QueryPosition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPXREyeTrackingDataGetInfo_Statics::NewProp_QueryPosition = { "QueryPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPXREyeTrackingDataGetInfo), &Z_Construct_UScriptStruct_FPXREyeTrackingDataGetInfo_Statics::NewProp_QueryPosition_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPXREyeTrackingDataGetInfo_Statics::NewProp_QueryPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXREyeTrackingDataGetInfo_Statics::NewProp_QueryPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXREyeTrackingDataGetInfo_Statics::NewProp_QueryOrientation_MetaData[] = {
		{ "Category", "PXR|EyeTracking" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPXREyeTrackingDataGetInfo_Statics::NewProp_QueryOrientation_SetBit(void* Obj)
	{
		((FPXREyeTrackingDataGetInfo*)Obj)->QueryOrientation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPXREyeTrackingDataGetInfo_Statics::NewProp_QueryOrientation = { "QueryOrientation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPXREyeTrackingDataGetInfo), &Z_Construct_UScriptStruct_FPXREyeTrackingDataGetInfo_Statics::NewProp_QueryOrientation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPXREyeTrackingDataGetInfo_Statics::NewProp_QueryOrientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXREyeTrackingDataGetInfo_Statics::NewProp_QueryOrientation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPXREyeTrackingDataGetInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXREyeTrackingDataGetInfo_Statics::NewProp_DisplayTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXREyeTrackingDataGetInfo_Statics::NewProp_QueryPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXREyeTrackingDataGetInfo_Statics::NewProp_QueryOrientation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPXREyeTrackingDataGetInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRMotionTracking,
		nullptr,
		&NewStructOps,
		"PXREyeTrackingDataGetInfo",
		sizeof(FPXREyeTrackingDataGetInfo),
		alignof(FPXREyeTrackingDataGetInfo),
		Z_Construct_UScriptStruct_FPXREyeTrackingDataGetInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXREyeTrackingDataGetInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPXREyeTrackingDataGetInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXREyeTrackingDataGetInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPXREyeTrackingDataGetInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_PXREyeTrackingDataGetInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PXREyeTrackingDataGetInfo.InnerSingleton, Z_Construct_UScriptStruct_FPXREyeTrackingDataGetInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PXREyeTrackingDataGetInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PXRPerEyeData;
class UScriptStruct* FPXRPerEyeData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PXRPerEyeData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PXRPerEyeData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPXRPerEyeData, Z_Construct_UPackage__Script_PICOXRMotionTracking(), TEXT("PXRPerEyeData"));
	}
	return Z_Registration_Info_UScriptStruct_PXRPerEyeData.OuterSingleton;
}
template<> PICOXRMOTIONTRACKING_API UScriptStruct* StaticStruct<FPXRPerEyeData>()
{
	return FPXRPerEyeData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPXRPerEyeData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_EyeType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EyeType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EyeType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Orientation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsPoseValid_MetaData[];
#endif
		static void NewProp_bIsPoseValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPoseValid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Openness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Openness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsOpennessValid_MetaData[];
#endif
		static void NewProp_bIsOpennessValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsOpennessValid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPXRPerEyeData>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::NewProp_EyeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::NewProp_EyeType_MetaData[] = {
		{ "Category", "PXR|EyeTracking" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::NewProp_EyeType = { "EyeType", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPXRPerEyeData, EyeType), Z_Construct_UEnum_PICOXRMotionTracking_EPICOEye, METADATA_PARAMS(Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::NewProp_EyeType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::NewProp_EyeType_MetaData)) }; // 2329218169
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "PXR|EyeTracking" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPXRPerEyeData, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::NewProp_Orientation_MetaData[] = {
		{ "Category", "PXR|EyeTracking" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPXRPerEyeData, Orientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::NewProp_Orientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::NewProp_Orientation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::NewProp_bIsPoseValid_MetaData[] = {
		{ "Category", "PXR|EyeTracking" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::NewProp_bIsPoseValid_SetBit(void* Obj)
	{
		((FPXRPerEyeData*)Obj)->bIsPoseValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::NewProp_bIsPoseValid = { "bIsPoseValid", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPXRPerEyeData), &Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::NewProp_bIsPoseValid_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::NewProp_bIsPoseValid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::NewProp_bIsPoseValid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::NewProp_Openness_MetaData[] = {
		{ "Category", "PXR|EyeTracking" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::NewProp_Openness = { "Openness", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPXRPerEyeData, Openness), METADATA_PARAMS(Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::NewProp_Openness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::NewProp_Openness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::NewProp_bIsOpennessValid_MetaData[] = {
		{ "Category", "PXR|EyeTracking" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::NewProp_bIsOpennessValid_SetBit(void* Obj)
	{
		((FPXRPerEyeData*)Obj)->bIsOpennessValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::NewProp_bIsOpennessValid = { "bIsOpennessValid", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPXRPerEyeData), &Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::NewProp_bIsOpennessValid_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::NewProp_bIsOpennessValid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::NewProp_bIsOpennessValid_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::NewProp_EyeType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::NewProp_EyeType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::NewProp_Orientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::NewProp_bIsPoseValid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::NewProp_Openness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::NewProp_bIsOpennessValid,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRMotionTracking,
		nullptr,
		&NewStructOps,
		"PXRPerEyeData",
		sizeof(FPXRPerEyeData),
		alignof(FPXRPerEyeData),
		Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPXRPerEyeData()
	{
		if (!Z_Registration_Info_UScriptStruct_PXRPerEyeData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PXRPerEyeData.InnerSingleton, Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PXRPerEyeData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PXREyeTrackingData;
class UScriptStruct* FPXREyeTrackingData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PXREyeTrackingData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PXREyeTrackingData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPXREyeTrackingData, Z_Construct_UPackage__Script_PICOXRMotionTracking(), TEXT("PXREyeTrackingData"));
	}
	return Z_Registration_Info_UScriptStruct_PXREyeTrackingData.OuterSingleton;
}
template<> PICOXRMOTIONTRACKING_API UScriptStruct* StaticStruct<FPXREyeTrackingData>()
{
	return FPXREyeTrackingData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPXREyeTrackingData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_PerEyeDatas_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerEyeDatas_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PerEyeDatas;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXREyeTrackingData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPXREyeTrackingData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPXREyeTrackingData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPXREyeTrackingData_Statics::NewProp_PerEyeDatas_Inner = { "PerEyeDatas", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPXRPerEyeData, METADATA_PARAMS(nullptr, 0) }; // 714747774
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXREyeTrackingData_Statics::NewProp_PerEyeDatas_MetaData[] = {
		{ "Category", "PXR|EyeTracking" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPXREyeTrackingData_Statics::NewProp_PerEyeDatas = { "PerEyeDatas", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPXREyeTrackingData, PerEyeDatas), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPXREyeTrackingData_Statics::NewProp_PerEyeDatas_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXREyeTrackingData_Statics::NewProp_PerEyeDatas_MetaData)) }; // 714747774
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPXREyeTrackingData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXREyeTrackingData_Statics::NewProp_PerEyeDatas_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXREyeTrackingData_Statics::NewProp_PerEyeDatas,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPXREyeTrackingData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRMotionTracking,
		nullptr,
		&NewStructOps,
		"PXREyeTrackingData",
		sizeof(FPXREyeTrackingData),
		alignof(FPXREyeTrackingData),
		Z_Construct_UScriptStruct_FPXREyeTrackingData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXREyeTrackingData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPXREyeTrackingData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXREyeTrackingData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPXREyeTrackingData()
	{
		if (!Z_Registration_Info_UScriptStruct_PXREyeTrackingData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PXREyeTrackingData.InnerSingleton, Z_Construct_UScriptStruct_FPXREyeTrackingData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PXREyeTrackingData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PXREyePupilInfo;
class UScriptStruct* FPXREyePupilInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PXREyePupilInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PXREyePupilInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPXREyePupilInfo, Z_Construct_UPackage__Script_PICOXRMotionTracking(), TEXT("PXREyePupilInfo"));
	}
	return Z_Registration_Info_UScriptStruct_PXREyePupilInfo.OuterSingleton;
}
template<> PICOXRMOTIONTRACKING_API UScriptStruct* StaticStruct<FPXREyePupilInfo>()
{
	return FPXREyePupilInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPXREyePupilInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftEyePupilDiameter_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LeftEyePupilDiameter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightEyePupilDiameter_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RightEyePupilDiameter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftEyePupilPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LeftEyePupilPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightEyePupilPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RightEyePupilPosition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXREyePupilInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPXREyePupilInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPXREyePupilInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXREyePupilInfo_Statics::NewProp_LeftEyePupilDiameter_MetaData[] = {
		{ "Category", "PXR|EyeTracking" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPXREyePupilInfo_Statics::NewProp_LeftEyePupilDiameter = { "LeftEyePupilDiameter", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPXREyePupilInfo, LeftEyePupilDiameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FPXREyePupilInfo_Statics::NewProp_LeftEyePupilDiameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXREyePupilInfo_Statics::NewProp_LeftEyePupilDiameter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXREyePupilInfo_Statics::NewProp_RightEyePupilDiameter_MetaData[] = {
		{ "Category", "PXR|EyeTracking" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPXREyePupilInfo_Statics::NewProp_RightEyePupilDiameter = { "RightEyePupilDiameter", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPXREyePupilInfo, RightEyePupilDiameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FPXREyePupilInfo_Statics::NewProp_RightEyePupilDiameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXREyePupilInfo_Statics::NewProp_RightEyePupilDiameter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXREyePupilInfo_Statics::NewProp_LeftEyePupilPosition_MetaData[] = {
		{ "Category", "PXR|EyeTracking" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPXREyePupilInfo_Statics::NewProp_LeftEyePupilPosition = { "LeftEyePupilPosition", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPXREyePupilInfo, LeftEyePupilPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FPXREyePupilInfo_Statics::NewProp_LeftEyePupilPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXREyePupilInfo_Statics::NewProp_LeftEyePupilPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXREyePupilInfo_Statics::NewProp_RightEyePupilPosition_MetaData[] = {
		{ "Category", "PXR|EyeTracking" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPXREyePupilInfo_Statics::NewProp_RightEyePupilPosition = { "RightEyePupilPosition", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPXREyePupilInfo, RightEyePupilPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FPXREyePupilInfo_Statics::NewProp_RightEyePupilPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXREyePupilInfo_Statics::NewProp_RightEyePupilPosition_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPXREyePupilInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXREyePupilInfo_Statics::NewProp_LeftEyePupilDiameter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXREyePupilInfo_Statics::NewProp_RightEyePupilDiameter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXREyePupilInfo_Statics::NewProp_LeftEyePupilPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXREyePupilInfo_Statics::NewProp_RightEyePupilPosition,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPXREyePupilInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRMotionTracking,
		nullptr,
		&NewStructOps,
		"PXREyePupilInfo",
		sizeof(FPXREyePupilInfo),
		alignof(FPXREyePupilInfo),
		Z_Construct_UScriptStruct_FPXREyePupilInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXREyePupilInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPXREyePupilInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXREyePupilInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPXREyePupilInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_PXREyePupilInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PXREyePupilInfo.InnerSingleton, Z_Construct_UScriptStruct_FPXREyePupilInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PXREyePupilInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMotionTracking_Public_PXR_MotionTrackingTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMotionTracking_Public_PXR_MotionTrackingTypes_h_Statics::EnumInfo[] = {
		{ EPXRTrackingStateCode_StaticEnum, TEXT("EPXRTrackingStateCode"), &Z_Registration_Info_UEnum_EPXRTrackingStateCode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 326969825U) },
		{ EPXRFaceBlendShape_StaticEnum, TEXT("EPXRFaceBlendShape"), &Z_Registration_Info_UEnum_EPXRFaceBlendShape, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3260394174U) },
		{ EPXRFaceTrackingMode_StaticEnum, TEXT("EPXRFaceTrackingMode"), &Z_Registration_Info_UEnum_EPXRFaceTrackingMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 372939206U) },
		{ EPICOEye_StaticEnum, TEXT("EPICOEye"), &Z_Registration_Info_UEnum_EPICOEye, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2329218169U) },
		{ EPXREyeTrackingMode_StaticEnum, TEXT("EPXREyeTrackingMode"), &Z_Registration_Info_UEnum_EPXREyeTrackingMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4106211548U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMotionTracking_Public_PXR_MotionTrackingTypes_h_Statics::ScriptStructInfo[] = {
		{ FPXRFaceTrackingState::StaticStruct, Z_Construct_UScriptStruct_FPXRFaceTrackingState_Statics::NewStructOps, TEXT("PXRFaceTrackingState"), &Z_Registration_Info_UScriptStruct_PXRFaceTrackingState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPXRFaceTrackingState), 1697939155U) },
		{ FPXRFaceTrackingStartInfo::StaticStruct, Z_Construct_UScriptStruct_FPXRFaceTrackingStartInfo_Statics::NewStructOps, TEXT("PXRFaceTrackingStartInfo"), &Z_Registration_Info_UScriptStruct_PXRFaceTrackingStartInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPXRFaceTrackingStartInfo), 1393294773U) },
		{ FPXRFaceTrackingStopInfo::StaticStruct, Z_Construct_UScriptStruct_FPXRFaceTrackingStopInfo_Statics::NewStructOps, TEXT("PXRFaceTrackingStopInfo"), &Z_Registration_Info_UScriptStruct_PXRFaceTrackingStopInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPXRFaceTrackingStopInfo), 1673281747U) },
		{ FPXRFaceTrackingDataGetInfo::StaticStruct, Z_Construct_UScriptStruct_FPXRFaceTrackingDataGetInfo_Statics::NewStructOps, TEXT("PXRFaceTrackingDataGetInfo"), &Z_Registration_Info_UScriptStruct_PXRFaceTrackingDataGetInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPXRFaceTrackingDataGetInfo), 1675792962U) },
		{ FPXRFaceTrackingData::StaticStruct, Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::NewStructOps, TEXT("PXRFaceTrackingData"), &Z_Registration_Info_UScriptStruct_PXRFaceTrackingData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPXRFaceTrackingData), 348122990U) },
		{ FPXREyeTrackingState::StaticStruct, Z_Construct_UScriptStruct_FPXREyeTrackingState_Statics::NewStructOps, TEXT("PXREyeTrackingState"), &Z_Registration_Info_UScriptStruct_PXREyeTrackingState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPXREyeTrackingState), 3367826688U) },
		{ FPXREyeTrackingStartInfo::StaticStruct, Z_Construct_UScriptStruct_FPXREyeTrackingStartInfo_Statics::NewStructOps, TEXT("PXREyeTrackingStartInfo"), &Z_Registration_Info_UScriptStruct_PXREyeTrackingStartInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPXREyeTrackingStartInfo), 3981650339U) },
		{ FPXREyeTrackingStopInfo::StaticStruct, Z_Construct_UScriptStruct_FPXREyeTrackingStopInfo_Statics::NewStructOps, TEXT("PXREyeTrackingStopInfo"), &Z_Registration_Info_UScriptStruct_PXREyeTrackingStopInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPXREyeTrackingStopInfo), 3425061165U) },
		{ FPXREyeTrackingDataGetInfo::StaticStruct, Z_Construct_UScriptStruct_FPXREyeTrackingDataGetInfo_Statics::NewStructOps, TEXT("PXREyeTrackingDataGetInfo"), &Z_Registration_Info_UScriptStruct_PXREyeTrackingDataGetInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPXREyeTrackingDataGetInfo), 4034837343U) },
		{ FPXRPerEyeData::StaticStruct, Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::NewStructOps, TEXT("PXRPerEyeData"), &Z_Registration_Info_UScriptStruct_PXRPerEyeData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPXRPerEyeData), 714747774U) },
		{ FPXREyeTrackingData::StaticStruct, Z_Construct_UScriptStruct_FPXREyeTrackingData_Statics::NewStructOps, TEXT("PXREyeTrackingData"), &Z_Registration_Info_UScriptStruct_PXREyeTrackingData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPXREyeTrackingData), 1845148172U) },
		{ FPXREyePupilInfo::StaticStruct, Z_Construct_UScriptStruct_FPXREyePupilInfo_Statics::NewStructOps, TEXT("PXREyePupilInfo"), &Z_Registration_Info_UScriptStruct_PXREyePupilInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPXREyePupilInfo), 2529032540U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMotionTracking_Public_PXR_MotionTrackingTypes_h_1810323110(TEXT("/Script/PICOXRMotionTracking"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMotionTracking_Public_PXR_MotionTrackingTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMotionTracking_Public_PXR_MotionTrackingTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMotionTracking_Public_PXR_MotionTrackingTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMotionTracking_Public_PXR_MotionTrackingTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
