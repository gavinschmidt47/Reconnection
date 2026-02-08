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
enum class EStats : uint8;
struct FAttackData;

// ********** Begin ScriptStruct FAttackData *******************************************************
#define FID_Users_woyat_OneDrive_Projects_Reconnection_Reconnection_Source_Reconnection_Public_UFighter_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAttackData_Statics; \
	RECONNECTION_API static class UScriptStruct* StaticStruct();


struct FAttackData;
// ********** End ScriptStruct FAttackData *********************************************************

// ********** Begin Delegate FOnStartTurn **********************************************************
#define FID_Users_woyat_OneDrive_Projects_Reconnection_Reconnection_Source_Reconnection_Public_UFighter_h_38_DELEGATE \
RECONNECTION_API void FOnStartTurn_DelegateWrapper(const FMulticastScriptDelegate& OnStartTurn, UFighter* Fighter);


// ********** End Delegate FOnStartTurn ************************************************************

// ********** Begin Delegate FOnEndTurn ************************************************************
#define FID_Users_woyat_OneDrive_Projects_Reconnection_Reconnection_Source_Reconnection_Public_UFighter_h_39_DELEGATE \
RECONNECTION_API void FOnEndTurn_DelegateWrapper(const FMulticastScriptDelegate& OnEndTurn, UFighter* Fighter);


// ********** End Delegate FOnEndTurn **************************************************************

// ********** Begin Delegate FOnDeath **************************************************************
#define FID_Users_woyat_OneDrive_Projects_Reconnection_Reconnection_Source_Reconnection_Public_UFighter_h_40_DELEGATE \
RECONNECTION_API void FOnDeath_DelegateWrapper(const FMulticastScriptDelegate& OnDeath, UFighter* Fighter);


// ********** End Delegate FOnDeath ****************************************************************

// ********** Begin Delegate FOnHitAttack **********************************************************
#define FID_Users_woyat_OneDrive_Projects_Reconnection_Reconnection_Source_Reconnection_Public_UFighter_h_41_DELEGATE \
RECONNECTION_API void FOnHitAttack_DelegateWrapper(const FMulticastScriptDelegate& OnHitAttack, UFighter* Target);


// ********** End Delegate FOnHitAttack ************************************************************

// ********** Begin Delegate FOnHitMiss ************************************************************
#define FID_Users_woyat_OneDrive_Projects_Reconnection_Reconnection_Source_Reconnection_Public_UFighter_h_42_DELEGATE \
RECONNECTION_API void FOnHitMiss_DelegateWrapper(const FMulticastScriptDelegate& OnHitMiss, UFighter* Target);


// ********** End Delegate FOnHitMiss **************************************************************

// ********** Begin Class UFighter *****************************************************************
#define FID_Users_woyat_OneDrive_Projects_Reconnection_Reconnection_Source_Reconnection_Public_UFighter_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDie); \
	DECLARE_FUNCTION(execRemoveBuff); \
	DECLARE_FUNCTION(execAddBuff); \
	DECLARE_FUNCTION(execBlock); \
	DECLARE_FUNCTION(execHeal); \
	DECLARE_FUNCTION(execCheckSightToTarget); \
	DECLARE_FUNCTION(execAttack); \
	DECLARE_FUNCTION(execRollToHit); \
	DECLARE_FUNCTION(execRollDamage); \
	DECLARE_FUNCTION(execGetDefense); \
	DECLARE_FUNCTION(execReceiveDamage); \
	DECLARE_FUNCTION(execSendDamage); \
	DECLARE_FUNCTION(execEndTurn); \
	DECLARE_FUNCTION(execStartTurn);


RECONNECTION_API UClass* Z_Construct_UClass_UFighter_NoRegister();

#define FID_Users_woyat_OneDrive_Projects_Reconnection_Reconnection_Source_Reconnection_Public_UFighter_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFighter(); \
	friend struct Z_Construct_UClass_UFighter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RECONNECTION_API UClass* Z_Construct_UClass_UFighter_NoRegister(); \
public: \
	DECLARE_CLASS2(UFighter, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Reconnection"), Z_Construct_UClass_UFighter_NoRegister) \
	DECLARE_SERIALIZER(UFighter)


#define FID_Users_woyat_OneDrive_Projects_Reconnection_Reconnection_Source_Reconnection_Public_UFighter_h_47_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFighter(UFighter&&) = delete; \
	UFighter(const UFighter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFighter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFighter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFighter) \
	NO_API virtual ~UFighter();


#define FID_Users_woyat_OneDrive_Projects_Reconnection_Reconnection_Source_Reconnection_Public_UFighter_h_44_PROLOG
#define FID_Users_woyat_OneDrive_Projects_Reconnection_Reconnection_Source_Reconnection_Public_UFighter_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_woyat_OneDrive_Projects_Reconnection_Reconnection_Source_Reconnection_Public_UFighter_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_woyat_OneDrive_Projects_Reconnection_Reconnection_Source_Reconnection_Public_UFighter_h_47_INCLASS_NO_PURE_DECLS \
	FID_Users_woyat_OneDrive_Projects_Reconnection_Reconnection_Source_Reconnection_Public_UFighter_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFighter;

// ********** End Class UFighter *******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_woyat_OneDrive_Projects_Reconnection_Reconnection_Source_Reconnection_Public_UFighter_h

// ********** Begin Enum EStats ********************************************************************
#define FOREACH_ENUM_ESTATS(op) \
	op(EStats::Movement) \
	op(EStats::Health) \
	op(EStats::Damage) \
	op(EStats::Attack) \
	op(EStats::Defense) \
	op(EStats::Block) \
	op(EStats::Heal) 

enum class EStats : uint8;
template<> struct TIsUEnumClass<EStats> { enum { Value = true }; };
template<> RECONNECTION_API UEnum* StaticEnum<EStats>();
// ********** End Enum EStats **********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
