// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Variant_Combat/AI/CombatEnemySpawner.h"

#ifdef REPLICATION_TEST_CombatEnemySpawner_generated_h
#error "CombatEnemySpawner.generated.h already included, missing '#pragma once' in CombatEnemySpawner.h"
#endif
#define REPLICATION_TEST_CombatEnemySpawner_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;

// ********** Begin Class ACombatEnemySpawner ******************************************************
#define FID_Grauation_Proj_documents_kwakyerin_practice_work_Replication_Test_Source_Replication_Test_Variant_Combat_AI_CombatEnemySpawner_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDeactivateInteraction); \
	DECLARE_FUNCTION(execActivateInteraction); \
	DECLARE_FUNCTION(execToggleInteraction); \
	DECLARE_FUNCTION(execOnEnemyDied);


struct Z_Construct_UClass_ACombatEnemySpawner_Statics;
REPLICATION_TEST_API UClass* Z_Construct_UClass_ACombatEnemySpawner_NoRegister();

#define FID_Grauation_Proj_documents_kwakyerin_practice_work_Replication_Test_Source_Replication_Test_Variant_Combat_AI_CombatEnemySpawner_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACombatEnemySpawner(); \
	friend struct ::Z_Construct_UClass_ACombatEnemySpawner_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REPLICATION_TEST_API UClass* ::Z_Construct_UClass_ACombatEnemySpawner_NoRegister(); \
public: \
	DECLARE_CLASS2(ACombatEnemySpawner, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Replication_Test"), Z_Construct_UClass_ACombatEnemySpawner_NoRegister) \
	DECLARE_SERIALIZER(ACombatEnemySpawner) \
	virtual UObject* _getUObject() const override { return const_cast<ACombatEnemySpawner*>(this); }


#define FID_Grauation_Proj_documents_kwakyerin_practice_work_Replication_Test_Source_Replication_Test_Variant_Combat_AI_CombatEnemySpawner_h_23_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACombatEnemySpawner(ACombatEnemySpawner&&) = delete; \
	ACombatEnemySpawner(const ACombatEnemySpawner&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACombatEnemySpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACombatEnemySpawner); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ACombatEnemySpawner) \
	NO_API virtual ~ACombatEnemySpawner();


#define FID_Grauation_Proj_documents_kwakyerin_practice_work_Replication_Test_Source_Replication_Test_Variant_Combat_AI_CombatEnemySpawner_h_20_PROLOG
#define FID_Grauation_Proj_documents_kwakyerin_practice_work_Replication_Test_Source_Replication_Test_Variant_Combat_AI_CombatEnemySpawner_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Grauation_Proj_documents_kwakyerin_practice_work_Replication_Test_Source_Replication_Test_Variant_Combat_AI_CombatEnemySpawner_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Grauation_Proj_documents_kwakyerin_practice_work_Replication_Test_Source_Replication_Test_Variant_Combat_AI_CombatEnemySpawner_h_23_INCLASS_NO_PURE_DECLS \
	FID_Grauation_Proj_documents_kwakyerin_practice_work_Replication_Test_Source_Replication_Test_Variant_Combat_AI_CombatEnemySpawner_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACombatEnemySpawner;

// ********** End Class ACombatEnemySpawner ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Grauation_Proj_documents_kwakyerin_practice_work_Replication_Test_Source_Replication_Test_Variant_Combat_AI_CombatEnemySpawner_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
