// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Pico_Matchmaking.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
class UObject;
class UPico_MatchmakingAdminSnapshot;
class UPico_MatchmakingAdminSnapshotCandidate;
class UPico_MatchmakingAdminSnapshotCandidateList;
class UPico_MatchmakingBrowseResult;
class UPico_MatchmakingEnqueueResult;
class UPico_MatchmakingEnqueueResultAndRoom;
class UPico_MatchmakingRoom;
class UPico_MatchmakingRoomList;
class UPico_MatchmakingStats;
class UPico_Room;
enum class EMatchmakingStatApproach : uint8;
struct FPicoMatchmakingOptions;
#ifdef ONLINESUBSYSTEMPICO_Pico_Matchmaking_generated_h
#error "Pico_Matchmaking.generated.h already included, missing '#pragma once' in Pico_Matchmaking.h"
#endif
#define ONLINESUBSYSTEMPICO_Pico_Matchmaking_generated_h

#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_39_DELEGATE \
struct _Script_OnlineSubsystemPico_eventMatchmakingReportResultsInsecure_Parms \
{ \
	bool bIsError; \
	int32 ErrorCode; \
	FString ErrorMessage; \
}; \
static inline void FMatchmakingReportResultsInsecure_DelegateWrapper(const FScriptDelegate& MatchmakingReportResultsInsecure, bool bIsError, int32 ErrorCode, const FString& ErrorMessage) \
{ \
	_Script_OnlineSubsystemPico_eventMatchmakingReportResultsInsecure_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorCode=ErrorCode; \
	Parms.ErrorMessage=ErrorMessage; \
	MatchmakingReportResultsInsecure.ProcessDelegate<UObject>(&Parms); \
}


#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_40_DELEGATE \
struct _Script_OnlineSubsystemPico_eventMatchmakingGetStats_Parms \
{ \
	bool bIsError; \
	int32 ErrorCode; \
	FString ErrorMessage; \
	UPico_MatchmakingStats* MatchmakingStats; \
}; \
static inline void FMatchmakingGetStats_DelegateWrapper(const FScriptDelegate& MatchmakingGetStats, bool bIsError, int32 ErrorCode, const FString& ErrorMessage, UPico_MatchmakingStats* MatchmakingStats) \
{ \
	_Script_OnlineSubsystemPico_eventMatchmakingGetStats_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorCode=ErrorCode; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.MatchmakingStats=MatchmakingStats; \
	MatchmakingGetStats.ProcessDelegate<UObject>(&Parms); \
}


#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_41_DELEGATE \
struct _Script_OnlineSubsystemPico_eventMatchmakingBrowse2_Parms \
{ \
	bool bIsError; \
	int32 ErrorCode; \
	FString ErrorMessage; \
	UPico_MatchmakingBrowseResult* MatchmakingBrowseResult; \
}; \
static inline void FMatchmakingBrowse2_DelegateWrapper(const FScriptDelegate& MatchmakingBrowse2, bool bIsError, int32 ErrorCode, const FString& ErrorMessage, UPico_MatchmakingBrowseResult* MatchmakingBrowseResult) \
{ \
	_Script_OnlineSubsystemPico_eventMatchmakingBrowse2_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorCode=ErrorCode; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.MatchmakingBrowseResult=MatchmakingBrowseResult; \
	MatchmakingBrowse2.ProcessDelegate<UObject>(&Parms); \
}


#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_42_DELEGATE \
struct _Script_OnlineSubsystemPico_eventMatchmakingBrowse2CustomPage_Parms \
{ \
	bool bIsError; \
	int32 ErrorCode; \
	FString ErrorMessage; \
	UPico_MatchmakingBrowseResult* MatchmakingBrowseResult; \
}; \
static inline void FMatchmakingBrowse2CustomPage_DelegateWrapper(const FScriptDelegate& MatchmakingBrowse2CustomPage, bool bIsError, int32 ErrorCode, const FString& ErrorMessage, UPico_MatchmakingBrowseResult* MatchmakingBrowseResult) \
{ \
	_Script_OnlineSubsystemPico_eventMatchmakingBrowse2CustomPage_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorCode=ErrorCode; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.MatchmakingBrowseResult=MatchmakingBrowseResult; \
	MatchmakingBrowse2CustomPage.ProcessDelegate<UObject>(&Parms); \
}


