// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CombatDamageable.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCombatDamageable() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
REPLICATION_TEST_API UClass* Z_Construct_UClass_UCombatDamageable();
REPLICATION_TEST_API UClass* Z_Construct_UClass_UCombatDamageable_NoRegister();
UPackage* Z_Construct_UPackage__Script_Replication_Test();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UCombatDamageable Function ApplyDamage *******************************
struct Z_Construct_UFunction_UCombatDamageable_ApplyDamage_Statics
{
	struct CombatDamageable_eventApplyDamage_Parms
	{
		float Damage;
		AActor* DamageCauser;
		FVector DamageLocation;
		FVector DamageImpulse;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Damageable" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles damage and knockback events */" },
#endif
		{ "ModuleRelativePath", "Variant_Combat/Interfaces/CombatDamageable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles damage and knockback events" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageImpulse_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ApplyDamage constinit property declarations ***************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DamageLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DamageImpulse;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ApplyDamage constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ApplyDamage Property Definitions **************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCombatDamageable_ApplyDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatDamageable_eventApplyDamage_Parms, Damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatDamageable_ApplyDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatDamageable_eventApplyDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatDamageable_ApplyDamage_Statics::NewProp_DamageLocation = { "DamageLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatDamageable_eventApplyDamage_Parms, DamageLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageLocation_MetaData), NewProp_DamageLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatDamageable_ApplyDamage_Statics::NewProp_DamageImpulse = { "DamageImpulse", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatDamageable_eventApplyDamage_Parms, DamageImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageImpulse_MetaData), NewProp_DamageImpulse_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatDamageable_ApplyDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatDamageable_ApplyDamage_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatDamageable_ApplyDamage_Statics::NewProp_DamageCauser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatDamageable_ApplyDamage_Statics::NewProp_DamageLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatDamageable_ApplyDamage_Statics::NewProp_DamageImpulse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDamageable_ApplyDamage_Statics::PropPointers) < 2048);
// ********** End Function ApplyDamage Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatDamageable_ApplyDamage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCombatDamageable, nullptr, "ApplyDamage", 	Z_Construct_UFunction_UCombatDamageable_ApplyDamage_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDamageable_ApplyDamage_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UCombatDamageable_ApplyDamage_Statics::CombatDamageable_eventApplyDamage_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDamageable_ApplyDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatDamageable_ApplyDamage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCombatDamageable_ApplyDamage_Statics::CombatDamageable_eventApplyDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatDamageable_ApplyDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatDamageable_ApplyDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatDamageable::execApplyDamage)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
	P_GET_OBJECT(AActor,Z_Param_DamageCauser);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_DamageLocation);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_DamageImpulse);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyDamage(Z_Param_Damage,Z_Param_DamageCauser,Z_Param_Out_DamageLocation,Z_Param_Out_DamageImpulse);
	P_NATIVE_END;
}
// ********** End Interface UCombatDamageable Function ApplyDamage *********************************

