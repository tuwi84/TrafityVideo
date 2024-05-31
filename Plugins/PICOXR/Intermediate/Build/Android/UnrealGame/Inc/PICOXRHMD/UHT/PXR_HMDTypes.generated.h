// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PXR_HMDTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PICOXRHMD_PXR_HMDTypes_generated_h
#error "PXR_HMDTypes.generated.h already included, missing '#pragma once' in PXR_HMDTypes.h"
#endif
#define PICOXRHMD_PXR_HMDTypes_generated_h

#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRHMD_Public_PXR_HMDTypes_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPXRSplashDesc_Statics; \
	PICOXRHMD_API static class UScriptStruct* StaticStruct();


template<> PICOXRHMD_API UScriptStruct* StaticStruct<struct FPXRSplashDesc>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRHMD_Public_PXR_HMDTypes_h


#define FOREACH_ENUM_EPICOXRCOORDINATETYPE(op) \
	op(EPICOXRCoordinateType::Local) \
	op(EPICOXRCoordinateType::Global_BoundarySystem) 

enum class EPICOXRCoordinateType : uint8;
template<> struct TIsUEnumClass<EPICOXRCoordinateType> { enum { Value = true }; };
template<> PICOXRHMD_API UEnum* StaticEnum<EPICOXRCoordinateType>();

#define FOREACH_ENUM_EPICOXRADAPTIVERESOLUTIONPOWERSETTING(op) \
	op(EPICOXRAdaptiveResolutionPowerSetting::HighQuality) \
	op(EPICOXRAdaptiveResolutionPowerSetting::Balanced) \
	op(EPICOXRAdaptiveResolutionPowerSetting::BatterySaving) 

enum class EPICOXRAdaptiveResolutionPowerSetting : uint8;
template<> struct TIsUEnumClass<EPICOXRAdaptiveResolutionPowerSetting> { enum { Value = true }; };
template<> PICOXRHMD_API UEnum* StaticEnum<EPICOXRAdaptiveResolutionPowerSetting>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
