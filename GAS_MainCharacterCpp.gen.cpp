// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GAS_MainCharacterCpp.h"
#include "GameplayAbilitySpecHandle.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeGAS_MainCharacterCpp() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCurveVector_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
IWALS_ABILITYSYSTEM_API UClass* Z_Construct_UClass_AGAS_MainCharacterCpp();
IWALS_ABILITYSYSTEM_API UClass* Z_Construct_UClass_AGAS_MainCharacterCpp_NoRegister();
IWALS_ABILITYSYSTEM_API UClass* Z_Construct_UClass_UIWALS_BaseAttributeSet_NoRegister();
IWALS_ABILITYSYSTEM_API UClass* Z_Construct_UClass_UIWALS_GameplayAbilitySet_NoRegister();
IWALS_ABILITYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FMovementSettingsStrafe();
UPackage* Z_Construct_UPackage__Script_IWALS_AbilitySystem();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FMovementSettingsStrafe *******************************************
struct Z_Construct_UScriptStruct_FMovementSettingsStrafe_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FMovementSettingsStrafe); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMovementSettingsStrafe); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WalkSpeed_MetaData[] = {
		{ "Category", "Speed" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RunSpeed_MetaData[] = {
		{ "Category", "Speed" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintSpeed_MetaData[] = {
		{ "Category", "Speed" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementCurve_MetaData[] = {
		{ "Category", "Curve" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationRateCurve_MetaData[] = {
		{ "Category", "Curve" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMovementSettingsStrafe constinit property declarations ***********
	static const UECodeGen_Private::FStructPropertyParams NewProp_WalkSpeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RunSpeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SprintSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementCurve;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RotationRateCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FMovementSettingsStrafe constinit property declarations *************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovementSettingsStrafe>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FMovementSettingsStrafe_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMovementSettingsStrafe;
class UScriptStruct* FMovementSettingsStrafe::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMovementSettingsStrafe.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMovementSettingsStrafe.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovementSettingsStrafe, (UObject*)Z_Construct_UPackage__Script_IWALS_AbilitySystem(), TEXT("MovementSettingsStrafe"));
	}
	return Z_Registration_Info_UScriptStruct_FMovementSettingsStrafe.OuterSingleton;
	}

// ********** Begin ScriptStruct FMovementSettingsStrafe Property Definitions **********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovementSettingsStrafe_Statics::NewProp_WalkSpeed = { "WalkSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovementSettingsStrafe, WalkSpeed), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WalkSpeed_MetaData), NewProp_WalkSpeed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovementSettingsStrafe_Statics::NewProp_RunSpeed = { "RunSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovementSettingsStrafe, RunSpeed), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RunSpeed_MetaData), NewProp_RunSpeed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovementSettingsStrafe_Statics::NewProp_SprintSpeed = { "SprintSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovementSettingsStrafe, SprintSpeed), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintSpeed_MetaData), NewProp_SprintSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovementSettingsStrafe_Statics::NewProp_MovementCurve = { "MovementCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovementSettingsStrafe, MovementCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementCurve_MetaData), NewProp_MovementCurve_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovementSettingsStrafe_Statics::NewProp_RotationRateCurve = { "RotationRateCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovementSettingsStrafe, RotationRateCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationRateCurve_MetaData), NewProp_RotationRateCurve_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovementSettingsStrafe_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovementSettingsStrafe_Statics::NewProp_WalkSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovementSettingsStrafe_Statics::NewProp_RunSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovementSettingsStrafe_Statics::NewProp_SprintSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovementSettingsStrafe_Statics::NewProp_MovementCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovementSettingsStrafe_Statics::NewProp_RotationRateCurve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovementSettingsStrafe_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FMovementSettingsStrafe Property Definitions ************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovementSettingsStrafe_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IWALS_AbilitySystem,
	nullptr,
	&NewStructOps,
	"MovementSettingsStrafe",
	Z_Construct_UScriptStruct_FMovementSettingsStrafe_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovementSettingsStrafe_Statics::PropPointers),
	sizeof(FMovementSettingsStrafe),
	alignof(FMovementSettingsStrafe),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovementSettingsStrafe_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovementSettingsStrafe_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovementSettingsStrafe()
{
	if (!Z_Registration_Info_UScriptStruct_FMovementSettingsStrafe.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMovementSettingsStrafe.InnerSingleton, Z_Construct_UScriptStruct_FMovementSettingsStrafe_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMovementSettingsStrafe.InnerSingleton);
}
// ********** End ScriptStruct FMovementSettingsStrafe *********************************************

// ********** Begin Class AGAS_MainCharacterCpp Function CalculateGroundedRotationSpeedC ***********
struct Z_Construct_UFunction_AGAS_MainCharacterCpp_CalculateGroundedRotationSpeedC_Statics
{
	struct GAS_MainCharacterCpp_eventCalculateGroundedRotationSpeedC_Parms
	{
		float Scale;
		FVector2D YawScaleRange;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rotation System" },
		{ "CPP_Default_Scale", "1.000000" },
		{ "CPP_Default_YawScaleRange", "(X=1.000,Y=3.000)" },
		{ "DisplayName", "Calculate Grounded Rotation Speed" },
		{ "Keywords", "Rotation" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function CalculateGroundedRotationSpeedC constinit property declarations *******
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_YawScaleRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CalculateGroundedRotationSpeedC constinit property declarations *********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CalculateGroundedRotationSpeedC Property Definitions ******************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_CalculateGroundedRotationSpeedC_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_MainCharacterCpp_eventCalculateGroundedRotationSpeedC_Parms, Scale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_CalculateGroundedRotationSpeedC_Statics::NewProp_YawScaleRange = { "YawScaleRange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_MainCharacterCpp_eventCalculateGroundedRotationSpeedC_Parms, YawScaleRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_CalculateGroundedRotationSpeedC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_MainCharacterCpp_eventCalculateGroundedRotationSpeedC_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGAS_MainCharacterCpp_CalculateGroundedRotationSpeedC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_CalculateGroundedRotationSpeedC_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_CalculateGroundedRotationSpeedC_Statics::NewProp_YawScaleRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_CalculateGroundedRotationSpeedC_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_CalculateGroundedRotationSpeedC_Statics::PropPointers) < 2048);
// ********** End Function CalculateGroundedRotationSpeedC Property Definitions ********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGAS_MainCharacterCpp_CalculateGroundedRotationSpeedC_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGAS_MainCharacterCpp, nullptr, "CalculateGroundedRotationSpeedC", 	Z_Construct_UFunction_AGAS_MainCharacterCpp_CalculateGroundedRotationSpeedC_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_CalculateGroundedRotationSpeedC_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AGAS_MainCharacterCpp_CalculateGroundedRotationSpeedC_Statics::GAS_MainCharacterCpp_eventCalculateGroundedRotationSpeedC_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_CalculateGroundedRotationSpeedC_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGAS_MainCharacterCpp_CalculateGroundedRotationSpeedC_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGAS_MainCharacterCpp_CalculateGroundedRotationSpeedC_Statics::GAS_MainCharacterCpp_eventCalculateGroundedRotationSpeedC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGAS_MainCharacterCpp_CalculateGroundedRotationSpeedC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGAS_MainCharacterCpp_CalculateGroundedRotationSpeedC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGAS_MainCharacterCpp::execCalculateGroundedRotationSpeedC)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
	P_GET_STRUCT(FVector2D,Z_Param_YawScaleRange);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->CalculateGroundedRotationSpeedC(Z_Param_Scale,Z_Param_YawScaleRange);
	P_NATIVE_END;
}
// ********** End Class AGAS_MainCharacterCpp Function CalculateGroundedRotationSpeedC *************

// ********** Begin Class AGAS_MainCharacterCpp Function ConvertLiteralNameToTag *******************
struct Z_Construct_UFunction_AGAS_MainCharacterCpp_ConvertLiteralNameToTag_Statics
{
	struct GAS_MainCharacterCpp_eventConvertLiteralNameToTag_Parms
	{
		FName TagName;
		FGameplayTag ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gameplay Tags|Tag Container|Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gameplay Tag Functions\n// -----------------------------------------------\n" },
#endif
		{ "DisplayName", "Convert Literal Name To Tag" },
		{ "Keywords", "Gameplay Tag" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gameplay Tag Functions" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ConvertLiteralNameToTag constinit property declarations ***************
	static const UECodeGen_Private::FNamePropertyParams NewProp_TagName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ConvertLiteralNameToTag constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ConvertLiteralNameToTag Property Definitions **************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_ConvertLiteralNameToTag_Statics::NewProp_TagName = { "TagName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_MainCharacterCpp_eventConvertLiteralNameToTag_Parms, TagName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_ConvertLiteralNameToTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_MainCharacterCpp_eventConvertLiteralNameToTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGAS_MainCharacterCpp_ConvertLiteralNameToTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_ConvertLiteralNameToTag_Statics::NewProp_TagName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_ConvertLiteralNameToTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_ConvertLiteralNameToTag_Statics::PropPointers) < 2048);
// ********** End Function ConvertLiteralNameToTag Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGAS_MainCharacterCpp_ConvertLiteralNameToTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGAS_MainCharacterCpp, nullptr, "ConvertLiteralNameToTag", 	Z_Construct_UFunction_AGAS_MainCharacterCpp_ConvertLiteralNameToTag_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_ConvertLiteralNameToTag_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AGAS_MainCharacterCpp_ConvertLiteralNameToTag_Statics::GAS_MainCharacterCpp_eventConvertLiteralNameToTag_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_ConvertLiteralNameToTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGAS_MainCharacterCpp_ConvertLiteralNameToTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGAS_MainCharacterCpp_ConvertLiteralNameToTag_Statics::GAS_MainCharacterCpp_eventConvertLiteralNameToTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGAS_MainCharacterCpp_ConvertLiteralNameToTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGAS_MainCharacterCpp_ConvertLiteralNameToTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGAS_MainCharacterCpp::execConvertLiteralNameToTag)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_TagName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTag*)Z_Param__Result=P_THIS->ConvertLiteralNameToTag(Z_Param_TagName);
	P_NATIVE_END;
}
// ********** End Class AGAS_MainCharacterCpp Function ConvertLiteralNameToTag *********************

// ********** Begin Class AGAS_MainCharacterCpp Function DoWhenOverlayLeaving **********************
struct GAS_MainCharacterCpp_eventDoWhenOverlayLeaving_Parms
{
	float DeltaSecond;
};
static FName NAME_AGAS_MainCharacterCpp_DoWhenOverlayLeaving = FName(TEXT("DoWhenOverlayLeaving"));
void AGAS_MainCharacterCpp::DoWhenOverlayLeaving(float DeltaSecond)
{
	GAS_MainCharacterCpp_eventDoWhenOverlayLeaving_Parms Parms;
	Parms.DeltaSecond=DeltaSecond;
	UFunction* Func = FindFunctionChecked(NAME_AGAS_MainCharacterCpp_DoWhenOverlayLeaving);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AGAS_MainCharacterCpp_DoWhenOverlayLeaving_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// For Overlay System\n" },
#endif
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "For Overlay System" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function DoWhenOverlayLeaving constinit property declarations ******************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSecond;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DoWhenOverlayLeaving constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DoWhenOverlayLeaving Property Definitions *****************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_DoWhenOverlayLeaving_Statics::NewProp_DeltaSecond = { "DeltaSecond", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_MainCharacterCpp_eventDoWhenOverlayLeaving_Parms, DeltaSecond), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGAS_MainCharacterCpp_DoWhenOverlayLeaving_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_DoWhenOverlayLeaving_Statics::NewProp_DeltaSecond,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_DoWhenOverlayLeaving_Statics::PropPointers) < 2048);
// ********** End Function DoWhenOverlayLeaving Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGAS_MainCharacterCpp_DoWhenOverlayLeaving_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGAS_MainCharacterCpp, nullptr, "DoWhenOverlayLeaving", 	Z_Construct_UFunction_AGAS_MainCharacterCpp_DoWhenOverlayLeaving_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_DoWhenOverlayLeaving_Statics::PropPointers), 
sizeof(GAS_MainCharacterCpp_eventDoWhenOverlayLeaving_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_DoWhenOverlayLeaving_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGAS_MainCharacterCpp_DoWhenOverlayLeaving_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(GAS_MainCharacterCpp_eventDoWhenOverlayLeaving_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGAS_MainCharacterCpp_DoWhenOverlayLeaving()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGAS_MainCharacterCpp_DoWhenOverlayLeaving_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AGAS_MainCharacterCpp Function DoWhenOverlayLeaving ************************

// ********** Begin Class AGAS_MainCharacterCpp Function FilterTagsByRootGroup *********************
struct Z_Construct_UFunction_AGAS_MainCharacterCpp_FilterTagsByRootGroup_Statics
{
	struct GAS_MainCharacterCpp_eventFilterTagsByRootGroup_Parms
	{
		FGameplayTagContainer Input;
		FGameplayTag RootTag;
		bool StopWhenFirstValid;
		FGameplayTagContainer ReturnContainer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gameplay Tags|Tag Container|Custom" },
		{ "DisplayName", "Filter Tags By Root Group" },
		{ "Keywords", "Gameplay,Tag" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function FilterTagsByRootGroup constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RootTag;
	static void NewProp_StopWhenFirstValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_StopWhenFirstValid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnContainer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FilterTagsByRootGroup constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FilterTagsByRootGroup Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_FilterTagsByRootGroup_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_MainCharacterCpp_eventFilterTagsByRootGroup_Parms, Input), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 3438578166
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_FilterTagsByRootGroup_Statics::NewProp_RootTag = { "RootTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_MainCharacterCpp_eventFilterTagsByRootGroup_Parms, RootTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
void Z_Construct_UFunction_AGAS_MainCharacterCpp_FilterTagsByRootGroup_Statics::NewProp_StopWhenFirstValid_SetBit(void* Obj)
{
	((GAS_MainCharacterCpp_eventFilterTagsByRootGroup_Parms*)Obj)->StopWhenFirstValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_FilterTagsByRootGroup_Statics::NewProp_StopWhenFirstValid = { "StopWhenFirstValid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GAS_MainCharacterCpp_eventFilterTagsByRootGroup_Parms), &Z_Construct_UFunction_AGAS_MainCharacterCpp_FilterTagsByRootGroup_Statics::NewProp_StopWhenFirstValid_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_FilterTagsByRootGroup_Statics::NewProp_ReturnContainer = { "ReturnContainer", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_MainCharacterCpp_eventFilterTagsByRootGroup_Parms, ReturnContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3438578166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGAS_MainCharacterCpp_FilterTagsByRootGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_FilterTagsByRootGroup_Statics::NewProp_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_FilterTagsByRootGroup_Statics::NewProp_RootTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_FilterTagsByRootGroup_Statics::NewProp_StopWhenFirstValid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_FilterTagsByRootGroup_Statics::NewProp_ReturnContainer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_FilterTagsByRootGroup_Statics::PropPointers) < 2048);
// ********** End Function FilterTagsByRootGroup Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGAS_MainCharacterCpp_FilterTagsByRootGroup_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGAS_MainCharacterCpp, nullptr, "FilterTagsByRootGroup", 	Z_Construct_UFunction_AGAS_MainCharacterCpp_FilterTagsByRootGroup_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_FilterTagsByRootGroup_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AGAS_MainCharacterCpp_FilterTagsByRootGroup_Statics::GAS_MainCharacterCpp_eventFilterTagsByRootGroup_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_FilterTagsByRootGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGAS_MainCharacterCpp_FilterTagsByRootGroup_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGAS_MainCharacterCpp_FilterTagsByRootGroup_Statics::GAS_MainCharacterCpp_eventFilterTagsByRootGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGAS_MainCharacterCpp_FilterTagsByRootGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGAS_MainCharacterCpp_FilterTagsByRootGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGAS_MainCharacterCpp::execFilterTagsByRootGroup)
{
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_Input);
	P_GET_STRUCT(FGameplayTag,Z_Param_RootTag);
	P_GET_UBOOL(Z_Param_StopWhenFirstValid);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_ReturnContainer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FilterTagsByRootGroup(Z_Param_Out_Input,Z_Param_RootTag,Z_Param_StopWhenFirstValid,Z_Param_Out_ReturnContainer);
	P_NATIVE_END;
}
// ********** End Class AGAS_MainCharacterCpp Function FilterTagsByRootGroup ***********************

// ********** Begin Class AGAS_MainCharacterCpp Function FloorToCapsuleLocationC *******************
struct Z_Construct_UFunction_AGAS_MainCharacterCpp_FloorToCapsuleLocationC_Statics
{
	struct GAS_MainCharacterCpp_eventFloorToCapsuleLocationC_Parms
	{
		FVector BaseLocation;
		float ZOffset;
		bool ByDefSize;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Utility" },
		{ "DisplayName", "Floor To Capsule Location" },
		{ "Keywords", "Others" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function FloorToCapsuleLocationC constinit property declarations ***************
	static const UECodeGen_Private::FStructPropertyParams NewProp_BaseLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZOffset;
	static void NewProp_ByDefSize_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ByDefSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FloorToCapsuleLocationC constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FloorToCapsuleLocationC Property Definitions **************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_FloorToCapsuleLocationC_Statics::NewProp_BaseLocation = { "BaseLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_MainCharacterCpp_eventFloorToCapsuleLocationC_Parms, BaseLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_FloorToCapsuleLocationC_Statics::NewProp_ZOffset = { "ZOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_MainCharacterCpp_eventFloorToCapsuleLocationC_Parms, ZOffset), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AGAS_MainCharacterCpp_FloorToCapsuleLocationC_Statics::NewProp_ByDefSize_SetBit(void* Obj)
{
	((GAS_MainCharacterCpp_eventFloorToCapsuleLocationC_Parms*)Obj)->ByDefSize = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_FloorToCapsuleLocationC_Statics::NewProp_ByDefSize = { "ByDefSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GAS_MainCharacterCpp_eventFloorToCapsuleLocationC_Parms), &Z_Construct_UFunction_AGAS_MainCharacterCpp_FloorToCapsuleLocationC_Statics::NewProp_ByDefSize_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_FloorToCapsuleLocationC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_MainCharacterCpp_eventFloorToCapsuleLocationC_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGAS_MainCharacterCpp_FloorToCapsuleLocationC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_FloorToCapsuleLocationC_Statics::NewProp_BaseLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_FloorToCapsuleLocationC_Statics::NewProp_ZOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_FloorToCapsuleLocationC_Statics::NewProp_ByDefSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_FloorToCapsuleLocationC_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_FloorToCapsuleLocationC_Statics::PropPointers) < 2048);
// ********** End Function FloorToCapsuleLocationC Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGAS_MainCharacterCpp_FloorToCapsuleLocationC_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGAS_MainCharacterCpp, nullptr, "FloorToCapsuleLocationC", 	Z_Construct_UFunction_AGAS_MainCharacterCpp_FloorToCapsuleLocationC_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_FloorToCapsuleLocationC_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AGAS_MainCharacterCpp_FloorToCapsuleLocationC_Statics::GAS_MainCharacterCpp_eventFloorToCapsuleLocationC_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_FloorToCapsuleLocationC_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGAS_MainCharacterCpp_FloorToCapsuleLocationC_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGAS_MainCharacterCpp_FloorToCapsuleLocationC_Statics::GAS_MainCharacterCpp_eventFloorToCapsuleLocationC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGAS_MainCharacterCpp_FloorToCapsuleLocationC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGAS_MainCharacterCpp_FloorToCapsuleLocationC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGAS_MainCharacterCpp::execFloorToCapsuleLocationC)
{
	P_GET_STRUCT(FVector,Z_Param_BaseLocation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ZOffset);
	P_GET_UBOOL(Z_Param_ByDefSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->FloorToCapsuleLocationC(Z_Param_BaseLocation,Z_Param_ZOffset,Z_Param_ByDefSize);
	P_NATIVE_END;
}
// ********** End Class AGAS_MainCharacterCpp Function FloorToCapsuleLocationC *********************

// ********** Begin Class AGAS_MainCharacterCpp Function GetCapsuleBaseLocationC *******************
struct Z_Construct_UFunction_AGAS_MainCharacterCpp_GetCapsuleBaseLocationC_Statics
{
	struct GAS_MainCharacterCpp_eventGetCapsuleBaseLocationC_Parms
	{
		float ZOffset;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Utility" },
		{ "DisplayName", "Get Capsule Base Location" },
		{ "Keywords", "Others" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCapsuleBaseLocationC constinit property declarations ***************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCapsuleBaseLocationC constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCapsuleBaseLocationC Property Definitions **************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_GetCapsuleBaseLocationC_Statics::NewProp_ZOffset = { "ZOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_MainCharacterCpp_eventGetCapsuleBaseLocationC_Parms, ZOffset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_GetCapsuleBaseLocationC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_MainCharacterCpp_eventGetCapsuleBaseLocationC_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGAS_MainCharacterCpp_GetCapsuleBaseLocationC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_GetCapsuleBaseLocationC_Statics::NewProp_ZOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_GetCapsuleBaseLocationC_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_GetCapsuleBaseLocationC_Statics::PropPointers) < 2048);
// ********** End Function GetCapsuleBaseLocationC Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGAS_MainCharacterCpp_GetCapsuleBaseLocationC_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGAS_MainCharacterCpp, nullptr, "GetCapsuleBaseLocationC", 	Z_Construct_UFunction_AGAS_MainCharacterCpp_GetCapsuleBaseLocationC_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_GetCapsuleBaseLocationC_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AGAS_MainCharacterCpp_GetCapsuleBaseLocationC_Statics::GAS_MainCharacterCpp_eventGetCapsuleBaseLocationC_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_GetCapsuleBaseLocationC_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGAS_MainCharacterCpp_GetCapsuleBaseLocationC_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGAS_MainCharacterCpp_GetCapsuleBaseLocationC_Statics::GAS_MainCharacterCpp_eventGetCapsuleBaseLocationC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGAS_MainCharacterCpp_GetCapsuleBaseLocationC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGAS_MainCharacterCpp_GetCapsuleBaseLocationC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGAS_MainCharacterCpp::execGetCapsuleBaseLocationC)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_ZOffset);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetCapsuleBaseLocationC(Z_Param_ZOffset);
	P_NATIVE_END;
}
// ********** End Class AGAS_MainCharacterCpp Function GetCapsuleBaseLocationC *********************

// ********** Begin Class AGAS_MainCharacterCpp Function GetControlVectorsC ************************
struct Z_Construct_UFunction_AGAS_MainCharacterCpp_GetControlVectorsC_Statics
{
	struct GAS_MainCharacterCpp_eventGetControlVectorsC_Parms
	{
		FVector ForwardVector;
		FVector RightVector;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Utility" },
		{ "DisplayName", "Get Control Vectors" },
		{ "Keywords", "Others" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetControlVectorsC constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ForwardVector;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RightVector;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetControlVectorsC constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetControlVectorsC Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_GetControlVectorsC_Statics::NewProp_ForwardVector = { "ForwardVector", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_MainCharacterCpp_eventGetControlVectorsC_Parms, ForwardVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_GetControlVectorsC_Statics::NewProp_RightVector = { "RightVector", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_MainCharacterCpp_eventGetControlVectorsC_Parms, RightVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGAS_MainCharacterCpp_GetControlVectorsC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_GetControlVectorsC_Statics::NewProp_ForwardVector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_GetControlVectorsC_Statics::NewProp_RightVector,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_GetControlVectorsC_Statics::PropPointers) < 2048);
// ********** End Function GetControlVectorsC Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGAS_MainCharacterCpp_GetControlVectorsC_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGAS_MainCharacterCpp, nullptr, "GetControlVectorsC", 	Z_Construct_UFunction_AGAS_MainCharacterCpp_GetControlVectorsC_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_GetControlVectorsC_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AGAS_MainCharacterCpp_GetControlVectorsC_Statics::GAS_MainCharacterCpp_eventGetControlVectorsC_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_GetControlVectorsC_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGAS_MainCharacterCpp_GetControlVectorsC_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGAS_MainCharacterCpp_GetControlVectorsC_Statics::GAS_MainCharacterCpp_eventGetControlVectorsC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGAS_MainCharacterCpp_GetControlVectorsC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGAS_MainCharacterCpp_GetControlVectorsC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGAS_MainCharacterCpp::execGetControlVectorsC)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_ForwardVector);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_RightVector);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetControlVectorsC(Z_Param_Out_ForwardVector,Z_Param_Out_RightVector);
	P_NATIVE_END;
}
// ********** End Class AGAS_MainCharacterCpp Function GetControlVectorsC **************************

// ********** Begin Class AGAS_MainCharacterCpp Function GetCustomBaseAimRotation ******************
struct GAS_MainCharacterCpp_eventGetCustomBaseAimRotation_Parms
{
	FRotator ReturnRotation;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	GAS_MainCharacterCpp_eventGetCustomBaseAimRotation_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_AGAS_MainCharacterCpp_GetCustomBaseAimRotation = FName(TEXT("GetCustomBaseAimRotation"));
bool AGAS_MainCharacterCpp::GetCustomBaseAimRotation(FRotator& ReturnRotation) const
{
	UFunction* Func = FindFunctionChecked(NAME_AGAS_MainCharacterCpp_GetCustomBaseAimRotation);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		GAS_MainCharacterCpp_eventGetCustomBaseAimRotation_Parms Parms;
		Parms.ReturnRotation=ReturnRotation;
		const_cast<AGAS_MainCharacterCpp*>(this)->ProcessEvent(Func,&Parms);
		ReturnRotation=Parms.ReturnRotation;
		return !!Parms.ReturnValue;
	}
	else
	{
		return const_cast<AGAS_MainCharacterCpp*>(this)->GetCustomBaseAimRotation_Implementation(ReturnRotation);
	}
}
struct Z_Construct_UFunction_AGAS_MainCharacterCpp_GetCustomBaseAimRotation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pawn|Rotation" },
		{ "ForceAsFunction", "" },
		{ "Keywords", "Pawn,Character,Rotation" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCustomBaseAimRotation constinit property declarations **************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnRotation;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCustomBaseAimRotation constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCustomBaseAimRotation Property Definitions *************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_GetCustomBaseAimRotation_Statics::NewProp_ReturnRotation = { "ReturnRotation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_MainCharacterCpp_eventGetCustomBaseAimRotation_Parms, ReturnRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AGAS_MainCharacterCpp_GetCustomBaseAimRotation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GAS_MainCharacterCpp_eventGetCustomBaseAimRotation_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_GetCustomBaseAimRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GAS_MainCharacterCpp_eventGetCustomBaseAimRotation_Parms), &Z_Construct_UFunction_AGAS_MainCharacterCpp_GetCustomBaseAimRotation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGAS_MainCharacterCpp_GetCustomBaseAimRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_GetCustomBaseAimRotation_Statics::NewProp_ReturnRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_GetCustomBaseAimRotation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_GetCustomBaseAimRotation_Statics::PropPointers) < 2048);
// ********** End Function GetCustomBaseAimRotation Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGAS_MainCharacterCpp_GetCustomBaseAimRotation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGAS_MainCharacterCpp, nullptr, "GetCustomBaseAimRotation", 	Z_Construct_UFunction_AGAS_MainCharacterCpp_GetCustomBaseAimRotation_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_GetCustomBaseAimRotation_Statics::PropPointers), 
sizeof(GAS_MainCharacterCpp_eventGetCustomBaseAimRotation_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5CC20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_GetCustomBaseAimRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGAS_MainCharacterCpp_GetCustomBaseAimRotation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(GAS_MainCharacterCpp_eventGetCustomBaseAimRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGAS_MainCharacterCpp_GetCustomBaseAimRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGAS_MainCharacterCpp_GetCustomBaseAimRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGAS_MainCharacterCpp::execGetCustomBaseAimRotation)
{
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_ReturnRotation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomBaseAimRotation_Implementation(Z_Param_Out_ReturnRotation);
	P_NATIVE_END;
}
// ********** End Class AGAS_MainCharacterCpp Function GetCustomBaseAimRotation ********************

// ********** Begin Class AGAS_MainCharacterCpp Function GetCustomViewRotation *********************
struct GAS_MainCharacterCpp_eventGetCustomViewRotation_Parms
{
	FRotator ReturnRotation;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	GAS_MainCharacterCpp_eventGetCustomViewRotation_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_AGAS_MainCharacterCpp_GetCustomViewRotation = FName(TEXT("GetCustomViewRotation"));
bool AGAS_MainCharacterCpp::GetCustomViewRotation(FRotator& ReturnRotation) const
{
	UFunction* Func = FindFunctionChecked(NAME_AGAS_MainCharacterCpp_GetCustomViewRotation);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		GAS_MainCharacterCpp_eventGetCustomViewRotation_Parms Parms;
		Parms.ReturnRotation=ReturnRotation;
		const_cast<AGAS_MainCharacterCpp*>(this)->ProcessEvent(Func,&Parms);
		ReturnRotation=Parms.ReturnRotation;
		return !!Parms.ReturnValue;
	}
	else
	{
		return const_cast<AGAS_MainCharacterCpp*>(this)->GetCustomViewRotation_Implementation(ReturnRotation);
	}
}
struct Z_Construct_UFunction_AGAS_MainCharacterCpp_GetCustomViewRotation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pawn|Rotation" },
		{ "ForceAsFunction", "" },
		{ "Keywords", "Pawn,Character,Rotation" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCustomViewRotation constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnRotation;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCustomViewRotation constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCustomViewRotation Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_GetCustomViewRotation_Statics::NewProp_ReturnRotation = { "ReturnRotation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_MainCharacterCpp_eventGetCustomViewRotation_Parms, ReturnRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AGAS_MainCharacterCpp_GetCustomViewRotation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GAS_MainCharacterCpp_eventGetCustomViewRotation_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_GetCustomViewRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GAS_MainCharacterCpp_eventGetCustomViewRotation_Parms), &Z_Construct_UFunction_AGAS_MainCharacterCpp_GetCustomViewRotation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGAS_MainCharacterCpp_GetCustomViewRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_GetCustomViewRotation_Statics::NewProp_ReturnRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_GetCustomViewRotation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_GetCustomViewRotation_Statics::PropPointers) < 2048);
// ********** End Function GetCustomViewRotation Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGAS_MainCharacterCpp_GetCustomViewRotation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGAS_MainCharacterCpp, nullptr, "GetCustomViewRotation", 	Z_Construct_UFunction_AGAS_MainCharacterCpp_GetCustomViewRotation_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_GetCustomViewRotation_Statics::PropPointers), 
sizeof(GAS_MainCharacterCpp_eventGetCustomViewRotation_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5CC20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_GetCustomViewRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGAS_MainCharacterCpp_GetCustomViewRotation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(GAS_MainCharacterCpp_eventGetCustomViewRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGAS_MainCharacterCpp_GetCustomViewRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGAS_MainCharacterCpp_GetCustomViewRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGAS_MainCharacterCpp::execGetCustomViewRotation)
{
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_ReturnRotation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomViewRotation_Implementation(Z_Param_Out_ReturnRotation);
	P_NATIVE_END;
}
// ********** End Class AGAS_MainCharacterCpp Function GetCustomViewRotation ***********************

// ********** Begin Class AGAS_MainCharacterCpp Function GetMappedSpeedC ***************************
struct Z_Construct_UFunction_AGAS_MainCharacterCpp_GetMappedSpeedC_Statics
{
	struct GAS_MainCharacterCpp_eventGetMappedSpeedC_Parms
	{
		float SpeedScale;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement System" },
		{ "CPP_Default_SpeedScale", "1.000000" },
		{ "DisplayName", "Get Mapped Speed" },
		{ "Keywords", "Movement" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetMappedSpeedC constinit property declarations ***********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetMappedSpeedC constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetMappedSpeedC Property Definitions **********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_GetMappedSpeedC_Statics::NewProp_SpeedScale = { "SpeedScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_MainCharacterCpp_eventGetMappedSpeedC_Parms, SpeedScale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_GetMappedSpeedC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_MainCharacterCpp_eventGetMappedSpeedC_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGAS_MainCharacterCpp_GetMappedSpeedC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_GetMappedSpeedC_Statics::NewProp_SpeedScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_GetMappedSpeedC_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_GetMappedSpeedC_Statics::PropPointers) < 2048);
// ********** End Function GetMappedSpeedC Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGAS_MainCharacterCpp_GetMappedSpeedC_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGAS_MainCharacterCpp, nullptr, "GetMappedSpeedC", 	Z_Construct_UFunction_AGAS_MainCharacterCpp_GetMappedSpeedC_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_GetMappedSpeedC_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AGAS_MainCharacterCpp_GetMappedSpeedC_Statics::GAS_MainCharacterCpp_eventGetMappedSpeedC_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_GetMappedSpeedC_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGAS_MainCharacterCpp_GetMappedSpeedC_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGAS_MainCharacterCpp_GetMappedSpeedC_Statics::GAS_MainCharacterCpp_eventGetMappedSpeedC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGAS_MainCharacterCpp_GetMappedSpeedC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGAS_MainCharacterCpp_GetMappedSpeedC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGAS_MainCharacterCpp::execGetMappedSpeedC)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_SpeedScale);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMappedSpeedC(Z_Param_SpeedScale);
	P_NATIVE_END;
}
// ********** End Class AGAS_MainCharacterCpp Function GetMappedSpeedC *****************************

// ********** Begin Class AGAS_MainCharacterCpp Function GetSubTag *********************************
struct Z_Construct_UFunction_AGAS_MainCharacterCpp_GetSubTag_Statics
{
	struct GAS_MainCharacterCpp_eventGetSubTag_Parms
	{
		FGameplayTag Tag;
		int32 DesiredDepth;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gameplay Tags|Tag Container|Custom" },
		{ "DisplayName", "Get Sub Tag" },
		{ "Keywords", "Gameplay,Tag" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSubTag constinit property declarations *****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DesiredDepth;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSubTag constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSubTag Property Definitions ****************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_GetSubTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_MainCharacterCpp_eventGetSubTag_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) }; // 517357616
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_GetSubTag_Statics::NewProp_DesiredDepth = { "DesiredDepth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_MainCharacterCpp_eventGetSubTag_Parms, DesiredDepth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_GetSubTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_MainCharacterCpp_eventGetSubTag_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGAS_MainCharacterCpp_GetSubTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_GetSubTag_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_GetSubTag_Statics::NewProp_DesiredDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_GetSubTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_GetSubTag_Statics::PropPointers) < 2048);
// ********** End Function GetSubTag Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGAS_MainCharacterCpp_GetSubTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGAS_MainCharacterCpp, nullptr, "GetSubTag", 	Z_Construct_UFunction_AGAS_MainCharacterCpp_GetSubTag_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_GetSubTag_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AGAS_MainCharacterCpp_GetSubTag_Statics::GAS_MainCharacterCpp_eventGetSubTag_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_GetSubTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGAS_MainCharacterCpp_GetSubTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGAS_MainCharacterCpp_GetSubTag_Statics::GAS_MainCharacterCpp_eventGetSubTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGAS_MainCharacterCpp_GetSubTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGAS_MainCharacterCpp_GetSubTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGAS_MainCharacterCpp::execGetSubTag)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_Tag);
	P_GET_PROPERTY(FIntProperty,Z_Param_DesiredDepth);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetSubTag(Z_Param_Out_Tag,Z_Param_DesiredDepth);
	P_NATIVE_END;
}
// ********** End Class AGAS_MainCharacterCpp Function GetSubTag ***********************************

// ********** Begin Class AGAS_MainCharacterCpp Function GetTargetSpeedWithStrafeC *****************
struct Z_Construct_UFunction_AGAS_MainCharacterCpp_GetTargetSpeedWithStrafeC_Statics
{
	struct GAS_MainCharacterCpp_eventGetTargetSpeedWithStrafeC_Parms
	{
		FVector SpeedVector;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement System" },
		{ "DisplayName", "Get Target Speed With Strafe" },
		{ "Keywords", "Movement" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetTargetSpeedWithStrafeC constinit property declarations *************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpeedVector;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetTargetSpeedWithStrafeC constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetTargetSpeedWithStrafeC Property Definitions ************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_GetTargetSpeedWithStrafeC_Statics::NewProp_SpeedVector = { "SpeedVector", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_MainCharacterCpp_eventGetTargetSpeedWithStrafeC_Parms, SpeedVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_GetTargetSpeedWithStrafeC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_MainCharacterCpp_eventGetTargetSpeedWithStrafeC_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGAS_MainCharacterCpp_GetTargetSpeedWithStrafeC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_GetTargetSpeedWithStrafeC_Statics::NewProp_SpeedVector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_GetTargetSpeedWithStrafeC_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_GetTargetSpeedWithStrafeC_Statics::PropPointers) < 2048);
// ********** End Function GetTargetSpeedWithStrafeC Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGAS_MainCharacterCpp_GetTargetSpeedWithStrafeC_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGAS_MainCharacterCpp, nullptr, "GetTargetSpeedWithStrafeC", 	Z_Construct_UFunction_AGAS_MainCharacterCpp_GetTargetSpeedWithStrafeC_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_GetTargetSpeedWithStrafeC_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AGAS_MainCharacterCpp_GetTargetSpeedWithStrafeC_Statics::GAS_MainCharacterCpp_eventGetTargetSpeedWithStrafeC_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_GetTargetSpeedWithStrafeC_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGAS_MainCharacterCpp_GetTargetSpeedWithStrafeC_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGAS_MainCharacterCpp_GetTargetSpeedWithStrafeC_Statics::GAS_MainCharacterCpp_eventGetTargetSpeedWithStrafeC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGAS_MainCharacterCpp_GetTargetSpeedWithStrafeC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGAS_MainCharacterCpp_GetTargetSpeedWithStrafeC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGAS_MainCharacterCpp::execGetTargetSpeedWithStrafeC)
{
	P_GET_STRUCT(FVector,Z_Param_SpeedVector);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetTargetSpeedWithStrafeC(Z_Param_SpeedVector);
	P_NATIVE_END;
}
// ********** End Class AGAS_MainCharacterCpp Function GetTargetSpeedWithStrafeC *******************

// ********** Begin Class AGAS_MainCharacterCpp Function IsTagLeaf *********************************
struct Z_Construct_UFunction_AGAS_MainCharacterCpp_IsTagLeaf_Statics
{
	struct GAS_MainCharacterCpp_eventIsTagLeaf_Parms
	{
		FGameplayTag Tag;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gameplay Tags|Tag Container|Custom" },
		{ "DisplayName", "Is Tag Leaf" },
		{ "Keywords", "Gameplay,Tag" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsTagLeaf constinit property declarations *****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsTagLeaf constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsTagLeaf Property Definitions ****************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_IsTagLeaf_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_MainCharacterCpp_eventIsTagLeaf_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) }; // 517357616
void Z_Construct_UFunction_AGAS_MainCharacterCpp_IsTagLeaf_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GAS_MainCharacterCpp_eventIsTagLeaf_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_IsTagLeaf_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GAS_MainCharacterCpp_eventIsTagLeaf_Parms), &Z_Construct_UFunction_AGAS_MainCharacterCpp_IsTagLeaf_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGAS_MainCharacterCpp_IsTagLeaf_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_IsTagLeaf_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_IsTagLeaf_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_IsTagLeaf_Statics::PropPointers) < 2048);
// ********** End Function IsTagLeaf Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGAS_MainCharacterCpp_IsTagLeaf_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGAS_MainCharacterCpp, nullptr, "IsTagLeaf", 	Z_Construct_UFunction_AGAS_MainCharacterCpp_IsTagLeaf_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_IsTagLeaf_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AGAS_MainCharacterCpp_IsTagLeaf_Statics::GAS_MainCharacterCpp_eventIsTagLeaf_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_IsTagLeaf_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGAS_MainCharacterCpp_IsTagLeaf_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGAS_MainCharacterCpp_IsTagLeaf_Statics::GAS_MainCharacterCpp_eventIsTagLeaf_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGAS_MainCharacterCpp_IsTagLeaf()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGAS_MainCharacterCpp_IsTagLeaf_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGAS_MainCharacterCpp::execIsTagLeaf)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_Tag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsTagLeaf(Z_Param_Out_Tag);
	P_NATIVE_END;
}
// ********** End Class AGAS_MainCharacterCpp Function IsTagLeaf ***********************************

// ********** Begin Class AGAS_MainCharacterCpp Function OverlayLeavingFinshed *********************
static FName NAME_AGAS_MainCharacterCpp_OverlayLeavingFinshed = FName(TEXT("OverlayLeavingFinshed"));
void AGAS_MainCharacterCpp::OverlayLeavingFinshed()
{
	UFunction* Func = FindFunctionChecked(NAME_AGAS_MainCharacterCpp_OverlayLeavingFinshed);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AGAS_MainCharacterCpp_OverlayLeavingFinshed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OverlayLeavingFinshed constinit property declarations *****************
// ********** End Function OverlayLeavingFinshed constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGAS_MainCharacterCpp_OverlayLeavingFinshed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGAS_MainCharacterCpp, nullptr, "OverlayLeavingFinshed", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_OverlayLeavingFinshed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGAS_MainCharacterCpp_OverlayLeavingFinshed_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AGAS_MainCharacterCpp_OverlayLeavingFinshed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGAS_MainCharacterCpp_OverlayLeavingFinshed_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AGAS_MainCharacterCpp Function OverlayLeavingFinshed ***********************

// ********** Begin Class AGAS_MainCharacterCpp Function SmoothCharacterRotationC ******************
struct Z_Construct_UFunction_AGAS_MainCharacterCpp_SmoothCharacterRotationC_Statics
{
	struct GAS_MainCharacterCpp_eventSmoothCharacterRotationC_Parms
	{
		FRotator TargetRotation;
		float ActorInterpSpeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rotation System" },
		{ "CPP_Default_ActorInterpSpeed", "10.000000" },
		{ "CPP_Default_TargetRotation", "0.000000,0.000000,0.000000" },
		{ "DisplayName", "Smooth Character Rotation" },
		{ "Keywords", "Rotation" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SmoothCharacterRotationC constinit property declarations **************
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetRotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ActorInterpSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SmoothCharacterRotationC constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SmoothCharacterRotationC Property Definitions *************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_SmoothCharacterRotationC_Statics::NewProp_TargetRotation = { "TargetRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_MainCharacterCpp_eventSmoothCharacterRotationC_Parms, TargetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_SmoothCharacterRotationC_Statics::NewProp_ActorInterpSpeed = { "ActorInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_MainCharacterCpp_eventSmoothCharacterRotationC_Parms, ActorInterpSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGAS_MainCharacterCpp_SmoothCharacterRotationC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_SmoothCharacterRotationC_Statics::NewProp_TargetRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_SmoothCharacterRotationC_Statics::NewProp_ActorInterpSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_SmoothCharacterRotationC_Statics::PropPointers) < 2048);
// ********** End Function SmoothCharacterRotationC Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGAS_MainCharacterCpp_SmoothCharacterRotationC_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGAS_MainCharacterCpp, nullptr, "SmoothCharacterRotationC", 	Z_Construct_UFunction_AGAS_MainCharacterCpp_SmoothCharacterRotationC_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_SmoothCharacterRotationC_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AGAS_MainCharacterCpp_SmoothCharacterRotationC_Statics::GAS_MainCharacterCpp_eventSmoothCharacterRotationC_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_SmoothCharacterRotationC_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGAS_MainCharacterCpp_SmoothCharacterRotationC_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGAS_MainCharacterCpp_SmoothCharacterRotationC_Statics::GAS_MainCharacterCpp_eventSmoothCharacterRotationC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGAS_MainCharacterCpp_SmoothCharacterRotationC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGAS_MainCharacterCpp_SmoothCharacterRotationC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGAS_MainCharacterCpp::execSmoothCharacterRotationC)
{
	P_GET_STRUCT(FRotator,Z_Param_TargetRotation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ActorInterpSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SmoothCharacterRotationC(Z_Param_TargetRotation,Z_Param_ActorInterpSpeed);
	P_NATIVE_END;
}
// ********** End Class AGAS_MainCharacterCpp Function SmoothCharacterRotationC ********************

// ********** Begin Class AGAS_MainCharacterCpp Function SwitchOnOwnedTags *************************
struct Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTags_Statics
{
	struct GAS_MainCharacterCpp_eventSwitchOnOwnedTags_Parms
	{
		FGameplayTag NewState;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gameplay Tags|Tag Container|Custom" },
		{ "DisplayName", "Switch On Owned Tags" },
		{ "Keywords", "Gameplay,Tag" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SwitchOnOwnedTags constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewState;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SwitchOnOwnedTags constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SwitchOnOwnedTags Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTags_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_MainCharacterCpp_eventSwitchOnOwnedTags_Parms, NewState), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewState_MetaData), NewProp_NewState_MetaData) }; // 517357616
void Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTags_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GAS_MainCharacterCpp_eventSwitchOnOwnedTags_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GAS_MainCharacterCpp_eventSwitchOnOwnedTags_Parms), &Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTags_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTags_Statics::NewProp_NewState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTags_Statics::PropPointers) < 2048);
// ********** End Function SwitchOnOwnedTags Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTags_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGAS_MainCharacterCpp, nullptr, "SwitchOnOwnedTags", 	Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTags_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTags_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTags_Statics::GAS_MainCharacterCpp_eventSwitchOnOwnedTags_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTags_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTags_Statics::GAS_MainCharacterCpp_eventSwitchOnOwnedTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGAS_MainCharacterCpp::execSwitchOnOwnedTags)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_NewState);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SwitchOnOwnedTags(Z_Param_Out_NewState);
	P_NATIVE_END;
}
// ********** End Class AGAS_MainCharacterCpp Function SwitchOnOwnedTags ***************************

// ********** Begin Class AGAS_MainCharacterCpp Function SwitchOnOwnedTagsWithIgnore ***************
struct Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTagsWithIgnore_Statics
{
	struct GAS_MainCharacterCpp_eventSwitchOnOwnedTagsWithIgnore_Parms
	{
		FGameplayTag NewState;
		FGameplayTagContainer DoNotEdit;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gameplay Tags|Tag Container|Custom" },
		{ "DisplayName", "Switch On Owned Tags With Ignore" },
		{ "Keywords", "Gameplay,Tag" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewState_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoNotEdit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SwitchOnOwnedTagsWithIgnore constinit property declarations ***********
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewState;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DoNotEdit;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SwitchOnOwnedTagsWithIgnore constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SwitchOnOwnedTagsWithIgnore Property Definitions **********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTagsWithIgnore_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_MainCharacterCpp_eventSwitchOnOwnedTagsWithIgnore_Parms, NewState), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewState_MetaData), NewProp_NewState_MetaData) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTagsWithIgnore_Statics::NewProp_DoNotEdit = { "DoNotEdit", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_MainCharacterCpp_eventSwitchOnOwnedTagsWithIgnore_Parms, DoNotEdit), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoNotEdit_MetaData), NewProp_DoNotEdit_MetaData) }; // 3438578166
void Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTagsWithIgnore_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GAS_MainCharacterCpp_eventSwitchOnOwnedTagsWithIgnore_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTagsWithIgnore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GAS_MainCharacterCpp_eventSwitchOnOwnedTagsWithIgnore_Parms), &Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTagsWithIgnore_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTagsWithIgnore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTagsWithIgnore_Statics::NewProp_NewState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTagsWithIgnore_Statics::NewProp_DoNotEdit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTagsWithIgnore_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTagsWithIgnore_Statics::PropPointers) < 2048);
// ********** End Function SwitchOnOwnedTagsWithIgnore Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTagsWithIgnore_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGAS_MainCharacterCpp, nullptr, "SwitchOnOwnedTagsWithIgnore", 	Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTagsWithIgnore_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTagsWithIgnore_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTagsWithIgnore_Statics::GAS_MainCharacterCpp_eventSwitchOnOwnedTagsWithIgnore_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTagsWithIgnore_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTagsWithIgnore_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTagsWithIgnore_Statics::GAS_MainCharacterCpp_eventSwitchOnOwnedTagsWithIgnore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTagsWithIgnore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTagsWithIgnore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGAS_MainCharacterCpp::execSwitchOnOwnedTagsWithIgnore)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_NewState);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_DoNotEdit);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SwitchOnOwnedTagsWithIgnore(Z_Param_Out_NewState,Z_Param_Out_DoNotEdit);
	P_NATIVE_END;
}
// ********** End Class AGAS_MainCharacterCpp Function SwitchOnOwnedTagsWithIgnore *****************

// ********** Begin Class AGAS_MainCharacterCpp Function TryCreateInputsGAS ************************
struct Z_Construct_UFunction_AGAS_MainCharacterCpp_TryCreateInputsGAS_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pawn|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*WARNING - This function has been disabled due to outdated code. It is no longer available.*/" },
#endif
		{ "DisplayName", "Try Create Inputs Binds For GAS" },
		{ "Keywords", "Inputs Player" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "WARNING - This function has been disabled due to outdated code. It is no longer available." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function TryCreateInputsGAS constinit property declarations ********************
// ********** End Function TryCreateInputsGAS constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGAS_MainCharacterCpp_TryCreateInputsGAS_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGAS_MainCharacterCpp, nullptr, "TryCreateInputsGAS", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_TryCreateInputsGAS_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGAS_MainCharacterCpp_TryCreateInputsGAS_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AGAS_MainCharacterCpp_TryCreateInputsGAS()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGAS_MainCharacterCpp_TryCreateInputsGAS_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGAS_MainCharacterCpp::execTryCreateInputsGAS)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TryCreateInputsGAS();
	P_NATIVE_END;
}
// ********** End Class AGAS_MainCharacterCpp Function TryCreateInputsGAS **************************

// ********** Begin Class AGAS_MainCharacterCpp ****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AGAS_MainCharacterCpp;
UClass* AGAS_MainCharacterCpp::GetPrivateStaticClass()
{
	using TClass = AGAS_MainCharacterCpp;
	if (!Z_Registration_Info_UClass_AGAS_MainCharacterCpp.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("GAS_MainCharacterCpp"),
			Z_Registration_Info_UClass_AGAS_MainCharacterCpp.InnerSingleton,
			StaticRegisterNativesAGAS_MainCharacterCpp,
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
	return Z_Registration_Info_UClass_AGAS_MainCharacterCpp.InnerSingleton;
}
UClass* Z_Construct_UClass_AGAS_MainCharacterCpp_NoRegister()
{
	return AGAS_MainCharacterCpp::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AGAS_MainCharacterCpp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "GAS_MainCharacterCpp.h" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefCapsuleSizeC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Essential Information" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Define Base Variables For ALS Character\n" },
#endif
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Define Base Variables For ALS Character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsMovingC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Essential Information" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HasMovementInputC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Essential Information" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsStartedMovementOnTargetC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Essential Information" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionWithPropC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Essential Information" },
		{ "DisplayName", "Start Interaction With Dynamic Prop C" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsLayBackC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Essential Information" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsSwimmingC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Essential Information" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RagdollOnGroundC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Ragdoll System" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RagdollFaceUpC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Ragdoll System" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccelerationC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Essential Information" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelativeAcceleractionC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Essential Information" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastVelocityRotationC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Essential Information" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastMovementInputRotationC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Essential Information" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviousVelocityC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Cached Variables" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastRagdollVelocityC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Ragdoll System" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Essential Information" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementInputAmountC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Essential Information" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementSpeedDifferenceC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Essential Information" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimYawRateC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Essential Information" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviousAimYawC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Cached Variables" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityHandle_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Cached Variables" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrafeSpeedMapCurveC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Essential Information" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMovementSettingsC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Movement System" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloorVelocityC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Movement System" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrevFloorVelocityC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Movement System" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlayStateLeavingStarted_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Essential Information" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CorrectNonInertialFloor_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Experimental function. Improves the behavior of the capsule in a non-inertial reference frame (the floor moves relative to the world space) */" },
#endif
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Experimental function. Improves the behavior of the capsule in a non-inertial reference frame (the floor moves relative to the world space)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "GAS_MainCharacterCpp" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitiesData_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAttributeEffect_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AGAS_MainCharacterCpp constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefCapsuleSizeC;
	static void NewProp_IsMovingC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsMovingC;
	static void NewProp_HasMovementInputC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HasMovementInputC;
	static void NewProp_IsStartedMovementOnTargetC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsStartedMovementOnTargetC;
	static void NewProp_InteractionWithPropC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InteractionWithPropC;
	static void NewProp_IsLayBackC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsLayBackC;
	static void NewProp_IsSwimmingC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsSwimmingC;
	static void NewProp_RagdollOnGroundC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RagdollOnGroundC;
	static void NewProp_RagdollFaceUpC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RagdollFaceUpC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AccelerationC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeAcceleractionC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastVelocityRotationC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastMovementInputRotationC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PreviousVelocityC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastRagdollVelocityC;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedC;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementInputAmountC;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementSpeedDifferenceC;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AimYawRateC;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PreviousAimYawC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityHandle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StrafeSpeedMapCurveC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentMovementSettingsC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FloorVelocityC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PrevFloorVelocityC;
	static void NewProp_OverlayStateLeavingStarted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OverlayStateLeavingStarted;
	static void NewProp_CorrectNonInertialFloor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CorrectNonInertialFloor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitiesData;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultAttributeEffect;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Attributes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AGAS_MainCharacterCpp constinit property declarations **********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CalculateGroundedRotationSpeedC"), .Pointer = &AGAS_MainCharacterCpp::execCalculateGroundedRotationSpeedC },
		{ .NameUTF8 = UTF8TEXT("ConvertLiteralNameToTag"), .Pointer = &AGAS_MainCharacterCpp::execConvertLiteralNameToTag },
		{ .NameUTF8 = UTF8TEXT("FilterTagsByRootGroup"), .Pointer = &AGAS_MainCharacterCpp::execFilterTagsByRootGroup },
		{ .NameUTF8 = UTF8TEXT("FloorToCapsuleLocationC"), .Pointer = &AGAS_MainCharacterCpp::execFloorToCapsuleLocationC },
		{ .NameUTF8 = UTF8TEXT("GetCapsuleBaseLocationC"), .Pointer = &AGAS_MainCharacterCpp::execGetCapsuleBaseLocationC },
		{ .NameUTF8 = UTF8TEXT("GetControlVectorsC"), .Pointer = &AGAS_MainCharacterCpp::execGetControlVectorsC },
		{ .NameUTF8 = UTF8TEXT("GetCustomBaseAimRotation"), .Pointer = &AGAS_MainCharacterCpp::execGetCustomBaseAimRotation },
		{ .NameUTF8 = UTF8TEXT("GetCustomViewRotation"), .Pointer = &AGAS_MainCharacterCpp::execGetCustomViewRotation },
		{ .NameUTF8 = UTF8TEXT("GetMappedSpeedC"), .Pointer = &AGAS_MainCharacterCpp::execGetMappedSpeedC },
		{ .NameUTF8 = UTF8TEXT("GetSubTag"), .Pointer = &AGAS_MainCharacterCpp::execGetSubTag },
		{ .NameUTF8 = UTF8TEXT("GetTargetSpeedWithStrafeC"), .Pointer = &AGAS_MainCharacterCpp::execGetTargetSpeedWithStrafeC },
		{ .NameUTF8 = UTF8TEXT("IsTagLeaf"), .Pointer = &AGAS_MainCharacterCpp::execIsTagLeaf },
		{ .NameUTF8 = UTF8TEXT("SmoothCharacterRotationC"), .Pointer = &AGAS_MainCharacterCpp::execSmoothCharacterRotationC },
		{ .NameUTF8 = UTF8TEXT("SwitchOnOwnedTags"), .Pointer = &AGAS_MainCharacterCpp::execSwitchOnOwnedTags },
		{ .NameUTF8 = UTF8TEXT("SwitchOnOwnedTagsWithIgnore"), .Pointer = &AGAS_MainCharacterCpp::execSwitchOnOwnedTagsWithIgnore },
		{ .NameUTF8 = UTF8TEXT("TryCreateInputsGAS"), .Pointer = &AGAS_MainCharacterCpp::execTryCreateInputsGAS },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGAS_MainCharacterCpp_CalculateGroundedRotationSpeedC, "CalculateGroundedRotationSpeedC" }, // 1294077032
		{ &Z_Construct_UFunction_AGAS_MainCharacterCpp_ConvertLiteralNameToTag, "ConvertLiteralNameToTag" }, // 1031944283
		{ &Z_Construct_UFunction_AGAS_MainCharacterCpp_DoWhenOverlayLeaving, "DoWhenOverlayLeaving" }, // 2028236949
		{ &Z_Construct_UFunction_AGAS_MainCharacterCpp_FilterTagsByRootGroup, "FilterTagsByRootGroup" }, // 3695030394
		{ &Z_Construct_UFunction_AGAS_MainCharacterCpp_FloorToCapsuleLocationC, "FloorToCapsuleLocationC" }, // 4110783104
		{ &Z_Construct_UFunction_AGAS_MainCharacterCpp_GetCapsuleBaseLocationC, "GetCapsuleBaseLocationC" }, // 2934644695
		{ &Z_Construct_UFunction_AGAS_MainCharacterCpp_GetControlVectorsC, "GetControlVectorsC" }, // 3804874767
		{ &Z_Construct_UFunction_AGAS_MainCharacterCpp_GetCustomBaseAimRotation, "GetCustomBaseAimRotation" }, // 1879154994
		{ &Z_Construct_UFunction_AGAS_MainCharacterCpp_GetCustomViewRotation, "GetCustomViewRotation" }, // 2912916284
		{ &Z_Construct_UFunction_AGAS_MainCharacterCpp_GetMappedSpeedC, "GetMappedSpeedC" }, // 1718110889
		{ &Z_Construct_UFunction_AGAS_MainCharacterCpp_GetSubTag, "GetSubTag" }, // 905539172
		{ &Z_Construct_UFunction_AGAS_MainCharacterCpp_GetTargetSpeedWithStrafeC, "GetTargetSpeedWithStrafeC" }, // 2728436089
		{ &Z_Construct_UFunction_AGAS_MainCharacterCpp_IsTagLeaf, "IsTagLeaf" }, // 87629066
		{ &Z_Construct_UFunction_AGAS_MainCharacterCpp_OverlayLeavingFinshed, "OverlayLeavingFinshed" }, // 1248844576
		{ &Z_Construct_UFunction_AGAS_MainCharacterCpp_SmoothCharacterRotationC, "SmoothCharacterRotationC" }, // 88452862
		{ &Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTags, "SwitchOnOwnedTags" }, // 2906272279
		{ &Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTagsWithIgnore, "SwitchOnOwnedTagsWithIgnore" }, // 2260464216
		{ &Z_Construct_UFunction_AGAS_MainCharacterCpp_TryCreateInputsGAS, "TryCreateInputsGAS" }, // 1912419115
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGAS_MainCharacterCpp>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AGAS_MainCharacterCpp_Statics

// ********** Begin Class AGAS_MainCharacterCpp Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_DefCapsuleSizeC = { "DefCapsuleSizeC", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAS_MainCharacterCpp, DefCapsuleSizeC), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefCapsuleSizeC_MetaData), NewProp_DefCapsuleSizeC_MetaData) };
void Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_IsMovingC_SetBit(void* Obj)
{
	((AGAS_MainCharacterCpp*)Obj)->IsMovingC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_IsMovingC = { "IsMovingC", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGAS_MainCharacterCpp), &Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_IsMovingC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsMovingC_MetaData), NewProp_IsMovingC_MetaData) };
void Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_HasMovementInputC_SetBit(void* Obj)
{
	((AGAS_MainCharacterCpp*)Obj)->HasMovementInputC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_HasMovementInputC = { "HasMovementInputC", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGAS_MainCharacterCpp), &Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_HasMovementInputC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HasMovementInputC_MetaData), NewProp_HasMovementInputC_MetaData) };
void Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_IsStartedMovementOnTargetC_SetBit(void* Obj)
{
	((AGAS_MainCharacterCpp*)Obj)->IsStartedMovementOnTargetC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_IsStartedMovementOnTargetC = { "IsStartedMovementOnTargetC", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGAS_MainCharacterCpp), &Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_IsStartedMovementOnTargetC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsStartedMovementOnTargetC_MetaData), NewProp_IsStartedMovementOnTargetC_MetaData) };
void Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_InteractionWithPropC_SetBit(void* Obj)
{
	((AGAS_MainCharacterCpp*)Obj)->InteractionWithPropC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_InteractionWithPropC = { "InteractionWithPropC", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGAS_MainCharacterCpp), &Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_InteractionWithPropC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionWithPropC_MetaData), NewProp_InteractionWithPropC_MetaData) };
void Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_IsLayBackC_SetBit(void* Obj)
{
	((AGAS_MainCharacterCpp*)Obj)->IsLayBackC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_IsLayBackC = { "IsLayBackC", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGAS_MainCharacterCpp), &Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_IsLayBackC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsLayBackC_MetaData), NewProp_IsLayBackC_MetaData) };
void Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_IsSwimmingC_SetBit(void* Obj)
{
	((AGAS_MainCharacterCpp*)Obj)->IsSwimmingC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_IsSwimmingC = { "IsSwimmingC", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGAS_MainCharacterCpp), &Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_IsSwimmingC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsSwimmingC_MetaData), NewProp_IsSwimmingC_MetaData) };
void Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_RagdollOnGroundC_SetBit(void* Obj)
{
	((AGAS_MainCharacterCpp*)Obj)->RagdollOnGroundC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_RagdollOnGroundC = { "RagdollOnGroundC", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGAS_MainCharacterCpp), &Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_RagdollOnGroundC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RagdollOnGroundC_MetaData), NewProp_RagdollOnGroundC_MetaData) };
void Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_RagdollFaceUpC_SetBit(void* Obj)
{
	((AGAS_MainCharacterCpp*)Obj)->RagdollFaceUpC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_RagdollFaceUpC = { "RagdollFaceUpC", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGAS_MainCharacterCpp), &Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_RagdollFaceUpC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RagdollFaceUpC_MetaData), NewProp_RagdollFaceUpC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_AccelerationC = { "AccelerationC", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAS_MainCharacterCpp, AccelerationC), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccelerationC_MetaData), NewProp_AccelerationC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_RelativeAcceleractionC = { "RelativeAcceleractionC", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAS_MainCharacterCpp, RelativeAcceleractionC), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelativeAcceleractionC_MetaData), NewProp_RelativeAcceleractionC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_LastVelocityRotationC = { "LastVelocityRotationC", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAS_MainCharacterCpp, LastVelocityRotationC), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastVelocityRotationC_MetaData), NewProp_LastVelocityRotationC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_LastMovementInputRotationC = { "LastMovementInputRotationC", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAS_MainCharacterCpp, LastMovementInputRotationC), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastMovementInputRotationC_MetaData), NewProp_LastMovementInputRotationC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_PreviousVelocityC = { "PreviousVelocityC", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAS_MainCharacterCpp, PreviousVelocityC), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviousVelocityC_MetaData), NewProp_PreviousVelocityC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_LastRagdollVelocityC = { "LastRagdollVelocityC", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAS_MainCharacterCpp, LastRagdollVelocityC), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastRagdollVelocityC_MetaData), NewProp_LastRagdollVelocityC_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_SpeedC = { "SpeedC", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAS_MainCharacterCpp, SpeedC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedC_MetaData), NewProp_SpeedC_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_MovementInputAmountC = { "MovementInputAmountC", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAS_MainCharacterCpp, MovementInputAmountC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementInputAmountC_MetaData), NewProp_MovementInputAmountC_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_MovementSpeedDifferenceC = { "MovementSpeedDifferenceC", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAS_MainCharacterCpp, MovementSpeedDifferenceC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementSpeedDifferenceC_MetaData), NewProp_MovementSpeedDifferenceC_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_AimYawRateC = { "AimYawRateC", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAS_MainCharacterCpp, AimYawRateC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimYawRateC_MetaData), NewProp_AimYawRateC_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_PreviousAimYawC = { "PreviousAimYawC", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAS_MainCharacterCpp, PreviousAimYawC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviousAimYawC_MetaData), NewProp_PreviousAimYawC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_AbilityHandle = { "AbilityHandle", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAS_MainCharacterCpp, AbilityHandle), Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityHandle_MetaData), NewProp_AbilityHandle_MetaData) }; // 224356909
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_StrafeSpeedMapCurveC = { "StrafeSpeedMapCurveC", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAS_MainCharacterCpp, StrafeSpeedMapCurveC), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrafeSpeedMapCurveC_MetaData), NewProp_StrafeSpeedMapCurveC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_CurrentMovementSettingsC = { "CurrentMovementSettingsC", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAS_MainCharacterCpp, CurrentMovementSettingsC), Z_Construct_UScriptStruct_FMovementSettingsStrafe, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentMovementSettingsC_MetaData), NewProp_CurrentMovementSettingsC_MetaData) }; // 244244352
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_FloorVelocityC = { "FloorVelocityC", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAS_MainCharacterCpp, FloorVelocityC), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloorVelocityC_MetaData), NewProp_FloorVelocityC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_PrevFloorVelocityC = { "PrevFloorVelocityC", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAS_MainCharacterCpp, PrevFloorVelocityC), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrevFloorVelocityC_MetaData), NewProp_PrevFloorVelocityC_MetaData) };
void Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_OverlayStateLeavingStarted_SetBit(void* Obj)
{
	((AGAS_MainCharacterCpp*)Obj)->OverlayStateLeavingStarted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_OverlayStateLeavingStarted = { "OverlayStateLeavingStarted", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGAS_MainCharacterCpp), &Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_OverlayStateLeavingStarted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlayStateLeavingStarted_MetaData), NewProp_OverlayStateLeavingStarted_MetaData) };
void Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_CorrectNonInertialFloor_SetBit(void* Obj)
{
	((AGAS_MainCharacterCpp*)Obj)->CorrectNonInertialFloor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_CorrectNonInertialFloor = { "CorrectNonInertialFloor", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGAS_MainCharacterCpp), &Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_CorrectNonInertialFloor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CorrectNonInertialFloor_MetaData), NewProp_CorrectNonInertialFloor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAS_MainCharacterCpp, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_AbilitiesData = { "AbilitiesData", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAS_MainCharacterCpp, AbilitiesData), Z_Construct_UClass_UIWALS_GameplayAbilitySet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitiesData_MetaData), NewProp_AbilitiesData_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_DefaultAttributeEffect = { "DefaultAttributeEffect", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAS_MainCharacterCpp, DefaultAttributeEffect), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultAttributeEffect_MetaData), NewProp_DefaultAttributeEffect_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAS_MainCharacterCpp, Attributes), Z_Construct_UClass_UIWALS_BaseAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attributes_MetaData), NewProp_Attributes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_DefCapsuleSizeC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_IsMovingC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_HasMovementInputC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_IsStartedMovementOnTargetC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_InteractionWithPropC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_IsLayBackC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_IsSwimmingC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_RagdollOnGroundC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_RagdollFaceUpC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_AccelerationC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_RelativeAcceleractionC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_LastVelocityRotationC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_LastMovementInputRotationC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_PreviousVelocityC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_LastRagdollVelocityC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_SpeedC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_MovementInputAmountC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_MovementSpeedDifferenceC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_AimYawRateC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_PreviousAimYawC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_AbilityHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_StrafeSpeedMapCurveC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_CurrentMovementSettingsC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_FloorVelocityC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_PrevFloorVelocityC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_OverlayStateLeavingStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_CorrectNonInertialFloor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_AbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_AbilitiesData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_DefaultAttributeEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_Attributes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::PropPointers) < 2048);