#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_43_DELEGATE \
struct _Script_OnlineSubsystemPico_eventMatchmakingCancel_Parms \
{ \
	bool bIsError; \
	int32 ErrorCode; \
	FString ErrorMessage; \
}; \
static inline void FMatchmakingCancel_DelegateWrapper(const FScriptDelegate& MatchmakingCancel, bool bIsError, int32 ErrorCode, const FString& ErrorMessage) \
{ \
	_Script_OnlineSubsystemPico_eventMatchmakingCancel_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorCode=ErrorCode; \
	Parms.ErrorMessage=ErrorMessage; \
	MatchmakingCancel.ProcessDelegate<UObject>(&Parms); \
}


#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_44_DELEGATE \
struct _Script_OnlineSubsystemPico_eventMatchmakingCreateAndEnqueueRoom2_Parms \
{ \
	bool bIsError; \
	int32 ErrorCode; \
	FString ErrorMessage; \
	UPico_MatchmakingEnqueueResultAndRoom* MatchmakingEnqueueResultAndRoom; \
}; \
static inline void FMatchmakingCreateAndEnqueueRoom2_DelegateWrapper(const FScriptDelegate& MatchmakingCreateAndEnqueueRoom2, bool bIsError, int32 ErrorCode, const FString& ErrorMessage, UPico_MatchmakingEnqueueResultAndRoom* MatchmakingEnqueueResultAndRoom) \
{ \
	_Script_OnlineSubsystemPico_eventMatchmakingCreateAndEnqueueRoom2_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorCode=ErrorCode; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.MatchmakingEnqueueResultAndRoom=MatchmakingEnqueueResultAndRoom; \
	MatchmakingCreateAndEnqueueRoom2.ProcessDelegate<UObject>(&Parms); \
}


#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_45_DELEGATE \
struct _Script_OnlineSubsystemPico_eventMatchmakingEnqueue2_Parms \
{ \
	bool bIsError; \
	int32 ErrorCode; \
	FString ErrorMessage; \
	UPico_MatchmakingEnqueueResult* MatchmakingEnqueueResult; \
}; \
static inline void FMatchmakingEnqueue2_DelegateWrapper(const FScriptDelegate& MatchmakingEnqueue2, bool bIsError, int32 ErrorCode, const FString& ErrorMessage, UPico_MatchmakingEnqueueResult* MatchmakingEnqueueResult) \
{ \
	_Script_OnlineSubsystemPico_eventMatchmakingEnqueue2_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorCode=ErrorCode; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.MatchmakingEnqueueResult=MatchmakingEnqueueResult; \
	MatchmakingEnqueue2.ProcessDelegate<UObject>(&Parms); \
}


#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_46_DELEGATE \
struct _Script_OnlineSubsystemPico_eventMatchmakingGetAdminSnapshot_Parms \
{ \
	bool bIsError; \
	int32 ErrorCode; \
	FString ErrorMessage; \
	UPico_MatchmakingAdminSnapshot* MatchmakingAdminSnapshot; \
}; \
static inline void FMatchmakingGetAdminSnapshot_DelegateWrapper(const FScriptDelegate& MatchmakingGetAdminSnapshot, bool bIsError, int32 ErrorCode, const FString& ErrorMessage, UPico_MatchmakingAdminSnapshot* MatchmakingAdminSnapshot) \
{ \
	_Script_OnlineSubsystemPico_eventMatchmakingGetAdminSnapshot_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorCode=ErrorCode; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.MatchmakingAdminSnapshot=MatchmakingAdminSnapshot; \
	MatchmakingGetAdminSnapshot.ProcessDelegate<UObject>(&Parms); \
}


#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_47_DELEGATE \
struct _Script_OnlineSubsystemPico_eventMatchmakingStartMatch_Parms \
{ \
	bool bIsError; \
	int32 ErrorCode; \
	FString ErrorMessage; \
}; \
static inline void FMatchmakingStartMatch_DelegateWrapper(const FScriptDelegate& MatchmakingStartMatch, bool bIsError, int32 ErrorCode, const FString& ErrorMessage) \
{ \
	_Script_OnlineSubsystemPico_eventMatchmakingStartMatch_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorCode=ErrorCode; \
	Parms.ErrorMessage=ErrorMessage; \
	MatchmakingStartMatch.ProcessDelegate<UObject>(&Parms); \
}


