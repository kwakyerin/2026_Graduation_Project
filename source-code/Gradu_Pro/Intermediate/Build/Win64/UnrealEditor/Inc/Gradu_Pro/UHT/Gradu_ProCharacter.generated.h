// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Gradu_ProCharacter.h"

#ifdef GRADU_PRO_Gradu_ProCharacter_generated_h
#error "Gradu_ProCharacter.generated.h already included, missing '#pragma once' in Gradu_ProCharacter.h"
#endif
#define GRADU_PRO_Gradu_ProCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AGradu_ProCharacter ******************************************************
#define FID_Graduation_Proj_source_code_Gradu_Pro_Source_Gradu_Pro_Gradu_ProCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoLook); \
	DECLARE_FUNCTION(execDoMove);


struct Z_Construct_UClass_AGradu_ProCharacter_Statics;
GRADU_PRO_API UClass* Z_Construct_UClass_AGradu_ProCharacter_NoRegister();

#define FID_Graduation_Proj_source_code_Gradu_Pro_Source_Gradu_Pro_Gradu_ProCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGradu_ProCharacter(); \
	friend struct ::Z_Construct_UClass_AGradu_ProCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GRADU_PRO_API UClass* ::Z_Construct_UClass_AGradu_ProCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AGradu_ProCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Gradu_Pro"), Z_Construct_UClass_AGradu_ProCharacter_NoRegister) \
	DECLARE_SERIALIZER(AGradu_ProCharacter)


#define FID_Graduation_Proj_source_code_Gradu_Pro_Source_Gradu_Pro_Gradu_ProCharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AGradu_ProCharacter(AGradu_ProCharacter&&) = delete; \
	AGradu_ProCharacter(const AGradu_ProCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGradu_ProCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGradu_ProCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AGradu_ProCharacter) \
	NO_API virtual ~AGradu_ProCharacter();


#define FID_Graduation_Proj_source_code_Gradu_Pro_Source_Gradu_Pro_Gradu_ProCharacter_h_21_PROLOG
#define FID_Graduation_Proj_source_code_Gradu_Pro_Source_Gradu_Pro_Gradu_ProCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Graduation_Proj_source_code_Gradu_Pro_Source_Gradu_Pro_Gradu_ProCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Graduation_Proj_source_code_Gradu_Pro_Source_Gradu_Pro_Gradu_ProCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_Graduation_Proj_source_code_Gradu_Pro_Source_Gradu_Pro_Gradu_ProCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AGradu_ProCharacter;

// ********** End Class AGradu_ProCharacter ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Graduation_Proj_source_code_Gradu_Pro_Source_Gradu_Pro_Gradu_ProCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
