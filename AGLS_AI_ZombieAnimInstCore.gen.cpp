// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AGLS_AI_ZombieAnimInstCore.h"
#include "Components/SkeletalMeshComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAGLS_AI_ZombieAnimInstCore() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UBlendProfile_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UAGLS_AI_AnimInstanceBase();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore_NoRegister();
UPackage* Z_Construct_UPackage__Script_HelpfulFunctions();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAGLS_AI_ZombieAnimInstCore Function FootsStepsPlayerC *******************
static FName NAME_UAGLS_AI_ZombieAnimInstCore_FootsStepsPlayerC = FName(TEXT("FootsStepsPlayerC"));
void UAGLS_AI_ZombieAnimInstCore::FootsStepsPlayerC()
{
	UFunction* Func = FindFunctionChecked(NAME_UAGLS_AI_ZombieAnimInstCore_FootsStepsPlayerC);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		FootsStepsPlayerC_Implementation();
	}
}
struct Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_FootsStepsPlayerC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Anim Blueprint Logic" },
		{ "DisplayName", "Foots Steps Player" },
		{ "Keywords", "Update,Sounds" },
		{ "ModuleRelativePath", "Public/AGLS_AI_ZombieAnimInstCore.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function FootsStepsPlayerC constinit property declarations *********************
// ********** End Function FootsStepsPlayerC constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_FootsStepsPlayerC_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore, nullptr, "FootsStepsPlayerC", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_FootsStepsPlayerC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_FootsStepsPlayerC_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_FootsStepsPlayerC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_FootsStepsPlayerC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAGLS_AI_ZombieAnimInstCore::execFootsStepsPlayerC)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FootsStepsPlayerC_Implementation();
	P_NATIVE_END;
}
// ********** End Class UAGLS_AI_ZombieAnimInstCore Function FootsStepsPlayerC *********************

// ********** Begin Class UAGLS_AI_ZombieAnimInstCore Function GetAddtiveSlotWeight ****************
struct Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_GetAddtiveSlotWeight_Statics
{
	struct AGLS_AI_ZombieAnimInstCore_eventGetAddtiveSlotWeight_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Anim Blueprint Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Blueprint Bindable\n" },
#endif
		{ "DisplayName", "Addtive Slot Weight" },
		{ "Keywords", "Anim Graph,Slot,Weight" },
		{ "ModuleRelativePath", "Public/AGLS_AI_ZombieAnimInstCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint Bindable" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetAddtiveSlotWeight constinit property declarations ******************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAddtiveSlotWeight constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAddtiveSlotWeight Property Definitions *****************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_GetAddtiveSlotWeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_ZombieAnimInstCore_eventGetAddtiveSlotWeight_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_GetAddtiveSlotWeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_GetAddtiveSlotWeight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_GetAddtiveSlotWeight_Statics::PropPointers) < 2048);
// ********** End Function GetAddtiveSlotWeight Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_GetAddtiveSlotWeight_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore, nullptr, "GetAddtiveSlotWeight", 	Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_GetAddtiveSlotWeight_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_GetAddtiveSlotWeight_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_GetAddtiveSlotWeight_Statics::AGLS_AI_ZombieAnimInstCore_eventGetAddtiveSlotWeight_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_GetAddtiveSlotWeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_GetAddtiveSlotWeight_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_GetAddtiveSlotWeight_Statics::AGLS_AI_ZombieAnimInstCore_eventGetAddtiveSlotWeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_GetAddtiveSlotWeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_GetAddtiveSlotWeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAGLS_AI_ZombieAnimInstCore::execGetAddtiveSlotWeight)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetAddtiveSlotWeight();
	P_NATIVE_END;
}
// ********** End Class UAGLS_AI_ZombieAnimInstCore Function GetAddtiveSlotWeight ******************

