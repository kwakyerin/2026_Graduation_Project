// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Variant_Combat/Gameplay/CombatCheckpointVolume.h"

#ifdef REPLICATION_TEST_CombatCheckpointVolume_generated_h
#error "CombatCheckpointVolume.generated.h already included, missing '#pragma once' in CombatCheckpointVolume.h"
#endif
#define REPLICATION_TEST_CombatCheckpointVolume_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class ACombatCheckpointVolume **************************************************
#define FID_Grauation_Proj_documents_kwakyerin_practice_work_Replication_Test_Source_Replication_Test_Variant_Combat_Gameplay_CombatCheckpointVolume_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlap);


struct Z_Construct_UClass_ACombatCheckpointVolume_Statics;
REPLICATION_TEST_API UClass* Z_Construct_UClass_ACombatCheckpointVolume_NoRegister();

#define FID_Grauation_Proj_documents_kwakyerin_practice_work_Replication_Test_Source_Replication_Test_Variant_Combat_Gameplay_CombatCheckpointVolume_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACombatCheckpointVolume(); \
	friend struct ::Z_Construct_UClass_ACombatCheckpointVolume_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REPLICATION_TEST_API UClass* ::Z_Construct_UClass_ACombatCheckpointVolume_NoRegister(); \
public: \
	DECLARE_CLASS2(ACombatCheckpointVolume, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Replication_Test"), Z_Construct_UClass_ACombatCheckpointVolume_NoRegister) \
	DECLARE_SERIALIZER(ACombatCheckpointVolume)


#define FID_Grauation_Proj_documents_kwakyerin_practice_work_Replication_Test_Source_Replication_Test_Variant_Combat_Gameplay_CombatCheckpointVolume_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACombatCheckpointVolume(ACombatCheckpointVolume&&) = delete; \
	ACombatCheckpointVolume(const ACombatCheckpointVolume&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACombatCheckpointVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACombatCheckpointVolume); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ACombatCheckpointVolume) \
	NO_API virtual ~ACombatCheckpointVolume();


#define FID_Grauation_Proj_documents_kwakyerin_practice_work_Replication_Test_Source_Replication_Test_Variant_Combat_Gameplay_CombatCheckpointVolume_h_10_PROLOG
#define FID_Grauation_Proj_documents_kwakyerin_practice_work_Replication_Test_Source_Replication_Test_Variant_Combat_Gameplay_CombatCheckpointVolume_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Grauation_Proj_documents_kwakyerin_practice_work_Replication_Test_Source_Replication_Test_Variant_Combat_Gameplay_CombatCheckpointVolume_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Grauation_Proj_documents_kwakyerin_practice_work_Replication_Test_Source_Replication_Test_Variant_Combat_Gameplay_CombatCheckpointVolume_h_13_INCLASS_NO_PURE_DECLS \
	FID_Grauation_Proj_documents_kwakyerin_practice_work_Replication_Test_Source_Replication_Test_Variant_Combat_Gameplay_CombatCheckpointVolume_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACombatCheckpointVolume;

// ********** End Class ACombatCheckpointVolume ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Grauation_Proj_documents_kwakyerin_practice_work_Replication_Test_Source_Replication_Test_Variant_Combat_Gameplay_CombatCheckpointVolume_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
