// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Fighter.h"

#ifdef RECONNECTION_Fighter_generated_h
#error "Fighter.generated.h already included, missing '#pragma once' in Fighter.h"
#endif
#define RECONNECTION_Fighter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AFighter *****************************************************************
#define FID_Users_gavin_OneDrive_Documents_GitHub_Reconnection_Reconnection_Source_Reconnection_Public_Fighter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEndTurn); \
	DECLARE_FUNCTION(execStartTurn);


RECONNECTION_API UClass* Z_Construct_UClass_AFighter_NoRegister();

#define FID_Users_gavin_OneDrive_Documents_GitHub_Reconnection_Reconnection_Source_Reconnection_Public_Fighter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFighter(); \
	friend struct Z_Construct_UClass_AFighter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RECONNECTION_API UClass* Z_Construct_UClass_AFighter_NoRegister(); \
public: \
	DECLARE_CLASS2(AFighter, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Reconnection"), Z_Construct_UClass_AFighter_NoRegister) \
	DECLARE_SERIALIZER(AFighter)


#define FID_Users_gavin_OneDrive_Documents_GitHub_Reconnection_Reconnection_Source_Reconnection_Public_Fighter_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AFighter(AFighter&&) = delete; \
	AFighter(const AFighter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFighter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFighter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFighter) \
	NO_API virtual ~AFighter();


#define FID_Users_gavin_OneDrive_Documents_GitHub_Reconnection_Reconnection_Source_Reconnection_Public_Fighter_h_9_PROLOG
#define FID_Users_gavin_OneDrive_Documents_GitHub_Reconnection_Reconnection_Source_Reconnection_Public_Fighter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_gavin_OneDrive_Documents_GitHub_Reconnection_Reconnection_Source_Reconnection_Public_Fighter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_gavin_OneDrive_Documents_GitHub_Reconnection_Reconnection_Source_Reconnection_Public_Fighter_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_gavin_OneDrive_Documents_GitHub_Reconnection_Reconnection_Source_Reconnection_Public_Fighter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AFighter;

// ********** End Class AFighter *******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_gavin_OneDrive_Documents_GitHub_Reconnection_Reconnection_Source_Reconnection_Public_Fighter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
