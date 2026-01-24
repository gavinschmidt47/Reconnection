// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UTurnManager.h"

#ifdef RECONNECTION_UTurnManager_generated_h
#error "UTurnManager.generated.h already included, missing '#pragma once' in UTurnManager.h"
#endif
#define RECONNECTION_UTurnManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UFighter;

// ********** Begin Delegate FOnTurnChanged ********************************************************
#define FID_Users_gavin_Documents_GitHub_Reconnection_Reconnection_Source_Reconnection_Public_UTurnManager_h_10_DELEGATE \
RECONNECTION_API void FOnTurnChanged_DelegateWrapper(const FMulticastScriptDelegate& OnTurnChanged, UFighter* CurrentFighter);


// ********** End Delegate FOnTurnChanged **********************************************************

// ********** Begin Delegate FOnRoundStarted *******************************************************
#define FID_Users_gavin_Documents_GitHub_Reconnection_Reconnection_Source_Reconnection_Public_UTurnManager_h_11_DELEGATE \
RECONNECTION_API void FOnRoundStarted_DelegateWrapper(const FMulticastScriptDelegate& OnRoundStarted);


// ********** End Delegate FOnRoundStarted *********************************************************

// ********** Begin Delegate FOnCombatEnded ********************************************************
#define FID_Users_gavin_Documents_GitHub_Reconnection_Reconnection_Source_Reconnection_Public_UTurnManager_h_12_DELEGATE \
RECONNECTION_API void FOnCombatEnded_DelegateWrapper(const FMulticastScriptDelegate& OnCombatEnded);


// ********** End Delegate FOnCombatEnded **********************************************************

// ********** Begin Class UTurnManager *************************************************************
#define FID_Users_gavin_Documents_GitHub_Reconnection_Reconnection_Source_Reconnection_Public_UTurnManager_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnFighterEndTurn); \
	DECLARE_FUNCTION(execOnFighterDeath); \
	DECLARE_FUNCTION(execEndCombat); \
	DECLARE_FUNCTION(execRemoveFighter); \
	DECLARE_FUNCTION(execSortFightersByInitiative); \
	DECLARE_FUNCTION(execGetCurrentFighter); \
	DECLARE_FUNCTION(execNextTurn); \
	DECLARE_FUNCTION(execStartCombat); \
	DECLARE_FUNCTION(execInitializeCombat);


RECONNECTION_API UClass* Z_Construct_UClass_UTurnManager_NoRegister();

#define FID_Users_gavin_Documents_GitHub_Reconnection_Reconnection_Source_Reconnection_Public_UTurnManager_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTurnManager(); \
	friend struct Z_Construct_UClass_UTurnManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RECONNECTION_API UClass* Z_Construct_UClass_UTurnManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UTurnManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Reconnection"), Z_Construct_UClass_UTurnManager_NoRegister) \
	DECLARE_SERIALIZER(UTurnManager)


#define FID_Users_gavin_Documents_GitHub_Reconnection_Reconnection_Source_Reconnection_Public_UTurnManager_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTurnManager(UTurnManager&&) = delete; \
	UTurnManager(const UTurnManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTurnManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTurnManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTurnManager) \
	NO_API virtual ~UTurnManager();


#define FID_Users_gavin_Documents_GitHub_Reconnection_Reconnection_Source_Reconnection_Public_UTurnManager_h_14_PROLOG
#define FID_Users_gavin_Documents_GitHub_Reconnection_Reconnection_Source_Reconnection_Public_UTurnManager_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_gavin_Documents_GitHub_Reconnection_Reconnection_Source_Reconnection_Public_UTurnManager_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_gavin_Documents_GitHub_Reconnection_Reconnection_Source_Reconnection_Public_UTurnManager_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_gavin_Documents_GitHub_Reconnection_Reconnection_Source_Reconnection_Public_UTurnManager_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTurnManager;

// ********** End Class UTurnManager ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_gavin_Documents_GitHub_Reconnection_Reconnection_Source_Reconnection_Public_UTurnManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