// ********** Begin Interface UCombatDamageable Function ApplyHealing ******************************
struct Z_Construct_UFunction_UCombatDamageable_ApplyHealing_Statics
{
	struct CombatDamageable_eventApplyHealing_Parms
	{
		float Healing;
		AActor* Healer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Damageable" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles healing events */" },
#endif
		{ "ModuleRelativePath", "Variant_Combat/Interfaces/CombatDamageable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles healing events" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ApplyHealing constinit property declarations **************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Healing;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Healer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ApplyHealing constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ApplyHealing Property Definitions *************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCombatDamageable_ApplyHealing_Statics::NewProp_Healing = { "Healing", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatDamageable_eventApplyHealing_Parms, Healing), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatDamageable_ApplyHealing_Statics::NewProp_Healer = { "Healer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatDamageable_eventApplyHealing_Parms, Healer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatDamageable_ApplyHealing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatDamageable_ApplyHealing_Statics::NewProp_Healing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatDamageable_ApplyHealing_Statics::NewProp_Healer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDamageable_ApplyHealing_Statics::PropPointers) < 2048);
// ********** End Function ApplyHealing Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatDamageable_ApplyHealing_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCombatDamageable, nullptr, "ApplyHealing", 	Z_Construct_UFunction_UCombatDamageable_ApplyHealing_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDamageable_ApplyHealing_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UCombatDamageable_ApplyHealing_Statics::CombatDamageable_eventApplyHealing_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDamageable_ApplyHealing_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatDamageable_ApplyHealing_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCombatDamageable_ApplyHealing_Statics::CombatDamageable_eventApplyHealing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatDamageable_ApplyHealing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatDamageable_ApplyHealing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatDamageable::execApplyHealing)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Healing);
	P_GET_OBJECT(AActor,Z_Param_Healer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyHealing(Z_Param_Healing,Z_Param_Healer);
	P_NATIVE_END;
}
// ********** End Interface UCombatDamageable Function ApplyHealing ********************************

// ********** Begin Interface UCombatDamageable Function HandleDeath *******************************
struct Z_Construct_UFunction_UCombatDamageable_HandleDeath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Damageable" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles death events */" },
#endif
		{ "ModuleRelativePath", "Variant_Combat/Interfaces/CombatDamageable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles death events" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function HandleDeath constinit property declarations ***************************
// ********** End Function HandleDeath constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatDamageable_HandleDeath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCombatDamageable, nullptr, "HandleDeath", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDamageable_HandleDeath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatDamageable_HandleDeath_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCombatDamageable_HandleDeath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatDamageable_HandleDeath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatDamageable::execHandleDeath)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleDeath();
	P_NATIVE_END;
}
// ********** End Interface UCombatDamageable Function HandleDeath *********************************

// ********** Begin Interface UCombatDamageable Function NotifyDanger ******************************
struct Z_Construct_UFunction_UCombatDamageable_NotifyDanger_Statics
{
	struct CombatDamageable_eventNotifyDanger_Parms
	{
		FVector DangerLocation;
		AActor* DangerSource;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Damageable" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Notifies the actor of impending danger such as an incoming hit, allowing it to react. */" },
#endif
		{ "ModuleRelativePath", "Variant_Combat/Interfaces/CombatDamageable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Notifies the actor of impending danger such as an incoming hit, allowing it to react." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DangerLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function NotifyDanger constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_DangerLocation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DangerSource;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function NotifyDanger constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function NotifyDanger Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatDamageable_NotifyDanger_Statics::NewProp_DangerLocation = { "DangerLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatDamageable_eventNotifyDanger_Parms, DangerLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DangerLocation_MetaData), NewProp_DangerLocation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatDamageable_NotifyDanger_Statics::NewProp_DangerSource = { "DangerSource", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatDamageable_eventNotifyDanger_Parms, DangerSource), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatDamageable_NotifyDanger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatDamageable_NotifyDanger_Statics::NewProp_DangerLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatDamageable_NotifyDanger_Statics::NewProp_DangerSource,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDamageable_NotifyDanger_Statics::PropPointers) < 2048);
// ********** End Function NotifyDanger Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatDamageable_NotifyDanger_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCombatDamageable, nullptr, "NotifyDanger", 	Z_Construct_UFunction_UCombatDamageable_NotifyDanger_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDamageable_NotifyDanger_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UCombatDamageable_NotifyDanger_Statics::CombatDamageable_eventNotifyDanger_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDamageable_NotifyDanger_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatDamageable_NotifyDanger_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCombatDamageable_NotifyDanger_Statics::CombatDamageable_eventNotifyDanger_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatDamageable_NotifyDanger()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatDamageable_NotifyDanger_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatDamageable::execNotifyDanger)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_DangerLocation);
	P_GET_OBJECT(AActor,Z_Param_DangerSource);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NotifyDanger(Z_Param_Out_DangerLocation,Z_Param_DangerSource);
	P_NATIVE_END;
}
// ********** End Interface UCombatDamageable Function NotifyDanger ********************************

// ********** Begin Interface UCombatDamageable ****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UCombatDamageable;
UClass* UCombatDamageable::GetPrivateStaticClass()
{
	using TClass = UCombatDamageable;
	if (!Z_Registration_Info_UClass_UCombatDamageable.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CombatDamageable"),
			Z_Registration_Info_UClass_UCombatDamageable.InnerSingleton,
			StaticRegisterNativesUCombatDamageable,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UCombatDamageable.InnerSingleton;
}
UClass* Z_Construct_UClass_UCombatDamageable_NoRegister()
{
	return UCombatDamageable::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCombatDamageable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Variant_Combat/Interfaces/CombatDamageable.h" },
	};
#endif // WITH_METADATA

// ********** Begin Interface UCombatDamageable constinit property declarations ********************
// ********** End Interface UCombatDamageable constinit property declarations **********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ApplyDamage"), .Pointer = &ICombatDamageable::execApplyDamage },
		{ .NameUTF8 = UTF8TEXT("ApplyHealing"), .Pointer = &ICombatDamageable::execApplyHealing },
		{ .NameUTF8 = UTF8TEXT("HandleDeath"), .Pointer = &ICombatDamageable::execHandleDeath },
		{ .NameUTF8 = UTF8TEXT("NotifyDanger"), .Pointer = &ICombatDamageable::execNotifyDanger },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatDamageable_ApplyDamage, "ApplyDamage" }, // 760574518
		{ &Z_Construct_UFunction_UCombatDamageable_ApplyHealing, "ApplyHealing" }, // 1010959777
		{ &Z_Construct_UFunction_UCombatDamageable_HandleDeath, "HandleDeath" }, // 2158878200
		{ &Z_Construct_UFunction_UCombatDamageable_NotifyDanger, "NotifyDanger" }, // 2531564727
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICombatDamageable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UCombatDamageable_Statics
UObject* (*const Z_Construct_UClass_UCombatDamageable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Replication_Test,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatDamageable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatDamageable_Statics::ClassParams = {
	&UCombatDamageable::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatDamageable_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatDamageable_Statics::Class_MetaDataParams)
};
void UCombatDamageable::StaticRegisterNativesUCombatDamageable()
{
	UClass* Class = UCombatDamageable::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UCombatDamageable_Statics::Funcs));
}
UClass* Z_Construct_UClass_UCombatDamageable()
{
	if (!Z_Registration_Info_UClass_UCombatDamageable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatDamageable.OuterSingleton, Z_Construct_UClass_UCombatDamageable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatDamageable.OuterSingleton;
}
UCombatDamageable::UCombatDamageable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCombatDamageable);
// ********** End Interface UCombatDamageable ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Grauation_Proj_documents_kwakyerin_practice_work_Replication_Test_Source_Replication_Test_Variant_Combat_Interfaces_CombatDamageable_h__Script_Replication_Test_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatDamageable, UCombatDamageable::StaticClass, TEXT("UCombatDamageable"), &Z_Registration_Info_UClass_UCombatDamageable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatDamageable), 3615226388U) },
	};
}; // Z_CompiledInDeferFile_FID_Grauation_Proj_documents_kwakyerin_practice_work_Replication_Test_Source_Replication_Test_Variant_Combat_Interfaces_CombatDamageable_h__Script_Replication_Test_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Grauation_Proj_documents_kwakyerin_practice_work_Replication_Test_Source_Replication_Test_Variant_Combat_Interfaces_CombatDamageable_h__Script_Replication_Test_1797707419{
	TEXT("/Script/Replication_Test"),
	Z_CompiledInDeferFile_FID_Grauation_Proj_documents_kwakyerin_practice_work_Replication_Test_Source_Replication_Test_Variant_Combat_Interfaces_CombatDamageable_h__Script_Replication_Test_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Grauation_Proj_documents_kwakyerin_practice_work_Replication_Test_Source_Replication_Test_Variant_Combat_Interfaces_CombatDamageable_h__Script_Replication_Test_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
