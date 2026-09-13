// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CombatStateTreeUtility.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCombatStateTreeUtility() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
REPLICATION_TEST_API UClass* Z_Construct_UClass_ACombatEnemy_NoRegister();
REPLICATION_TEST_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeAttackInstanceData();
REPLICATION_TEST_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeCharacterGroundedCondition();
REPLICATION_TEST_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeCharacterGroundedConditionInstanceData();
REPLICATION_TEST_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeChargedAttackTask();
REPLICATION_TEST_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeComboAttackTask();
REPLICATION_TEST_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeFaceActorInstanceData();
REPLICATION_TEST_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeFaceActorTask();
REPLICATION_TEST_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeFaceLocationInstanceData();
REPLICATION_TEST_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeFaceLocationTask();
REPLICATION_TEST_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeGetPlayerInfoInstanceData();
REPLICATION_TEST_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeGetPlayerInfoTask();
REPLICATION_TEST_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeIsInDangerCondition();
REPLICATION_TEST_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeIsInDangerConditionInstanceData();
REPLICATION_TEST_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeSetCharacterSpeedInstanceData();
REPLICATION_TEST_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeSetCharacterSpeedTask();
REPLICATION_TEST_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeWaitForLandingTask();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeConditionCommonBase();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeTaskCommonBase();
UPackage* Z_Construct_UPackage__Script_Replication_Test();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FStateTreeCharacterGroundedConditionInstanceData ******************
struct Z_Construct_UScriptStruct_FStateTreeCharacterGroundedConditionInstanceData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FStateTreeCharacterGroundedConditionInstanceData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FStateTreeCharacterGroundedConditionInstanceData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Instance data struct for the FStateTreeCharacterGroundedCondition condition\n */" },
#endif
		{ "ModuleRelativePath", "Variant_Combat/AI/CombatStateTreeUtility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Instance data struct for the FStateTreeCharacterGroundedCondition condition" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[] = {
		{ "Category", "Context" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Character to check grounded status on */" },
#endif
		{ "ModuleRelativePath", "Variant_Combat/AI/CombatStateTreeUtility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Character to check grounded status on" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMustBeOnAir_MetaData[] = {
		{ "Category", "Condition" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, the condition passes if the character is not grounded instead */" },
#endif
		{ "ModuleRelativePath", "Variant_Combat/AI/CombatStateTreeUtility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, the condition passes if the character is not grounded instead" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FStateTreeCharacterGroundedConditionInstanceData constinit property declarations 
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static void NewProp_bMustBeOnAir_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMustBeOnAir;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FStateTreeCharacterGroundedConditionInstanceData constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeCharacterGroundedConditionInstanceData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FStateTreeCharacterGroundedConditionInstanceData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FStateTreeCharacterGroundedConditionInstanceData;
class UScriptStruct* FStateTreeCharacterGroundedConditionInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FStateTreeCharacterGroundedConditionInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FStateTreeCharacterGroundedConditionInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeCharacterGroundedConditionInstanceData, (UObject*)Z_Construct_UPackage__Script_Replication_Test(), TEXT("StateTreeCharacterGroundedConditionInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_FStateTreeCharacterGroundedConditionInstanceData.OuterSingleton;
	}

// ********** Begin ScriptStruct FStateTreeCharacterGroundedConditionInstanceData Property Definitions 
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStateTreeCharacterGroundedConditionInstanceData_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeCharacterGroundedConditionInstanceData, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Character_MetaData), NewProp_Character_MetaData) };
void Z_Construct_UScriptStruct_FStateTreeCharacterGroundedConditionInstanceData_Statics::NewProp_bMustBeOnAir_SetBit(void* Obj)
{
	((FStateTreeCharacterGroundedConditionInstanceData*)Obj)->bMustBeOnAir = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStateTreeCharacterGroundedConditionInstanceData_Statics::NewProp_bMustBeOnAir = { "bMustBeOnAir", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FStateTreeCharacterGroundedConditionInstanceData), &Z_Construct_UScriptStruct_FStateTreeCharacterGroundedConditionInstanceData_Statics::NewProp_bMustBeOnAir_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMustBeOnAir_MetaData), NewProp_bMustBeOnAir_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeCharacterGroundedConditionInstanceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeCharacterGroundedConditionInstanceData_Statics::NewProp_Character,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeCharacterGroundedConditionInstanceData_Statics::NewProp_bMustBeOnAir,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeCharacterGroundedConditionInstanceData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FStateTreeCharacterGroundedConditionInstanceData Property Definitions 
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeCharacterGroundedConditionInstanceData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Replication_Test,
	nullptr,
	&NewStructOps,
	"StateTreeCharacterGroundedConditionInstanceData",
	Z_Construct_UScriptStruct_FStateTreeCharacterGroundedConditionInstanceData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeCharacterGroundedConditionInstanceData_Statics::PropPointers),
	sizeof(FStateTreeCharacterGroundedConditionInstanceData),
	alignof(FStateTreeCharacterGroundedConditionInstanceData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeCharacterGroundedConditionInstanceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeCharacterGroundedConditionInstanceData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeCharacterGroundedConditionInstanceData()
{
	if (!Z_Registration_Info_UScriptStruct_FStateTreeCharacterGroundedConditionInstanceData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FStateTreeCharacterGroundedConditionInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeCharacterGroundedConditionInstanceData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FStateTreeCharacterGroundedConditionInstanceData.InnerSingleton);
}
// ********** End ScriptStruct FStateTreeCharacterGroundedConditionInstanceData ********************

// ********** Begin ScriptStruct FStateTreeCharacterGroundedCondition ******************************
struct Z_Construct_UScriptStruct_FStateTreeCharacterGroundedCondition_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FStateTreeCharacterGroundedCondition); }
	static inline consteval int16 GetStructAlignment() { return alignof(FStateTreeCharacterGroundedCondition); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  StateTree condition to check if the character is grounded\n */" },
#endif
		{ "DisplayName", "Character is Grounded" },
		{ "ModuleRelativePath", "Variant_Combat/AI/CombatStateTreeUtility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "StateTree condition to check if the character is grounded" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FStateTreeCharacterGroundedCondition constinit property declarations 
// ********** End ScriptStruct FStateTreeCharacterGroundedCondition constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeCharacterGroundedCondition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FStateTreeCharacterGroundedCondition_Statics
static_assert(std::is_polymorphic<FStateTreeCharacterGroundedCondition>() == std::is_polymorphic<FStateTreeConditionCommonBase>(), "USTRUCT FStateTreeCharacterGroundedCondition cannot be polymorphic unless super FStateTreeConditionCommonBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FStateTreeCharacterGroundedCondition;
class UScriptStruct* FStateTreeCharacterGroundedCondition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FStateTreeCharacterGroundedCondition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FStateTreeCharacterGroundedCondition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeCharacterGroundedCondition, (UObject*)Z_Construct_UPackage__Script_Replication_Test(), TEXT("StateTreeCharacterGroundedCondition"));
	}
	return Z_Registration_Info_UScriptStruct_FStateTreeCharacterGroundedCondition.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeCharacterGroundedCondition_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Replication_Test,
	Z_Construct_UScriptStruct_FStateTreeConditionCommonBase,
	&NewStructOps,
	"StateTreeCharacterGroundedCondition",
	nullptr,
	0,
	sizeof(FStateTreeCharacterGroundedCondition),
	alignof(FStateTreeCharacterGroundedCondition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeCharacterGroundedCondition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeCharacterGroundedCondition_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeCharacterGroundedCondition()
{
	if (!Z_Registration_Info_UScriptStruct_FStateTreeCharacterGroundedCondition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FStateTreeCharacterGroundedCondition.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeCharacterGroundedCondition_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FStateTreeCharacterGroundedCondition.InnerSingleton);
}
// ********** End ScriptStruct FStateTreeCharacterGroundedCondition ********************************

// ********** Begin ScriptStruct FStateTreeIsInDangerConditionInstanceData *************************
struct Z_Construct_UScriptStruct_FStateTreeIsInDangerConditionInstanceData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FStateTreeIsInDangerConditionInstanceData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FStateTreeIsInDangerConditionInstanceData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Instance data struct for the FStateTreeIsInDangerCondition condition\n */" },
#endif
		{ "ModuleRelativePath", "Variant_Combat/AI/CombatStateTreeUtility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Instance data struct for the FStateTreeIsInDangerCondition condition" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[] = {
		{ "Category", "Context" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Character to check danger status on */" },
#endif
		{ "ModuleRelativePath", "Variant_Combat/AI/CombatStateTreeUtility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Character to check danger status on" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinReactionTime_MetaData[] = {
		{ "Category", "Parameters" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Minimum time to wait before reacting to the danger event */" },
#endif
		{ "ModuleRelativePath", "Variant_Combat/AI/CombatStateTreeUtility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Minimum time to wait before reacting to the danger event" },
#endif
		{ "Units", "s" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxReactionTime_MetaData[] = {
		{ "Category", "Parameters" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum time to wait before ignoring the danger event */" },
#endif
		{ "ModuleRelativePath", "Variant_Combat/AI/CombatStateTreeUtility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum time to wait before ignoring the danger event" },
#endif
		{ "Units", "s" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DangerSightConeAngle_MetaData[] = {
		{ "Category", "Parameters" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Line of sight half angle for detecting incoming danger, in degrees*/" },
#endif
		{ "ModuleRelativePath", "Variant_Combat/AI/CombatStateTreeUtility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Line of sight half angle for detecting incoming danger, in degrees" },
#endif
		{ "Units", "degrees" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FStateTreeIsInDangerConditionInstanceData constinit property declarations 
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinReactionTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxReactionTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DangerSightConeAngle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FStateTreeIsInDangerConditionInstanceData constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeIsInDangerConditionInstanceData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FStateTreeIsInDangerConditionInstanceData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FStateTreeIsInDangerConditionInstanceData;
class UScriptStruct* FStateTreeIsInDangerConditionInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FStateTreeIsInDangerConditionInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FStateTreeIsInDangerConditionInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeIsInDangerConditionInstanceData, (UObject*)Z_Construct_UPackage__Script_Replication_Test(), TEXT("StateTreeIsInDangerConditionInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_FStateTreeIsInDangerConditionInstanceData.OuterSingleton;
	}

// ********** Begin ScriptStruct FStateTreeIsInDangerConditionInstanceData Property Definitions ****
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStateTreeIsInDangerConditionInstanceData_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeIsInDangerConditionInstanceData, Character), Z_Construct_UClass_ACombatEnemy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Character_MetaData), NewProp_Character_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStateTreeIsInDangerConditionInstanceData_Statics::NewProp_MinReactionTime = { "MinReactionTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeIsInDangerConditionInstanceData, MinReactionTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinReactionTime_MetaData), NewProp_MinReactionTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStateTreeIsInDangerConditionInstanceData_Statics::NewProp_MaxReactionTime = { "MaxReactionTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeIsInDangerConditionInstanceData, MaxReactionTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxReactionTime_MetaData), NewProp_MaxReactionTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStateTreeIsInDangerConditionInstanceData_Statics::NewProp_DangerSightConeAngle = { "DangerSightConeAngle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeIsInDangerConditionInstanceData, DangerSightConeAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DangerSightConeAngle_MetaData), NewProp_DangerSightConeAngle_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeIsInDangerConditionInstanceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeIsInDangerConditionInstanceData_Statics::NewProp_Character,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeIsInDangerConditionInstanceData_Statics::NewProp_MinReactionTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeIsInDangerConditionInstanceData_Statics::NewProp_MaxReactionTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeIsInDangerConditionInstanceData_Statics::NewProp_DangerSightConeAngle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeIsInDangerConditionInstanceData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FStateTreeIsInDangerConditionInstanceData Property Definitions ******
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeIsInDangerConditionInstanceData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Replication_Test,
	nullptr,
	&NewStructOps,
	"StateTreeIsInDangerConditionInstanceData",
	Z_Construct_UScriptStruct_FStateTreeIsInDangerConditionInstanceData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeIsInDangerConditionInstanceData_Statics::PropPointers),
	sizeof(FStateTreeIsInDangerConditionInstanceData),
	alignof(FStateTreeIsInDangerConditionInstanceData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeIsInDangerConditionInstanceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeIsInDangerConditionInstanceData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeIsInDangerConditionInstanceData()
{
	if (!Z_Registration_Info_UScriptStruct_FStateTreeIsInDangerConditionInstanceData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FStateTreeIsInDangerConditionInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeIsInDangerConditionInstanceData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FStateTreeIsInDangerConditionInstanceData.InnerSingleton);
}
// ********** End ScriptStruct FStateTreeIsInDangerConditionInstanceData ***************************

// ********** Begin ScriptStruct FStateTreeIsInDangerCondition *************************************
struct Z_Construct_UScriptStruct_FStateTreeIsInDangerCondition_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FStateTreeIsInDangerCondition); }
	static inline consteval int16 GetStructAlignment() { return alignof(FStateTreeIsInDangerCondition); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  StateTree condition to check if the character is about to be hit by an attack\n */" },
#endif
		{ "DisplayName", "Character is in Danger" },
		{ "ModuleRelativePath", "Variant_Combat/AI/CombatStateTreeUtility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "StateTree condition to check if the character is about to be hit by an attack" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FStateTreeIsInDangerCondition constinit property declarations *****
// ********** End ScriptStruct FStateTreeIsInDangerCondition constinit property declarations *******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeIsInDangerCondition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FStateTreeIsInDangerCondition_Statics
static_assert(std::is_polymorphic<FStateTreeIsInDangerCondition>() == std::is_polymorphic<FStateTreeConditionCommonBase>(), "USTRUCT FStateTreeIsInDangerCondition cannot be polymorphic unless super FStateTreeConditionCommonBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FStateTreeIsInDangerCondition;
class UScriptStruct* FStateTreeIsInDangerCondition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FStateTreeIsInDangerCondition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FStateTreeIsInDangerCondition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeIsInDangerCondition, (UObject*)Z_Construct_UPackage__Script_Replication_Test(), TEXT("StateTreeIsInDangerCondition"));
	}
	return Z_Registration_Info_UScriptStruct_FStateTreeIsInDangerCondition.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeIsInDangerCondition_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Replication_Test,
	Z_Construct_UScriptStruct_FStateTreeConditionCommonBase,
	&NewStructOps,
	"StateTreeIsInDangerCondition",
	nullptr,
	0,
	sizeof(FStateTreeIsInDangerCondition),
	alignof(FStateTreeIsInDangerCondition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeIsInDangerCondition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeIsInDangerCondition_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeIsInDangerCondition()
{
	if (!Z_Registration_Info_UScriptStruct_FStateTreeIsInDangerCondition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FStateTreeIsInDangerCondition.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeIsInDangerCondition_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FStateTreeIsInDangerCondition.InnerSingleton);
}
// ********** End ScriptStruct FStateTreeIsInDangerCondition ***************************************

// ********** Begin ScriptStruct FStateTreeAttackInstanceData **************************************
struct Z_Construct_UScriptStruct_FStateTreeAttackInstanceData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FStateTreeAttackInstanceData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FStateTreeAttackInstanceData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Instance data struct for the Combat StateTree tasks\n */" },
#endif
		{ "ModuleRelativePath", "Variant_Combat/AI/CombatStateTreeUtility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Instance data struct for the Combat StateTree tasks" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[] = {
		{ "Category", "Context" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Character that will perform the attack */" },
#endif
		{ "ModuleRelativePath", "Variant_Combat/AI/CombatStateTreeUtility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Character that will perform the attack" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FStateTreeAttackInstanceData constinit property declarations ******
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FStateTreeAttackInstanceData constinit property declarations ********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeAttackInstanceData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FStateTreeAttackInstanceData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FStateTreeAttackInstanceData;
class UScriptStruct* FStateTreeAttackInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FStateTreeAttackInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FStateTreeAttackInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeAttackInstanceData, (UObject*)Z_Construct_UPackage__Script_Replication_Test(), TEXT("StateTreeAttackInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_FStateTreeAttackInstanceData.OuterSingleton;
	}

// ********** Begin ScriptStruct FStateTreeAttackInstanceData Property Definitions *****************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStateTreeAttackInstanceData_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeAttackInstanceData, Character), Z_Construct_UClass_ACombatEnemy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Character_MetaData), NewProp_Character_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeAttackInstanceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeAttackInstanceData_Statics::NewProp_Character,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeAttackInstanceData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FStateTreeAttackInstanceData Property Definitions *******************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeAttackInstanceData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Replication_Test,
	nullptr,
	&NewStructOps,
	"StateTreeAttackInstanceData",
	Z_Construct_UScriptStruct_FStateTreeAttackInstanceData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeAttackInstanceData_Statics::PropPointers),
	sizeof(FStateTreeAttackInstanceData),
	alignof(FStateTreeAttackInstanceData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeAttackInstanceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeAttackInstanceData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeAttackInstanceData()
{
	if (!Z_Registration_Info_UScriptStruct_FStateTreeAttackInstanceData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FStateTreeAttackInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeAttackInstanceData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FStateTreeAttackInstanceData.InnerSingleton);
}
// ********** End ScriptStruct FStateTreeAttackInstanceData ****************************************

// ********** Begin ScriptStruct FStateTreeComboAttackTask *****************************************
struct Z_Construct_UScriptStruct_FStateTreeComboAttackTask_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FStateTreeComboAttackTask); }
	static inline consteval int16 GetStructAlignment() { return alignof(FStateTreeComboAttackTask); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  StateTree task to perform a combo attack\n */" },
#endif
		{ "DisplayName", "Combo Attack" },
		{ "ModuleRelativePath", "Variant_Combat/AI/CombatStateTreeUtility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "StateTree task to perform a combo attack" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FStateTreeComboAttackTask constinit property declarations *********
// ********** End ScriptStruct FStateTreeComboAttackTask constinit property declarations ***********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeComboAttackTask>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FStateTreeComboAttackTask_Statics
static_assert(std::is_polymorphic<FStateTreeComboAttackTask>() == std::is_polymorphic<FStateTreeTaskCommonBase>(), "USTRUCT FStateTreeComboAttackTask cannot be polymorphic unless super FStateTreeTaskCommonBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FStateTreeComboAttackTask;
class UScriptStruct* FStateTreeComboAttackTask::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FStateTreeComboAttackTask.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FStateTreeComboAttackTask.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeComboAttackTask, (UObject*)Z_Construct_UPackage__Script_Replication_Test(), TEXT("StateTreeComboAttackTask"));
	}
	return Z_Registration_Info_UScriptStruct_FStateTreeComboAttackTask.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeComboAttackTask_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Replication_Test,
	Z_Construct_UScriptStruct_FStateTreeTaskCommonBase,
	&NewStructOps,
	"StateTreeComboAttackTask",
	nullptr,
	0,
	sizeof(FStateTreeComboAttackTask),
	alignof(FStateTreeComboAttackTask),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeComboAttackTask_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeComboAttackTask_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeComboAttackTask()
{
	if (!Z_Registration_Info_UScriptStruct_FStateTreeComboAttackTask.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FStateTreeComboAttackTask.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeComboAttackTask_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FStateTreeComboAttackTask.InnerSingleton);
}
// ********** End ScriptStruct FStateTreeComboAttackTask *******************************************

// ********** Begin ScriptStruct FStateTreeChargedAttackTask ***************************************
struct Z_Construct_UScriptStruct_FStateTreeChargedAttackTask_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FStateTreeChargedAttackTask); }
	static inline consteval int16 GetStructAlignment() { return alignof(FStateTreeChargedAttackTask); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  StateTree task to perform a charged attack\n */" },
#endif
		{ "DisplayName", "Charged Attack" },
		{ "ModuleRelativePath", "Variant_Combat/AI/CombatStateTreeUtility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "StateTree task to perform a charged attack" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FStateTreeChargedAttackTask constinit property declarations *******
// ********** End ScriptStruct FStateTreeChargedAttackTask constinit property declarations *********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeChargedAttackTask>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FStateTreeChargedAttackTask_Statics
static_assert(std::is_polymorphic<FStateTreeChargedAttackTask>() == std::is_polymorphic<FStateTreeTaskCommonBase>(), "USTRUCT FStateTreeChargedAttackTask cannot be polymorphic unless super FStateTreeTaskCommonBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FStateTreeChargedAttackTask;
class UScriptStruct* FStateTreeChargedAttackTask::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FStateTreeChargedAttackTask.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FStateTreeChargedAttackTask.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeChargedAttackTask, (UObject*)Z_Construct_UPackage__Script_Replication_Test(), TEXT("StateTreeChargedAttackTask"));
	}
	return Z_Registration_Info_UScriptStruct_FStateTreeChargedAttackTask.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeChargedAttackTask_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Replication_Test,
	Z_Construct_UScriptStruct_FStateTreeTaskCommonBase,
	&NewStructOps,
	"StateTreeChargedAttackTask",
	nullptr,
	0,
	sizeof(FStateTreeChargedAttackTask),
	alignof(FStateTreeChargedAttackTask),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeChargedAttackTask_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeChargedAttackTask_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeChargedAttackTask()
{
	if (!Z_Registration_Info_UScriptStruct_FStateTreeChargedAttackTask.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FStateTreeChargedAttackTask.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeChargedAttackTask_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FStateTreeChargedAttackTask.InnerSingleton);
}
// ********** End ScriptStruct FStateTreeChargedAttackTask *****************************************

// ********** Begin ScriptStruct FStateTreeWaitForLandingTask **************************************
struct Z_Construct_UScriptStruct_FStateTreeWaitForLandingTask_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FStateTreeWaitForLandingTask); }
	static inline consteval int16 GetStructAlignment() { return alignof(FStateTreeWaitForLandingTask); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  StateTree task to wait for the character to land\n */" },
#endif
		{ "DisplayName", "Wait for Landing" },
		{ "ModuleRelativePath", "Variant_Combat/AI/CombatStateTreeUtility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "StateTree task to wait for the character to land" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FStateTreeWaitForLandingTask constinit property declarations ******
// ********** End ScriptStruct FStateTreeWaitForLandingTask constinit property declarations ********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeWaitForLandingTask>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FStateTreeWaitForLandingTask_Statics
static_assert(std::is_polymorphic<FStateTreeWaitForLandingTask>() == std::is_polymorphic<FStateTreeTaskCommonBase>(), "USTRUCT FStateTreeWaitForLandingTask cannot be polymorphic unless super FStateTreeTaskCommonBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FStateTreeWaitForLandingTask;
class UScriptStruct* FStateTreeWaitForLandingTask::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FStateTreeWaitForLandingTask.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FStateTreeWaitForLandingTask.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeWaitForLandingTask, (UObject*)Z_Construct_UPackage__Script_Replication_Test(), TEXT("StateTreeWaitForLandingTask"));
	}
	return Z_Registration_Info_UScriptStruct_FStateTreeWaitForLandingTask.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeWaitForLandingTask_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Replication_Test,
	Z_Construct_UScriptStruct_FStateTreeTaskCommonBase,
	&NewStructOps,
	"StateTreeWaitForLandingTask",
	nullptr,
	0,
	sizeof(FStateTreeWaitForLandingTask),
	alignof(FStateTreeWaitForLandingTask),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeWaitForLandingTask_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeWaitForLandingTask_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeWaitForLandingTask()
{
	if (!Z_Registration_Info_UScriptStruct_FStateTreeWaitForLandingTask.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FStateTreeWaitForLandingTask.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeWaitForLandingTask_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FStateTreeWaitForLandingTask.InnerSingleton);
}
// ********** End ScriptStruct FStateTreeWaitForLandingTask ****************************************

// ********** Begin ScriptStruct FStateTreeFaceActorInstanceData ***********************************
struct Z_Construct_UScriptStruct_FStateTreeFaceActorInstanceData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FStateTreeFaceActorInstanceData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FStateTreeFaceActorInstanceData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Instance data struct for the Face Towards Actor StateTree task\n */" },
#endif
		{ "ModuleRelativePath", "Variant_Combat/AI/CombatStateTreeUtility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Instance data struct for the Face Towards Actor StateTree task" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Controller_MetaData[] = {
		{ "Category", "Context" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** AI Controller that will determine the focused actor */" },
#endif
		{ "ModuleRelativePath", "Variant_Combat/AI/CombatStateTreeUtility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AI Controller that will determine the focused actor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorToFaceTowards_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Actor that will be faced towards */" },
#endif
		{ "ModuleRelativePath", "Variant_Combat/AI/CombatStateTreeUtility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Actor that will be faced towards" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FStateTreeFaceActorInstanceData constinit property declarations ***
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorToFaceTowards;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FStateTreeFaceActorInstanceData constinit property declarations *****
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeFaceActorInstanceData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FStateTreeFaceActorInstanceData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FStateTreeFaceActorInstanceData;
class UScriptStruct* FStateTreeFaceActorInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FStateTreeFaceActorInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FStateTreeFaceActorInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeFaceActorInstanceData, (UObject*)Z_Construct_UPackage__Script_Replication_Test(), TEXT("StateTreeFaceActorInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_FStateTreeFaceActorInstanceData.OuterSingleton;
	}

// ********** Begin ScriptStruct FStateTreeFaceActorInstanceData Property Definitions **************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStateTreeFaceActorInstanceData_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeFaceActorInstanceData, Controller), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Controller_MetaData), NewProp_Controller_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStateTreeFaceActorInstanceData_Statics::NewProp_ActorToFaceTowards = { "ActorToFaceTowards", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeFaceActorInstanceData, ActorToFaceTowards), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorToFaceTowards_MetaData), NewProp_ActorToFaceTowards_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeFaceActorInstanceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeFaceActorInstanceData_Statics::NewProp_Controller,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeFaceActorInstanceData_Statics::NewProp_ActorToFaceTowards,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeFaceActorInstanceData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FStateTreeFaceActorInstanceData Property Definitions ****************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeFaceActorInstanceData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Replication_Test,
	nullptr,
	&NewStructOps,
	"StateTreeFaceActorInstanceData",
	Z_Construct_UScriptStruct_FStateTreeFaceActorInstanceData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeFaceActorInstanceData_Statics::PropPointers),
	sizeof(FStateTreeFaceActorInstanceData),
	alignof(FStateTreeFaceActorInstanceData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeFaceActorInstanceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeFaceActorInstanceData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeFaceActorInstanceData()
{
	if (!Z_Registration_Info_UScriptStruct_FStateTreeFaceActorInstanceData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FStateTreeFaceActorInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeFaceActorInstanceData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FStateTreeFaceActorInstanceData.InnerSingleton);
}
// ********** End ScriptStruct FStateTreeFaceActorInstanceData *************************************

// ********** Begin ScriptStruct FStateTreeFaceActorTask *******************************************
struct Z_Construct_UScriptStruct_FStateTreeFaceActorTask_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FStateTreeFaceActorTask); }
	static inline consteval int16 GetStructAlignment() { return alignof(FStateTreeFaceActorTask); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  StateTree task to face an AI-Controlled Pawn towards an Actor\n */" },
#endif
		{ "DisplayName", "Face Towards Actor" },
		{ "ModuleRelativePath", "Variant_Combat/AI/CombatStateTreeUtility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "StateTree task to face an AI-Controlled Pawn towards an Actor" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FStateTreeFaceActorTask constinit property declarations ***********
// ********** End ScriptStruct FStateTreeFaceActorTask constinit property declarations *************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeFaceActorTask>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FStateTreeFaceActorTask_Statics
static_assert(std::is_polymorphic<FStateTreeFaceActorTask>() == std::is_polymorphic<FStateTreeTaskCommonBase>(), "USTRUCT FStateTreeFaceActorTask cannot be polymorphic unless super FStateTreeTaskCommonBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FStateTreeFaceActorTask;
class UScriptStruct* FStateTreeFaceActorTask::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FStateTreeFaceActorTask.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FStateTreeFaceActorTask.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeFaceActorTask, (UObject*)Z_Construct_UPackage__Script_Replication_Test(), TEXT("StateTreeFaceActorTask"));
	}
	return Z_Registration_Info_UScriptStruct_FStateTreeFaceActorTask.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeFaceActorTask_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Replication_Test,
	Z_Construct_UScriptStruct_FStateTreeTaskCommonBase,
	&NewStructOps,
	"StateTreeFaceActorTask",
	nullptr,
	0,
	sizeof(FStateTreeFaceActorTask),
	alignof(FStateTreeFaceActorTask),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeFaceActorTask_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeFaceActorTask_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeFaceActorTask()
{
	if (!Z_Registration_Info_UScriptStruct_FStateTreeFaceActorTask.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FStateTreeFaceActorTask.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeFaceActorTask_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FStateTreeFaceActorTask.InnerSingleton);
}
// ********** End ScriptStruct FStateTreeFaceActorTask *********************************************

// ********** Begin ScriptStruct FStateTreeFaceLocationInstanceData ********************************
struct Z_Construct_UScriptStruct_FStateTreeFaceLocationInstanceData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FStateTreeFaceLocationInstanceData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FStateTreeFaceLocationInstanceData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Instance data struct for the Face Towards Location StateTree task\n */" },
#endif
		{ "ModuleRelativePath", "Variant_Combat/AI/CombatStateTreeUtility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Instance data struct for the Face Towards Location StateTree task" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Controller_MetaData[] = {
		{ "Category", "Context" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** AI Controller that will determine the focused location */" },
#endif
		{ "ModuleRelativePath", "Variant_Combat/AI/CombatStateTreeUtility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AI Controller that will determine the focused location" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FaceLocation_MetaData[] = {
		{ "Category", "Parameter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Location that will be faced towards */" },
#endif
		{ "ModuleRelativePath", "Variant_Combat/AI/CombatStateTreeUtility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Location that will be faced towards" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FStateTreeFaceLocationInstanceData constinit property declarations 
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FaceLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FStateTreeFaceLocationInstanceData constinit property declarations **
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeFaceLocationInstanceData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FStateTreeFaceLocationInstanceData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FStateTreeFaceLocationInstanceData;
class UScriptStruct* FStateTreeFaceLocationInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FStateTreeFaceLocationInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FStateTreeFaceLocationInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeFaceLocationInstanceData, (UObject*)Z_Construct_UPackage__Script_Replication_Test(), TEXT("StateTreeFaceLocationInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_FStateTreeFaceLocationInstanceData.OuterSingleton;
	}

// ********** Begin ScriptStruct FStateTreeFaceLocationInstanceData Property Definitions ***********
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStateTreeFaceLocationInstanceData_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeFaceLocationInstanceData, Controller), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Controller_MetaData), NewProp_Controller_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeFaceLocationInstanceData_Statics::NewProp_FaceLocation = { "FaceLocation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeFaceLocationInstanceData, FaceLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FaceLocation_MetaData), NewProp_FaceLocation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeFaceLocationInstanceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeFaceLocationInstanceData_Statics::NewProp_Controller,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeFaceLocationInstanceData_Statics::NewProp_FaceLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeFaceLocationInstanceData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FStateTreeFaceLocationInstanceData Property Definitions *************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeFaceLocationInstanceData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Replication_Test,
	nullptr,
	&NewStructOps,
	"StateTreeFaceLocationInstanceData",
	Z_Construct_UScriptStruct_FStateTreeFaceLocationInstanceData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeFaceLocationInstanceData_Statics::PropPointers),
	sizeof(FStateTreeFaceLocationInstanceData),
	alignof(FStateTreeFaceLocationInstanceData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeFaceLocationInstanceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeFaceLocationInstanceData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeFaceLocationInstanceData()
{
	if (!Z_Registration_Info_UScriptStruct_FStateTreeFaceLocationInstanceData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FStateTreeFaceLocationInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeFaceLocationInstanceData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FStateTreeFaceLocationInstanceData.InnerSingleton);
}
// ********** End ScriptStruct FStateTreeFaceLocationInstanceData **********************************

// ********** Begin ScriptStruct FStateTreeFaceLocationTask ****************************************
struct Z_Construct_UScriptStruct_FStateTreeFaceLocationTask_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FStateTreeFaceLocationTask); }
	static inline consteval int16 GetStructAlignment() { return alignof(FStateTreeFaceLocationTask); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  StateTree task to face an AI-Controlled Pawn towards a world location\n */" },
#endif
		{ "DisplayName", "Face Towards Location" },
		{ "ModuleRelativePath", "Variant_Combat/AI/CombatStateTreeUtility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "StateTree task to face an AI-Controlled Pawn towards a world location" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FStateTreeFaceLocationTask constinit property declarations ********
// ********** End ScriptStruct FStateTreeFaceLocationTask constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeFaceLocationTask>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FStateTreeFaceLocationTask_Statics
static_assert(std::is_polymorphic<FStateTreeFaceLocationTask>() == std::is_polymorphic<FStateTreeTaskCommonBase>(), "USTRUCT FStateTreeFaceLocationTask cannot be polymorphic unless super FStateTreeTaskCommonBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FStateTreeFaceLocationTask;
class UScriptStruct* FStateTreeFaceLocationTask::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FStateTreeFaceLocationTask.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FStateTreeFaceLocationTask.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeFaceLocationTask, (UObject*)Z_Construct_UPackage__Script_Replication_Test(), TEXT("StateTreeFaceLocationTask"));
	}
	return Z_Registration_Info_UScriptStruct_FStateTreeFaceLocationTask.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeFaceLocationTask_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Replication_Test,
	Z_Construct_UScriptStruct_FStateTreeTaskCommonBase,
	&NewStructOps,
	"StateTreeFaceLocationTask",
	nullptr,
	0,
	sizeof(FStateTreeFaceLocationTask),
	alignof(FStateTreeFaceLocationTask),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeFaceLocationTask_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeFaceLocationTask_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeFaceLocationTask()
{
	if (!Z_Registration_Info_UScriptStruct_FStateTreeFaceLocationTask.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FStateTreeFaceLocationTask.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeFaceLocationTask_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FStateTreeFaceLocationTask.InnerSingleton);
}
// ********** End ScriptStruct FStateTreeFaceLocationTask ******************************************

// ********** Begin ScriptStruct FStateTreeSetCharacterSpeedInstanceData ***************************
struct Z_Construct_UScriptStruct_FStateTreeSetCharacterSpeedInstanceData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FStateTreeSetCharacterSpeedInstanceData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FStateTreeSetCharacterSpeedInstanceData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Instance data struct for the Set Character Speed StateTree task\n */" },
#endif
		{ "ModuleRelativePath", "Variant_Combat/AI/CombatStateTreeUtility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Instance data struct for the Set Character Speed StateTree task" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[] = {
		{ "Category", "Context" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Character that will be affected */" },
#endif
		{ "ModuleRelativePath", "Variant_Combat/AI/CombatStateTreeUtility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Character that will be affected" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "Category", "Parameter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Max ground speed to set for the character */" },
#endif
		{ "ModuleRelativePath", "Variant_Combat/AI/CombatStateTreeUtility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max ground speed to set for the character" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FStateTreeSetCharacterSpeedInstanceData constinit property declarations 
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FStateTreeSetCharacterSpeedInstanceData constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeSetCharacterSpeedInstanceData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FStateTreeSetCharacterSpeedInstanceData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FStateTreeSetCharacterSpeedInstanceData;
class UScriptStruct* FStateTreeSetCharacterSpeedInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FStateTreeSetCharacterSpeedInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FStateTreeSetCharacterSpeedInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeSetCharacterSpeedInstanceData, (UObject*)Z_Construct_UPackage__Script_Replication_Test(), TEXT("StateTreeSetCharacterSpeedInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_FStateTreeSetCharacterSpeedInstanceData.OuterSingleton;
	}

// ********** Begin ScriptStruct FStateTreeSetCharacterSpeedInstanceData Property Definitions ******
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStateTreeSetCharacterSpeedInstanceData_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeSetCharacterSpeedInstanceData, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Character_MetaData), NewProp_Character_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStateTreeSetCharacterSpeedInstanceData_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeSetCharacterSpeedInstanceData, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeSetCharacterSpeedInstanceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeSetCharacterSpeedInstanceData_Statics::NewProp_Character,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeSetCharacterSpeedInstanceData_Statics::NewProp_Speed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeSetCharacterSpeedInstanceData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FStateTreeSetCharacterSpeedInstanceData Property Definitions ********
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeSetCharacterSpeedInstanceData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Replication_Test,
	nullptr,
	&NewStructOps,
	"StateTreeSetCharacterSpeedInstanceData",
	Z_Construct_UScriptStruct_FStateTreeSetCharacterSpeedInstanceData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeSetCharacterSpeedInstanceData_Statics::PropPointers),
	sizeof(FStateTreeSetCharacterSpeedInstanceData),
	alignof(FStateTreeSetCharacterSpeedInstanceData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeSetCharacterSpeedInstanceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeSetCharacterSpeedInstanceData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeSetCharacterSpeedInstanceData()
{
	if (!Z_Registration_Info_UScriptStruct_FStateTreeSetCharacterSpeedInstanceData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FStateTreeSetCharacterSpeedInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeSetCharacterSpeedInstanceData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FStateTreeSetCharacterSpeedInstanceData.InnerSingleton);
}
// ********** End ScriptStruct FStateTreeSetCharacterSpeedInstanceData *****************************

// ********** Begin ScriptStruct FStateTreeSetCharacterSpeedTask ***********************************
struct Z_Construct_UScriptStruct_FStateTreeSetCharacterSpeedTask_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FStateTreeSetCharacterSpeedTask); }
	static inline consteval int16 GetStructAlignment() { return alignof(FStateTreeSetCharacterSpeedTask); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  StateTree task to change a Character's ground speed\n */" },
#endif
		{ "DisplayName", "Set Character Speed" },
		{ "ModuleRelativePath", "Variant_Combat/AI/CombatStateTreeUtility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "StateTree task to change a Character's ground speed" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FStateTreeSetCharacterSpeedTask constinit property declarations ***
// ********** End ScriptStruct FStateTreeSetCharacterSpeedTask constinit property declarations *****
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeSetCharacterSpeedTask>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FStateTreeSetCharacterSpeedTask_Statics
static_assert(std::is_polymorphic<FStateTreeSetCharacterSpeedTask>() == std::is_polymorphic<FStateTreeTaskCommonBase>(), "USTRUCT FStateTreeSetCharacterSpeedTask cannot be polymorphic unless super FStateTreeTaskCommonBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FStateTreeSetCharacterSpeedTask;
class UScriptStruct* FStateTreeSetCharacterSpeedTask::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FStateTreeSetCharacterSpeedTask.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FStateTreeSetCharacterSpeedTask.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeSetCharacterSpeedTask, (UObject*)Z_Construct_UPackage__Script_Replication_Test(), TEXT("StateTreeSetCharacterSpeedTask"));
	}
	return Z_Registration_Info_UScriptStruct_FStateTreeSetCharacterSpeedTask.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeSetCharacterSpeedTask_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Replication_Test,
	Z_Construct_UScriptStruct_FStateTreeTaskCommonBase,
	&NewStructOps,
	"StateTreeSetCharacterSpeedTask",
	nullptr,
	0,
	sizeof(FStateTreeSetCharacterSpeedTask),
	alignof(FStateTreeSetCharacterSpeedTask),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeSetCharacterSpeedTask_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeSetCharacterSpeedTask_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeSetCharacterSpeedTask()
{
	if (!Z_Registration_Info_UScriptStruct_FStateTreeSetCharacterSpeedTask.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FStateTreeSetCharacterSpeedTask.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeSetCharacterSpeedTask_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FStateTreeSetCharacterSpeedTask.InnerSingleton);
}
// ********** End ScriptStruct FStateTreeSetCharacterSpeedTask *************************************

// ********** Begin ScriptStruct FStateTreeGetPlayerInfoInstanceData *******************************
struct Z_Construct_UScriptStruct_FStateTreeGetPlayerInfoInstanceData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FStateTreeGetPlayerInfoInstanceData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FStateTreeGetPlayerInfoInstanceData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Instance data struct for the Get Player Info task\n */" },
#endif
		{ "ModuleRelativePath", "Variant_Combat/AI/CombatStateTreeUtility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Instance data struct for the Get Player Info task" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[] = {
		{ "Category", "Context" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Character that owns this task */" },
#endif
		{ "ModuleRelativePath", "Variant_Combat/AI/CombatStateTreeUtility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Character that owns this task" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetPlayerCharacter_MetaData[] = {
		{ "Category", "StateTreeGetPlayerInfoInstanceData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Character that owns this task */" },
#endif
		{ "ModuleRelativePath", "Variant_Combat/AI/CombatStateTreeUtility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Character that owns this task" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetPlayerLocation_MetaData[] = {
		{ "Category", "StateTreeGetPlayerInfoInstanceData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Last known location for the target */" },
#endif
		{ "ModuleRelativePath", "Variant_Combat/AI/CombatStateTreeUtility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Last known location for the target" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceToTarget_MetaData[] = {
		{ "Category", "StateTreeGetPlayerInfoInstanceData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Distance to the target */" },
#endif
		{ "ModuleRelativePath", "Variant_Combat/AI/CombatStateTreeUtility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Distance to the target" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FStateTreeGetPlayerInfoInstanceData constinit property declarations 
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetPlayerCharacter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetPlayerLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceToTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FStateTreeGetPlayerInfoInstanceData constinit property declarations *
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeGetPlayerInfoInstanceData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FStateTreeGetPlayerInfoInstanceData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FStateTreeGetPlayerInfoInstanceData;
class UScriptStruct* FStateTreeGetPlayerInfoInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FStateTreeGetPlayerInfoInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FStateTreeGetPlayerInfoInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeGetPlayerInfoInstanceData, (UObject*)Z_Construct_UPackage__Script_Replication_Test(), TEXT("StateTreeGetPlayerInfoInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_FStateTreeGetPlayerInfoInstanceData.OuterSingleton;
	}

// ********** Begin ScriptStruct FStateTreeGetPlayerInfoInstanceData Property Definitions **********
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStateTreeGetPlayerInfoInstanceData_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeGetPlayerInfoInstanceData, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Character_MetaData), NewProp_Character_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStateTreeGetPlayerInfoInstanceData_Statics::NewProp_TargetPlayerCharacter = { "TargetPlayerCharacter", nullptr, (EPropertyFlags)0x0114000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeGetPlayerInfoInstanceData, TargetPlayerCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetPlayerCharacter_MetaData), NewProp_TargetPlayerCharacter_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeGetPlayerInfoInstanceData_Statics::NewProp_TargetPlayerLocation = { "TargetPlayerLocation", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeGetPlayerInfoInstanceData, TargetPlayerLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetPlayerLocation_MetaData), NewProp_TargetPlayerLocation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStateTreeGetPlayerInfoInstanceData_Statics::NewProp_DistanceToTarget = { "DistanceToTarget", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeGetPlayerInfoInstanceData, DistanceToTarget), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceToTarget_MetaData), NewProp_DistanceToTarget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeGetPlayerInfoInstanceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeGetPlayerInfoInstanceData_Statics::NewProp_Character,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeGetPlayerInfoInstanceData_Statics::NewProp_TargetPlayerCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeGetPlayerInfoInstanceData_Statics::NewProp_TargetPlayerLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeGetPlayerInfoInstanceData_Statics::NewProp_DistanceToTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeGetPlayerInfoInstanceData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FStateTreeGetPlayerInfoInstanceData Property Definitions ************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeGetPlayerInfoInstanceData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Replication_Test,
	nullptr,
	&NewStructOps,
	"StateTreeGetPlayerInfoInstanceData",
	Z_Construct_UScriptStruct_FStateTreeGetPlayerInfoInstanceData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeGetPlayerInfoInstanceData_Statics::PropPointers),
	sizeof(FStateTreeGetPlayerInfoInstanceData),
	alignof(FStateTreeGetPlayerInfoInstanceData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeGetPlayerInfoInstanceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeGetPlayerInfoInstanceData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeGetPlayerInfoInstanceData()
{
	if (!Z_Registration_Info_UScriptStruct_FStateTreeGetPlayerInfoInstanceData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FStateTreeGetPlayerInfoInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeGetPlayerInfoInstanceData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FStateTreeGetPlayerInfoInstanceData.InnerSingleton);
}
// ********** End ScriptStruct FStateTreeGetPlayerInfoInstanceData *********************************

// ********** Begin ScriptStruct FStateTreeGetPlayerInfoTask ***************************************
struct Z_Construct_UScriptStruct_FStateTreeGetPlayerInfoTask_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FStateTreeGetPlayerInfoTask); }
	static inline consteval int16 GetStructAlignment() { return alignof(FStateTreeGetPlayerInfoTask); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  StateTree task to get information about the player character\n */" },
#endif
		{ "DisplayName", "GetPlayerInfo" },
		{ "ModuleRelativePath", "Variant_Combat/AI/CombatStateTreeUtility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "StateTree task to get information about the player character" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FStateTreeGetPlayerInfoTask constinit property declarations *******
// ********** End ScriptStruct FStateTreeGetPlayerInfoTask constinit property declarations *********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeGetPlayerInfoTask>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FStateTreeGetPlayerInfoTask_Statics
static_assert(std::is_polymorphic<FStateTreeGetPlayerInfoTask>() == std::is_polymorphic<FStateTreeTaskCommonBase>(), "USTRUCT FStateTreeGetPlayerInfoTask cannot be polymorphic unless super FStateTreeTaskCommonBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FStateTreeGetPlayerInfoTask;
class UScriptStruct* FStateTreeGetPlayerInfoTask::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FStateTreeGetPlayerInfoTask.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FStateTreeGetPlayerInfoTask.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeGetPlayerInfoTask, (UObject*)Z_Construct_UPackage__Script_Replication_Test(), TEXT("StateTreeGetPlayerInfoTask"));
	}
	return Z_Registration_Info_UScriptStruct_FStateTreeGetPlayerInfoTask.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeGetPlayerInfoTask_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Replication_Test,
	Z_Construct_UScriptStruct_FStateTreeTaskCommonBase,
	&NewStructOps,
	"StateTreeGetPlayerInfoTask",
	nullptr,
	0,
	sizeof(FStateTreeGetPlayerInfoTask),
	alignof(FStateTreeGetPlayerInfoTask),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeGetPlayerInfoTask_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeGetPlayerInfoTask_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeGetPlayerInfoTask()
{
	if (!Z_Registration_Info_UScriptStruct_FStateTreeGetPlayerInfoTask.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FStateTreeGetPlayerInfoTask.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeGetPlayerInfoTask_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FStateTreeGetPlayerInfoTask.InnerSingleton);
}
// ********** End ScriptStruct FStateTreeGetPlayerInfoTask *****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Grauation_Proj_documents_kwakyerin_practice_work_Replication_Test_Source_Replication_Test_Variant_Combat_AI_CombatStateTreeUtility_h__Script_Replication_Test_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FStateTreeCharacterGroundedConditionInstanceData::StaticStruct, Z_Construct_UScriptStruct_FStateTreeCharacterGroundedConditionInstanceData_Statics::NewStructOps, TEXT("StateTreeCharacterGroundedConditionInstanceData"),&Z_Registration_Info_UScriptStruct_FStateTreeCharacterGroundedConditionInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeCharacterGroundedConditionInstanceData), 2121811447U) },
		{ FStateTreeCharacterGroundedCondition::StaticStruct, Z_Construct_UScriptStruct_FStateTreeCharacterGroundedCondition_Statics::NewStructOps, TEXT("StateTreeCharacterGroundedCondition"),&Z_Registration_Info_UScriptStruct_FStateTreeCharacterGroundedCondition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeCharacterGroundedCondition), 544267382U) },
		{ FStateTreeIsInDangerConditionInstanceData::StaticStruct, Z_Construct_UScriptStruct_FStateTreeIsInDangerConditionInstanceData_Statics::NewStructOps, TEXT("StateTreeIsInDangerConditionInstanceData"),&Z_Registration_Info_UScriptStruct_FStateTreeIsInDangerConditionInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeIsInDangerConditionInstanceData), 366214239U) },
		{ FStateTreeIsInDangerCondition::StaticStruct, Z_Construct_UScriptStruct_FStateTreeIsInDangerCondition_Statics::NewStructOps, TEXT("StateTreeIsInDangerCondition"),&Z_Registration_Info_UScriptStruct_FStateTreeIsInDangerCondition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeIsInDangerCondition), 3069163734U) },
		{ FStateTreeAttackInstanceData::StaticStruct, Z_Construct_UScriptStruct_FStateTreeAttackInstanceData_Statics::NewStructOps, TEXT("StateTreeAttackInstanceData"),&Z_Registration_Info_UScriptStruct_FStateTreeAttackInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeAttackInstanceData), 1634842936U) },
		{ FStateTreeComboAttackTask::StaticStruct, Z_Construct_UScriptStruct_FStateTreeComboAttackTask_Statics::NewStructOps, TEXT("StateTreeComboAttackTask"),&Z_Registration_Info_UScriptStruct_FStateTreeComboAttackTask, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeComboAttackTask), 1085609136U) },
		{ FStateTreeChargedAttackTask::StaticStruct, Z_Construct_UScriptStruct_FStateTreeChargedAttackTask_Statics::NewStructOps, TEXT("StateTreeChargedAttackTask"),&Z_Registration_Info_UScriptStruct_FStateTreeChargedAttackTask, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeChargedAttackTask), 1381133005U) },
		{ FStateTreeWaitForLandingTask::StaticStruct, Z_Construct_UScriptStruct_FStateTreeWaitForLandingTask_Statics::NewStructOps, TEXT("StateTreeWaitForLandingTask"),&Z_Registration_Info_UScriptStruct_FStateTreeWaitForLandingTask, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeWaitForLandingTask), 2331353054U) },
		{ FStateTreeFaceActorInstanceData::StaticStruct, Z_Construct_UScriptStruct_FStateTreeFaceActorInstanceData_Statics::NewStructOps, TEXT("StateTreeFaceActorInstanceData"),&Z_Registration_Info_UScriptStruct_FStateTreeFaceActorInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeFaceActorInstanceData), 3447090911U) },
		{ FStateTreeFaceActorTask::StaticStruct, Z_Construct_UScriptStruct_FStateTreeFaceActorTask_Statics::NewStructOps, TEXT("StateTreeFaceActorTask"),&Z_Registration_Info_UScriptStruct_FStateTreeFaceActorTask, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeFaceActorTask), 2866168674U) },
		{ FStateTreeFaceLocationInstanceData::StaticStruct, Z_Construct_UScriptStruct_FStateTreeFaceLocationInstanceData_Statics::NewStructOps, TEXT("StateTreeFaceLocationInstanceData"),&Z_Registration_Info_UScriptStruct_FStateTreeFaceLocationInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeFaceLocationInstanceData), 1034433584U) },
		{ FStateTreeFaceLocationTask::StaticStruct, Z_Construct_UScriptStruct_FStateTreeFaceLocationTask_Statics::NewStructOps, TEXT("StateTreeFaceLocationTask"),&Z_Registration_Info_UScriptStruct_FStateTreeFaceLocationTask, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeFaceLocationTask), 2041915052U) },
		{ FStateTreeSetCharacterSpeedInstanceData::StaticStruct, Z_Construct_UScriptStruct_FStateTreeSetCharacterSpeedInstanceData_Statics::NewStructOps, TEXT("StateTreeSetCharacterSpeedInstanceData"),&Z_Registration_Info_UScriptStruct_FStateTreeSetCharacterSpeedInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeSetCharacterSpeedInstanceData), 1909183532U) },
		{ FStateTreeSetCharacterSpeedTask::StaticStruct, Z_Construct_UScriptStruct_FStateTreeSetCharacterSpeedTask_Statics::NewStructOps, TEXT("StateTreeSetCharacterSpeedTask"),&Z_Registration_Info_UScriptStruct_FStateTreeSetCharacterSpeedTask, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeSetCharacterSpeedTask), 1810240889U) },
		{ FStateTreeGetPlayerInfoInstanceData::StaticStruct, Z_Construct_UScriptStruct_FStateTreeGetPlayerInfoInstanceData_Statics::NewStructOps, TEXT("StateTreeGetPlayerInfoInstanceData"),&Z_Registration_Info_UScriptStruct_FStateTreeGetPlayerInfoInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeGetPlayerInfoInstanceData), 3736848204U) },
		{ FStateTreeGetPlayerInfoTask::StaticStruct, Z_Construct_UScriptStruct_FStateTreeGetPlayerInfoTask_Statics::NewStructOps, TEXT("StateTreeGetPlayerInfoTask"),&Z_Registration_Info_UScriptStruct_FStateTreeGetPlayerInfoTask, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeGetPlayerInfoTask), 1018120765U) },
	};
}; // Z_CompiledInDeferFile_FID_Grauation_Proj_documents_kwakyerin_practice_work_Replication_Test_Source_Replication_Test_Variant_Combat_AI_CombatStateTreeUtility_h__Script_Replication_Test_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Grauation_Proj_documents_kwakyerin_practice_work_Replication_Test_Source_Replication_Test_Variant_Combat_AI_CombatStateTreeUtility_h__Script_Replication_Test_3685512752{
	TEXT("/Script/Replication_Test"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Grauation_Proj_documents_kwakyerin_practice_work_Replication_Test_Source_Replication_Test_Variant_Combat_AI_CombatStateTreeUtility_h__Script_Replication_Test_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Grauation_Proj_documents_kwakyerin_practice_work_Replication_Test_Source_Replication_Test_Variant_Combat_AI_CombatStateTreeUtility_h__Script_Replication_Test_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
