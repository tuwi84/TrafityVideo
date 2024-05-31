// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PicoSpatialAudio/Public/PicoSpatializationSourceSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePicoSpatializationSourceSettings() {}
// Cross Module References
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_USpatializationPluginSourceSettingsBase();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	PICOSPATIALAUDIO_API UClass* Z_Construct_UClass_UPicoSpatializationSourceSettings();
	PICOSPATIALAUDIO_API UClass* Z_Construct_UClass_UPicoSpatializationSourceSettings_NoRegister();
	PICOSPATIALAUDIO_API UEnum* Z_Construct_UEnum_PicoSpatialAudio_EPxrAudioSpatializer_SourceAttenuationMode();
	UPackage* Z_Construct_UPackage__Script_PicoSpatialAudio();
// End Cross Module References
	DEFINE_FUNCTION(UPicoSpatializationSourceSettings::execSetSoundSourcePolarPatternMaterial)
	{
		P_GET_OBJECT(UMaterial,Z_Param_Material);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSoundSourcePolarPatternMaterial(Z_Param_Material);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoSpatializationSourceSettings::execSetSoundSourcePolarPatternVisualization)
	{
		P_GET_UBOOL(Z_Param_OnOff);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSoundSourcePolarPatternVisualization(Z_Param_OnOff);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoSpatializationSourceSettings::execSetSoundSourceDirectivity)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Alpha);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Order);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSoundSourceDirectivity(Z_Param_Alpha,Z_Param_Order);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoSpatializationSourceSettings::execSetSoundSourceDoppler)
	{
		P_GET_UBOOL(Z_Param_On);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSoundSourceDoppler(Z_Param_On);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoSpatializationSourceSettings::execSetSoundSourceAttenuationDistance)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Min);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Max);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSoundSourceAttenuationDistance(Z_Param_Min,Z_Param_Max);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoSpatializationSourceSettings::execSetSoundSourceSize)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSoundSourceSize(Z_Param_Radius);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoSpatializationSourceSettings::execSetSoundSourceReflectionGain)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_GainDb);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSoundSourceReflectionGain(Z_Param_GainDb);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoSpatializationSourceSettings::execSetSoundSourceGain)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_GainDb);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSoundSourceGain(Z_Param_GainDb);
		P_NATIVE_END;
	}
	void UPicoSpatializationSourceSettings::StaticRegisterNativesUPicoSpatializationSourceSettings()
	{
		UClass* Class = UPicoSpatializationSourceSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetSoundSourceAttenuationDistance", &UPicoSpatializationSourceSettings::execSetSoundSourceAttenuationDistance },
			{ "SetSoundSourceDirectivity", &UPicoSpatializationSourceSettings::execSetSoundSourceDirectivity },
			{ "SetSoundSourceDoppler", &UPicoSpatializationSourceSettings::execSetSoundSourceDoppler },
			{ "SetSoundSourceGain", &UPicoSpatializationSourceSettings::execSetSoundSourceGain },
			{ "SetSoundSourcePolarPatternMaterial", &UPicoSpatializationSourceSettings::execSetSoundSourcePolarPatternMaterial },
			{ "SetSoundSourcePolarPatternVisualization", &UPicoSpatializationSourceSettings::execSetSoundSourcePolarPatternVisualization },
			{ "SetSoundSourceReflectionGain", &UPicoSpatializationSourceSettings::execSetSoundSourceReflectionGain },
			{ "SetSoundSourceSize", &UPicoSpatializationSourceSettings::execSetSoundSourceSize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceAttenuationDistance_Statics
	{
		struct PicoSpatializationSourceSettings_eventSetSoundSourceAttenuationDistance_Parms
		{
			float Min;
			float Max;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Min;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Max;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceAttenuationDistance_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PicoSpatializationSourceSettings_eventSetSoundSourceAttenuationDistance_Parms, Min), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceAttenuationDistance_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PicoSpatializationSourceSettings_eventSetSoundSourceAttenuationDistance_Parms, Max), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceAttenuationDistance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceAttenuationDistance_Statics::NewProp_Min,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceAttenuationDistance_Statics::NewProp_Max,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceAttenuationDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "PicoSpatialAudio|SoundSourceSpatializationSettings" },
		{ "Comment", "// Sets the sound source attenuation distance (meters), applies, and updates\n" },
		{ "ModuleRelativePath", "Public/PicoSpatializationSourceSettings.h" },
		{ "ToolTip", "Sets the sound source attenuation distance (meters), applies, and updates" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceAttenuationDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoSpatializationSourceSettings, nullptr, "SetSoundSourceAttenuationDistance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceAttenuationDistance_Statics::PicoSpatializationSourceSettings_eventSetSoundSourceAttenuationDistance_Parms), Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceAttenuationDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceAttenuationDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceAttenuationDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceAttenuationDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceAttenuationDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceAttenuationDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceDirectivity_Statics
	{
		struct PicoSpatializationSourceSettings_eventSetSoundSourceDirectivity_Parms
		{
			float Alpha;
			float Order;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Order;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceDirectivity_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PicoSpatializationSourceSettings_eventSetSoundSourceDirectivity_Parms, Alpha), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceDirectivity_Statics::NewProp_Order = { "Order", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PicoSpatializationSourceSettings_eventSetSoundSourceDirectivity_Parms, Order), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceDirectivity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceDirectivity_Statics::NewProp_Alpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceDirectivity_Statics::NewProp_Order,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceDirectivity_Statics::Function_MetaDataParams[] = {
		{ "Category", "PicoSpatialAudio|SoundSourceSpatializationSettings" },
		{ "Comment", "// Sets source directivity, applies, and updates\n" },
		{ "ModuleRelativePath", "Public/PicoSpatializationSourceSettings.h" },
		{ "ToolTip", "Sets source directivity, applies, and updates" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceDirectivity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoSpatializationSourceSettings, nullptr, "SetSoundSourceDirectivity", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceDirectivity_Statics::PicoSpatializationSourceSettings_eventSetSoundSourceDirectivity_Parms), Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceDirectivity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceDirectivity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceDirectivity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceDirectivity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceDirectivity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceDirectivity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceDoppler_Statics
	{
		struct PicoSpatializationSourceSettings_eventSetSoundSourceDoppler_Parms
		{
			bool On;
		};
		static void NewProp_On_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_On;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceDoppler_Statics::NewProp_On_SetBit(void* Obj)
	{
		((PicoSpatializationSourceSettings_eventSetSoundSourceDoppler_Parms*)Obj)->On = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceDoppler_Statics::NewProp_On = { "On", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PicoSpatializationSourceSettings_eventSetSoundSourceDoppler_Parms), &Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceDoppler_Statics::NewProp_On_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceDoppler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceDoppler_Statics::NewProp_On,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceDoppler_Statics::Function_MetaDataParams[] = {
		{ "Category", "PicoSpatialAudio|SoundSourceSpatializationSettings" },
		{ "Comment", "// Sets on/off status of source doppler effect, applies, and updates\n" },
		{ "ModuleRelativePath", "Public/PicoSpatializationSourceSettings.h" },
		{ "ToolTip", "Sets on/off status of source doppler effect, applies, and updates" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceDoppler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoSpatializationSourceSettings, nullptr, "SetSoundSourceDoppler", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceDoppler_Statics::PicoSpatializationSourceSettings_eventSetSoundSourceDoppler_Parms), Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceDoppler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceDoppler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceDoppler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceDoppler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceDoppler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceDoppler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceGain_Statics
	{
		struct PicoSpatializationSourceSettings_eventSetSoundSourceGain_Parms
		{
			float GainDb;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GainDb;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceGain_Statics::NewProp_GainDb = { "GainDb", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PicoSpatializationSourceSettings_eventSetSoundSourceGain_Parms, GainDb), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceGain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceGain_Statics::NewProp_GainDb,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceGain_Statics::Function_MetaDataParams[] = {
		{ "Category", "PicoSpatialAudio|SoundSourceSpatializationSettings" },
		{ "Comment", "// Sets the sound source gain, applies, and updates\n" },
		{ "ModuleRelativePath", "Public/PicoSpatializationSourceSettings.h" },
		{ "ToolTip", "Sets the sound source gain, applies, and updates" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceGain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoSpatializationSourceSettings, nullptr, "SetSoundSourceGain", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceGain_Statics::PicoSpatializationSourceSettings_eventSetSoundSourceGain_Parms), Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceGain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceGain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceGain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceGain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceGain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceGain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourcePolarPatternMaterial_Statics
	{
		struct PicoSpatializationSourceSettings_eventSetSoundSourcePolarPatternMaterial_Parms
		{
			UMaterial* Material;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourcePolarPatternMaterial_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PicoSpatializationSourceSettings_eventSetSoundSourcePolarPatternMaterial_Parms, Material), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourcePolarPatternMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourcePolarPatternMaterial_Statics::NewProp_Material,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourcePolarPatternMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "PicoSpatialAudio|SoundSourceSpatializationSettings" },
		{ "ModuleRelativePath", "Public/PicoSpatializationSourceSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourcePolarPatternMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoSpatializationSourceSettings, nullptr, "SetSoundSourcePolarPatternMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourcePolarPatternMaterial_Statics::PicoSpatializationSourceSettings_eventSetSoundSourcePolarPatternMaterial_Parms), Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourcePolarPatternMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourcePolarPatternMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourcePolarPatternMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourcePolarPatternMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourcePolarPatternMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourcePolarPatternMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourcePolarPatternVisualization_Statics
	{
		struct PicoSpatializationSourceSettings_eventSetSoundSourcePolarPatternVisualization_Parms
		{
			bool OnOff;
		};
		static void NewProp_OnOff_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_OnOff;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourcePolarPatternVisualization_Statics::NewProp_OnOff_SetBit(void* Obj)
	{
		((PicoSpatializationSourceSettings_eventSetSoundSourcePolarPatternVisualization_Parms*)Obj)->OnOff = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourcePolarPatternVisualization_Statics::NewProp_OnOff = { "OnOff", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PicoSpatializationSourceSettings_eventSetSoundSourcePolarPatternVisualization_Parms), &Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourcePolarPatternVisualization_Statics::NewProp_OnOff_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourcePolarPatternVisualization_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourcePolarPatternVisualization_Statics::NewProp_OnOff,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourcePolarPatternVisualization_Statics::Function_MetaDataParams[] = {
		{ "Category", "PicoSpatialAudio|SoundSourceSpatializationSettings" },
		{ "ModuleRelativePath", "Public/PicoSpatializationSourceSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourcePolarPatternVisualization_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoSpatializationSourceSettings, nullptr, "SetSoundSourcePolarPatternVisualization", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourcePolarPatternVisualization_Statics::PicoSpatializationSourceSettings_eventSetSoundSourcePolarPatternVisualization_Parms), Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourcePolarPatternVisualization_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourcePolarPatternVisualization_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourcePolarPatternVisualization_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourcePolarPatternVisualization_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourcePolarPatternVisualization()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourcePolarPatternVisualization_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceReflectionGain_Statics
	{
		struct PicoSpatializationSourceSettings_eventSetSoundSourceReflectionGain_Parms
		{
			float GainDb;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GainDb;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceReflectionGain_Statics::NewProp_GainDb = { "GainDb", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PicoSpatializationSourceSettings_eventSetSoundSourceReflectionGain_Parms, GainDb), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceReflectionGain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceReflectionGain_Statics::NewProp_GainDb,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceReflectionGain_Statics::Function_MetaDataParams[] = {
		{ "Category", "PicoSpatialAudio|SoundSourceSpatializationSettings" },
		{ "Comment", "// Sets the sound source reflection gain, applies, and updates\n" },
		{ "ModuleRelativePath", "Public/PicoSpatializationSourceSettings.h" },
		{ "ToolTip", "Sets the sound source reflection gain, applies, and updates" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceReflectionGain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoSpatializationSourceSettings, nullptr, "SetSoundSourceReflectionGain", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceReflectionGain_Statics::PicoSpatializationSourceSettings_eventSetSoundSourceReflectionGain_Parms), Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceReflectionGain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceReflectionGain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceReflectionGain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceReflectionGain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceReflectionGain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceReflectionGain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceSize_Statics
	{
		struct PicoSpatializationSourceSettings_eventSetSoundSourceSize_Parms
		{
			float Radius;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceSize_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PicoSpatializationSourceSettings_eventSetSoundSourceSize_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceSize_Statics::NewProp_Radius,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "PicoSpatialAudio|SoundSourceSpatializationSettings" },
		{ "Comment", "// Sets the sound source volumetric size (radius), applies, and updates\n" },
		{ "ModuleRelativePath", "Public/PicoSpatializationSourceSettings.h" },
		{ "ToolTip", "Sets the sound source volumetric size (radius), applies, and updates" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoSpatializationSourceSettings, nullptr, "SetSoundSourceSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceSize_Statics::PicoSpatializationSourceSettings_eventSetSoundSourceSize_Parms), Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPicoSpatializationSourceSettings);
	UClass* Z_Construct_UClass_UPicoSpatializationSourceSettings_NoRegister()
	{
		return UPicoSpatializationSourceSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPicoSpatializationSourceSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceGainDb_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SourceGainDb;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReflectionGainDb_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReflectionGainDb;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumetricSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumetricSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnableDoppler_MetaData[];
#endif
		static void NewProp_EnableDoppler_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableDoppler;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AttenuationMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttenuationMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AttenuationMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinAttenuationDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinAttenuationDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAttenuationDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAttenuationDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectivityAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DirectivityAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectivityOrder_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DirectivityOrder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVisualizePolarPattern_MetaData[];
#endif
		static void NewProp_bVisualizePolarPattern_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisualizePolarPattern;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PolarPatternMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PolarPatternMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPicoSpatializationSourceSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USpatializationPluginSourceSettingsBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PicoSpatialAudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPicoSpatializationSourceSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceAttenuationDistance, "SetSoundSourceAttenuationDistance" }, // 4039057651
		{ &Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceDirectivity, "SetSoundSourceDirectivity" }, // 3872669762
		{ &Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceDoppler, "SetSoundSourceDoppler" }, // 4277656704
		{ &Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceGain, "SetSoundSourceGain" }, // 93954767
		{ &Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourcePolarPatternMaterial, "SetSoundSourcePolarPatternMaterial" }, // 614461384
		{ &Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourcePolarPatternVisualization, "SetSoundSourcePolarPatternVisualization" }, // 1152797603
		{ &Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceReflectionGain, "SetSoundSourceReflectionGain" }, // 305343428
		{ &Z_Construct_UFunction_UPicoSpatializationSourceSettings_SetSoundSourceSize, "SetSoundSourceSize" }, // 155045559
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoSpatializationSourceSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PicoSpatializationSourceSettings.h" },
		{ "ModuleRelativePath", "Public/PicoSpatializationSourceSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoSpatializationSourceSettings_Statics::NewProp_SourceGainDb_MetaData[] = {
		{ "Category", "SpatializationSettings" },
		{ "ClampMax", "24.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Extra gain of the sound source (in dBFS).\n" },
		{ "ModuleRelativePath", "Public/PicoSpatializationSourceSettings.h" },
		{ "ToolTip", "Extra gain of the sound source (in dBFS)." },
		{ "UIMax", "24.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPicoSpatializationSourceSettings_Statics::NewProp_SourceGainDb = { "SourceGainDb", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPicoSpatializationSourceSettings, SourceGainDb), METADATA_PARAMS(Z_Construct_UClass_UPicoSpatializationSourceSettings_Statics::NewProp_SourceGainDb_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoSpatializationSourceSettings_Statics::NewProp_SourceGainDb_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoSpatializationSourceSettings_Statics::NewProp_ReflectionGainDb_MetaData[] = {
		{ "Category", "SpatializationSettings" },
		{ "ClampMax", "48.0" },
		{ "ClampMin", "-120.0" },
		{ "Comment", "// Reflection gain of the sound source (in dBFS).\n" },
		{ "ModuleRelativePath", "Public/PicoSpatializationSourceSettings.h" },
		{ "ToolTip", "Reflection gain of the sound source (in dBFS)." },
		{ "UIMax", "48.0" },
		{ "UIMin", "-120.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPicoSpatializationSourceSettings_Statics::NewProp_ReflectionGainDb = { "ReflectionGainDb", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPicoSpatializationSourceSettings, ReflectionGainDb), METADATA_PARAMS(Z_Construct_UClass_UPicoSpatializationSourceSettings_Statics::NewProp_ReflectionGainDb_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoSpatializationSourceSettings_Statics::NewProp_ReflectionGainDb_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoSpatializationSourceSettings_Statics::NewProp_VolumetricSize_MetaData[] = {
		{ "Category", "SpatializationSettings" },
		{ "ClampMax", "100000.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Volumetric Size (Radius) of the sound source (in meters).\n" },
		{ "ModuleRelativePath", "Public/PicoSpatializationSourceSettings.h" },
		{ "ToolTip", "Volumetric Size (Radius) of the sound source (in meters)." },
		{ "UIMax", "100000.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPicoSpatializationSourceSettings_Statics::NewProp_VolumetricSize = { "VolumetricSize", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPicoSpatializationSourceSettings, VolumetricSize), METADATA_PARAMS(Z_Construct_UClass_UPicoSpatializationSourceSettings_Statics::NewProp_VolumetricSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoSpatializationSourceSettings_Statics::NewProp_VolumetricSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoSpatializationSourceSettings_Statics::NewProp_EnableDoppler_MetaData[] = {
		{ "Category", "SpatializationSettings" },
		{ "Comment", "// Volumetric Size (Radius) of the sound source (in meters).\n" },
		{ "ModuleRelativePath", "Public/PicoSpatializationSourceSettings.h" },
		{ "ToolTip", "Volumetric Size (Radius) of the sound source (in meters)." },
	};
#endif
	void Z_Construct_UClass_UPicoSpatializationSourceSettings_Statics::NewProp_EnableDoppler_SetBit(void* Obj)
	{
		((UPicoSpatializationSourceSettings*)Obj)->EnableDoppler = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPicoSpatializationSourceSettings_Statics::NewProp_EnableDoppler = { "EnableDoppler", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPicoSpatializationSourceSettings), &Z_Construct_UClass_UPicoSpatializationSourceSettings_Statics::NewProp_EnableDoppler_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPicoSpatializationSourceSettings_Statics::NewProp_EnableDoppler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoSpatializationSourceSettings_Statics::NewProp_EnableDoppler_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPicoSpatializationSourceSettings_Statics::NewProp_AttenuationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoSpatializationSourceSettings_Statics::NewProp_AttenuationMode_MetaData[] = {
		{ "Category", "SpatializationSettings|Attenuation" },
		{ "Comment", "// Roll-off model to use for sound source distance attenuation. Select 'None' (default) to use Unreal attenuation settings\n" },
		{ "ModuleRelativePath", "Public/PicoSpatializationSourceSettings.h" },
		{ "ToolTip", "Roll-off model to use for sound source distance attenuation. Select 'None' (default) to use Unreal attenuation settings" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPicoSpatializationSourceSettings_Statics::NewProp_AttenuationMode = { "AttenuationMode", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPicoSpatializationSourceSettings, AttenuationMode), Z_Construct_UEnum_PicoSpatialAudio_EPxrAudioSpatializer_SourceAttenuationMode, METADATA_PARAMS(Z_Construct_UClass_UPicoSpatializationSourceSettings_Statics::NewProp_AttenuationMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoSpatializationSourceSettings_Statics::NewProp_AttenuationMode_MetaData)) }; // 3913749492
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoSpatializationSourceSettings_Statics::NewProp_MinAttenuationDistance_MetaData[] = {
		{ "Category", "SpatializationSettings|Attenuation" },
		{ "ClampMax", "1000000.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Minimum attenuation distance when chosen \"Inverse Squared\" attenuation mode\n" },
		{ "ModuleRelativePath", "Public/PicoSpatializationSourceSettings.h" },
		{ "ToolTip", "Minimum attenuation distance when chosen \"Inverse Squared\" attenuation mode" },
		{ "UIMax", "1000000.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPicoSpatializationSourceSettings_Statics::NewProp_MinAttenuationDistance = { "MinAttenuationDistance", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPicoSpatializationSourceSettings, MinAttenuationDistance), METADATA_PARAMS(Z_Construct_UClass_UPicoSpatializationSourceSettings_Statics::NewProp_MinAttenuationDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoSpatializationSourceSettings_Statics::NewProp_MinAttenuationDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoSpatializationSourceSettings_Statics::NewProp_MaxAttenuationDistance_MetaData[] = {
		{ "Category", "SpatializationSettings|Attenuation" },
		{ "ClampMax", "1000000.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Maximum attenuation distance when chosen \"Inverse Squared\" attenuation mode\n" },
		{ "ModuleRelativePath", "Public/PicoSpatializationSourceSettings.h" },
		{ "ToolTip", "Maximum attenuation distance when chosen \"Inverse Squared\" attenuation mode" },
		{ "UIMax", "1000000.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPicoSpatializationSourceSettings_Statics::NewProp_MaxAttenuationDistance = { "MaxAttenuationDistance", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPicoSpatializationSourceSettings, MaxAttenuationDistance), METADATA_PARAMS(Z_Construct_UClass_UPicoSpatializationSourceSettings_Statics::NewProp_MaxAttenuationDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoSpatializationSourceSettings_Statics::NewProp_MaxAttenuationDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoSpatializationSourceSettings_Statics::NewProp_DirectivityAlpha_MetaData[] = {
		{ "Category", "SpatializationSettings|Directivity" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/PicoSpatializationSourceSettings.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPicoSpatializationSourceSettings_Statics::NewProp_DirectivityAlpha = { "DirectivityAlpha", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPicoSpatializationSourceSettings, DirectivityAlpha), METADATA_PARAMS(Z_Construct_UClass_UPicoSpatializationSourceSettings_Statics::NewProp_DirectivityAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoSpatializationSourceSettings_Statics::NewProp_DirectivityAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoSpatializationSourceSettings_Statics::NewProp_DirectivityOrder_MetaData[] = {
		{ "Category", "SpatializationSettings|Directivity" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/PicoSpatializationSourceSettings.h" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPicoSpatializationSourceSettings_Statics::NewProp_DirectivityOrder = { "DirectivityOrder", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPicoSpatializationSourceSettings, DirectivityOrder), METADATA_PARAMS(Z_Construct_UClass_UPicoSpatializationSourceSettings_Statics::NewProp_DirectivityOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoSpatializationSourceSettings_Statics::NewProp_DirectivityOrder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoSpatializationSourceSettings_Statics::NewProp_bVisualizePolarPattern_MetaData[] = {
		{ "Category", "SpatializationSettings|Directivity" },
		{ "ModuleRelativePath", "Public/PicoSpatializationSourceSettings.h" },
	};
#endif
	void Z_Construct_UClass_UPicoSpatializationSourceSettings_Statics::NewProp_bVisualizePolarPattern_SetBit(void* Obj)
	{
		((UPicoSpatializationSourceSettings*)Obj)->bVisualizePolarPattern = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPicoSpatializationSourceSettings_Statics::NewProp_bVisualizePolarPattern = { "bVisualizePolarPattern", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPicoSpatializationSourceSettings), &Z_Construct_UClass_UPicoSpatializationSourceSettings_Statics::NewProp_bVisualizePolarPattern_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPicoSpatializationSourceSettings_Statics::NewProp_bVisualizePolarPattern_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoSpatializationSourceSettings_Statics::NewProp_bVisualizePolarPattern_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoSpatializationSourceSettings_Statics::NewProp_PolarPatternMaterial_MetaData[] = {
		{ "Category", "SpatializationSettings|Directivity" },
		{ "ModuleRelativePath", "Public/PicoSpatializationSourceSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPicoSpatializationSourceSettings_Statics::NewProp_PolarPatternMaterial = { "PolarPatternMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPicoSpatializationSourceSettings, PolarPatternMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPicoSpatializationSourceSettings_Statics::NewProp_PolarPatternMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoSpatializationSourceSettings_Statics::NewProp_PolarPatternMaterial_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPicoSpatializationSourceSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoSpatializationSourceSettings_Statics::NewProp_SourceGainDb,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoSpatializationSourceSettings_Statics::NewProp_ReflectionGainDb,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoSpatializationSourceSettings_Statics::NewProp_VolumetricSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoSpatializationSourceSettings_Statics::NewProp_EnableDoppler,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoSpatializationSourceSettings_Statics::NewProp_AttenuationMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoSpatializationSourceSettings_Statics::NewProp_AttenuationMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoSpatializationSourceSettings_Statics::NewProp_MinAttenuationDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoSpatializationSourceSettings_Statics::NewProp_MaxAttenuationDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoSpatializationSourceSettings_Statics::NewProp_DirectivityAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoSpatializationSourceSettings_Statics::NewProp_DirectivityOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoSpatializationSourceSettings_Statics::NewProp_bVisualizePolarPattern,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoSpatializationSourceSettings_Statics::NewProp_PolarPatternMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPicoSpatializationSourceSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPicoSpatializationSourceSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPicoSpatializationSourceSettings_Statics::ClassParams = {
		&UPicoSpatializationSourceSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPicoSpatializationSourceSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPicoSpatializationSourceSettings_Statics::PropPointers),
		0,
		0x001010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPicoSpatializationSourceSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoSpatializationSourceSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPicoSpatializationSourceSettings()
	{
		if (!Z_Registration_Info_UClass_UPicoSpatializationSourceSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPicoSpatializationSourceSettings.OuterSingleton, Z_Construct_UClass_UPicoSpatializationSourceSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPicoSpatializationSourceSettings.OuterSingleton;
	}
	template<> PICOSPATIALAUDIO_API UClass* StaticClass<UPicoSpatializationSourceSettings>()
	{
		return UPicoSpatializationSourceSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPicoSpatializationSourceSettings);
	UPicoSpatializationSourceSettings::~UPicoSpatializationSourceSettings() {}
	struct Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PicoSpatialAudio_Source_PicoSpatialAudio_Public_PicoSpatializationSourceSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PicoSpatialAudio_Source_PicoSpatialAudio_Public_PicoSpatializationSourceSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPicoSpatializationSourceSettings, UPicoSpatializationSourceSettings::StaticClass, TEXT("UPicoSpatializationSourceSettings"), &Z_Registration_Info_UClass_UPicoSpatializationSourceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPicoSpatializationSourceSettings), 1513620491U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PicoSpatialAudio_Source_PicoSpatialAudio_Public_PicoSpatializationSourceSettings_h_3081349696(TEXT("/Script/PicoSpatialAudio"),
		Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PicoSpatialAudio_Source_PicoSpatialAudio_Public_PicoSpatializationSourceSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PicoSpatialAudio_Source_PicoSpatialAudio_Public_PicoSpatializationSourceSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