// ********** Begin Class UAGLS_AI_ZombieAnimInstCore Function GetBaseLayerSlotWeigth **************
struct Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_GetBaseLayerSlotWeigth_Statics
{
	struct AGLS_AI_ZombieAnimInstCore_eventGetBaseLayerSlotWeigth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Anim Blueprint Graph" },
		{ "DisplayName", "Base Layer Slot Weigth" },
		{ "Keywords", "Anim Graph,Slot,Weight" },
		{ "ModuleRelativePath", "Public/AGLS_AI_ZombieAnimInstCore.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetBaseLayerSlotWeigth constinit property declarations ****************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetBaseLayerSlotWeigth constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetBaseLayerSlotWeigth Property Definitions ***************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_GetBaseLayerSlotWeigth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_ZombieAnimInstCore_eventGetBaseLayerSlotWeigth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_GetBaseLayerSlotWeigth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_GetBaseLayerSlotWeigth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_GetBaseLayerSlotWeigth_Statics::PropPointers) < 2048);
// ********** End Function GetBaseLayerSlotWeigth Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_GetBaseLayerSlotWeigth_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore, nullptr, "GetBaseLayerSlotWeigth", 	Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_GetBaseLayerSlotWeigth_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_GetBaseLayerSlotWeigth_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_GetBaseLayerSlotWeigth_Statics::AGLS_AI_ZombieAnimInstCore_eventGetBaseLayerSlotWeigth_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_GetBaseLayerSlotWeigth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_GetBaseLayerSlotWeigth_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_GetBaseLayerSlotWeigth_Statics::AGLS_AI_ZombieAnimInstCore_eventGetBaseLayerSlotWeigth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_GetBaseLayerSlotWeigth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_GetBaseLayerSlotWeigth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAGLS_AI_ZombieAnimInstCore::execGetBaseLayerSlotWeigth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetBaseLayerSlotWeigth();
	P_NATIVE_END;
}
// ********** End Class UAGLS_AI_ZombieAnimInstCore Function GetBaseLayerSlotWeigth ****************

// ********** Begin Class UAGLS_AI_ZombieAnimInstCore Function GetFootsIK_Alpha ********************
struct Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_GetFootsIK_Alpha_Statics
{
	struct AGLS_AI_ZombieAnimInstCore_eventGetFootsIK_Alpha_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Anim Blueprint Graph" },
		{ "DisplayName", "FootsIK Alpha" },
		{ "Keywords", "Anim Graph,IK,Weight" },
		{ "ModuleRelativePath", "Public/AGLS_AI_ZombieAnimInstCore.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetFootsIK_Alpha constinit property declarations **********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetFootsIK_Alpha constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetFootsIK_Alpha Property Definitions *********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_GetFootsIK_Alpha_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_ZombieAnimInstCore_eventGetFootsIK_Alpha_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_GetFootsIK_Alpha_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_GetFootsIK_Alpha_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_GetFootsIK_Alpha_Statics::PropPointers) < 2048);
// ********** End Function GetFootsIK_Alpha Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_GetFootsIK_Alpha_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore, nullptr, "GetFootsIK_Alpha", 	Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_GetFootsIK_Alpha_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_GetFootsIK_Alpha_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_GetFootsIK_Alpha_Statics::AGLS_AI_ZombieAnimInstCore_eventGetFootsIK_Alpha_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_GetFootsIK_Alpha_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_GetFootsIK_Alpha_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_GetFootsIK_Alpha_Statics::AGLS_AI_ZombieAnimInstCore_eventGetFootsIK_Alpha_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_GetFootsIK_Alpha()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_GetFootsIK_Alpha_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAGLS_AI_ZombieAnimInstCore::execGetFootsIK_Alpha)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetFootsIK_Alpha();
	P_NATIVE_END;
}
// ********** End Class UAGLS_AI_ZombieAnimInstCore Function GetFootsIK_Alpha **********************

// ********** Begin Class UAGLS_AI_ZombieAnimInstCore Function SetAimAtEnemyPropertiesC ************
struct Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SetAimAtEnemyPropertiesC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Anim Blueprint Logic" },
		{ "DisplayName", "Set Aim At Enemy Properties" },
		{ "Keywords", "Zombie,Blueprint Update" },
		{ "ModuleRelativePath", "Public/AGLS_AI_ZombieAnimInstCore.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetAimAtEnemyPropertiesC constinit property declarations **************
// ********** End Function SetAimAtEnemyPropertiesC constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SetAimAtEnemyPropertiesC_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore, nullptr, "SetAimAtEnemyPropertiesC", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SetAimAtEnemyPropertiesC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SetAimAtEnemyPropertiesC_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SetAimAtEnemyPropertiesC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SetAimAtEnemyPropertiesC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAGLS_AI_ZombieAnimInstCore::execSetAimAtEnemyPropertiesC)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAimAtEnemyPropertiesC();
	P_NATIVE_END;
}
// ********** End Class UAGLS_AI_ZombieAnimInstCore Function SetAimAtEnemyPropertiesC **************

// ********** Begin Class UAGLS_AI_ZombieAnimInstCore Function SetAlphaForNearAttackingC ***********
struct Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SetAlphaForNearAttackingC_Statics
{
	struct AGLS_AI_ZombieAnimInstCore_eventSetAlphaForNearAttackingC_Parms
	{
		FVector2D DistanceRangeIn;
		FVector2D EnemyDetectRangeIn;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Anim Blueprint Logic" },
		{ "CPP_Default_DistanceRangeIn", "(X=140.000,Y=200.000)" },
		{ "CPP_Default_EnemyDetectRangeIn", "(X=0.400,Y=0.800)" },
		{ "DisplayName", "Set Alpha For Near Attacking" },
		{ "Keywords", "Zombie,Blueprint Update" },
		{ "ModuleRelativePath", "Public/AGLS_AI_ZombieAnimInstCore.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetAlphaForNearAttackingC constinit property declarations *************
	static const UECodeGen_Private::FStructPropertyParams NewProp_DistanceRangeIn;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EnemyDetectRangeIn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetAlphaForNearAttackingC constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetAlphaForNearAttackingC Property Definitions ************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SetAlphaForNearAttackingC_Statics::NewProp_DistanceRangeIn = { "DistanceRangeIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_ZombieAnimInstCore_eventSetAlphaForNearAttackingC_Parms, DistanceRangeIn), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SetAlphaForNearAttackingC_Statics::NewProp_EnemyDetectRangeIn = { "EnemyDetectRangeIn", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_ZombieAnimInstCore_eventSetAlphaForNearAttackingC_Parms, EnemyDetectRangeIn), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SetAlphaForNearAttackingC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SetAlphaForNearAttackingC_Statics::NewProp_DistanceRangeIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SetAlphaForNearAttackingC_Statics::NewProp_EnemyDetectRangeIn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SetAlphaForNearAttackingC_Statics::PropPointers) < 2048);
// ********** End Function SetAlphaForNearAttackingC Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SetAlphaForNearAttackingC_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore, nullptr, "SetAlphaForNearAttackingC", 	Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SetAlphaForNearAttackingC_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SetAlphaForNearAttackingC_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SetAlphaForNearAttackingC_Statics::AGLS_AI_ZombieAnimInstCore_eventSetAlphaForNearAttackingC_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SetAlphaForNearAttackingC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SetAlphaForNearAttackingC_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SetAlphaForNearAttackingC_Statics::AGLS_AI_ZombieAnimInstCore_eventSetAlphaForNearAttackingC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SetAlphaForNearAttackingC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SetAlphaForNearAttackingC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAGLS_AI_ZombieAnimInstCore::execSetAlphaForNearAttackingC)
{
	P_GET_STRUCT(FVector2D,Z_Param_DistanceRangeIn);
	P_GET_STRUCT(FVector2D,Z_Param_EnemyDetectRangeIn);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAlphaForNearAttackingC(Z_Param_DistanceRangeIn,Z_Param_EnemyDetectRangeIn);
	P_NATIVE_END;
}
// ********** End Class UAGLS_AI_ZombieAnimInstCore Function SetAlphaForNearAttackingC *************

// ********** Begin Class UAGLS_AI_ZombieAnimInstCore Function SetCorrectedIsCollideValueC *********
struct Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SetCorrectedIsCollideValueC_Statics
{
	struct AGLS_AI_ZombieAnimInstCore_eventSetCorrectedIsCollideValueC_Parms
	{
		int32 DebugModeIndex;
		float DebugTime;
		float CapRadiusBias;
		float CapHeightBias;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Anim Blueprint Logic" },
		{ "CPP_Default_CapHeightBias", "-10.000000" },
		{ "CPP_Default_CapRadiusBias", "8.000000" },
		{ "CPP_Default_DebugModeIndex", "0" },
		{ "CPP_Default_DebugTime", "0.100000" },
		{ "DisplayName", "Set Corrected Is Collide Value" },
		{ "Keywords", "Collision,Motion,Matching" },
		{ "ModuleRelativePath", "Public/AGLS_AI_ZombieAnimInstCore.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetCorrectedIsCollideValueC constinit property declarations ***********
	static const UECodeGen_Private::FIntPropertyParams NewProp_DebugModeIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CapRadiusBias;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CapHeightBias;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetCorrectedIsCollideValueC constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetCorrectedIsCollideValueC Property Definitions **********************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SetCorrectedIsCollideValueC_Statics::NewProp_DebugModeIndex = { "DebugModeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_ZombieAnimInstCore_eventSetCorrectedIsCollideValueC_Parms, DebugModeIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SetCorrectedIsCollideValueC_Statics::NewProp_DebugTime = { "DebugTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_ZombieAnimInstCore_eventSetCorrectedIsCollideValueC_Parms, DebugTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SetCorrectedIsCollideValueC_Statics::NewProp_CapRadiusBias = { "CapRadiusBias", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_ZombieAnimInstCore_eventSetCorrectedIsCollideValueC_Parms, CapRadiusBias), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SetCorrectedIsCollideValueC_Statics::NewProp_CapHeightBias = { "CapHeightBias", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_ZombieAnimInstCore_eventSetCorrectedIsCollideValueC_Parms, CapHeightBias), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SetCorrectedIsCollideValueC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SetCorrectedIsCollideValueC_Statics::NewProp_DebugModeIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SetCorrectedIsCollideValueC_Statics::NewProp_DebugTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SetCorrectedIsCollideValueC_Statics::NewProp_CapRadiusBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SetCorrectedIsCollideValueC_Statics::NewProp_CapHeightBias,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SetCorrectedIsCollideValueC_Statics::PropPointers) < 2048);
// ********** End Function SetCorrectedIsCollideValueC Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SetCorrectedIsCollideValueC_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore, nullptr, "SetCorrectedIsCollideValueC", 	Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SetCorrectedIsCollideValueC_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SetCorrectedIsCollideValueC_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SetCorrectedIsCollideValueC_Statics::AGLS_AI_ZombieAnimInstCore_eventSetCorrectedIsCollideValueC_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SetCorrectedIsCollideValueC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SetCorrectedIsCollideValueC_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SetCorrectedIsCollideValueC_Statics::AGLS_AI_ZombieAnimInstCore_eventSetCorrectedIsCollideValueC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SetCorrectedIsCollideValueC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SetCorrectedIsCollideValueC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAGLS_AI_ZombieAnimInstCore::execSetCorrectedIsCollideValueC)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_DebugModeIndex);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DebugTime);
	P_GET_PROPERTY(FFloatProperty,Z_Param_CapRadiusBias);
	P_GET_PROPERTY(FFloatProperty,Z_Param_CapHeightBias);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCorrectedIsCollideValueC(Z_Param_DebugModeIndex,Z_Param_DebugTime,Z_Param_CapRadiusBias,Z_Param_CapHeightBias);
	P_NATIVE_END;
}
// ********** End Class UAGLS_AI_ZombieAnimInstCore Function SetCorrectedIsCollideValueC ***********

// ********** Begin Class UAGLS_AI_ZombieAnimInstCore Function SingleFootStepDetectionC ************
struct Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SingleFootStepDetectionC_Statics
{
	struct AGLS_AI_ZombieAnimInstCore_eventSingleFootStepDetectionC_Parms
	{
		USoundBase* SoundClass;
		float PlantedTime;
		FVector PrevFootLocation;
		FTransform RootTransform;
		FName FootBone;
		FName FootCurveSpeed;
		float DeltaTime;
		float TraceOffsetUp;
		float TraceOffsetDown;
		float FootNotMoveTollerance;
		float FootNotMoveOffset;
		FLinearColor DebugColor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Anim Blueprint Logic" },
		{ "CPP_Default_DebugColor", "(R=1.000000,G=0.000000,B=0.000000,A=1.000000)" },
		{ "CPP_Default_DeltaTime", "0.010000" },
		{ "CPP_Default_FootBone", "foot_l" },
		{ "CPP_Default_FootCurveSpeed", "FootSpeed_R" },
		{ "CPP_Default_FootNotMoveOffset", "0.000000" },
		{ "CPP_Default_FootNotMoveTollerance", "5.000000" },
		{ "CPP_Default_TraceOffsetDown", "10.000000" },
		{ "CPP_Default_TraceOffsetUp", "8.000000" },
		{ "DisplayName", "Single Foot Step Detection" },
		{ "Keywords", "Zombie,Blueprint Update" },
		{ "ModuleRelativePath", "Public/AGLS_AI_ZombieAnimInstCore.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SingleFootStepDetectionC constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlantedTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PrevFootLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RootTransform;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FootBone;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FootCurveSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceOffsetUp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceOffsetDown;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FootNotMoveTollerance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FootNotMoveOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DebugColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SingleFootStepDetectionC constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SingleFootStepDetectionC Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SingleFootStepDetectionC_Statics::NewProp_SoundClass = { "SoundClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_ZombieAnimInstCore_eventSingleFootStepDetectionC_Parms, SoundClass), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SingleFootStepDetectionC_Statics::NewProp_PlantedTime = { "PlantedTime", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_ZombieAnimInstCore_eventSingleFootStepDetectionC_Parms, PlantedTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SingleFootStepDetectionC_Statics::NewProp_PrevFootLocation = { "PrevFootLocation", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_ZombieAnimInstCore_eventSingleFootStepDetectionC_Parms, PrevFootLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SingleFootStepDetectionC_Statics::NewProp_RootTransform = { "RootTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_ZombieAnimInstCore_eventSingleFootStepDetectionC_Parms, RootTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SingleFootStepDetectionC_Statics::NewProp_FootBone = { "FootBone", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_ZombieAnimInstCore_eventSingleFootStepDetectionC_Parms, FootBone), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SingleFootStepDetectionC_Statics::NewProp_FootCurveSpeed = { "FootCurveSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_ZombieAnimInstCore_eventSingleFootStepDetectionC_Parms, FootCurveSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SingleFootStepDetectionC_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_ZombieAnimInstCore_eventSingleFootStepDetectionC_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SingleFootStepDetectionC_Statics::NewProp_TraceOffsetUp = { "TraceOffsetUp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_ZombieAnimInstCore_eventSingleFootStepDetectionC_Parms, TraceOffsetUp), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SingleFootStepDetectionC_Statics::NewProp_TraceOffsetDown = { "TraceOffsetDown", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_ZombieAnimInstCore_eventSingleFootStepDetectionC_Parms, TraceOffsetDown), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SingleFootStepDetectionC_Statics::NewProp_FootNotMoveTollerance = { "FootNotMoveTollerance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_ZombieAnimInstCore_eventSingleFootStepDetectionC_Parms, FootNotMoveTollerance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SingleFootStepDetectionC_Statics::NewProp_FootNotMoveOffset = { "FootNotMoveOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_ZombieAnimInstCore_eventSingleFootStepDetectionC_Parms, FootNotMoveOffset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SingleFootStepDetectionC_Statics::NewProp_DebugColor = { "DebugColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_ZombieAnimInstCore_eventSingleFootStepDetectionC_Parms, DebugColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SingleFootStepDetectionC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SingleFootStepDetectionC_Statics::NewProp_SoundClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SingleFootStepDetectionC_Statics::NewProp_PlantedTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SingleFootStepDetectionC_Statics::NewProp_PrevFootLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SingleFootStepDetectionC_Statics::NewProp_RootTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SingleFootStepDetectionC_Statics::NewProp_FootBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SingleFootStepDetectionC_Statics::NewProp_FootCurveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SingleFootStepDetectionC_Statics::NewProp_DeltaTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SingleFootStepDetectionC_Statics::NewProp_TraceOffsetUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SingleFootStepDetectionC_Statics::NewProp_TraceOffsetDown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SingleFootStepDetectionC_Statics::NewProp_FootNotMoveTollerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SingleFootStepDetectionC_Statics::NewProp_FootNotMoveOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SingleFootStepDetectionC_Statics::NewProp_DebugColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SingleFootStepDetectionC_Statics::PropPointers) < 2048);
// ********** End Function SingleFootStepDetectionC Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SingleFootStepDetectionC_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore, nullptr, "SingleFootStepDetectionC", 	Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SingleFootStepDetectionC_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SingleFootStepDetectionC_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SingleFootStepDetectionC_Statics::AGLS_AI_ZombieAnimInstCore_eventSingleFootStepDetectionC_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SingleFootStepDetectionC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SingleFootStepDetectionC_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SingleFootStepDetectionC_Statics::AGLS_AI_ZombieAnimInstCore_eventSingleFootStepDetectionC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SingleFootStepDetectionC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SingleFootStepDetectionC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAGLS_AI_ZombieAnimInstCore::execSingleFootStepDetectionC)
{
	P_GET_OBJECT(USoundBase,Z_Param_SoundClass);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_PlantedTime);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_PrevFootLocation);
	P_GET_STRUCT(FTransform,Z_Param_RootTransform);
	P_GET_PROPERTY(FNameProperty,Z_Param_FootBone);
	P_GET_PROPERTY(FNameProperty,Z_Param_FootCurveSpeed);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TraceOffsetUp);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TraceOffsetDown);
	P_GET_PROPERTY(FFloatProperty,Z_Param_FootNotMoveTollerance);
	P_GET_PROPERTY(FFloatProperty,Z_Param_FootNotMoveOffset);
	P_GET_STRUCT(FLinearColor,Z_Param_DebugColor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SingleFootStepDetectionC(Z_Param_SoundClass,Z_Param_Out_PlantedTime,Z_Param_Out_PrevFootLocation,Z_Param_RootTransform,Z_Param_FootBone,Z_Param_FootCurveSpeed,Z_Param_DeltaTime,Z_Param_TraceOffsetUp,Z_Param_TraceOffsetDown,Z_Param_FootNotMoveTollerance,Z_Param_FootNotMoveOffset,Z_Param_DebugColor);
	P_NATIVE_END;
}
// ********** End Class UAGLS_AI_ZombieAnimInstCore Function SingleFootStepDetectionC **************

// ********** Begin Class UAGLS_AI_ZombieAnimInstCore Function UpdatePerFrameOnTick ****************
static FName NAME_UAGLS_AI_ZombieAnimInstCore_UpdatePerFrameOnTick = FName(TEXT("UpdatePerFrameOnTick"));
void UAGLS_AI_ZombieAnimInstCore::UpdatePerFrameOnTick()
{
	UFunction* Func = FindFunctionChecked(NAME_UAGLS_AI_ZombieAnimInstCore_UpdatePerFrameOnTick);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		UpdatePerFrameOnTick_Implementation();
	}
}
struct Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_UpdatePerFrameOnTick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Anim Blueprint Logic" },
		{ "DisplayName", "Update Per Frame On Tick" },
		{ "Keywords", "Update,Tick" },
		{ "ModuleRelativePath", "Public/AGLS_AI_ZombieAnimInstCore.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function UpdatePerFrameOnTick constinit property declarations ******************
// ********** End Function UpdatePerFrameOnTick constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_UpdatePerFrameOnTick_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore, nullptr, "UpdatePerFrameOnTick", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_UpdatePerFrameOnTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_UpdatePerFrameOnTick_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_UpdatePerFrameOnTick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_UpdatePerFrameOnTick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAGLS_AI_ZombieAnimInstCore::execUpdatePerFrameOnTick)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdatePerFrameOnTick_Implementation();
	P_NATIVE_END;
}
// ********** End Class UAGLS_AI_ZombieAnimInstCore Function UpdatePerFrameOnTick ******************

// ********** Begin Class UAGLS_AI_ZombieAnimInstCore Function UpdateValuesFromCharacterC **********
struct Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_UpdateValuesFromCharacterC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Anim Blueprint Logic" },
		{ "DisplayName", "Update Values From Character" },
		{ "Keywords", "Interface,Update,Character" },
		{ "ModuleRelativePath", "Public/AGLS_AI_ZombieAnimInstCore.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function UpdateValuesFromCharacterC constinit property declarations ************
// ********** End Function UpdateValuesFromCharacterC constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_UpdateValuesFromCharacterC_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore, nullptr, "UpdateValuesFromCharacterC", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_UpdateValuesFromCharacterC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_UpdateValuesFromCharacterC_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_UpdateValuesFromCharacterC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_UpdateValuesFromCharacterC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAGLS_AI_ZombieAnimInstCore::execUpdateValuesFromCharacterC)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateValuesFromCharacterC();
	P_NATIVE_END;
}
// ********** End Class UAGLS_AI_ZombieAnimInstCore Function UpdateValuesFromCharacterC ************

// ********** Begin Class UAGLS_AI_ZombieAnimInstCore **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAGLS_AI_ZombieAnimInstCore;
UClass* UAGLS_AI_ZombieAnimInstCore::GetPrivateStaticClass()
{
	using TClass = UAGLS_AI_ZombieAnimInstCore;
	if (!Z_Registration_Info_UClass_UAGLS_AI_ZombieAnimInstCore.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AGLS_AI_ZombieAnimInstCore"),
			Z_Registration_Info_UClass_UAGLS_AI_ZombieAnimInstCore.InnerSingleton,
			StaticRegisterNativesUAGLS_AI_ZombieAnimInstCore,
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
	return Z_Registration_Info_UClass_UAGLS_AI_ZombieAnimInstCore.InnerSingleton;
}
UClass* Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore_NoRegister()
{
	return UAGLS_AI_ZombieAnimInstCore::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "AGLS_AI_ZombieAnimInstCore.h" },
		{ "ModuleRelativePath", "Public/AGLS_AI_ZombieAnimInstCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseCollideDatabasesForCharact_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/AGLS_AI_ZombieAnimInstCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionObject_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/AGLS_AI_ZombieAnimInstCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FootStepSoundClasses_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Choosed by current Gait Value. First Index = Walking, Second Index = Running, Third Index = Sprinting\n" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_AI_ZombieAnimInstCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Choosed by current Gait Value. First Index = Walking, Second Index = Running, Third Index = Sprinting" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendProfile_SlowHead_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "References" },
		{ "ModuleRelativePath", "Public/AGLS_AI_ZombieAnimInstCore.h" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendProfile_FastFoots_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "References" },
		{ "ModuleRelativePath", "Public/AGLS_AI_ZombieAnimInstCore.h" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrevCapsuleColliding_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Graph Core|Other" },
		{ "ModuleRelativePath", "Public/AGLS_AI_ZombieAnimInstCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraversalInteraction_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Graph Core|Other" },
		{ "ModuleRelativePath", "Public/AGLS_AI_ZombieAnimInstCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrevDetectedEnemyTime_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Graph Core|Other" },
		{ "ModuleRelativePath", "Public/AGLS_AI_ZombieAnimInstCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomJiggleAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Graph Core|Other" },
		{ "ModuleRelativePath", "Public/AGLS_AI_ZombieAnimInstCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayBumpReaction_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Graph Core|Bump Reaction" },
		{ "ModuleRelativePath", "Public/AGLS_AI_ZombieAnimInstCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BumpReactionAnimData_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Graph Core|Bump Reaction" },
		{ "ModuleRelativePath", "Public/AGLS_AI_ZombieAnimInstCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartedTraversalAction_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Graph Core|Traversal" },
		{ "ModuleRelativePath", "Public/AGLS_AI_ZombieAnimInstCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrevFootLocation_L_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Graph Core|Foot Steps" },
		{ "ModuleRelativePath", "Public/AGLS_AI_ZombieAnimInstCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrevFootLocation_R_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Graph Core|Foot Steps" },
		{ "ModuleRelativePath", "Public/AGLS_AI_ZombieAnimInstCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FootPlantedTime_L_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Graph Core|Foot Steps" },
		{ "ModuleRelativePath", "Public/AGLS_AI_ZombieAnimInstCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FootPlantedTime_R_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Graph Core|Foot Steps" },
		{ "ModuleRelativePath", "Public/AGLS_AI_ZombieAnimInstCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAtEnemyAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Graph Core|Look At" },
		{ "ModuleRelativePath", "Public/AGLS_AI_ZombieAnimInstCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookingSweepTime_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Graph Core|Look At" },
		{ "ModuleRelativePath", "Public/AGLS_AI_ZombieAnimInstCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAtEnemyLocation_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Graph Core|Look At" },
		{ "ModuleRelativePath", "Public/AGLS_AI_ZombieAnimInstCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartedAttackSeq_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Graph Core|Attacking" },
		{ "ModuleRelativePath", "Public/AGLS_AI_ZombieAnimInstCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NearEnemyAttackingAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Graph Core|Attacking" },
		{ "ModuleRelativePath", "Public/AGLS_AI_ZombieAnimInstCore.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAGLS_AI_ZombieAnimInstCore constinit property declarations **************
	static void NewProp_UseCollideDatabasesForCharact_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseCollideDatabasesForCharact;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionObject_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CollisionObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FootStepSoundClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FootStepSoundClasses;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlendProfile_SlowHead;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlendProfile_FastFoots;
	static void NewProp_PrevCapsuleColliding_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PrevCapsuleColliding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraversalInteraction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PrevDetectedEnemyTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RandomJiggleAlpha;
	static void NewProp_PlayBumpReaction_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PlayBumpReaction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BumpReactionAnimData;
	static void NewProp_StartedTraversalAction_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_StartedTraversalAction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PrevFootLocation_L;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PrevFootLocation_R;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FootPlantedTime_L;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FootPlantedTime_R;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LookAtEnemyAlpha;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LookingSweepTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LookAtEnemyLocation;
	static void NewProp_StartedAttackSeq_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_StartedAttackSeq;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NearEnemyAttackingAlpha;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAGLS_AI_ZombieAnimInstCore constinit property declarations ****************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("FootsStepsPlayerC"), .Pointer = &UAGLS_AI_ZombieAnimInstCore::execFootsStepsPlayerC },
		{ .NameUTF8 = UTF8TEXT("GetAddtiveSlotWeight"), .Pointer = &UAGLS_AI_ZombieAnimInstCore::execGetAddtiveSlotWeight },
		{ .NameUTF8 = UTF8TEXT("GetBaseLayerSlotWeigth"), .Pointer = &UAGLS_AI_ZombieAnimInstCore::execGetBaseLayerSlotWeigth },
		{ .NameUTF8 = UTF8TEXT("GetFootsIK_Alpha"), .Pointer = &UAGLS_AI_ZombieAnimInstCore::execGetFootsIK_Alpha },
		{ .NameUTF8 = UTF8TEXT("SetAimAtEnemyPropertiesC"), .Pointer = &UAGLS_AI_ZombieAnimInstCore::execSetAimAtEnemyPropertiesC },
		{ .NameUTF8 = UTF8TEXT("SetAlphaForNearAttackingC"), .Pointer = &UAGLS_AI_ZombieAnimInstCore::execSetAlphaForNearAttackingC },
		{ .NameUTF8 = UTF8TEXT("SetCorrectedIsCollideValueC"), .Pointer = &UAGLS_AI_ZombieAnimInstCore::execSetCorrectedIsCollideValueC },
		{ .NameUTF8 = UTF8TEXT("SingleFootStepDetectionC"), .Pointer = &UAGLS_AI_ZombieAnimInstCore::execSingleFootStepDetectionC },
		{ .NameUTF8 = UTF8TEXT("UpdatePerFrameOnTick"), .Pointer = &UAGLS_AI_ZombieAnimInstCore::execUpdatePerFrameOnTick },
		{ .NameUTF8 = UTF8TEXT("UpdateValuesFromCharacterC"), .Pointer = &UAGLS_AI_ZombieAnimInstCore::execUpdateValuesFromCharacterC },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_FootsStepsPlayerC, "FootsStepsPlayerC" }, // 4067356007
		{ &Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_GetAddtiveSlotWeight, "GetAddtiveSlotWeight" }, // 4134603818
		{ &Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_GetBaseLayerSlotWeigth, "GetBaseLayerSlotWeigth" }, // 761740854
		{ &Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_GetFootsIK_Alpha, "GetFootsIK_Alpha" }, // 1538208076
		{ &Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SetAimAtEnemyPropertiesC, "SetAimAtEnemyPropertiesC" }, // 303397188
		{ &Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SetAlphaForNearAttackingC, "SetAlphaForNearAttackingC" }, // 3745628876
		{ &Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SetCorrectedIsCollideValueC, "SetCorrectedIsCollideValueC" }, // 2077905856
		{ &Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_SingleFootStepDetectionC, "SingleFootStepDetectionC" }, // 642798310
		{ &Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_UpdatePerFrameOnTick, "UpdatePerFrameOnTick" }, // 1620718487
		{ &Z_Construct_UFunction_UAGLS_AI_ZombieAnimInstCore_UpdateValuesFromCharacterC, "UpdateValuesFromCharacterC" }, // 900584331
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAGLS_AI_ZombieAnimInstCore>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore_Statics

// ********** Begin Class UAGLS_AI_ZombieAnimInstCore Property Definitions *************************
void Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore_Statics::NewProp_UseCollideDatabasesForCharact_SetBit(void* Obj)
{
	((UAGLS_AI_ZombieAnimInstCore*)Obj)->UseCollideDatabasesForCharact = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore_Statics::NewProp_UseCollideDatabasesForCharact = { "UseCollideDatabasesForCharact", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAGLS_AI_ZombieAnimInstCore), &Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore_Statics::NewProp_UseCollideDatabasesForCharact_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseCollideDatabasesForCharact_MetaData), NewProp_UseCollideDatabasesForCharact_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore_Statics::NewProp_CollisionObject_Inner = { "CollisionObject", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(0, nullptr) }; // 2482564233
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore_Statics::NewProp_CollisionObject = { "CollisionObject", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_ZombieAnimInstCore, CollisionObject), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionObject_MetaData), NewProp_CollisionObject_MetaData) }; // 2482564233
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore_Statics::NewProp_FootStepSoundClasses_Inner = { "FootStepSoundClasses", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore_Statics::NewProp_FootStepSoundClasses = { "FootStepSoundClasses", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_ZombieAnimInstCore, FootStepSoundClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FootStepSoundClasses_MetaData), NewProp_FootStepSoundClasses_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore_Statics::NewProp_BlendProfile_SlowHead = { "BlendProfile_SlowHead", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_ZombieAnimInstCore, BlendProfile_SlowHead), Z_Construct_UClass_UBlendProfile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendProfile_SlowHead_MetaData), NewProp_BlendProfile_SlowHead_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore_Statics::NewProp_BlendProfile_FastFoots = { "BlendProfile_FastFoots", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_ZombieAnimInstCore, BlendProfile_FastFoots), Z_Construct_UClass_UBlendProfile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendProfile_FastFoots_MetaData), NewProp_BlendProfile_FastFoots_MetaData) };
void Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore_Statics::NewProp_PrevCapsuleColliding_SetBit(void* Obj)
{
	((UAGLS_AI_ZombieAnimInstCore*)Obj)->PrevCapsuleColliding = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore_Statics::NewProp_PrevCapsuleColliding = { "PrevCapsuleColliding", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAGLS_AI_ZombieAnimInstCore), &Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore_Statics::NewProp_PrevCapsuleColliding_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrevCapsuleColliding_MetaData), NewProp_PrevCapsuleColliding_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore_Statics::NewProp_TraversalInteraction = { "TraversalInteraction", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_ZombieAnimInstCore, TraversalInteraction), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraversalInteraction_MetaData), NewProp_TraversalInteraction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore_Statics::NewProp_PrevDetectedEnemyTime = { "PrevDetectedEnemyTime", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_ZombieAnimInstCore, PrevDetectedEnemyTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrevDetectedEnemyTime_MetaData), NewProp_PrevDetectedEnemyTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore_Statics::NewProp_RandomJiggleAlpha = { "RandomJiggleAlpha", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_ZombieAnimInstCore, RandomJiggleAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomJiggleAlpha_MetaData), NewProp_RandomJiggleAlpha_MetaData) };
void Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore_Statics::NewProp_PlayBumpReaction_SetBit(void* Obj)
{
	((UAGLS_AI_ZombieAnimInstCore*)Obj)->PlayBumpReaction = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore_Statics::NewProp_PlayBumpReaction = { "PlayBumpReaction", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAGLS_AI_ZombieAnimInstCore), &Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore_Statics::NewProp_PlayBumpReaction_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayBumpReaction_MetaData), NewProp_PlayBumpReaction_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore_Statics::NewProp_BumpReactionAnimData = { "BumpReactionAnimData", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_ZombieAnimInstCore, BumpReactionAnimData), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BumpReactionAnimData_MetaData), NewProp_BumpReactionAnimData_MetaData) };
void Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore_Statics::NewProp_StartedTraversalAction_SetBit(void* Obj)
{
	((UAGLS_AI_ZombieAnimInstCore*)Obj)->StartedTraversalAction = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore_Statics::NewProp_StartedTraversalAction = { "StartedTraversalAction", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAGLS_AI_ZombieAnimInstCore), &Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore_Statics::NewProp_StartedTraversalAction_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartedTraversalAction_MetaData), NewProp_StartedTraversalAction_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore_Statics::NewProp_PrevFootLocation_L = { "PrevFootLocation_L", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_ZombieAnimInstCore, PrevFootLocation_L), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrevFootLocation_L_MetaData), NewProp_PrevFootLocation_L_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore_Statics::NewProp_PrevFootLocation_R = { "PrevFootLocation_R", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_ZombieAnimInstCore, PrevFootLocation_R), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrevFootLocation_R_MetaData), NewProp_PrevFootLocation_R_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore_Statics::NewProp_FootPlantedTime_L = { "FootPlantedTime_L", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_ZombieAnimInstCore, FootPlantedTime_L), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FootPlantedTime_L_MetaData), NewProp_FootPlantedTime_L_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore_Statics::NewProp_FootPlantedTime_R = { "FootPlantedTime_R", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_ZombieAnimInstCore, FootPlantedTime_R), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FootPlantedTime_R_MetaData), NewProp_FootPlantedTime_R_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore_Statics::NewProp_LookAtEnemyAlpha = { "LookAtEnemyAlpha", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_ZombieAnimInstCore, LookAtEnemyAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAtEnemyAlpha_MetaData), NewProp_LookAtEnemyAlpha_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore_Statics::NewProp_LookingSweepTime = { "LookingSweepTime", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_ZombieAnimInstCore, LookingSweepTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookingSweepTime_MetaData), NewProp_LookingSweepTime_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore_Statics::NewProp_LookAtEnemyLocation = { "LookAtEnemyLocation", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_ZombieAnimInstCore, LookAtEnemyLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAtEnemyLocation_MetaData), NewProp_LookAtEnemyLocation_MetaData) };
void Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore_Statics::NewProp_StartedAttackSeq_SetBit(void* Obj)
{
	((UAGLS_AI_ZombieAnimInstCore*)Obj)->StartedAttackSeq = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore_Statics::NewProp_StartedAttackSeq = { "StartedAttackSeq", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAGLS_AI_ZombieAnimInstCore), &Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore_Statics::NewProp_StartedAttackSeq_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartedAttackSeq_MetaData), NewProp_StartedAttackSeq_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore_Statics::NewProp_NearEnemyAttackingAlpha = { "NearEnemyAttackingAlpha", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_ZombieAnimInstCore, NearEnemyAttackingAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NearEnemyAttackingAlpha_MetaData), NewProp_NearEnemyAttackingAlpha_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore_Statics::NewProp_UseCollideDatabasesForCharact,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore_Statics::NewProp_CollisionObject_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore_Statics::NewProp_CollisionObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore_Statics::NewProp_FootStepSoundClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore_Statics::NewProp_FootStepSoundClasses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore_Statics::NewProp_BlendProfile_SlowHead,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore_Statics::NewProp_BlendProfile_FastFoots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore_Statics::NewProp_PrevCapsuleColliding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore_Statics::NewProp_TraversalInteraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore_Statics::NewProp_PrevDetectedEnemyTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore_Statics::NewProp_RandomJiggleAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore_Statics::NewProp_PlayBumpReaction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore_Statics::NewProp_BumpReactionAnimData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore_Statics::NewProp_StartedTraversalAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore_Statics::NewProp_PrevFootLocation_L,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore_Statics::NewProp_PrevFootLocation_R,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore_Statics::NewProp_FootPlantedTime_L,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore_Statics::NewProp_FootPlantedTime_R,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore_Statics::NewProp_LookAtEnemyAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore_Statics::NewProp_LookingSweepTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore_Statics::NewProp_LookAtEnemyLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore_Statics::NewProp_StartedAttackSeq,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore_Statics::NewProp_NearEnemyAttackingAlpha,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore_Statics::PropPointers) < 2048);
