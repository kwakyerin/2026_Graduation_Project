// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Variant_Combat/Interfaces/CombatDamageable.h"

#ifdef GRADU_PRO_CombatDamageable_generated_h
#error "CombatDamageable.generated.h already included, missing '#pragma once' in CombatDamageable.h"
#endif
#define GRADU_PRO_CombatDamageable_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;

// ********** Begin Interface UCombatDamageable ****************************************************
#define FID_Graduation_Proj_source_code_Gradu_Pro_Source_Gradu_Pro_Variant_Combat_Interfaces_CombatDamageable_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execNotifyDanger); \
	DECLARE_FUNCTION(execApplyHealing); \
	DECLARE_FUNCTION(execHandleDeath); \
	DECLARE_FUNCTION(execApplyDamage);


struct Z_Construct_UClass_UCombatDamageable_Statics;
GRADU_PRO_API UClass* Z_Construct_UClass_UCombatDamageable_NoRegister();

#define FID_Graduation_Proj_source_code_Gradu_Pro_Source_Gradu_Pro_Variant_Combat_Interfaces_CombatDamageable_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GRADU_PRO_API UCombatDamageable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCombatDamageable(UCombatDamageable&&) = delete; \
	UCombatDamageable(const UCombatDamageable&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GRADU_PRO_API, UCombatDamageable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatDamageable); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCombatDamageable) \
	virtual ~UCombatDamageable() = default;


#define FID_Graduation_Proj_source_code_Gradu_Pro_Source_Gradu_Pro_Variant_Combat_Interfaces_CombatDamageable_h_17_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCombatDamageable(); \
	friend struct ::Z_Construct_UClass_UCombatDamageable_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GRADU_PRO_API UClass* ::Z_Construct_UClass_UCombatDamageable_NoRegister(); \
public: \
	DECLARE_CLASS2(UCombatDamageable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Gradu_Pro"), Z_Construct_UClass_UCombatDamageable_NoRegister) \
	DECLARE_SERIALIZER(UCombatDamageable)


#define FID_Graduation_Proj_source_code_Gradu_Pro_Source_Gradu_Pro_Variant_Combat_Interfaces_CombatDamageable_h_17_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Graduation_Proj_source_code_Gradu_Pro_Source_Gradu_Pro_Variant_Combat_Interfaces_CombatDamageable_h_17_GENERATED_UINTERFACE_BODY() \
	FID_Graduation_Proj_source_code_Gradu_Pro_Source_Gradu_Pro_Variant_Combat_Interfaces_CombatDamageable_h_17_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Graduation_Proj_source_code_Gradu_Pro_Source_Gradu_Pro_Variant_Combat_Interfaces_CombatDamageable_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICombatDamageable() {} \
public: \
	typedef UCombatDamageable UClassType; \
	typedef ICombatDamageable ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Graduation_Proj_source_code_Gradu_Pro_Source_Gradu_Pro_Variant_Combat_Interfaces_CombatDamageable_h_14_PROLOG
#define FID_Graduation_Proj_source_code_Gradu_Pro_Source_Gradu_Pro_Variant_Combat_Interfaces_CombatDamageable_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Graduation_Proj_source_code_Gradu_Pro_Source_Gradu_Pro_Variant_Combat_Interfaces_CombatDamageable_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Graduation_Proj_source_code_Gradu_Pro_Source_Gradu_Pro_Variant_Combat_Interfaces_CombatDamageable_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCombatDamageable;

// ********** End Interface UCombatDamageable ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Graduation_Proj_source_code_Gradu_Pro_Source_Gradu_Pro_Variant_Combat_Interfaces_CombatDamageable_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