#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_259_SPARSE_DATA
#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_259_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStartMatch); \
	DECLARE_FUNCTION(execGetAdminSnapshot); \
	DECLARE_FUNCTION(execEnqueue2); \
	DECLARE_FUNCTION(execCreateAndEnqueueRoom2); \
	DECLARE_FUNCTION(execCancel); \
	DECLARE_FUNCTION(execBrowse2CustomPage); \
	DECLARE_FUNCTION(execBrowse2); \
	DECLARE_FUNCTION(execGetStats); \
	DECLARE_FUNCTION(execReportResultsInsecure);


#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_259_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStartMatch); \
	DECLARE_FUNCTION(execGetAdminSnapshot); \
	DECLARE_FUNCTION(execEnqueue2); \
	DECLARE_FUNCTION(execCreateAndEnqueueRoom2); \
	DECLARE_FUNCTION(execCancel); \
	DECLARE_FUNCTION(execBrowse2CustomPage); \
	DECLARE_FUNCTION(execBrowse2); \
	DECLARE_FUNCTION(execGetStats); \
	DECLARE_FUNCTION(execReportResultsInsecure);


#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_259_ACCESSORS
#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_259_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlinePicoMatchmakingFunction(); \
	friend struct Z_Construct_UClass_UOnlinePicoMatchmakingFunction_Statics; \
public: \
	DECLARE_CLASS(UOnlinePicoMatchmakingFunction, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UOnlinePicoMatchmakingFunction)


#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_259_INCLASS \
private: \
	static void StaticRegisterNativesUOnlinePicoMatchmakingFunction(); \
	friend struct Z_Construct_UClass_UOnlinePicoMatchmakingFunction_Statics; \
public: \
	DECLARE_CLASS(UOnlinePicoMatchmakingFunction, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UOnlinePicoMatchmakingFunction)


#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_259_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlinePicoMatchmakingFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlinePicoMatchmakingFunction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlinePicoMatchmakingFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlinePicoMatchmakingFunction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlinePicoMatchmakingFunction(UOnlinePicoMatchmakingFunction&&); \
	NO_API UOnlinePicoMatchmakingFunction(const UOnlinePicoMatchmakingFunction&); \
public: \
	NO_API virtual ~UOnlinePicoMatchmakingFunction();


#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_259_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlinePicoMatchmakingFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlinePicoMatchmakingFunction(UOnlinePicoMatchmakingFunction&&); \
	NO_API UOnlinePicoMatchmakingFunction(const UOnlinePicoMatchmakingFunction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlinePicoMatchmakingFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlinePicoMatchmakingFunction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlinePicoMatchmakingFunction) \
	NO_API virtual ~UOnlinePicoMatchmakingFunction();


#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_256_PROLOG
#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_259_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_259_SPARSE_DATA \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_259_RPC_WRAPPERS \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_259_ACCESSORS \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_259_INCLASS \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_259_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_259_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_259_SPARSE_DATA \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_259_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_259_ACCESSORS \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_259_INCLASS_NO_PURE_DECLS \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_259_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UOnlinePicoMatchmakingFunction>();

#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_384_SPARSE_DATA
#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_384_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDebugString); \
	DECLARE_FUNCTION(execGetWinCount); \
	DECLARE_FUNCTION(execGetSkillStandardDeviation); \
	DECLARE_FUNCTION(execGetSkillMean); \
	DECLARE_FUNCTION(execGetSkillLevel); \
	DECLARE_FUNCTION(execGetLossCount); \
	DECLARE_FUNCTION(execGetDrawCount);


#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_384_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDebugString); \
	DECLARE_FUNCTION(execGetWinCount); \
	DECLARE_FUNCTION(execGetSkillStandardDeviation); \
	DECLARE_FUNCTION(execGetSkillMean); \
	DECLARE_FUNCTION(execGetSkillLevel); \
	DECLARE_FUNCTION(execGetLossCount); \
	DECLARE_FUNCTION(execGetDrawCount);


#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_384_ACCESSORS
#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_384_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPico_MatchmakingStats(); \
	friend struct Z_Construct_UClass_UPico_MatchmakingStats_Statics; \
public: \
	DECLARE_CLASS(UPico_MatchmakingStats, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_MatchmakingStats)


#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_384_INCLASS \
private: \
	static void StaticRegisterNativesUPico_MatchmakingStats(); \
	friend struct Z_Construct_UClass_UPico_MatchmakingStats_Statics; \
