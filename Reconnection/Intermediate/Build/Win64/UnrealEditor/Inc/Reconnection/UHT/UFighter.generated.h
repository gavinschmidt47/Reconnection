// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UFighter.h"

#ifdef RECONNECTION_UFighter_generated_h
#error "UFighter.generated.h already included, missing '#pragma once' in UFighter.h"
#endif
#define RECONNECTION_UFighter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UFighter;

// ********** Begin Delegate FOnStartTurn **********************************************************
#define FID_Users_da944322_Documents_GitHub_Reconnection_Reconnection_Source_Reconnection_Public_UFighter_h_9_DELEGATE \
RECONNECTION_API void FOnStartTurn_DelegateWrapper(const FMulticastScriptDelegate& OnStartTurn, UFighter* Fighter);


// ********** End Delegate FOnStartTurn ************************************************************

// ********** Begin Delegate FOnEndTurn ************************************************************
#define FID_Users_da944322_Documents_GitHub_Reconnection_Reconnection_Source_Reconnection_Public_UFighter_h_10_DELEGATE \
RECONNECTION_API void FOnEndTurn_DelegateWrapper(const FMulticastScriptDelegate& OnEndTurn, UFighter* Fighter);


// ********** End Delegate FOnEndTurn **************************************************************

// ********** Begin Delegate FOnDeath **************************************************************
#define FID_Users_da944322_Documents_GitHub_Reconnection_Reconnection_Source_Reconnection_Public_UFighter_h_11_DELEGATE \
RECONNECTION_API void FOnDeath_DelegateWrapper(const FMulticastScriptDelegate& OnDeath, UFighter* Fighter);


// ********** End Delegate FOnDeath ****************************************************************

// ********** Begin Delegate FOnHitAttack **********************************************************
#define FID_Users_da944322_Documents_GitHub_Reconnection_Reconnection_Source_Reconnection_Public_UFighter_h_12_DELEGATE \
RECONNECTION_API void FOnHitAttack_DelegateWrapper(const FMulticastScriptDelegate& OnHitAttack, UFighter* Target);


// ********** End Delegate FOnHitAttack ************************************************************

// ********** Begin Delegate FOnHitMiss ************************************************************
#define FID_Users_da944322_Documents_GitHub_Reconnection_Reconnection_Source_Reconnection_Public_UFighter_h_13_DELEGATE \
RECONNECTION_API void FOnHitMiss_DelegateWrapper(const FMulticastScriptDelegate& OnHitMiss, UFighter* Target);


// ********** End Delegate FOnHitMiss **************************************************************

// ********** Begin Class UFighter *****************************************************************
#define FID_Users_da944322_Documents_GitHub_Reconnection_Reconnection_Source_Reconnection_Public_UFighter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAllStats); \
	DECLARE_FUNCTION(execDie); \
	DECLARE_FUNCTION(execRemoveBuff); \
	DECLARE_FUNCTION(execAddBuff); \
	DECLARE_FUNCTION(execBlock); \
	DECLARE_FUNCTION(execHeal); \
	DECLARE_FUNCTION(execCallBlock); \
	DECLARE_FUNCTION(execCallHeal); \
	DECLARE_FUNCTION(execAttack); \
	DECLARE_FUNCTION(execRollToHit); \
	DECLARE_FUNCTION(execRollDamage); \
	DECLARE_FUNCTION(execGetDefense); \
	DECLARE_FUNCTION(execReceiveDamage); \
	DECLARE_FUNCTION(execSendDamage); \
	DECLARE_FUNCTION(execEndTurn); \
	DECLARE_FUNCTION(execStartTurn);


#define FID_Users_da944322_Documents_GitHub_Reconnection_Reconnection_Source_Reconnection_Public_UFighter_h_18_CALLBACK_WRAPPERS
RECONNECTION_API UClass* Z_Construct_UClass_UFighter_NoRegister();

#define FID_Users_da944322_Documents_GitHub_Reconnection_Reconnection_Source_Reconnection_Public_UFighter_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFighter(); \
	friend struct Z_Construct_UClass_UFighter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RECONNECTION_API UClass* Z_Construct_UClass_UFighter_NoRegister(); \
public: \
	DECLARE_CLASS2(UFighter, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Reconnection"), Z_Construct_UClass_UFighter_NoRegister) \
	DECLARE_SERIALIZER(UFighter)


#define FID_Users_da944322_Documents_GitHub_Reconnection_Reconnection_Source_Reconnection_Public_UFighter_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFighter(UFighter&&) = delete; \
	UFighter(const UFighter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFighter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFighter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFighter) \
	NO_API virtual ~UFighter();


#define FID_Users_da944322_Documents_GitHub_Reconnection_Reconnection_Source_Reconnection_Public_UFighter_h_15_PROLOG
#define FID_Users_da944322_Documents_GitHub_Reconnection_Reconnection_Source_Reconnection_Public_UFighter_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_da944322_Documents_GitHub_Reconnection_Reconnection_Source_Reconnection_Public_UFighter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_da944322_Documents_GitHub_Reconnection_Reconnection_Source_Reconnection_Public_UFighter_h_18_CALLBACK_WRAPPERS \
	FID_Users_da944322_Documents_GitHub_Reconnection_Reconnection_Source_Reconnection_Public_UFighter_h_18_INCLASS_NO_PURE_DECLS \
	FID_Users_da944322_Documents_GitHub_Reconnection_Reconnection_Source_Reconnection_Public_UFighter_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFighter;

// ********** End Class UFighter *******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_da944322_Documents_GitHub_Reconnection_Reconnection_Source_Reconnection_Public_UFighter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