// ********** End Class UAGLS_AI_ZombieAnimInstCore Property Definitions ***************************
UObject* (*const Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAGLS_AI_AnimInstanceBase,
	(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore_Statics::ClassParams = {
	&UAGLS_AI_ZombieAnimInstCore::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore_Statics::Class_MetaDataParams), Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore_Statics::Class_MetaDataParams)
};
void UAGLS_AI_ZombieAnimInstCore::StaticRegisterNativesUAGLS_AI_ZombieAnimInstCore()
{
	UClass* Class = UAGLS_AI_ZombieAnimInstCore::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore_Statics::Funcs));
}
UClass* Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore()
{
	if (!Z_Registration_Info_UClass_UAGLS_AI_ZombieAnimInstCore.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAGLS_AI_ZombieAnimInstCore.OuterSingleton, Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAGLS_AI_ZombieAnimInstCore.OuterSingleton;
}
UAGLS_AI_ZombieAnimInstCore::UAGLS_AI_ZombieAnimInstCore(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAGLS_AI_ZombieAnimInstCore);
UAGLS_AI_ZombieAnimInstCore::~UAGLS_AI_ZombieAnimInstCore() {}
// ********** End Class UAGLS_AI_ZombieAnimInstCore ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UE5_7_AGLS_ProgramingCpp_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AI_ZombieAnimInstCore_h__Script_HelpfulFunctions_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore, UAGLS_AI_ZombieAnimInstCore::StaticClass, TEXT("UAGLS_AI_ZombieAnimInstCore"), &Z_Registration_Info_UClass_UAGLS_AI_ZombieAnimInstCore, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAGLS_AI_ZombieAnimInstCore), 111472013U) },
	};
}; // Z_CompiledInDeferFile_FID_Unreal_Projects_UE5_7_AGLS_ProgramingCpp_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AI_ZombieAnimInstCore_h__Script_HelpfulFunctions_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UE5_7_AGLS_ProgramingCpp_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AI_ZombieAnimInstCore_h__Script_HelpfulFunctions_3630289700{
	TEXT("/Script/HelpfulFunctions"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UE5_7_AGLS_ProgramingCpp_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AI_ZombieAnimInstCore_h__Script_HelpfulFunctions_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UE5_7_AGLS_ProgramingCpp_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AI_ZombieAnimInstCore_h__Script_HelpfulFunctions_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