public: \
	DECLARE_CLASS(UPico_MatchmakingStats, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_MatchmakingStats)


#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_384_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_MatchmakingStats(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_MatchmakingStats) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_MatchmakingStats); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_MatchmakingStats); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_MatchmakingStats(UPico_MatchmakingStats&&); \
	NO_API UPico_MatchmakingStats(const UPico_MatchmakingStats&); \
public: \
	NO_API virtual ~UPico_MatchmakingStats();


#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_384_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_MatchmakingStats(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_MatchmakingStats(UPico_MatchmakingStats&&); \
	NO_API UPico_MatchmakingStats(const UPico_MatchmakingStats&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_MatchmakingStats); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_MatchmakingStats); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_MatchmakingStats) \
	NO_API virtual ~UPico_MatchmakingStats();


#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_381_PROLOG
#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_384_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_384_SPARSE_DATA \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_384_RPC_WRAPPERS \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_384_ACCESSORS \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_384_INCLASS \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_384_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_384_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_384_SPARSE_DATA \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_384_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_384_ACCESSORS \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_384_INCLASS_NO_PURE_DECLS \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_384_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UPico_MatchmakingStats>();

#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_428_SPARSE_DATA
#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_428_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDebugString); \
	DECLARE_FUNCTION(execGetMatchmakingRooms); \
	DECLARE_FUNCTION(execGetMatchmakingEnqueueResult);


#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_428_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDebugString); \
	DECLARE_FUNCTION(execGetMatchmakingRooms); \
	DECLARE_FUNCTION(execGetMatchmakingEnqueueResult);


#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_428_ACCESSORS
#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_428_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPico_MatchmakingBrowseResult(); \
	friend struct Z_Construct_UClass_UPico_MatchmakingBrowseResult_Statics; \
public: \
	DECLARE_CLASS(UPico_MatchmakingBrowseResult, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_MatchmakingBrowseResult)


#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_428_INCLASS \
private: \
	static void StaticRegisterNativesUPico_MatchmakingBrowseResult(); \
	friend struct Z_Construct_UClass_UPico_MatchmakingBrowseResult_Statics; \
public: \
	DECLARE_CLASS(UPico_MatchmakingBrowseResult, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_MatchmakingBrowseResult)


#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_428_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_MatchmakingBrowseResult(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_MatchmakingBrowseResult) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_MatchmakingBrowseResult); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_MatchmakingBrowseResult); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_MatchmakingBrowseResult(UPico_MatchmakingBrowseResult&&); \
	NO_API UPico_MatchmakingBrowseResult(const UPico_MatchmakingBrowseResult&); \
public: \
	NO_API virtual ~UPico_MatchmakingBrowseResult();


#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_428_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_MatchmakingBrowseResult(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_MatchmakingBrowseResult(UPico_MatchmakingBrowseResult&&); \
	NO_API UPico_MatchmakingBrowseResult(const UPico_MatchmakingBrowseResult&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_MatchmakingBrowseResult); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_MatchmakingBrowseResult); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_MatchmakingBrowseResult) \
	NO_API virtual ~UPico_MatchmakingBrowseResult();


#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_425_PROLOG
#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_428_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_428_SPARSE_DATA \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_428_RPC_WRAPPERS \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_428_ACCESSORS \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_428_INCLASS \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_428_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_428_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_428_SPARSE_DATA \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_428_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_428_ACCESSORS \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_428_INCLASS_NO_PURE_DECLS \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_428_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UPico_MatchmakingBrowseResult>();

#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_454_SPARSE_DATA
#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_454_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDebugString); \
	DECLARE_FUNCTION(execGetTotalSize); \
	DECLARE_FUNCTION(execGetSize); \
	DECLARE_FUNCTION(execGetElement);


#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_454_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDebugString); \
	DECLARE_FUNCTION(execGetTotalSize); \
	DECLARE_FUNCTION(execGetSize); \
	DECLARE_FUNCTION(execGetElement);


#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_454_ACCESSORS
#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_454_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPico_MatchmakingRoomList(); \
	friend struct Z_Construct_UClass_UPico_MatchmakingRoomList_Statics; \
public: \
	DECLARE_CLASS(UPico_MatchmakingRoomList, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_MatchmakingRoomList)


