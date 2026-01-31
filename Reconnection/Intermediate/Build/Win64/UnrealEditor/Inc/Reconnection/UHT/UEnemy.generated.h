// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UEnemy.h"

#ifdef RECONNECTION_UEnemy_generated_h
#error "UEnemy.generated.h already included, missing '#pragma once' in UEnemy.h"
#endif
#define RECONNECTION_UEnemy_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UFighter;

// ********** Begin Class UEnemy *******************************************************************
#define FID_Users_gavin_Documents_GitHub_Reconnection_Reconnection_Source_Reconnection_Public_UEnemy_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetBuffUtility); \
	DECLARE_FUNCTION(execGetBlockUtility); \
	DECLARE_FUNCTION(execGetAllyHealUtility); \
	DECLARE_FUNCTION(execGetSelfHealUtility); \
	DECLARE_FUNCTION(execGetMagicUtility); \
	DECLARE_FUNCTION(execGetRangedUtility); \
	DECLARE_FUNCTION(execGetMeleeUtility); \
	DECLARE_FUNCTION(execGetAttackUtility); \
	DECLARE_FUNCTION(execOnFighterListChanged); \
	DECLARE_FUNCTION(execUpdateAlliesAndEnemies); \
	DECLARE_FUNCTION(execInitializeEnemy); \
	DECLARE_FUNCTION(execChooseAction);


RECONNECTION_API UClass* Z_Construct_UClass_UEnemy_NoRegister();

#define FID_Users_gavin_Documents_GitHub_Reconnection_Reconnection_Source_Reconnection_Public_UEnemy_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnemy(); \
	friend struct Z_Construct_UClass_UEnemy_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RECONNECTION_API UClass* Z_Construct_UClass_UEnemy_NoRegister(); \
public: \
	DECLARE_CLASS2(UEnemy, UFighter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Reconnection"), Z_Construct_UClass_UEnemy_NoRegister) \
	DECLARE_SERIALIZER(UEnemy)


#define FID_Users_gavin_Documents_GitHub_Reconnection_Reconnection_Source_Reconnection_Public_UEnemy_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEnemy(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEnemy(UEnemy&&) = delete; \
	UEnemy(const UEnemy&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEnemy) \
	NO_API virtual ~UEnemy();


#define FID_Users_gavin_Documents_GitHub_Reconnection_Reconnection_Source_Reconnection_Public_UEnemy_h_18_PROLOG
#define FID_Users_gavin_Documents_GitHub_Reconnection_Reconnection_Source_Reconnection_Public_UEnemy_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_gavin_Documents_GitHub_Reconnection_Reconnection_Source_Reconnection_Public_UEnemy_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_gavin_Documents_GitHub_Reconnection_Reconnection_Source_Reconnection_Public_UEnemy_h_21_INCLASS_NO_PURE_DECLS \
	FID_Users_gavin_Documents_GitHub_Reconnection_Reconnection_Source_Reconnection_Public_UEnemy_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEnemy;

// ********** End Class UEnemy *********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_gavin_Documents_GitHub_Reconnection_Reconnection_Source_Reconnection_Public_UEnemy_h

// ********** Begin Enum EWeaponType ***************************************************************
#define FOREACH_ENUM_EWEAPONTYPE(op) \
	op(EWeaponType::Melee) \
	op(EWeaponType::Ranged) \
	op(EWeaponType::Magic) 

enum class EWeaponType : uint8;
template<> struct TIsUEnumClass<EWeaponType> { enum { Value = true }; };
template<> RECONNECTION_API UEnum* StaticEnum<EWeaponType>();
// ********** End Enum EWeaponType *****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
