// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AEnemy.h"

#ifdef RECONNECTION_AEnemy_generated_h
#error "AEnemy.generated.h already included, missing '#pragma once' in AEnemy.h"
#endif
#define RECONNECTION_AEnemy_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AEnemy *******************************************************************
#define FID_Users_Da944322_Documents_GitHub_Reconnection_Reconnection_Source_Reconnection_Public_AEnemy_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execChooseAction);


#define FID_Users_Da944322_Documents_GitHub_Reconnection_Reconnection_Source_Reconnection_Public_AEnemy_h_15_CALLBACK_WRAPPERS
RECONNECTION_API UClass* Z_Construct_UClass_AEnemy_NoRegister();

#define FID_Users_Da944322_Documents_GitHub_Reconnection_Reconnection_Source_Reconnection_Public_AEnemy_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemy(); \
	friend struct Z_Construct_UClass_AEnemy_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RECONNECTION_API UClass* Z_Construct_UClass_AEnemy_NoRegister(); \
public: \
	DECLARE_CLASS2(AEnemy, AFighter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Reconnection"), Z_Construct_UClass_AEnemy_NoRegister) \
	DECLARE_SERIALIZER(AEnemy)


#define FID_Users_Da944322_Documents_GitHub_Reconnection_Reconnection_Source_Reconnection_Public_AEnemy_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemy(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AEnemy(AEnemy&&) = delete; \
	AEnemy(const AEnemy&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemy) \
	NO_API virtual ~AEnemy();


#define FID_Users_Da944322_Documents_GitHub_Reconnection_Reconnection_Source_Reconnection_Public_AEnemy_h_12_PROLOG
#define FID_Users_Da944322_Documents_GitHub_Reconnection_Reconnection_Source_Reconnection_Public_AEnemy_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Da944322_Documents_GitHub_Reconnection_Reconnection_Source_Reconnection_Public_AEnemy_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Da944322_Documents_GitHub_Reconnection_Reconnection_Source_Reconnection_Public_AEnemy_h_15_CALLBACK_WRAPPERS \
	FID_Users_Da944322_Documents_GitHub_Reconnection_Reconnection_Source_Reconnection_Public_AEnemy_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_Da944322_Documents_GitHub_Reconnection_Reconnection_Source_Reconnection_Public_AEnemy_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AEnemy;

// ********** End Class AEnemy *********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Da944322_Documents_GitHub_Reconnection_Reconnection_Source_Reconnection_Public_AEnemy_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