#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_454_INCLASS \
private: \
	static void StaticRegisterNativesUPico_MatchmakingRoomList(); \
	friend struct Z_Construct_UClass_UPico_MatchmakingRoomList_Statics; \
public: \
	DECLARE_CLASS(UPico_MatchmakingRoomList, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_MatchmakingRoomList)


#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_454_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_MatchmakingRoomList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_MatchmakingRoomList) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_MatchmakingRoomList); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_MatchmakingRoomList); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_MatchmakingRoomList(UPico_MatchmakingRoomList&&); \
	NO_API UPico_MatchmakingRoomList(const UPico_MatchmakingRoomList&); \
public: \
	NO_API virtual ~UPico_MatchmakingRoomList();


#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_454_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_MatchmakingRoomList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_MatchmakingRoomList(UPico_MatchmakingRoomList&&); \
	NO_API UPico_MatchmakingRoomList(const UPico_MatchmakingRoomList&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_MatchmakingRoomList); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_MatchmakingRoomList); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_MatchmakingRoomList) \
	NO_API virtual ~UPico_MatchmakingRoomList();


#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_451_PROLOG
#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_454_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_454_SPARSE_DATA \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_454_RPC_WRAPPERS \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_454_ACCESSORS \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_454_INCLASS \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_454_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_454_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_454_SPARSE_DATA \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_454_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_454_ACCESSORS \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_454_INCLASS_NO_PURE_DECLS \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_454_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UPico_MatchmakingRoomList>();

#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_483_SPARSE_DATA
#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_483_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDebugString); \
	DECLARE_FUNCTION(execGetHasPingTime); \
	DECLARE_FUNCTION(execGetPingTime); \
	DECLARE_FUNCTION(execGetRoom);


#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_483_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDebugString); \
	DECLARE_FUNCTION(execGetHasPingTime); \
	DECLARE_FUNCTION(execGetPingTime); \
	DECLARE_FUNCTION(execGetRoom);


#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_483_ACCESSORS
#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_483_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPico_MatchmakingRoom(); \
	friend struct Z_Construct_UClass_UPico_MatchmakingRoom_Statics; \
public: \
	DECLARE_CLASS(UPico_MatchmakingRoom, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_MatchmakingRoom)


#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_483_INCLASS \
private: \
	static void StaticRegisterNativesUPico_MatchmakingRoom(); \
	friend struct Z_Construct_UClass_UPico_MatchmakingRoom_Statics; \
public: \
	DECLARE_CLASS(UPico_MatchmakingRoom, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_MatchmakingRoom)


#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_483_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_MatchmakingRoom(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_MatchmakingRoom) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_MatchmakingRoom); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_MatchmakingRoom); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_MatchmakingRoom(UPico_MatchmakingRoom&&); \
	NO_API UPico_MatchmakingRoom(const UPico_MatchmakingRoom&); \
public: \
	NO_API virtual ~UPico_MatchmakingRoom();


#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_483_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_MatchmakingRoom(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_MatchmakingRoom(UPico_MatchmakingRoom&&); \
	NO_API UPico_MatchmakingRoom(const UPico_MatchmakingRoom&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_MatchmakingRoom); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_MatchmakingRoom); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_MatchmakingRoom) \
	NO_API virtual ~UPico_MatchmakingRoom();


#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_480_PROLOG
#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_483_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_483_SPARSE_DATA \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_483_RPC_WRAPPERS \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_483_ACCESSORS \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_483_INCLASS \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_483_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_483_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_483_SPARSE_DATA \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_483_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_483_ACCESSORS \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_483_INCLASS_NO_PURE_DECLS \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_483_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UPico_MatchmakingRoom>();

#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_513_SPARSE_DATA
#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_513_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDebugString); \
	DECLARE_FUNCTION(execGetRoom); \
	DECLARE_FUNCTION(execGetMatchmakingEnqueueResult);


#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_513_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDebugString); \
	DECLARE_FUNCTION(execGetRoom); \
	DECLARE_FUNCTION(execGetMatchmakingEnqueueResult);


#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_513_ACCESSORS
#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_513_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPico_MatchmakingEnqueueResultAndRoom(); \
	friend struct Z_Construct_UClass_UPico_MatchmakingEnqueueResultAndRoom_Statics; \
public: \
	DECLARE_CLASS(UPico_MatchmakingEnqueueResultAndRoom, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_MatchmakingEnqueueResultAndRoom)


