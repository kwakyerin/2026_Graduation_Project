// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Replication_TestCharacter.h"

#ifdef REPLICATION_TEST_Replication_TestCharacter_generated_h
#error "Replication_TestCharacter.generated.h already included, missing '#pragma once' in Replication_TestCharacter.h"
#endif
#define REPLICATION_TEST_Replication_TestCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AReplication_TestCharacter ***********************************************
#define FID_Grauation_Proj_documents_kwakyerin_practice_work_Replication_Test_Source_Replication_Test_Replication_TestCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoLook); \
	DECLARE_FUNCTION(execDoMove);


struct Z_Construct_UClass_AReplication_TestCharacter_Statics;
REPLICATION_TEST_API UClass* Z_Construct_UClass_AReplication_TestCharacter_NoRegister();

#define FID_Grauation_Proj_documents_kwakyerin_practice_work_Replication_Test_Source_Replication_Test_Replication_TestCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAReplication_TestCharacter(); \
	friend struct ::Z_Construct_UClass_AReplication_TestCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REPLICATION_TEST_API UClass* ::Z_Construct_UClass_AReplication_TestCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AReplication_TestCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Replication_Test"), Z_Construct_UClass_AReplication_TestCharacter_NoRegister) \
	DECLARE_SERIALIZER(AReplication_TestCharacter)


#define FID_Grauation_Proj_documents_kwakyerin_practice_work_Replication_Test_Source_Replication_Test_Replication_TestCharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AReplication_TestCharacter(AReplication_TestCharacter&&) = delete; \
	AReplication_TestCharacter(const AReplication_TestCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AReplication_TestCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AReplication_TestCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AReplication_TestCharacter) \
	NO_API virtual ~AReplication_TestCharacter();


#define FID_Grauation_Proj_documents_kwakyerin_practice_work_Replication_Test_Source_Replication_Test_Replication_TestCharacter_h_21_PROLOG
#define FID_Grauation_Proj_documents_kwakyerin_practice_work_Replication_Test_Source_Replication_Test_Replication_TestCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Grauation_Proj_documents_kwakyerin_practice_work_Replication_Test_Source_Replication_Test_Replication_TestCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Grauation_Proj_documents_kwakyerin_practice_work_Replication_Test_Source_Replication_Test_Replication_TestCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_Grauation_Proj_documents_kwakyerin_practice_work_Replication_Test_Source_Replication_Test_Replication_TestCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AReplication_TestCharacter;

// ********** End Class AReplication_TestCharacter *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Grauation_Proj_documents_kwakyerin_practice_work_Replication_Test_Source_Replication_Test_Replication_TestCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