// ********** End Class AGAS_MainCharacterCpp Property Definitions *********************************
UObject* (*const Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_IWALS_AbilitySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(AGAS_MainCharacterCpp, IAbilitySystemInterface), false },  // 2722098046
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::ClassParams = {
	&AGAS_MainCharacterCpp::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::Class_MetaDataParams), Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::Class_MetaDataParams)
};
void AGAS_MainCharacterCpp::StaticRegisterNativesAGAS_MainCharacterCpp()
{
	UClass* Class = AGAS_MainCharacterCpp::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::Funcs));
}
UClass* Z_Construct_UClass_AGAS_MainCharacterCpp()
{
	if (!Z_Registration_Info_UClass_AGAS_MainCharacterCpp.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGAS_MainCharacterCpp.OuterSingleton, Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGAS_MainCharacterCpp.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AGAS_MainCharacterCpp);
AGAS_MainCharacterCpp::~AGAS_MainCharacterCpp() {}
// ********** End Class AGAS_MainCharacterCpp ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UE5_7_AGLS_ProgramingCpp_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_GAS_MainCharacterCpp_h__Script_IWALS_AbilitySystem_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovementSettingsStrafe::StaticStruct, Z_Construct_UScriptStruct_FMovementSettingsStrafe_Statics::NewStructOps, TEXT("MovementSettingsStrafe"),&Z_Registration_Info_UScriptStruct_FMovementSettingsStrafe, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovementSettingsStrafe), 244244352U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGAS_MainCharacterCpp, AGAS_MainCharacterCpp::StaticClass, TEXT("AGAS_MainCharacterCpp"), &Z_Registration_Info_UClass_AGAS_MainCharacterCpp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGAS_MainCharacterCpp), 3703965209U) },
	};
}; // Z_CompiledInDeferFile_FID_Unreal_Projects_UE5_7_AGLS_ProgramingCpp_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_GAS_MainCharacterCpp_h__Script_IWALS_AbilitySystem_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UE5_7_AGLS_ProgramingCpp_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_GAS_MainCharacterCpp_h__Script_IWALS_AbilitySystem_913987900{
	TEXT("/Script/IWALS_AbilitySystem"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UE5_7_AGLS_ProgramingCpp_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_GAS_MainCharacterCpp_h__Script_IWALS_AbilitySystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UE5_7_AGLS_ProgramingCpp_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_GAS_MainCharacterCpp_h__Script_IWALS_AbilitySystem_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UE5_7_AGLS_ProgramingCpp_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_GAS_MainCharacterCpp_h__Script_IWALS_AbilitySystem_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UE5_7_AGLS_ProgramingCpp_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_GAS_MainCharacterCpp_h__Script_IWALS_AbilitySystem_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