#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_513_INCLASS \
private: \
	static void StaticRegisterNativesUPico_MatchmakingEnqueueResultAndRoom(); \
	friend struct Z_Construct_UClass_UPico_MatchmakingEnqueueResultAndRoom_Statics; \
public: \
	DECLARE_CLASS(UPico_MatchmakingEnqueueResultAndRoom, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_MatchmakingEnqueueResultAndRoom)


#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_513_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_MatchmakingEnqueueResultAndRoom(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_MatchmakingEnqueueResultAndRoom) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_MatchmakingEnqueueResultAndRoom); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_MatchmakingEnqueueResultAndRoom); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_MatchmakingEnqueueResultAndRoom(UPico_MatchmakingEnqueueResultAndRoom&&); \
	NO_API UPico_MatchmakingEnqueueResultAndRoom(const UPico_MatchmakingEnqueueResultAndRoom&); \
public: \
	NO_API virtual ~UPico_MatchmakingEnqueueResultAndRoom();


#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_513_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_MatchmakingEnqueueResultAndRoom(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_MatchmakingEnqueueResultAndRoom(UPico_MatchmakingEnqueueResultAndRoom&&); \
	NO_API UPico_MatchmakingEnqueueResultAndRoom(const UPico_MatchmakingEnqueueResultAndRoom&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_MatchmakingEnqueueResultAndRoom); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_MatchmakingEnqueueResultAndRoom); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_MatchmakingEnqueueResultAndRoom) \
	NO_API virtual ~UPico_MatchmakingEnqueueResultAndRoom();


#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_510_PROLOG
#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_513_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_513_SPARSE_DATA \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_513_RPC_WRAPPERS \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_513_ACCESSORS \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_513_INCLASS \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_513_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_513_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_513_SPARSE_DATA \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_513_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_513_ACCESSORS \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_513_INCLASS_NO_PURE_DECLS \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_513_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UPico_MatchmakingEnqueueResultAndRoom>();

#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_540_SPARSE_DATA
#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_540_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDebugString); \
	DECLARE_FUNCTION(execGetRecentMatchPercentage); \
	DECLARE_FUNCTION(execGetPool); \
	DECLARE_FUNCTION(execGetMaxExpectedWait); \
	DECLARE_FUNCTION(execGetMatchesInLastHourCount); \
	DECLARE_FUNCTION(execGetAverageWait); \
	DECLARE_FUNCTION(execGetAdminSnapshotOptional);


#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_540_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDebugString); \
	DECLARE_FUNCTION(execGetRecentMatchPercentage); \
	DECLARE_FUNCTION(execGetPool); \
	DECLARE_FUNCTION(execGetMaxExpectedWait); \
	DECLARE_FUNCTION(execGetMatchesInLastHourCount); \
	DECLARE_FUNCTION(execGetAverageWait); \
	DECLARE_FUNCTION(execGetAdminSnapshotOptional);


#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_540_ACCESSORS
#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_540_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPico_MatchmakingEnqueueResult(); \
	friend struct Z_Construct_UClass_UPico_MatchmakingEnqueueResult_Statics; \
public: \
	DECLARE_CLASS(UPico_MatchmakingEnqueueResult, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_MatchmakingEnqueueResult)


#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_540_INCLASS \
private: \
	static void StaticRegisterNativesUPico_MatchmakingEnqueueResult(); \
	friend struct Z_Construct_UClass_UPico_MatchmakingEnqueueResult_Statics; \
public: \
	DECLARE_CLASS(UPico_MatchmakingEnqueueResult, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_MatchmakingEnqueueResult)


#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_540_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_MatchmakingEnqueueResult(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_MatchmakingEnqueueResult) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_MatchmakingEnqueueResult); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_MatchmakingEnqueueResult); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_MatchmakingEnqueueResult(UPico_MatchmakingEnqueueResult&&); \
	NO_API UPico_MatchmakingEnqueueResult(const UPico_MatchmakingEnqueueResult&); \
public: \
	NO_API virtual ~UPico_MatchmakingEnqueueResult();


#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_540_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_MatchmakingEnqueueResult(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_MatchmakingEnqueueResult(UPico_MatchmakingEnqueueResult&&); \
	NO_API UPico_MatchmakingEnqueueResult(const UPico_MatchmakingEnqueueResult&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_MatchmakingEnqueueResult); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_MatchmakingEnqueueResult); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_MatchmakingEnqueueResult) \
	NO_API virtual ~UPico_MatchmakingEnqueueResult();


#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_537_PROLOG
#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_540_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_540_SPARSE_DATA \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_540_RPC_WRAPPERS \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_540_ACCESSORS \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_540_INCLASS \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_540_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_540_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_540_SPARSE_DATA \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_540_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_540_ACCESSORS \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_540_INCLASS_NO_PURE_DECLS \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_540_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UPico_MatchmakingEnqueueResult>();

#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_586_SPARSE_DATA
#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_586_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDebugString); \
	DECLARE_FUNCTION(execGetMyCurrentThreshold); \
	DECLARE_FUNCTION(execGetCandidateList);


#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_586_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDebugString); \
	DECLARE_FUNCTION(execGetMyCurrentThreshold); \
	DECLARE_FUNCTION(execGetCandidateList);


#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_586_ACCESSORS
#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_586_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPico_MatchmakingAdminSnapshot(); \
	friend struct Z_Construct_UClass_UPico_MatchmakingAdminSnapshot_Statics; \
public: \
	DECLARE_CLASS(UPico_MatchmakingAdminSnapshot, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_MatchmakingAdminSnapshot)


#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_586_INCLASS \
private: \
	static void StaticRegisterNativesUPico_MatchmakingAdminSnapshot(); \
	friend struct Z_Construct_UClass_UPico_MatchmakingAdminSnapshot_Statics; \
public: \
	DECLARE_CLASS(UPico_MatchmakingAdminSnapshot, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_MatchmakingAdminSnapshot)


#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_586_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_MatchmakingAdminSnapshot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_MatchmakingAdminSnapshot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_MatchmakingAdminSnapshot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_MatchmakingAdminSnapshot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_MatchmakingAdminSnapshot(UPico_MatchmakingAdminSnapshot&&); \
	NO_API UPico_MatchmakingAdminSnapshot(const UPico_MatchmakingAdminSnapshot&); \
public: \
	NO_API virtual ~UPico_MatchmakingAdminSnapshot();


#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_586_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_MatchmakingAdminSnapshot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_MatchmakingAdminSnapshot(UPico_MatchmakingAdminSnapshot&&); \
	NO_API UPico_MatchmakingAdminSnapshot(const UPico_MatchmakingAdminSnapshot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_MatchmakingAdminSnapshot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_MatchmakingAdminSnapshot); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_MatchmakingAdminSnapshot) \
	NO_API virtual ~UPico_MatchmakingAdminSnapshot();


#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_583_PROLOG
#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_586_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_586_SPARSE_DATA \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_586_RPC_WRAPPERS \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_586_ACCESSORS \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_586_INCLASS \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_586_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_586_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_586_SPARSE_DATA \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_586_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_586_ACCESSORS \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_586_INCLASS_NO_PURE_DECLS \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_586_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UPico_MatchmakingAdminSnapshot>();

#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_612_SPARSE_DATA
#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_612_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDebugString); \
	DECLARE_FUNCTION(execGetSize); \
	DECLARE_FUNCTION(execGetTotalSize); \
	DECLARE_FUNCTION(execGetElement);


#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_612_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDebugString); \
	DECLARE_FUNCTION(execGetSize); \
	DECLARE_FUNCTION(execGetTotalSize); \
	DECLARE_FUNCTION(execGetElement);


#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_612_ACCESSORS
#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_612_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPico_MatchmakingAdminSnapshotCandidateList(); \
	friend struct Z_Construct_UClass_UPico_MatchmakingAdminSnapshotCandidateList_Statics; \
public: \
	DECLARE_CLASS(UPico_MatchmakingAdminSnapshotCandidateList, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_MatchmakingAdminSnapshotCandidateList)


#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_612_INCLASS \
private: \
	static void StaticRegisterNativesUPico_MatchmakingAdminSnapshotCandidateList(); \
	friend struct Z_Construct_UClass_UPico_MatchmakingAdminSnapshotCandidateList_Statics; \
public: \
	DECLARE_CLASS(UPico_MatchmakingAdminSnapshotCandidateList, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_MatchmakingAdminSnapshotCandidateList)


#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_612_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_MatchmakingAdminSnapshotCandidateList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_MatchmakingAdminSnapshotCandidateList) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_MatchmakingAdminSnapshotCandidateList); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_MatchmakingAdminSnapshotCandidateList); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_MatchmakingAdminSnapshotCandidateList(UPico_MatchmakingAdminSnapshotCandidateList&&); \
	NO_API UPico_MatchmakingAdminSnapshotCandidateList(const UPico_MatchmakingAdminSnapshotCandidateList&); \
public: \
	NO_API virtual ~UPico_MatchmakingAdminSnapshotCandidateList();


#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_612_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_MatchmakingAdminSnapshotCandidateList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_MatchmakingAdminSnapshotCandidateList(UPico_MatchmakingAdminSnapshotCandidateList&&); \
	NO_API UPico_MatchmakingAdminSnapshotCandidateList(const UPico_MatchmakingAdminSnapshotCandidateList&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_MatchmakingAdminSnapshotCandidateList); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_MatchmakingAdminSnapshotCandidateList); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_MatchmakingAdminSnapshotCandidateList) \
	NO_API virtual ~UPico_MatchmakingAdminSnapshotCandidateList();


#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_609_PROLOG
#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_612_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_612_SPARSE_DATA \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_612_RPC_WRAPPERS \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_612_ACCESSORS \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_612_INCLASS \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_612_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_612_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_612_SPARSE_DATA \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_612_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_612_ACCESSORS \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_612_INCLASS_NO_PURE_DECLS \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_612_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UPico_MatchmakingAdminSnapshotCandidateList>();

#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_640_SPARSE_DATA
#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_640_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDebugString); \
	DECLARE_FUNCTION(execGetTheirCurrentThreshold); \
	DECLARE_FUNCTION(execGetMyTotalScore); \
	DECLARE_FUNCTION(execGetCanMatch);


#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_640_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDebugString); \
	DECLARE_FUNCTION(execGetTheirCurrentThreshold); \
	DECLARE_FUNCTION(execGetMyTotalScore); \
	DECLARE_FUNCTION(execGetCanMatch);


#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_640_ACCESSORS
#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_640_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPico_MatchmakingAdminSnapshotCandidate(); \
	friend struct Z_Construct_UClass_UPico_MatchmakingAdminSnapshotCandidate_Statics; \
public: \
	DECLARE_CLASS(UPico_MatchmakingAdminSnapshotCandidate, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_MatchmakingAdminSnapshotCandidate)


#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_640_INCLASS \
private: \
	static void StaticRegisterNativesUPico_MatchmakingAdminSnapshotCandidate(); \
	friend struct Z_Construct_UClass_UPico_MatchmakingAdminSnapshotCandidate_Statics; \
public: \
	DECLARE_CLASS(UPico_MatchmakingAdminSnapshotCandidate, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_MatchmakingAdminSnapshotCandidate)


#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_640_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_MatchmakingAdminSnapshotCandidate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_MatchmakingAdminSnapshotCandidate) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_MatchmakingAdminSnapshotCandidate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_MatchmakingAdminSnapshotCandidate); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_MatchmakingAdminSnapshotCandidate(UPico_MatchmakingAdminSnapshotCandidate&&); \
	NO_API UPico_MatchmakingAdminSnapshotCandidate(const UPico_MatchmakingAdminSnapshotCandidate&); \
public: \
	NO_API virtual ~UPico_MatchmakingAdminSnapshotCandidate();


#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_640_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_MatchmakingAdminSnapshotCandidate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_MatchmakingAdminSnapshotCandidate(UPico_MatchmakingAdminSnapshotCandidate&&); \
	NO_API UPico_MatchmakingAdminSnapshotCandidate(const UPico_MatchmakingAdminSnapshotCandidate&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_MatchmakingAdminSnapshotCandidate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_MatchmakingAdminSnapshotCandidate); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_MatchmakingAdminSnapshotCandidate) \
	NO_API virtual ~UPico_MatchmakingAdminSnapshotCandidate();


#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_637_PROLOG
#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_640_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_640_SPARSE_DATA \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_640_RPC_WRAPPERS \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_640_ACCESSORS \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_640_INCLASS \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_640_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_640_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_640_SPARSE_DATA \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_640_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_640_ACCESSORS \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_640_INCLASS_NO_PURE_DECLS \
	FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_640_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UPico_MatchmakingAdminSnapshotCandidate>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
