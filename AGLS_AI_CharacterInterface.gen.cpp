// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AGLS_AI_CharacterInterface.h"
#include "Engine/HitResult.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAGLS_AI_CharacterInterface() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMovementMode();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UAGLS_AI_CharacterInterface();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UAGLS_AI_CharacterInterface_NoRegister();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_AGLS_LOD_State();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_CALS_Gait();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_CALS_GroundedMoveMode();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_CALS_MovementAction();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_CALS_MovementState();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_CALS_OverlayState();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_CALS_RotationMode();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_CALS_Stance();
UPackage* Z_Construct_UPackage__Script_HelpfulFunctions();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UAGLS_AI_CharacterInterface Function BPI_AI_AddRemove_GameplayTagInfo 
struct AGLS_AI_CharacterInterface_eventBPI_AI_AddRemove_GameplayTagInfo_Parms
{
	FGameplayTag NewTagToAdd;
	bool RemoveMode;
	bool ReturnUpdated;
};
void IAGLS_AI_CharacterInterface::BPI_AI_AddRemove_GameplayTagInfo(FGameplayTag NewTagToAdd, bool RemoveMode, bool& ReturnUpdated)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_AI_AddRemove_GameplayTagInfo instead.");
}
static FName NAME_UAGLS_AI_CharacterInterface_BPI_AI_AddRemove_GameplayTagInfo = FName(TEXT("BPI_AI_AddRemove_GameplayTagInfo"));
void IAGLS_AI_CharacterInterface::Execute_BPI_AI_AddRemove_GameplayTagInfo(UObject* O, FGameplayTag NewTagToAdd, bool RemoveMode, bool& ReturnUpdated)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UAGLS_AI_CharacterInterface::StaticClass()));
	AGLS_AI_CharacterInterface_eventBPI_AI_AddRemove_GameplayTagInfo_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UAGLS_AI_CharacterInterface_BPI_AI_AddRemove_GameplayTagInfo);
	if (Func)
	{
		Parms.NewTagToAdd=std::move(NewTagToAdd);
		Parms.RemoveMode=std::move(RemoveMode);
		Parms.ReturnUpdated=std::move(ReturnUpdated);
		O->ProcessEvent(Func, &Parms);
		ReturnUpdated=std::move(Parms.ReturnUpdated);
	}
	else if (auto I = (IAGLS_AI_CharacterInterface*)(O->GetNativeInterfaceAddress(UAGLS_AI_CharacterInterface::StaticClass())))
	{
		I->BPI_AI_AddRemove_GameplayTagInfo_Implementation(NewTagToAdd,RemoveMode,ReturnUpdated);
	}
}
struct Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_AddRemove_GameplayTagInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BPI AI Character|Set" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\xe2\x96\x81\xe2\x96\x81\xe2\x96\x81\xe2\x96\x81\xe2\x96\x81\xe2\x96\x81\xe2\x96\x81\xe2\x96\x81\xe2\x96\x81\xe2\x96\x81\xe2\x96\x81\xe2\x96\x81\xe2\x96\x81\xe2\x96\x81\xe2\x96\x81\xe2\x96\x81\xe2\x96\x81\xe2\x96\x81\n\xe2\x96\x8e \xf0\x9d\x90\x86\xf0\x9d\x90\x80\xf0\x9d\x90\x8c\xf0\x9d\x90\x84\xf0\x9d\x90\x8f\xf0\x9d\x90\x8b\xf0\x9d\x90\x84\xf0\x9d\x90\x98 \xf0\x9d\x90\x93\xf0\x9d\x90\x80\xf0\x9d\x90\x86\xf0\x9d\x90\x92  \xe2\x96\x8e\n\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\nA function for adding and removing tags from GameplayTagsContainer. The condition for making changes is that the target object has \ncode implementing the logic and a variable storing the tags.\n*/" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_AI_CharacterInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x96\x81\xe2\x96\x81\xe2\x96\x81\xe2\x96\x81\xe2\x96\x81\xe2\x96\x81\xe2\x96\x81\xe2\x96\x81\xe2\x96\x81\xe2\x96\x81\xe2\x96\x81\xe2\x96\x81\xe2\x96\x81\xe2\x96\x81\xe2\x96\x81\xe2\x96\x81\xe2\x96\x81\xe2\x96\x81\n\xe2\x96\x8e \xf0\x9d\x90\x86\xf0\x9d\x90\x80\xf0\x9d\x90\x8c\xf0\x9d\x90\x84\xf0\x9d\x90\x8f\xf0\x9d\x90\x8b\xf0\x9d\x90\x84\xf0\x9d\x90\x98 \xf0\x9d\x90\x93\xf0\x9d\x90\x80\xf0\x9d\x90\x86\xf0\x9d\x90\x92  \xe2\x96\x8e\n\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\nA function for adding and removing tags from GameplayTagsContainer. The condition for making changes is that the target object has\ncode implementing the logic and a variable storing the tags." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function BPI_AI_AddRemove_GameplayTagInfo constinit property declarations ******
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewTagToAdd;
	static void NewProp_RemoveMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RemoveMode;
	static void NewProp_ReturnUpdated_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnUpdated;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BPI_AI_AddRemove_GameplayTagInfo constinit property declarations ********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BPI_AI_AddRemove_GameplayTagInfo Property Definitions *****************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_AddRemove_GameplayTagInfo_Statics::NewProp_NewTagToAdd = { "NewTagToAdd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_AddRemove_GameplayTagInfo_Parms, NewTagToAdd), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
void Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_AddRemove_GameplayTagInfo_Statics::NewProp_RemoveMode_SetBit(void* Obj)
{
	((AGLS_AI_CharacterInterface_eventBPI_AI_AddRemove_GameplayTagInfo_Parms*)Obj)->RemoveMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_AddRemove_GameplayTagInfo_Statics::NewProp_RemoveMode = { "RemoveMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_AddRemove_GameplayTagInfo_Parms), &Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_AddRemove_GameplayTagInfo_Statics::NewProp_RemoveMode_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_AddRemove_GameplayTagInfo_Statics::NewProp_ReturnUpdated_SetBit(void* Obj)
{
	((AGLS_AI_CharacterInterface_eventBPI_AI_AddRemove_GameplayTagInfo_Parms*)Obj)->ReturnUpdated = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_AddRemove_GameplayTagInfo_Statics::NewProp_ReturnUpdated = { "ReturnUpdated", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_AddRemove_GameplayTagInfo_Parms), &Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_AddRemove_GameplayTagInfo_Statics::NewProp_ReturnUpdated_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_AddRemove_GameplayTagInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_AddRemove_GameplayTagInfo_Statics::NewProp_NewTagToAdd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_AddRemove_GameplayTagInfo_Statics::NewProp_RemoveMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_AddRemove_GameplayTagInfo_Statics::NewProp_ReturnUpdated,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_AddRemove_GameplayTagInfo_Statics::PropPointers) < 2048);
// ********** End Function BPI_AI_AddRemove_GameplayTagInfo Property Definitions *******************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_AddRemove_GameplayTagInfo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_CharacterInterface, nullptr, "BPI_AI_AddRemove_GameplayTagInfo", 	Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_AddRemove_GameplayTagInfo_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_AddRemove_GameplayTagInfo_Statics::PropPointers), 
sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_AddRemove_GameplayTagInfo_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_AddRemove_GameplayTagInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_AddRemove_GameplayTagInfo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_AddRemove_GameplayTagInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_AddRemove_GameplayTagInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_AddRemove_GameplayTagInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAGLS_AI_CharacterInterface::execBPI_AI_AddRemove_GameplayTagInfo)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_NewTagToAdd);
	P_GET_UBOOL(Z_Param_RemoveMode);
	P_GET_UBOOL_REF(Z_Param_Out_ReturnUpdated);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_AI_AddRemove_GameplayTagInfo_Implementation(Z_Param_NewTagToAdd,Z_Param_RemoveMode,Z_Param_Out_ReturnUpdated);
	P_NATIVE_END;
}
// ********** End Interface UAGLS_AI_CharacterInterface Function BPI_AI_AddRemove_GameplayTagInfo **

// ********** Begin Interface UAGLS_AI_CharacterInterface Function BPI_AI_BumpReactTrigger *********
struct AGLS_AI_CharacterInterface_eventBPI_AI_BumpReactTrigger_Parms
{
	ACharacter* From;
	FHitResult HitResult;
};
void IAGLS_AI_CharacterInterface::BPI_AI_BumpReactTrigger(ACharacter* From, FHitResult HitResult)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_AI_BumpReactTrigger instead.");
}
static FName NAME_UAGLS_AI_CharacterInterface_BPI_AI_BumpReactTrigger = FName(TEXT("BPI_AI_BumpReactTrigger"));
void IAGLS_AI_CharacterInterface::Execute_BPI_AI_BumpReactTrigger(UObject* O, ACharacter* From, FHitResult HitResult)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UAGLS_AI_CharacterInterface::StaticClass()));
	AGLS_AI_CharacterInterface_eventBPI_AI_BumpReactTrigger_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UAGLS_AI_CharacterInterface_BPI_AI_BumpReactTrigger);
	if (Func)
	{
		Parms.From=std::move(From);
		Parms.HitResult=std::move(HitResult);
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IAGLS_AI_CharacterInterface*)(O->GetNativeInterfaceAddress(UAGLS_AI_CharacterInterface::StaticClass())))
	{
		I->BPI_AI_BumpReactTrigger_Implementation(From,HitResult);
	}
}
struct Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_BumpReactTrigger_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BPI AI Character|Set" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*ENG:\nFunction intended for constructing a system based on reacting to bumps by other character instances. It can be called when the OnHit delegate detects that the capsule \nhas been hit. For example, this function is used by 'AGLS_ZombieCharacter_Base' to activate root motion animations showing the reaction to taps, stumbles or pushes.\n\nPL:\nFunkcja przeznaczona dla konstrukcji systemu polegaj\xc4\x85""cego na reagowaniu na popchni\xc4\x99""cia przez inne instancje charakter\xc3\xb3w. Mo\xc5\xbc""e by\xc4\x87 wywo\xc5\x82ywana w momencie kiedy delegate \nOnHit wykryje \xc5\xbc""e kapsu\xc5\x82""a zosta\xc5\x82""a uderzona. Przyk\xc5\x82""adowo funkcja ta u\xc5\xbcywana jest przez 'AGLS_ZombieCharacter_Base' do aktywowania animacji root motion przedstawiaj\xc4\x85""cych \nreakcj\xc4\x99 na stukni\xc4\x99""cia, potkni\xc4\x99""cia lub popchni\xc4\x99""cia.\n*/" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_AI_CharacterInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ENG:\nFunction intended for constructing a system based on reacting to bumps by other character instances. It can be called when the OnHit delegate detects that the capsule\nhas been hit. For example, this function is used by 'AGLS_ZombieCharacter_Base' to activate root motion animations showing the reaction to taps, stumbles or pushes.\n\nPL:\nFunkcja przeznaczona dla konstrukcji systemu polegaj\xc4\x85""cego na reagowaniu na popchni\xc4\x99""cia przez inne instancje charakter\xc3\xb3w. Mo\xc5\xbc""e by\xc4\x87 wywo\xc5\x82ywana w momencie kiedy delegate\nOnHit wykryje \xc5\xbc""e kapsu\xc5\x82""a zosta\xc5\x82""a uderzona. Przyk\xc5\x82""adowo funkcja ta u\xc5\xbcywana jest przez 'AGLS_ZombieCharacter_Base' do aktywowania animacji root motion przedstawiaj\xc4\x85""cych\nreakcj\xc4\x99 na stukni\xc4\x99""cia, potkni\xc4\x99""cia lub popchni\xc4\x99""cia." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function BPI_AI_BumpReactTrigger constinit property declarations ***************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_From;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BPI_AI_BumpReactTrigger constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BPI_AI_BumpReactTrigger Property Definitions **************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_BumpReactTrigger_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_BumpReactTrigger_Parms, From), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_BumpReactTrigger_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_BumpReactTrigger_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 222120718
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_BumpReactTrigger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_BumpReactTrigger_Statics::NewProp_From,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_BumpReactTrigger_Statics::NewProp_HitResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_BumpReactTrigger_Statics::PropPointers) < 2048);
// ********** End Function BPI_AI_BumpReactTrigger Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_BumpReactTrigger_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_CharacterInterface, nullptr, "BPI_AI_BumpReactTrigger", 	Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_BumpReactTrigger_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_BumpReactTrigger_Statics::PropPointers), 
sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_BumpReactTrigger_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_BumpReactTrigger_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_BumpReactTrigger_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_BumpReactTrigger_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_BumpReactTrigger()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_BumpReactTrigger_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAGLS_AI_CharacterInterface::execBPI_AI_BumpReactTrigger)
{
	P_GET_OBJECT(ACharacter,Z_Param_From);
	P_GET_STRUCT(FHitResult,Z_Param_HitResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_AI_BumpReactTrigger_Implementation(Z_Param_From,Z_Param_HitResult);
	P_NATIVE_END;
}
// ********** End Interface UAGLS_AI_CharacterInterface Function BPI_AI_BumpReactTrigger ***********

// ********** Begin Interface UAGLS_AI_CharacterInterface Function BPI_AI_CanPlayMeleeCombatHitReact 
struct AGLS_AI_CharacterInterface_eventBPI_AI_CanPlayMeleeCombatHitReact_Parms
{
	bool ReturnCanPlay;
	ACharacter* Attacker;
};
void IAGLS_AI_CharacterInterface::BPI_AI_CanPlayMeleeCombatHitReact(bool& ReturnCanPlay, ACharacter* Attacker)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_AI_CanPlayMeleeCombatHitReact instead.");
}
static FName NAME_UAGLS_AI_CharacterInterface_BPI_AI_CanPlayMeleeCombatHitReact = FName(TEXT("BPI_AI_CanPlayMeleeCombatHitReact"));
void IAGLS_AI_CharacterInterface::Execute_BPI_AI_CanPlayMeleeCombatHitReact(UObject* O, bool& ReturnCanPlay, ACharacter* Attacker)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UAGLS_AI_CharacterInterface::StaticClass()));
	AGLS_AI_CharacterInterface_eventBPI_AI_CanPlayMeleeCombatHitReact_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UAGLS_AI_CharacterInterface_BPI_AI_CanPlayMeleeCombatHitReact);
	if (Func)
	{
		Parms.ReturnCanPlay=std::move(ReturnCanPlay);
		Parms.Attacker=std::move(Attacker);
		O->ProcessEvent(Func, &Parms);
		ReturnCanPlay=std::move(Parms.ReturnCanPlay);
	}
	else if (auto I = (IAGLS_AI_CharacterInterface*)(O->GetNativeInterfaceAddress(UAGLS_AI_CharacterInterface::StaticClass())))
	{
		I->BPI_AI_CanPlayMeleeCombatHitReact_Implementation(ReturnCanPlay,Attacker);
	}
}
struct Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_CanPlayMeleeCombatHitReact_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BPI AI Character|Get" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\n\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88 \xf0\x9d\x90\x8c\xf0\x9d\x90\x84\xf0\x9d\x90\x8b\xf0\x9d\x90\x84\xf0\x9d\x90\x84 \xf0\x9d\x90\x82\xf0\x9d\x90\x8e\xf0\x9d\x90\x8c\xf0\x9d\x90\x81\xf0\x9d\x90\x80\xf0\x9d\x90\x93 \xf0\x9d\x90\x92\xf0\x9d\x90\x98\xf0\x9d\x90\x92\xf0\x9d\x90\x93\xf0\x9d\x90\x84\xf0\x9d\x90\x8c \xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88 \n\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\nAGLS v1.8\n*/" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_AI_CharacterInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\n\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88 \xf0\x9d\x90\x8c\xf0\x9d\x90\x84\xf0\x9d\x90\x8b\xf0\x9d\x90\x84\xf0\x9d\x90\x84 \xf0\x9d\x90\x82\xf0\x9d\x90\x8e\xf0\x9d\x90\x8c\xf0\x9d\x90\x81\xf0\x9d\x90\x80\xf0\x9d\x90\x93 \xf0\x9d\x90\x92\xf0\x9d\x90\x98\xf0\x9d\x90\x92\xf0\x9d\x90\x93\xf0\x9d\x90\x84\xf0\x9d\x90\x8c \xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\n\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\nAGLS v1.8" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function BPI_AI_CanPlayMeleeCombatHitReact constinit property declarations *****
	static void NewProp_ReturnCanPlay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnCanPlay;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Attacker;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BPI_AI_CanPlayMeleeCombatHitReact constinit property declarations *******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BPI_AI_CanPlayMeleeCombatHitReact Property Definitions ****************
void Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_CanPlayMeleeCombatHitReact_Statics::NewProp_ReturnCanPlay_SetBit(void* Obj)
{
	((AGLS_AI_CharacterInterface_eventBPI_AI_CanPlayMeleeCombatHitReact_Parms*)Obj)->ReturnCanPlay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_CanPlayMeleeCombatHitReact_Statics::NewProp_ReturnCanPlay = { "ReturnCanPlay", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_CanPlayMeleeCombatHitReact_Parms), &Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_CanPlayMeleeCombatHitReact_Statics::NewProp_ReturnCanPlay_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_CanPlayMeleeCombatHitReact_Statics::NewProp_Attacker = { "Attacker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_CanPlayMeleeCombatHitReact_Parms, Attacker), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_CanPlayMeleeCombatHitReact_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_CanPlayMeleeCombatHitReact_Statics::NewProp_ReturnCanPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_CanPlayMeleeCombatHitReact_Statics::NewProp_Attacker,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_CanPlayMeleeCombatHitReact_Statics::PropPointers) < 2048);
// ********** End Function BPI_AI_CanPlayMeleeCombatHitReact Property Definitions ******************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_CanPlayMeleeCombatHitReact_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_CharacterInterface, nullptr, "BPI_AI_CanPlayMeleeCombatHitReact", 	Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_CanPlayMeleeCombatHitReact_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_CanPlayMeleeCombatHitReact_Statics::PropPointers), 
sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_CanPlayMeleeCombatHitReact_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_CanPlayMeleeCombatHitReact_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_CanPlayMeleeCombatHitReact_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_CanPlayMeleeCombatHitReact_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_CanPlayMeleeCombatHitReact()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_CanPlayMeleeCombatHitReact_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAGLS_AI_CharacterInterface::execBPI_AI_CanPlayMeleeCombatHitReact)
{
	P_GET_UBOOL_REF(Z_Param_Out_ReturnCanPlay);
	P_GET_OBJECT(ACharacter,Z_Param_Attacker);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_AI_CanPlayMeleeCombatHitReact_Implementation(Z_Param_Out_ReturnCanPlay,Z_Param_Attacker);
	P_NATIVE_END;
}
// ********** End Interface UAGLS_AI_CharacterInterface Function BPI_AI_CanPlayMeleeCombatHitReact *

// ********** Begin Interface UAGLS_AI_CharacterInterface Function BPI_AI_CrouchOrUncrouch *********
struct AGLS_AI_CharacterInterface_eventBPI_AI_CrouchOrUncrouch_Parms
{
	CALS_Stance Stance;
};
void IAGLS_AI_CharacterInterface::BPI_AI_CrouchOrUncrouch(CALS_Stance Stance)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_AI_CrouchOrUncrouch instead.");
}
static FName NAME_UAGLS_AI_CharacterInterface_BPI_AI_CrouchOrUncrouch = FName(TEXT("BPI_AI_CrouchOrUncrouch"));
void IAGLS_AI_CharacterInterface::Execute_BPI_AI_CrouchOrUncrouch(UObject* O, CALS_Stance Stance)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UAGLS_AI_CharacterInterface::StaticClass()));
	AGLS_AI_CharacterInterface_eventBPI_AI_CrouchOrUncrouch_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UAGLS_AI_CharacterInterface_BPI_AI_CrouchOrUncrouch);
	if (Func)
	{
		Parms.Stance=std::move(Stance);
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IAGLS_AI_CharacterInterface*)(O->GetNativeInterfaceAddress(UAGLS_AI_CharacterInterface::StaticClass())))
	{
		I->BPI_AI_CrouchOrUncrouch_Implementation(Stance);
	}
}
struct Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_CrouchOrUncrouch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BPI AI Character|Set" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Standard Crouch() or UnCrouch() call via interface function*/" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_AI_CharacterInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Standard Crouch() or UnCrouch() call via interface function" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function BPI_AI_CrouchOrUncrouch constinit property declarations ***************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Stance_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Stance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BPI_AI_CrouchOrUncrouch constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BPI_AI_CrouchOrUncrouch Property Definitions **************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_CrouchOrUncrouch_Statics::NewProp_Stance_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_CrouchOrUncrouch_Statics::NewProp_Stance = { "Stance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_CrouchOrUncrouch_Parms, Stance), Z_Construct_UEnum_HelpfulFunctions_CALS_Stance, METADATA_PARAMS(0, nullptr) }; // 11883395
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_CrouchOrUncrouch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_CrouchOrUncrouch_Statics::NewProp_Stance_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_CrouchOrUncrouch_Statics::NewProp_Stance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_CrouchOrUncrouch_Statics::PropPointers) < 2048);
// ********** End Function BPI_AI_CrouchOrUncrouch Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_CrouchOrUncrouch_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_CharacterInterface, nullptr, "BPI_AI_CrouchOrUncrouch", 	Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_CrouchOrUncrouch_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_CrouchOrUncrouch_Statics::PropPointers), 
sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_CrouchOrUncrouch_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_CrouchOrUncrouch_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_CrouchOrUncrouch_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_CrouchOrUncrouch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_CrouchOrUncrouch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_CrouchOrUncrouch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAGLS_AI_CharacterInterface::execBPI_AI_CrouchOrUncrouch)
{
	P_GET_ENUM(CALS_Stance,Z_Param_Stance);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_AI_CrouchOrUncrouch_Implementation(CALS_Stance(Z_Param_Stance));
	P_NATIVE_END;
}
// ********** End Interface UAGLS_AI_CharacterInterface Function BPI_AI_CrouchOrUncrouch ***********

// ********** Begin Interface UAGLS_AI_CharacterInterface Function BPI_AI_DoWhenIsMarkedAsOpponent *
struct AGLS_AI_CharacterInterface_eventBPI_AI_DoWhenIsMarkedAsOpponent_Parms
{
	ACharacter* Attacker;
	bool bMarked;
};
void IAGLS_AI_CharacterInterface::BPI_AI_DoWhenIsMarkedAsOpponent(ACharacter* Attacker, bool bMarked)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_AI_DoWhenIsMarkedAsOpponent instead.");
}
static FName NAME_UAGLS_AI_CharacterInterface_BPI_AI_DoWhenIsMarkedAsOpponent = FName(TEXT("BPI_AI_DoWhenIsMarkedAsOpponent"));
void IAGLS_AI_CharacterInterface::Execute_BPI_AI_DoWhenIsMarkedAsOpponent(UObject* O, ACharacter* Attacker, bool bMarked)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UAGLS_AI_CharacterInterface::StaticClass()));
	AGLS_AI_CharacterInterface_eventBPI_AI_DoWhenIsMarkedAsOpponent_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UAGLS_AI_CharacterInterface_BPI_AI_DoWhenIsMarkedAsOpponent);
	if (Func)
	{
		Parms.Attacker=std::move(Attacker);
		Parms.bMarked=std::move(bMarked);
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IAGLS_AI_CharacterInterface*)(O->GetNativeInterfaceAddress(UAGLS_AI_CharacterInterface::StaticClass())))
	{
		I->BPI_AI_DoWhenIsMarkedAsOpponent_Implementation(Attacker,bMarked);
	}
}
struct Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_DoWhenIsMarkedAsOpponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BPI AI Character|Set" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\n\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88 \xf0\x9d\x90\x8c\xf0\x9d\x90\x84\xf0\x9d\x90\x8b\xf0\x9d\x90\x84\xf0\x9d\x90\x84 \xf0\x9d\x90\x82\xf0\x9d\x90\x8e\xf0\x9d\x90\x8c\xf0\x9d\x90\x81\xf0\x9d\x90\x80\xf0\x9d\x90\x93 \xf0\x9d\x90\x92\xf0\x9d\x90\x98\xf0\x9d\x90\x92\xf0\x9d\x90\x93\xf0\x9d\x90\x84\xf0\x9d\x90\x8c \xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88 AGLS v1.8\n\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\nENG:\nThis can be used to set additional properties when a UCharacter instance has been marked by the Attacker as an opponent to attack. \nThis function is related to MeleeCombat and is typically called by the MeleeCombatComponent.\n\nPL:\nMo\xc5\xbc""e pos\xc5\x82u\xc5\xbcy\xc4\x87 do ustawienia dodatkowych w\xc5\x82""a\xc5\x9b""ciwo\xc5\x9b""ci podczas kiedy istancja UCharacter zosta\xc5\x82""a oznaczona przez Attackera jako przeciwnik w \nkt\xc3\xb3rego stron\xc4\x99 b\xc4\x99""dzie kierowany atak. Funkcja jest zwi\xc4\x85zana z MeleeCombat i zazwyczaj wywo\xc5\x82ywana jest przez MeleeCombatComponent\n*/" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_AI_CharacterInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\n\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88 \xf0\x9d\x90\x8c\xf0\x9d\x90\x84\xf0\x9d\x90\x8b\xf0\x9d\x90\x84\xf0\x9d\x90\x84 \xf0\x9d\x90\x82\xf0\x9d\x90\x8e\xf0\x9d\x90\x8c\xf0\x9d\x90\x81\xf0\x9d\x90\x80\xf0\x9d\x90\x93 \xf0\x9d\x90\x92\xf0\x9d\x90\x98\xf0\x9d\x90\x92\xf0\x9d\x90\x93\xf0\x9d\x90\x84\xf0\x9d\x90\x8c \xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88 AGLS v1.8\n\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\nENG:\nThis can be used to set additional properties when a UCharacter instance has been marked by the Attacker as an opponent to attack.\nThis function is related to MeleeCombat and is typically called by the MeleeCombatComponent.\n\nPL:\nMo\xc5\xbc""e pos\xc5\x82u\xc5\xbcy\xc4\x87 do ustawienia dodatkowych w\xc5\x82""a\xc5\x9b""ciwo\xc5\x9b""ci podczas kiedy istancja UCharacter zosta\xc5\x82""a oznaczona przez Attackera jako przeciwnik w\nkt\xc3\xb3rego stron\xc4\x99 b\xc4\x99""dzie kierowany atak. Funkcja jest zwi\xc4\x85zana z MeleeCombat i zazwyczaj wywo\xc5\x82ywana jest przez MeleeCombatComponent" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function BPI_AI_DoWhenIsMarkedAsOpponent constinit property declarations *******
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Attacker;
	static void NewProp_bMarked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMarked;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BPI_AI_DoWhenIsMarkedAsOpponent constinit property declarations *********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BPI_AI_DoWhenIsMarkedAsOpponent Property Definitions ******************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_DoWhenIsMarkedAsOpponent_Statics::NewProp_Attacker = { "Attacker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_DoWhenIsMarkedAsOpponent_Parms, Attacker), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_DoWhenIsMarkedAsOpponent_Statics::NewProp_bMarked_SetBit(void* Obj)
{
	((AGLS_AI_CharacterInterface_eventBPI_AI_DoWhenIsMarkedAsOpponent_Parms*)Obj)->bMarked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_DoWhenIsMarkedAsOpponent_Statics::NewProp_bMarked = { "bMarked", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_DoWhenIsMarkedAsOpponent_Parms), &Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_DoWhenIsMarkedAsOpponent_Statics::NewProp_bMarked_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_DoWhenIsMarkedAsOpponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_DoWhenIsMarkedAsOpponent_Statics::NewProp_Attacker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_DoWhenIsMarkedAsOpponent_Statics::NewProp_bMarked,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_DoWhenIsMarkedAsOpponent_Statics::PropPointers) < 2048);
// ********** End Function BPI_AI_DoWhenIsMarkedAsOpponent Property Definitions ********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_DoWhenIsMarkedAsOpponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_CharacterInterface, nullptr, "BPI_AI_DoWhenIsMarkedAsOpponent", 	Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_DoWhenIsMarkedAsOpponent_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_DoWhenIsMarkedAsOpponent_Statics::PropPointers), 
sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_DoWhenIsMarkedAsOpponent_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_DoWhenIsMarkedAsOpponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_DoWhenIsMarkedAsOpponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_DoWhenIsMarkedAsOpponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_DoWhenIsMarkedAsOpponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_DoWhenIsMarkedAsOpponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAGLS_AI_CharacterInterface::execBPI_AI_DoWhenIsMarkedAsOpponent)
{
	P_GET_OBJECT(ACharacter,Z_Param_Attacker);
	P_GET_UBOOL(Z_Param_bMarked);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_AI_DoWhenIsMarkedAsOpponent_Implementation(Z_Param_Attacker,Z_Param_bMarked);
	P_NATIVE_END;
}
// ********** End Interface UAGLS_AI_CharacterInterface Function BPI_AI_DoWhenIsMarkedAsOpponent ***

// ********** Begin Interface UAGLS_AI_CharacterInterface Function BPI_AI_FinisherOrMeleeStarted ***
struct AGLS_AI_CharacterInterface_eventBPI_AI_FinisherOrMeleeStarted_Parms
{
	bool Started;
	int32 ActionIndex;
};
void IAGLS_AI_CharacterInterface::BPI_AI_FinisherOrMeleeStarted(bool Started, int32 ActionIndex)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_AI_FinisherOrMeleeStarted instead.");
}
static FName NAME_UAGLS_AI_CharacterInterface_BPI_AI_FinisherOrMeleeStarted = FName(TEXT("BPI_AI_FinisherOrMeleeStarted"));
void IAGLS_AI_CharacterInterface::Execute_BPI_AI_FinisherOrMeleeStarted(UObject* O, bool Started, int32 ActionIndex)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UAGLS_AI_CharacterInterface::StaticClass()));
	AGLS_AI_CharacterInterface_eventBPI_AI_FinisherOrMeleeStarted_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UAGLS_AI_CharacterInterface_BPI_AI_FinisherOrMeleeStarted);
	if (Func)
	{
		Parms.Started=std::move(Started);
		Parms.ActionIndex=std::move(ActionIndex);
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IAGLS_AI_CharacterInterface*)(O->GetNativeInterfaceAddress(UAGLS_AI_CharacterInterface::StaticClass())))
	{
		I->BPI_AI_FinisherOrMeleeStarted_Implementation(Started,ActionIndex);
	}
}
struct Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_FinisherOrMeleeStarted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BPI AI Character|Set" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*ENG:\nFunction usually called when the player activates the gameplay ability 'Stealth Finisher'. In such case the character that was selected as Victim can be informed about it. \nFor example when we start SF then Physic Asset should be deactivated. For this purpose we can use this interface function to make changes to SkeletalMesh for a given instance.\n\nPL:\nFunkcja zazwyczaj wywo\xc5\x82ywana w momencie kiedy gracz aktywuje gameplay ability 'Stealth Finisher'. W takim przypadku charakter kt\xc3\xb3ry zozta\xc5\x82 wybrany jako Victim mo\xc5\xbc""e zosta\xc4\x87 o tym \npoinformowany. Przyk\xc5\x82""adowo kiedy uruchamiamy SF to wtedy Physic Asset powinien by\xc4\x87 deaktywowany. W tym celu mo\xc5\xbcna u\xc5\xbcy\xc4\x87 w\xc5\x82""a\xc5\x9bnie tej funkcji interfejsu aby wprowadzi\xc4\x87 zmiany w \nSkeletalMesh dla danej instancji.*/" },
#endif
		{ "DisplayName", "BPI_AI_WhenIsVictimForFinisher" },
		{ "ModuleRelativePath", "Public/AGLS_AI_CharacterInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ENG:\nFunction usually called when the player activates the gameplay ability 'Stealth Finisher'. In such case the character that was selected as Victim can be informed about it.\nFor example when we start SF then Physic Asset should be deactivated. For this purpose we can use this interface function to make changes to SkeletalMesh for a given instance.\n\nPL:\nFunkcja zazwyczaj wywo\xc5\x82ywana w momencie kiedy gracz aktywuje gameplay ability 'Stealth Finisher'. W takim przypadku charakter kt\xc3\xb3ry zozta\xc5\x82 wybrany jako Victim mo\xc5\xbc""e zosta\xc4\x87 o tym\npoinformowany. Przyk\xc5\x82""adowo kiedy uruchamiamy SF to wtedy Physic Asset powinien by\xc4\x87 deaktywowany. W tym celu mo\xc5\xbcna u\xc5\xbcy\xc4\x87 w\xc5\x82""a\xc5\x9bnie tej funkcji interfejsu aby wprowadzi\xc4\x87 zmiany w\nSkeletalMesh dla danej instancji." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function BPI_AI_FinisherOrMeleeStarted constinit property declarations *********
	static void NewProp_Started_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Started;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ActionIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BPI_AI_FinisherOrMeleeStarted constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BPI_AI_FinisherOrMeleeStarted Property Definitions ********************
void Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_FinisherOrMeleeStarted_Statics::NewProp_Started_SetBit(void* Obj)
{
	((AGLS_AI_CharacterInterface_eventBPI_AI_FinisherOrMeleeStarted_Parms*)Obj)->Started = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_FinisherOrMeleeStarted_Statics::NewProp_Started = { "Started", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_FinisherOrMeleeStarted_Parms), &Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_FinisherOrMeleeStarted_Statics::NewProp_Started_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_FinisherOrMeleeStarted_Statics::NewProp_ActionIndex = { "ActionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_FinisherOrMeleeStarted_Parms, ActionIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_FinisherOrMeleeStarted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_FinisherOrMeleeStarted_Statics::NewProp_Started,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_FinisherOrMeleeStarted_Statics::NewProp_ActionIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_FinisherOrMeleeStarted_Statics::PropPointers) < 2048);
// ********** End Function BPI_AI_FinisherOrMeleeStarted Property Definitions **********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_FinisherOrMeleeStarted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_CharacterInterface, nullptr, "BPI_AI_FinisherOrMeleeStarted", 	Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_FinisherOrMeleeStarted_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_FinisherOrMeleeStarted_Statics::PropPointers), 
sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_FinisherOrMeleeStarted_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_FinisherOrMeleeStarted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_FinisherOrMeleeStarted_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_FinisherOrMeleeStarted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_FinisherOrMeleeStarted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_FinisherOrMeleeStarted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAGLS_AI_CharacterInterface::execBPI_AI_FinisherOrMeleeStarted)
{
	P_GET_UBOOL(Z_Param_Started);
	P_GET_PROPERTY(FIntProperty,Z_Param_ActionIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_AI_FinisherOrMeleeStarted_Implementation(Z_Param_Started,Z_Param_ActionIndex);
	P_NATIVE_END;
}
// ********** End Interface UAGLS_AI_CharacterInterface Function BPI_AI_FinisherOrMeleeStarted *****

// ********** Begin Interface UAGLS_AI_CharacterInterface Function BPI_AI_Get_CurrentActivatedTask *
struct AGLS_AI_CharacterInterface_eventBPI_AI_Get_CurrentActivatedTask_Parms
{
	UObject* Task;
};
void IAGLS_AI_CharacterInterface::BPI_AI_Get_CurrentActivatedTask(UObject* Task)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_AI_Get_CurrentActivatedTask instead.");
}
static FName NAME_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentActivatedTask = FName(TEXT("BPI_AI_Get_CurrentActivatedTask"));
void IAGLS_AI_CharacterInterface::Execute_BPI_AI_Get_CurrentActivatedTask(UObject* O, UObject* Task)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UAGLS_AI_CharacterInterface::StaticClass()));
	AGLS_AI_CharacterInterface_eventBPI_AI_Get_CurrentActivatedTask_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentActivatedTask);
	if (Func)
	{
		Parms.Task=std::move(Task);
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IAGLS_AI_CharacterInterface*)(O->GetNativeInterfaceAddress(UAGLS_AI_CharacterInterface::StaticClass())))
	{
		I->BPI_AI_Get_CurrentActivatedTask_Implementation(Task);
	}
}
struct Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentActivatedTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BPI AI Character|Get" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\nSometimes used to better integrate UCharacter with AIController. This function is often combined with \nAI-InformControllerAboutCurrentTask(GetController(), Cast<BTTask_BlueprintBase> Task)\n*/" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_AI_CharacterInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sometimes used to better integrate UCharacter with AIController. This function is often combined with\nAI-InformControllerAboutCurrentTask(GetController(), Cast<BTTask_BlueprintBase> Task)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function BPI_AI_Get_CurrentActivatedTask constinit property declarations *******
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Task;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BPI_AI_Get_CurrentActivatedTask constinit property declarations *********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BPI_AI_Get_CurrentActivatedTask Property Definitions ******************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentActivatedTask_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_Get_CurrentActivatedTask_Parms, Task), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentActivatedTask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentActivatedTask_Statics::NewProp_Task,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentActivatedTask_Statics::PropPointers) < 2048);
// ********** End Function BPI_AI_Get_CurrentActivatedTask Property Definitions ********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentActivatedTask_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_CharacterInterface, nullptr, "BPI_AI_Get_CurrentActivatedTask", 	Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentActivatedTask_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentActivatedTask_Statics::PropPointers), 
sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Get_CurrentActivatedTask_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentActivatedTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentActivatedTask_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Get_CurrentActivatedTask_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentActivatedTask()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentActivatedTask_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAGLS_AI_CharacterInterface::execBPI_AI_Get_CurrentActivatedTask)
{
	P_GET_OBJECT(UObject,Z_Param_Task);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_AI_Get_CurrentActivatedTask_Implementation(Z_Param_Task);
	P_NATIVE_END;
}
// ********** End Interface UAGLS_AI_CharacterInterface Function BPI_AI_Get_CurrentActivatedTask ***

// ********** Begin Interface UAGLS_AI_CharacterInterface Function BPI_AI_Get_CurrentStates ********
struct AGLS_AI_CharacterInterface_eventBPI_AI_Get_CurrentStates_Parms
{
	TEnumAsByte<EMovementMode> PawnMovementMode;
	CALS_MovementState MovementState;
	CALS_MovementState PrevMovementState;
	CALS_MovementAction MovementAction;
	CALS_RotationMode RotationMode;
	CALS_Gait ActualGait;
	CALS_Stance ActualStance;
	CALS_OverlayState OverlayState;
	CALS_GroundedMoveMode GroundedMoveMode;
};
void IAGLS_AI_CharacterInterface::BPI_AI_Get_CurrentStates(TEnumAsByte<EMovementMode>& PawnMovementMode, CALS_MovementState& MovementState, CALS_MovementState& PrevMovementState, CALS_MovementAction& MovementAction, CALS_RotationMode& RotationMode, CALS_Gait& ActualGait, CALS_Stance& ActualStance, CALS_OverlayState& OverlayState, CALS_GroundedMoveMode& GroundedMoveMode)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_AI_Get_CurrentStates instead.");
}
static FName NAME_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates = FName(TEXT("BPI_AI_Get_CurrentStates"));
void IAGLS_AI_CharacterInterface::Execute_BPI_AI_Get_CurrentStates(UObject* O, TEnumAsByte<EMovementMode>& PawnMovementMode, CALS_MovementState& MovementState, CALS_MovementState& PrevMovementState, CALS_MovementAction& MovementAction, CALS_RotationMode& RotationMode, CALS_Gait& ActualGait, CALS_Stance& ActualStance, CALS_OverlayState& OverlayState, CALS_GroundedMoveMode& GroundedMoveMode)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UAGLS_AI_CharacterInterface::StaticClass()));
	AGLS_AI_CharacterInterface_eventBPI_AI_Get_CurrentStates_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates);
	if (Func)
	{
		Parms.PawnMovementMode=std::move(PawnMovementMode);
		Parms.MovementState=std::move(MovementState);
		Parms.PrevMovementState=std::move(PrevMovementState);
		Parms.MovementAction=std::move(MovementAction);
		Parms.RotationMode=std::move(RotationMode);
		Parms.ActualGait=std::move(ActualGait);
		Parms.ActualStance=std::move(ActualStance);
		Parms.OverlayState=std::move(OverlayState);
		Parms.GroundedMoveMode=std::move(GroundedMoveMode);
		O->ProcessEvent(Func, &Parms);
		PawnMovementMode=std::move(Parms.PawnMovementMode);
		MovementState=std::move(Parms.MovementState);
		PrevMovementState=std::move(Parms.PrevMovementState);
		MovementAction=std::move(Parms.MovementAction);
		RotationMode=std::move(Parms.RotationMode);
		ActualGait=std::move(Parms.ActualGait);
		ActualStance=std::move(Parms.ActualStance);
		OverlayState=std::move(Parms.OverlayState);
		GroundedMoveMode=std::move(Parms.GroundedMoveMode);
	}
	else if (auto I = (IAGLS_AI_CharacterInterface*)(O->GetNativeInterfaceAddress(UAGLS_AI_CharacterInterface::StaticClass())))
	{
		I->BPI_AI_Get_CurrentStates_Implementation(PawnMovementMode,MovementState,PrevMovementState,MovementAction,RotationMode,ActualGait,ActualStance,OverlayState,GroundedMoveMode);
	}
}
struct Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "BPI AI Character|Get" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//It allows you to get the most important information about the current states of the Character\n" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_AI_CharacterInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "It allows you to get the most important information about the current states of the Character" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function BPI_AI_Get_CurrentStates constinit property declarations **************
	static const UECodeGen_Private::FBytePropertyParams NewProp_PawnMovementMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MovementState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MovementState;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PrevMovementState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PrevMovementState;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MovementAction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MovementAction;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RotationMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ActualGait_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ActualGait;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ActualStance_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ActualStance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OverlayState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OverlayState;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GroundedMoveMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GroundedMoveMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BPI_AI_Get_CurrentStates constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BPI_AI_Get_CurrentStates Property Definitions *************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::NewProp_PawnMovementMode = { "PawnMovementMode", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_Get_CurrentStates_Parms, PawnMovementMode), Z_Construct_UEnum_Engine_EMovementMode, METADATA_PARAMS(0, nullptr) }; // 2626550301
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::NewProp_MovementState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::NewProp_MovementState = { "MovementState", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_Get_CurrentStates_Parms, MovementState), Z_Construct_UEnum_HelpfulFunctions_CALS_MovementState, METADATA_PARAMS(0, nullptr) }; // 2334433285
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::NewProp_PrevMovementState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::NewProp_PrevMovementState = { "PrevMovementState", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_Get_CurrentStates_Parms, PrevMovementState), Z_Construct_UEnum_HelpfulFunctions_CALS_MovementState, METADATA_PARAMS(0, nullptr) }; // 2334433285
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::NewProp_MovementAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::NewProp_MovementAction = { "MovementAction", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_Get_CurrentStates_Parms, MovementAction), Z_Construct_UEnum_HelpfulFunctions_CALS_MovementAction, METADATA_PARAMS(0, nullptr) }; // 3164101472
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::NewProp_RotationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::NewProp_RotationMode = { "RotationMode", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_Get_CurrentStates_Parms, RotationMode), Z_Construct_UEnum_HelpfulFunctions_CALS_RotationMode, METADATA_PARAMS(0, nullptr) }; // 752773085
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::NewProp_ActualGait_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::NewProp_ActualGait = { "ActualGait", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_Get_CurrentStates_Parms, ActualGait), Z_Construct_UEnum_HelpfulFunctions_CALS_Gait, METADATA_PARAMS(0, nullptr) }; // 306123607
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::NewProp_ActualStance_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::NewProp_ActualStance = { "ActualStance", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_Get_CurrentStates_Parms, ActualStance), Z_Construct_UEnum_HelpfulFunctions_CALS_Stance, METADATA_PARAMS(0, nullptr) }; // 11883395
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::NewProp_OverlayState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::NewProp_OverlayState = { "OverlayState", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_Get_CurrentStates_Parms, OverlayState), Z_Construct_UEnum_HelpfulFunctions_CALS_OverlayState, METADATA_PARAMS(0, nullptr) }; // 3161285749
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::NewProp_GroundedMoveMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::NewProp_GroundedMoveMode = { "GroundedMoveMode", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_Get_CurrentStates_Parms, GroundedMoveMode), Z_Construct_UEnum_HelpfulFunctions_CALS_GroundedMoveMode, METADATA_PARAMS(0, nullptr) }; // 4178313003
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::NewProp_PawnMovementMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::NewProp_MovementState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::NewProp_MovementState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::NewProp_PrevMovementState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::NewProp_PrevMovementState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::NewProp_MovementAction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::NewProp_MovementAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::NewProp_RotationMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::NewProp_RotationMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::NewProp_ActualGait_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::NewProp_ActualGait,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::NewProp_ActualStance_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::NewProp_ActualStance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::NewProp_OverlayState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::NewProp_OverlayState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::NewProp_GroundedMoveMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::NewProp_GroundedMoveMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::PropPointers) < 2048);
// ********** End Function BPI_AI_Get_CurrentStates Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_CharacterInterface, nullptr, "BPI_AI_Get_CurrentStates", 	Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::PropPointers), 
sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Get_CurrentStates_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Get_CurrentStates_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAGLS_AI_CharacterInterface::execBPI_AI_Get_CurrentStates)
{
	P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_PawnMovementMode);
	P_GET_ENUM_REF(CALS_MovementState,Z_Param_Out_MovementState);
	P_GET_ENUM_REF(CALS_MovementState,Z_Param_Out_PrevMovementState);
	P_GET_ENUM_REF(CALS_MovementAction,Z_Param_Out_MovementAction);
	P_GET_ENUM_REF(CALS_RotationMode,Z_Param_Out_RotationMode);
	P_GET_ENUM_REF(CALS_Gait,Z_Param_Out_ActualGait);
	P_GET_ENUM_REF(CALS_Stance,Z_Param_Out_ActualStance);
	P_GET_ENUM_REF(CALS_OverlayState,Z_Param_Out_OverlayState);
	P_GET_ENUM_REF(CALS_GroundedMoveMode,Z_Param_Out_GroundedMoveMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_AI_Get_CurrentStates_Implementation((TEnumAsByte<EMovementMode>&)(Z_Param_Out_PawnMovementMode),(CALS_MovementState&)(Z_Param_Out_MovementState),(CALS_MovementState&)(Z_Param_Out_PrevMovementState),(CALS_MovementAction&)(Z_Param_Out_MovementAction),(CALS_RotationMode&)(Z_Param_Out_RotationMode),(CALS_Gait&)(Z_Param_Out_ActualGait),(CALS_Stance&)(Z_Param_Out_ActualStance),(CALS_OverlayState&)(Z_Param_Out_OverlayState),(CALS_GroundedMoveMode&)(Z_Param_Out_GroundedMoveMode));
	P_NATIVE_END;
}
// ********** End Interface UAGLS_AI_CharacterInterface Function BPI_AI_Get_CurrentStates **********

// ********** Begin Interface UAGLS_AI_CharacterInterface Function BPI_AI_Get_CurrentStatesSafe ****
struct AGLS_AI_CharacterInterface_eventBPI_AI_Get_CurrentStatesSafe_Parms
{
	CALS_MovementState MovementState;
	CALS_MovementState PrevMovementState;
	CALS_MovementAction MovementAction;
	CALS_RotationMode RotationMode;
	CALS_Gait ActualGait;
	CALS_Stance ActualStance;
};
void IAGLS_AI_CharacterInterface::BPI_AI_Get_CurrentStatesSafe(CALS_MovementState& MovementState, CALS_MovementState& PrevMovementState, CALS_MovementAction& MovementAction, CALS_RotationMode& RotationMode, CALS_Gait& ActualGait, CALS_Stance& ActualStance) const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_AI_Get_CurrentStatesSafe instead.");
}
static FName NAME_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStatesSafe = FName(TEXT("BPI_AI_Get_CurrentStatesSafe"));
void IAGLS_AI_CharacterInterface::Execute_BPI_AI_Get_CurrentStatesSafe(const UObject* O, CALS_MovementState& MovementState, CALS_MovementState& PrevMovementState, CALS_MovementAction& MovementAction, CALS_RotationMode& RotationMode, CALS_Gait& ActualGait, CALS_Stance& ActualStance)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UAGLS_AI_CharacterInterface::StaticClass()));
	AGLS_AI_CharacterInterface_eventBPI_AI_Get_CurrentStatesSafe_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStatesSafe);
	if (Func)
	{
		Parms.MovementState=std::move(MovementState);
		Parms.PrevMovementState=std::move(PrevMovementState);
		Parms.MovementAction=std::move(MovementAction);
		Parms.RotationMode=std::move(RotationMode);
		Parms.ActualGait=std::move(ActualGait);
		Parms.ActualStance=std::move(ActualStance);
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		MovementState=std::move(Parms.MovementState);
		PrevMovementState=std::move(Parms.PrevMovementState);
		MovementAction=std::move(Parms.MovementAction);
		RotationMode=std::move(Parms.RotationMode);
		ActualGait=std::move(Parms.ActualGait);
		ActualStance=std::move(Parms.ActualStance);
	}
	else if (auto I = (const IAGLS_AI_CharacterInterface*)(O->GetNativeInterfaceAddress(UAGLS_AI_CharacterInterface::StaticClass())))
	{
		I->BPI_AI_Get_CurrentStatesSafe_Implementation(MovementState,PrevMovementState,MovementAction,RotationMode,ActualGait,ActualStance);
	}
}
struct Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStatesSafe_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "BPI AI Character|Get" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\nReturns information related to states in the form of Enum type variables, including:\n\xe2\x9e\x8a CALS_MovementState MovementState,\n\xe2\x9e\x8b CALS_MovementAction MovementAction,\n\xe2\x9e\x8c CALS_RotationMode& RotationMode,\n\xe2\x9e\x8d CALS_Gait ActualGait,\n...\nThe function is marked as \xf0\x9d\x90\x93\xf0\x9d\x90\x87\xf0\x9d\x90\x91\xf0\x9d\x90\x84\xf0\x9d\x90\x80\xf0\x9d\x90\x83 \xf0\x9d\x90\x92\xf0\x9d\x90\x80\xf0\x9d\x90\x85\xf0\x9d\x90\x84.\n*/" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_AI_CharacterInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns information related to states in the form of Enum type variables, including:\n\xe2\x9e\x8a CALS_MovementState MovementState,\n\xe2\x9e\x8b CALS_MovementAction MovementAction,\n\xe2\x9e\x8c CALS_RotationMode& RotationMode,\n\xe2\x9e\x8d CALS_Gait ActualGait,\n...\nThe function is marked as \xf0\x9d\x90\x93\xf0\x9d\x90\x87\xf0\x9d\x90\x91\xf0\x9d\x90\x84\xf0\x9d\x90\x80\xf0\x9d\x90\x83 \xf0\x9d\x90\x92\xf0\x9d\x90\x80\xf0\x9d\x90\x85\xf0\x9d\x90\x84." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function BPI_AI_Get_CurrentStatesSafe constinit property declarations **********
	static const UECodeGen_Private::FBytePropertyParams NewProp_MovementState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MovementState;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PrevMovementState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PrevMovementState;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MovementAction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MovementAction;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RotationMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ActualGait_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ActualGait;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ActualStance_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ActualStance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BPI_AI_Get_CurrentStatesSafe constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BPI_AI_Get_CurrentStatesSafe Property Definitions *********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStatesSafe_Statics::NewProp_MovementState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStatesSafe_Statics::NewProp_MovementState = { "MovementState", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_Get_CurrentStatesSafe_Parms, MovementState), Z_Construct_UEnum_HelpfulFunctions_CALS_MovementState, METADATA_PARAMS(0, nullptr) }; // 2334433285
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStatesSafe_Statics::NewProp_PrevMovementState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStatesSafe_Statics::NewProp_PrevMovementState = { "PrevMovementState", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_Get_CurrentStatesSafe_Parms, PrevMovementState), Z_Construct_UEnum_HelpfulFunctions_CALS_MovementState, METADATA_PARAMS(0, nullptr) }; // 2334433285
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStatesSafe_Statics::NewProp_MovementAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStatesSafe_Statics::NewProp_MovementAction = { "MovementAction", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_Get_CurrentStatesSafe_Parms, MovementAction), Z_Construct_UEnum_HelpfulFunctions_CALS_MovementAction, METADATA_PARAMS(0, nullptr) }; // 3164101472
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStatesSafe_Statics::NewProp_RotationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStatesSafe_Statics::NewProp_RotationMode = { "RotationMode", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_Get_CurrentStatesSafe_Parms, RotationMode), Z_Construct_UEnum_HelpfulFunctions_CALS_RotationMode, METADATA_PARAMS(0, nullptr) }; // 752773085
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStatesSafe_Statics::NewProp_ActualGait_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStatesSafe_Statics::NewProp_ActualGait = { "ActualGait", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_Get_CurrentStatesSafe_Parms, ActualGait), Z_Construct_UEnum_HelpfulFunctions_CALS_Gait, METADATA_PARAMS(0, nullptr) }; // 306123607
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStatesSafe_Statics::NewProp_ActualStance_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStatesSafe_Statics::NewProp_ActualStance = { "ActualStance", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_Get_CurrentStatesSafe_Parms, ActualStance), Z_Construct_UEnum_HelpfulFunctions_CALS_Stance, METADATA_PARAMS(0, nullptr) }; // 11883395
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStatesSafe_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStatesSafe_Statics::NewProp_MovementState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStatesSafe_Statics::NewProp_MovementState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStatesSafe_Statics::NewProp_PrevMovementState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStatesSafe_Statics::NewProp_PrevMovementState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStatesSafe_Statics::NewProp_MovementAction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStatesSafe_Statics::NewProp_MovementAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStatesSafe_Statics::NewProp_RotationMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStatesSafe_Statics::NewProp_RotationMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStatesSafe_Statics::NewProp_ActualGait_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStatesSafe_Statics::NewProp_ActualGait,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStatesSafe_Statics::NewProp_ActualStance_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStatesSafe_Statics::NewProp_ActualStance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStatesSafe_Statics::PropPointers) < 2048);
// ********** End Function BPI_AI_Get_CurrentStatesSafe Property Definitions ***********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStatesSafe_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_CharacterInterface, nullptr, "BPI_AI_Get_CurrentStatesSafe", 	Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStatesSafe_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStatesSafe_Statics::PropPointers), 
sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Get_CurrentStatesSafe_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStatesSafe_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStatesSafe_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Get_CurrentStatesSafe_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStatesSafe()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStatesSafe_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAGLS_AI_CharacterInterface::execBPI_AI_Get_CurrentStatesSafe)
{
	P_GET_ENUM_REF(CALS_MovementState,Z_Param_Out_MovementState);
	P_GET_ENUM_REF(CALS_MovementState,Z_Param_Out_PrevMovementState);
	P_GET_ENUM_REF(CALS_MovementAction,Z_Param_Out_MovementAction);
	P_GET_ENUM_REF(CALS_RotationMode,Z_Param_Out_RotationMode);
	P_GET_ENUM_REF(CALS_Gait,Z_Param_Out_ActualGait);
	P_GET_ENUM_REF(CALS_Stance,Z_Param_Out_ActualStance);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_AI_Get_CurrentStatesSafe_Implementation((CALS_MovementState&)(Z_Param_Out_MovementState),(CALS_MovementState&)(Z_Param_Out_PrevMovementState),(CALS_MovementAction&)(Z_Param_Out_MovementAction),(CALS_RotationMode&)(Z_Param_Out_RotationMode),(CALS_Gait&)(Z_Param_Out_ActualGait),(CALS_Stance&)(Z_Param_Out_ActualStance));
	P_NATIVE_END;
}
// ********** End Interface UAGLS_AI_CharacterInterface Function BPI_AI_Get_CurrentStatesSafe ******

// ********** Begin Interface UAGLS_AI_CharacterInterface Function BPI_AI_Get_EssentialValues ******
struct AGLS_AI_CharacterInterface_eventBPI_AI_Get_EssentialValues_Parms
{
	FVector Velocity;
	FVector Acceleration;
	FVector MovementInput;
	bool IsMoving;
	bool HasMovementInput;
	float Speed;
	FRotator AimingRotation;
	float AimYawRate;
};
void IAGLS_AI_CharacterInterface::BPI_AI_Get_EssentialValues(FVector& Velocity, FVector& Acceleration, FVector& MovementInput, bool& IsMoving, bool& HasMovementInput, float& Speed, FRotator& AimingRotation, float& AimYawRate)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_AI_Get_EssentialValues instead.");
}
static FName NAME_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValues = FName(TEXT("BPI_AI_Get_EssentialValues"));
void IAGLS_AI_CharacterInterface::Execute_BPI_AI_Get_EssentialValues(UObject* O, FVector& Velocity, FVector& Acceleration, FVector& MovementInput, bool& IsMoving, bool& HasMovementInput, float& Speed, FRotator& AimingRotation, float& AimYawRate)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UAGLS_AI_CharacterInterface::StaticClass()));
	AGLS_AI_CharacterInterface_eventBPI_AI_Get_EssentialValues_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValues);
	if (Func)
	{
		Parms.Velocity=std::move(Velocity);
		Parms.Acceleration=std::move(Acceleration);
		Parms.MovementInput=std::move(MovementInput);
		Parms.IsMoving=std::move(IsMoving);
		Parms.HasMovementInput=std::move(HasMovementInput);
		Parms.Speed=std::move(Speed);
		Parms.AimingRotation=std::move(AimingRotation);
		Parms.AimYawRate=std::move(AimYawRate);
		O->ProcessEvent(Func, &Parms);
		Velocity=std::move(Parms.Velocity);
		Acceleration=std::move(Parms.Acceleration);
		MovementInput=std::move(Parms.MovementInput);
		IsMoving=std::move(Parms.IsMoving);
		HasMovementInput=std::move(Parms.HasMovementInput);
		Speed=std::move(Parms.Speed);
		AimingRotation=std::move(Parms.AimingRotation);
		AimYawRate=std::move(Parms.AimYawRate);
	}
	else if (auto I = (IAGLS_AI_CharacterInterface*)(O->GetNativeInterfaceAddress(UAGLS_AI_CharacterInterface::StaticClass())))
	{
		I->BPI_AI_Get_EssentialValues_Implementation(Velocity,Acceleration,MovementInput,IsMoving,HasMovementInput,Speed,AimingRotation,AimYawRate);
	}
}
struct Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValues_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "BPI AI Character|Get" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\nReturns several Character-related information, including:\n\xe2\x9e\x8a FVector Velocity (usually as Self->GetVelocity()),\n\xe2\x9e\x8b FVector Acceleration,\n\xe2\x9e\x8c FVector MovementInput,\n\xe2\x9e\x8d bool IsMoving,\n...\nThe function is \xf0\x9d\x90\x8d\xf0\x9d\x90\x8e\xf0\x9d\x90\x93 thread safe.\n*/" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_AI_CharacterInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns several Character-related information, including:\n\xe2\x9e\x8a FVector Velocity (usually as Self->GetVelocity()),\n\xe2\x9e\x8b FVector Acceleration,\n\xe2\x9e\x8c FVector MovementInput,\n\xe2\x9e\x8d bool IsMoving,\n...\nThe function is \xf0\x9d\x90\x8d\xf0\x9d\x90\x8e\xf0\x9d\x90\x93 thread safe." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function BPI_AI_Get_EssentialValues constinit property declarations ************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Acceleration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MovementInput;
	static void NewProp_IsMoving_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsMoving;
	static void NewProp_HasMovementInput_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HasMovementInput;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AimingRotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AimYawRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BPI_AI_Get_EssentialValues constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BPI_AI_Get_EssentialValues Property Definitions ***********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValues_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_Get_EssentialValues_Parms, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValues_Statics::NewProp_Acceleration = { "Acceleration", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_Get_EssentialValues_Parms, Acceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValues_Statics::NewProp_MovementInput = { "MovementInput", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_Get_EssentialValues_Parms, MovementInput), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValues_Statics::NewProp_IsMoving_SetBit(void* Obj)
{
	((AGLS_AI_CharacterInterface_eventBPI_AI_Get_EssentialValues_Parms*)Obj)->IsMoving = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValues_Statics::NewProp_IsMoving = { "IsMoving", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Get_EssentialValues_Parms), &Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValues_Statics::NewProp_IsMoving_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValues_Statics::NewProp_HasMovementInput_SetBit(void* Obj)
{
	((AGLS_AI_CharacterInterface_eventBPI_AI_Get_EssentialValues_Parms*)Obj)->HasMovementInput = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValues_Statics::NewProp_HasMovementInput = { "HasMovementInput", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Get_EssentialValues_Parms), &Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValues_Statics::NewProp_HasMovementInput_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValues_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_Get_EssentialValues_Parms, Speed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValues_Statics::NewProp_AimingRotation = { "AimingRotation", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_Get_EssentialValues_Parms, AimingRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValues_Statics::NewProp_AimYawRate = { "AimYawRate", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_Get_EssentialValues_Parms, AimYawRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValues_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValues_Statics::NewProp_Velocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValues_Statics::NewProp_Acceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValues_Statics::NewProp_MovementInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValues_Statics::NewProp_IsMoving,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValues_Statics::NewProp_HasMovementInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValues_Statics::NewProp_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValues_Statics::NewProp_AimingRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValues_Statics::NewProp_AimYawRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValues_Statics::PropPointers) < 2048);
// ********** End Function BPI_AI_Get_EssentialValues Property Definitions *************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValues_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_CharacterInterface, nullptr, "BPI_AI_Get_EssentialValues", 	Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValues_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValues_Statics::PropPointers), 
sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Get_EssentialValues_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValues_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Get_EssentialValues_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValues_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAGLS_AI_CharacterInterface::execBPI_AI_Get_EssentialValues)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Velocity);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Acceleration);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_MovementInput);
	P_GET_UBOOL_REF(Z_Param_Out_IsMoving);
	P_GET_UBOOL_REF(Z_Param_Out_HasMovementInput);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Speed);
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_AimingRotation);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AimYawRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_AI_Get_EssentialValues_Implementation(Z_Param_Out_Velocity,Z_Param_Out_Acceleration,Z_Param_Out_MovementInput,Z_Param_Out_IsMoving,Z_Param_Out_HasMovementInput,Z_Param_Out_Speed,Z_Param_Out_AimingRotation,Z_Param_Out_AimYawRate);
	P_NATIVE_END;
}
// ********** End Interface UAGLS_AI_CharacterInterface Function BPI_AI_Get_EssentialValues ********

// ********** Begin Interface UAGLS_AI_CharacterInterface Function BPI_AI_Get_EssentialValuesSafe **
struct AGLS_AI_CharacterInterface_eventBPI_AI_Get_EssentialValuesSafe_Parms
{
	FVector Acceleration;
	bool HasMovementInput;
	FRotator AimingRotation;
};
void IAGLS_AI_CharacterInterface::BPI_AI_Get_EssentialValuesSafe(FVector& Acceleration, bool& HasMovementInput, FRotator& AimingRotation) const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_AI_Get_EssentialValuesSafe instead.");
}
static FName NAME_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValuesSafe = FName(TEXT("BPI_AI_Get_EssentialValuesSafe"));
void IAGLS_AI_CharacterInterface::Execute_BPI_AI_Get_EssentialValuesSafe(const UObject* O, FVector& Acceleration, bool& HasMovementInput, FRotator& AimingRotation)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UAGLS_AI_CharacterInterface::StaticClass()));
	AGLS_AI_CharacterInterface_eventBPI_AI_Get_EssentialValuesSafe_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValuesSafe);
	if (Func)
	{
		Parms.Acceleration=std::move(Acceleration);
		Parms.HasMovementInput=std::move(HasMovementInput);
		Parms.AimingRotation=std::move(AimingRotation);
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		Acceleration=std::move(Parms.Acceleration);
		HasMovementInput=std::move(Parms.HasMovementInput);
		AimingRotation=std::move(Parms.AimingRotation);
	}
	else if (auto I = (const IAGLS_AI_CharacterInterface*)(O->GetNativeInterfaceAddress(UAGLS_AI_CharacterInterface::StaticClass())))
	{
		I->BPI_AI_Get_EssentialValuesSafe_Implementation(Acceleration,HasMovementInput,AimingRotation);
	}
}
struct Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValuesSafe_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "BPI AI Character|Get" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\nReturns several Character-related information, including: \n\xe2\x9e\x8a FVector Acceleration, \n\xe2\x9e\x8b bool HasMovementInput, \n\xe2\x9e\x8c FRotator AimingRotation. \nThe function is marked as \xf0\x9d\x90\x93\xf0\x9d\x90\x87\xf0\x9d\x90\x91\xf0\x9d\x90\x84\xf0\x9d\x90\x80\xf0\x9d\x90\x83 \xf0\x9d\x90\x92\xf0\x9d\x90\x80\xf0\x9d\x90\x85\xf0\x9d\x90\x84.\n*/" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_AI_CharacterInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns several Character-related information, including:\n\xe2\x9e\x8a FVector Acceleration,\n\xe2\x9e\x8b bool HasMovementInput,\n\xe2\x9e\x8c FRotator AimingRotation.\nThe function is marked as \xf0\x9d\x90\x93\xf0\x9d\x90\x87\xf0\x9d\x90\x91\xf0\x9d\x90\x84\xf0\x9d\x90\x80\xf0\x9d\x90\x83 \xf0\x9d\x90\x92\xf0\x9d\x90\x80\xf0\x9d\x90\x85\xf0\x9d\x90\x84." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function BPI_AI_Get_EssentialValuesSafe constinit property declarations ********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Acceleration;
	static void NewProp_HasMovementInput_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HasMovementInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AimingRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BPI_AI_Get_EssentialValuesSafe constinit property declarations **********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BPI_AI_Get_EssentialValuesSafe Property Definitions *******************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValuesSafe_Statics::NewProp_Acceleration = { "Acceleration", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_Get_EssentialValuesSafe_Parms, Acceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValuesSafe_Statics::NewProp_HasMovementInput_SetBit(void* Obj)
{
	((AGLS_AI_CharacterInterface_eventBPI_AI_Get_EssentialValuesSafe_Parms*)Obj)->HasMovementInput = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValuesSafe_Statics::NewProp_HasMovementInput = { "HasMovementInput", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Get_EssentialValuesSafe_Parms), &Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValuesSafe_Statics::NewProp_HasMovementInput_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValuesSafe_Statics::NewProp_AimingRotation = { "AimingRotation", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_Get_EssentialValuesSafe_Parms, AimingRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValuesSafe_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValuesSafe_Statics::NewProp_Acceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValuesSafe_Statics::NewProp_HasMovementInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValuesSafe_Statics::NewProp_AimingRotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValuesSafe_Statics::PropPointers) < 2048);
// ********** End Function BPI_AI_Get_EssentialValuesSafe Property Definitions *********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValuesSafe_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_CharacterInterface, nullptr, "BPI_AI_Get_EssentialValuesSafe", 	Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValuesSafe_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValuesSafe_Statics::PropPointers), 
sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Get_EssentialValuesSafe_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5CC20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValuesSafe_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValuesSafe_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Get_EssentialValuesSafe_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValuesSafe()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValuesSafe_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAGLS_AI_CharacterInterface::execBPI_AI_Get_EssentialValuesSafe)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Acceleration);
	P_GET_UBOOL_REF(Z_Param_Out_HasMovementInput);
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_AimingRotation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_AI_Get_EssentialValuesSafe_Implementation(Z_Param_Out_Acceleration,Z_Param_Out_HasMovementInput,Z_Param_Out_AimingRotation);
	P_NATIVE_END;
}
// ********** End Interface UAGLS_AI_CharacterInterface Function BPI_AI_Get_EssentialValuesSafe ****

// ********** Begin Interface UAGLS_AI_CharacterInterface Function BPI_AI_Get_LocomotionModeIndex **
struct AGLS_AI_CharacterInterface_eventBPI_AI_Get_LocomotionModeIndex_Parms
{
	int32 LocomotionIndex;
	uint8 LocomotionByte;
	FName LocomotionName;
};
void IAGLS_AI_CharacterInterface::BPI_AI_Get_LocomotionModeIndex(int32& LocomotionIndex, uint8& LocomotionByte, FName& LocomotionName)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_AI_Get_LocomotionModeIndex instead.");
}
static FName NAME_UAGLS_AI_CharacterInterface_BPI_AI_Get_LocomotionModeIndex = FName(TEXT("BPI_AI_Get_LocomotionModeIndex"));
void IAGLS_AI_CharacterInterface::Execute_BPI_AI_Get_LocomotionModeIndex(UObject* O, int32& LocomotionIndex, uint8& LocomotionByte, FName& LocomotionName)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UAGLS_AI_CharacterInterface::StaticClass()));
	AGLS_AI_CharacterInterface_eventBPI_AI_Get_LocomotionModeIndex_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UAGLS_AI_CharacterInterface_BPI_AI_Get_LocomotionModeIndex);
	if (Func)
	{
		Parms.LocomotionIndex=std::move(LocomotionIndex);
		Parms.LocomotionByte=std::move(LocomotionByte);
		Parms.LocomotionName=std::move(LocomotionName);
		O->ProcessEvent(Func, &Parms);
		LocomotionIndex=std::move(Parms.LocomotionIndex);
		LocomotionByte=std::move(Parms.LocomotionByte);
		LocomotionName=std::move(Parms.LocomotionName);
	}
	else if (auto I = (IAGLS_AI_CharacterInterface*)(O->GetNativeInterfaceAddress(UAGLS_AI_CharacterInterface::StaticClass())))
	{
		I->BPI_AI_Get_LocomotionModeIndex_Implementation(LocomotionIndex,LocomotionByte,LocomotionName);
	}
}
struct Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_LocomotionModeIndex_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "BPI AI Character|Get" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*ENG:\nDeclared mainly for the purpose of constructing the 'AGLS_HumanAI_CharacterLogicBase' class. It allows you to get information about LocomotionMode as an index \nin the form of an int variable. This is due to the fact that the 'ALSP2_MovementMode' enum class was created as a separate asset, which means that C++ does not \nhave access to such a data type. For this reason, this Enum is sent in a converted form as an int, byte and state name (FName).\n\nPL:\nZadeklarowane g\xc5\x82\xc3\xb3wnie w celu konstrukcji klasy 'AGLS_HumanAI_CharacterLogicBase'. Pozwala pobra\xc4\x87 informacji o LocomotionMode jako indeks w postaci zmiennej int. \nWynika to z faktu \xc5\xbc""e klasa enum 'ALSP2_MovementMode' zosta\xc5\x82""a utworzona jako oddzielny asset, co oznacza \xc5\xbc""e C++ nie ma dost\xc4\x99pu do takiego typu danych. Z tego te\xc5\xbc \npowodu Enum ten jest przesy\xc5\x82""any w przekonwertowanej formie jako int, byte oraz nazwa stanu (FName).*/" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_AI_CharacterInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ENG:\nDeclared mainly for the purpose of constructing the 'AGLS_HumanAI_CharacterLogicBase' class. It allows you to get information about LocomotionMode as an index\nin the form of an int variable. This is due to the fact that the 'ALSP2_MovementMode' enum class was created as a separate asset, which means that C++ does not\nhave access to such a data type. For this reason, this Enum is sent in a converted form as an int, byte and state name (FName).\n\nPL:\nZadeklarowane g\xc5\x82\xc3\xb3wnie w celu konstrukcji klasy 'AGLS_HumanAI_CharacterLogicBase'. Pozwala pobra\xc4\x87 informacji o LocomotionMode jako indeks w postaci zmiennej int.\nWynika to z faktu \xc5\xbc""e klasa enum 'ALSP2_MovementMode' zosta\xc5\x82""a utworzona jako oddzielny asset, co oznacza \xc5\xbc""e C++ nie ma dost\xc4\x99pu do takiego typu danych. Z tego te\xc5\xbc\npowodu Enum ten jest przesy\xc5\x82""any w przekonwertowanej formie jako int, byte oraz nazwa stanu (FName)." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function BPI_AI_Get_LocomotionModeIndex constinit property declarations ********
	static const UECodeGen_Private::FIntPropertyParams NewProp_LocomotionIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LocomotionByte;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LocomotionName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BPI_AI_Get_LocomotionModeIndex constinit property declarations **********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BPI_AI_Get_LocomotionModeIndex Property Definitions *******************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_LocomotionModeIndex_Statics::NewProp_LocomotionIndex = { "LocomotionIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_Get_LocomotionModeIndex_Parms, LocomotionIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_LocomotionModeIndex_Statics::NewProp_LocomotionByte = { "LocomotionByte", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_Get_LocomotionModeIndex_Parms, LocomotionByte), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_LocomotionModeIndex_Statics::NewProp_LocomotionName = { "LocomotionName", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_Get_LocomotionModeIndex_Parms, LocomotionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_LocomotionModeIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_LocomotionModeIndex_Statics::NewProp_LocomotionIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_LocomotionModeIndex_Statics::NewProp_LocomotionByte,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_LocomotionModeIndex_Statics::NewProp_LocomotionName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_LocomotionModeIndex_Statics::PropPointers) < 2048);
// ********** End Function BPI_AI_Get_LocomotionModeIndex Property Definitions *********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_LocomotionModeIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_CharacterInterface, nullptr, "BPI_AI_Get_LocomotionModeIndex", 	Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_LocomotionModeIndex_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_LocomotionModeIndex_Statics::PropPointers), 
sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Get_LocomotionModeIndex_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_LocomotionModeIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_LocomotionModeIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Get_LocomotionModeIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_LocomotionModeIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_LocomotionModeIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAGLS_AI_CharacterInterface::execBPI_AI_Get_LocomotionModeIndex)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_LocomotionIndex);
	P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_LocomotionByte);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_LocomotionName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_AI_Get_LocomotionModeIndex_Implementation(Z_Param_Out_LocomotionIndex,Z_Param_Out_LocomotionByte,Z_Param_Out_LocomotionName);
	P_NATIVE_END;
}
// ********** End Interface UAGLS_AI_CharacterInterface Function BPI_AI_Get_LocomotionModeIndex ****

// ********** Begin Interface UAGLS_AI_CharacterInterface Function BPI_AI_Get_LOD_State ************
struct AGLS_AI_CharacterInterface_eventBPI_AI_Get_LOD_State_Parms
{
	AGLS_LOD_State CurrentState;
};
void IAGLS_AI_CharacterInterface::BPI_AI_Get_LOD_State(AGLS_LOD_State& CurrentState)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_AI_Get_LOD_State instead.");
}
static FName NAME_UAGLS_AI_CharacterInterface_BPI_AI_Get_LOD_State = FName(TEXT("BPI_AI_Get_LOD_State"));
void IAGLS_AI_CharacterInterface::Execute_BPI_AI_Get_LOD_State(UObject* O, AGLS_LOD_State& CurrentState)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UAGLS_AI_CharacterInterface::StaticClass()));
	AGLS_AI_CharacterInterface_eventBPI_AI_Get_LOD_State_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UAGLS_AI_CharacterInterface_BPI_AI_Get_LOD_State);
	if (Func)
	{
		Parms.CurrentState=std::move(CurrentState);
		O->ProcessEvent(Func, &Parms);
		CurrentState=std::move(Parms.CurrentState);
	}
	else if (auto I = (IAGLS_AI_CharacterInterface*)(O->GetNativeInterfaceAddress(UAGLS_AI_CharacterInterface::StaticClass())))
	{
		I->BPI_AI_Get_LOD_State_Implementation(CurrentState);
	}
}
struct Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_LOD_State_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BPI AI Character|Get" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Allows you to retrieve the current custom LOD state*/" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_AI_CharacterInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Allows you to retrieve the current custom LOD state" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function BPI_AI_Get_LOD_State constinit property declarations ******************
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BPI_AI_Get_LOD_State constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BPI_AI_Get_LOD_State Property Definitions *****************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_LOD_State_Statics::NewProp_CurrentState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_LOD_State_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_Get_LOD_State_Parms, CurrentState), Z_Construct_UEnum_HelpfulFunctions_AGLS_LOD_State, METADATA_PARAMS(0, nullptr) }; // 1138003458
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_LOD_State_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_LOD_State_Statics::NewProp_CurrentState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_LOD_State_Statics::NewProp_CurrentState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_LOD_State_Statics::PropPointers) < 2048);
// ********** End Function BPI_AI_Get_LOD_State Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_LOD_State_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_CharacterInterface, nullptr, "BPI_AI_Get_LOD_State", 	Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_LOD_State_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_LOD_State_Statics::PropPointers), 
sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Get_LOD_State_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_LOD_State_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_LOD_State_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Get_LOD_State_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_LOD_State()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_LOD_State_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAGLS_AI_CharacterInterface::execBPI_AI_Get_LOD_State)
{
	P_GET_ENUM_REF(AGLS_LOD_State,Z_Param_Out_CurrentState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_AI_Get_LOD_State_Implementation((AGLS_LOD_State&)(Z_Param_Out_CurrentState));
	P_NATIVE_END;
}
// ********** End Interface UAGLS_AI_CharacterInterface Function BPI_AI_Get_LOD_State **************

// ********** Begin Interface UAGLS_AI_CharacterInterface Function BPI_AI_Get_MainTagsContainerData 
struct AGLS_AI_CharacterInterface_eventBPI_AI_Get_MainTagsContainerData_Parms
{
	FGameplayTagContainer TagsContainer;
};
void IAGLS_AI_CharacterInterface::BPI_AI_Get_MainTagsContainerData(FGameplayTagContainer& TagsContainer)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_AI_Get_MainTagsContainerData instead.");
}
static FName NAME_UAGLS_AI_CharacterInterface_BPI_AI_Get_MainTagsContainerData = FName(TEXT("BPI_AI_Get_MainTagsContainerData"));
void IAGLS_AI_CharacterInterface::Execute_BPI_AI_Get_MainTagsContainerData(UObject* O, FGameplayTagContainer& TagsContainer)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UAGLS_AI_CharacterInterface::StaticClass()));
	AGLS_AI_CharacterInterface_eventBPI_AI_Get_MainTagsContainerData_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UAGLS_AI_CharacterInterface_BPI_AI_Get_MainTagsContainerData);
	if (Func)
	{
		Parms.TagsContainer=std::move(TagsContainer);
		O->ProcessEvent(Func, &Parms);
		TagsContainer=std::move(Parms.TagsContainer);
	}
	else if (auto I = (IAGLS_AI_CharacterInterface*)(O->GetNativeInterfaceAddress(UAGLS_AI_CharacterInterface::StaticClass())))
	{
		I->BPI_AI_Get_MainTagsContainerData_Implementation(TagsContainer);
	}
}
struct Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_MainTagsContainerData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BPI AI Character|Get" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\xe2\x96\x81\xe2\x96\x81\xe2\x96\x81\xe2\x96\x81\xe2\x96\x81\xe2\x96\x81\xe2\x96\x81\xe2\x96\x81\xe2\x96\x81\xe2\x96\x81\xe2\x96\x81\xe2\x96\x81\xe2\x96\x81\xe2\x96\x81\xe2\x96\x81\xe2\x96\x81\xe2\x96\x81\xe2\x96\x81\n\xe2\x96\x8e \xf0\x9d\x90\x86\xf0\x9d\x90\x80\xf0\x9d\x90\x8c\xf0\x9d\x90\x84\xf0\x9d\x90\x8f\xf0\x9d\x90\x8b\xf0\x9d\x90\x84\xf0\x9d\x90\x98 \xf0\x9d\x90\x93\xf0\x9d\x90\x80\xf0\x9d\x90\x86\xf0\x9d\x90\x92  \xe2\x96\x8e\n\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\n*/" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_AI_CharacterInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x96\x81\xe2\x96\x81\xe2\x96\x81\xe2\x96\x81\xe2\x96\x81\xe2\x96\x81\xe2\x96\x81\xe2\x96\x81\xe2\x96\x81\xe2\x96\x81\xe2\x96\x81\xe2\x96\x81\xe2\x96\x81\xe2\x96\x81\xe2\x96\x81\xe2\x96\x81\xe2\x96\x81\xe2\x96\x81\n\xe2\x96\x8e \xf0\x9d\x90\x86\xf0\x9d\x90\x80\xf0\x9d\x90\x8c\xf0\x9d\x90\x84\xf0\x9d\x90\x8f\xf0\x9d\x90\x8b\xf0\x9d\x90\x84\xf0\x9d\x90\x98 \xf0\x9d\x90\x93\xf0\x9d\x90\x80\xf0\x9d\x90\x86\xf0\x9d\x90\x92  \xe2\x96\x8e\n\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function BPI_AI_Get_MainTagsContainerData constinit property declarations ******
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagsContainer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BPI_AI_Get_MainTagsContainerData constinit property declarations ********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BPI_AI_Get_MainTagsContainerData Property Definitions *****************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_MainTagsContainerData_Statics::NewProp_TagsContainer = { "TagsContainer", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_Get_MainTagsContainerData_Parms, TagsContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3438578166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_MainTagsContainerData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_MainTagsContainerData_Statics::NewProp_TagsContainer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_MainTagsContainerData_Statics::PropPointers) < 2048);
// ********** End Function BPI_AI_Get_MainTagsContainerData Property Definitions *******************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_MainTagsContainerData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_CharacterInterface, nullptr, "BPI_AI_Get_MainTagsContainerData", 	Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_MainTagsContainerData_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_MainTagsContainerData_Statics::PropPointers), 
sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Get_MainTagsContainerData_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_MainTagsContainerData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_MainTagsContainerData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Get_MainTagsContainerData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_MainTagsContainerData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_MainTagsContainerData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAGLS_AI_CharacterInterface::execBPI_AI_Get_MainTagsContainerData)
{
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TagsContainer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_AI_Get_MainTagsContainerData_Implementation(Z_Param_Out_TagsContainer);
	P_NATIVE_END;
}
// ********** End Interface UAGLS_AI_CharacterInterface Function BPI_AI_Get_MainTagsContainerData **

// ********** Begin Interface UAGLS_AI_CharacterInterface Function BPI_AI_Get_RotationLocked *******
struct AGLS_AI_CharacterInterface_eventBPI_AI_Get_RotationLocked_Parms
{
	bool RotationIsLocked;
};
void IAGLS_AI_CharacterInterface::BPI_AI_Get_RotationLocked(bool& RotationIsLocked)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_AI_Get_RotationLocked instead.");
}
static FName NAME_UAGLS_AI_CharacterInterface_BPI_AI_Get_RotationLocked = FName(TEXT("BPI_AI_Get_RotationLocked"));
void IAGLS_AI_CharacterInterface::Execute_BPI_AI_Get_RotationLocked(UObject* O, bool& RotationIsLocked)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UAGLS_AI_CharacterInterface::StaticClass()));
	AGLS_AI_CharacterInterface_eventBPI_AI_Get_RotationLocked_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UAGLS_AI_CharacterInterface_BPI_AI_Get_RotationLocked);
	if (Func)
	{
		Parms.RotationIsLocked=std::move(RotationIsLocked);
		O->ProcessEvent(Func, &Parms);
		RotationIsLocked=std::move(Parms.RotationIsLocked);
	}
	else if (auto I = (IAGLS_AI_CharacterInterface*)(O->GetNativeInterfaceAddress(UAGLS_AI_CharacterInterface::StaticClass())))
	{
		I->BPI_AI_Get_RotationLocked_Implementation(RotationIsLocked);
	}
}
struct Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_RotationLocked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BPI AI Character|Get" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*ENG:\nAfter locking the main function that determines the current capsule rotation by calling the BPI_AI_Set_LockRotationUpdate() interface function, \nthis declaration allows you to return information about whether the rotation has actually been locked.\n\nPL:\nPo zablokowaniu g\xc5\x82\xc3\xb3wnej funkcji okre\xc5\x9blaj\xc4\x85""cej aktualn\xc4\x85 rotacj\xc4\x99 kapsu\xc5\x82y poprzez wywo\xc5\x82""anie funkcji interfejsu BPI_AI_Set_LockRotationUpdate(), za \npo\xc5\x9brednictwem tej deklaracji mo\xc5\xbcna otrzyma\xc4\x87 informacj\xc4\x99, o tym czy rotacja faktycznie zosta\xc5\x82""a zablokowana.*/" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_AI_CharacterInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ENG:\nAfter locking the main function that determines the current capsule rotation by calling the BPI_AI_Set_LockRotationUpdate() interface function,\nthis declaration allows you to return information about whether the rotation has actually been locked.\n\nPL:\nPo zablokowaniu g\xc5\x82\xc3\xb3wnej funkcji okre\xc5\x9blaj\xc4\x85""cej aktualn\xc4\x85 rotacj\xc4\x99 kapsu\xc5\x82y poprzez wywo\xc5\x82""anie funkcji interfejsu BPI_AI_Set_LockRotationUpdate(), za\npo\xc5\x9brednictwem tej deklaracji mo\xc5\xbcna otrzyma\xc4\x87 informacj\xc4\x99, o tym czy rotacja faktycznie zosta\xc5\x82""a zablokowana." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function BPI_AI_Get_RotationLocked constinit property declarations *************
	static void NewProp_RotationIsLocked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RotationIsLocked;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BPI_AI_Get_RotationLocked constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BPI_AI_Get_RotationLocked Property Definitions ************************
void Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_RotationLocked_Statics::NewProp_RotationIsLocked_SetBit(void* Obj)
{
	((AGLS_AI_CharacterInterface_eventBPI_AI_Get_RotationLocked_Parms*)Obj)->RotationIsLocked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_RotationLocked_Statics::NewProp_RotationIsLocked = { "RotationIsLocked", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Get_RotationLocked_Parms), &Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_RotationLocked_Statics::NewProp_RotationIsLocked_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_RotationLocked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_RotationLocked_Statics::NewProp_RotationIsLocked,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_RotationLocked_Statics::PropPointers) < 2048);
// ********** End Function BPI_AI_Get_RotationLocked Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_RotationLocked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_CharacterInterface, nullptr, "BPI_AI_Get_RotationLocked", 	Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_RotationLocked_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_RotationLocked_Statics::PropPointers), 
sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Get_RotationLocked_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_RotationLocked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_RotationLocked_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Get_RotationLocked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_RotationLocked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_RotationLocked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAGLS_AI_CharacterInterface::execBPI_AI_Get_RotationLocked)
{
	P_GET_UBOOL_REF(Z_Param_Out_RotationIsLocked);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_AI_Get_RotationLocked_Implementation(Z_Param_Out_RotationIsLocked);
	P_NATIVE_END;
}
// ********** End Interface UAGLS_AI_CharacterInterface Function BPI_AI_Get_RotationLocked *********

// ********** Begin Interface UAGLS_AI_CharacterInterface Function BPI_AI_GetPathFollowActor *******
struct AGLS_AI_CharacterInterface_eventBPI_AI_GetPathFollowActor_Parms
{
	AActor* PathActor;
};
void IAGLS_AI_CharacterInterface::BPI_AI_GetPathFollowActor(AActor*& PathActor) const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_AI_GetPathFollowActor instead.");
}
static FName NAME_UAGLS_AI_CharacterInterface_BPI_AI_GetPathFollowActor = FName(TEXT("BPI_AI_GetPathFollowActor"));
void IAGLS_AI_CharacterInterface::Execute_BPI_AI_GetPathFollowActor(const UObject* O, AActor*& PathActor)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UAGLS_AI_CharacterInterface::StaticClass()));
	AGLS_AI_CharacterInterface_eventBPI_AI_GetPathFollowActor_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UAGLS_AI_CharacterInterface_BPI_AI_GetPathFollowActor);
	if (Func)
	{
		Parms.PathActor=std::move(PathActor);
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		PathActor=std::move(Parms.PathActor);
	}
	else if (auto I = (const IAGLS_AI_CharacterInterface*)(O->GetNativeInterfaceAddress(UAGLS_AI_CharacterInterface::StaticClass())))
	{
		I->BPI_AI_GetPathFollowActor_Implementation(PathActor);
	}
}
struct Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_GetPathFollowActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BPI AI Character|Get" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*ENG:\nWith this function you can get a reference to a PathActor instance that the AI \xe2\x80\x8b\xe2\x80\x8b""controller can follow. This interface is often called in controller classes or in the \nBehaviorTree as BT_Servces or BT_Tasks. The reference is passed as AActor* which means that to get detailed path information you will need to do CastTo<class type>\n\nPL:\nZa pomoc\xc4\x85 tej funkcji mo\xc5\xbcna pobra\xc4\x87 odniesienie do instancji PathActor, po kt\xc3\xb3rej kontroler AI mo\xc5\xbc""e pod\xc4\x85rza\xc4\x87. Interfejs ten jest cz\xc4\x99sto wywo\xc5\x82ywany w\xc5\x82""asnie w klasach \nkontroler\xc3\xb3w lub w BehaviorTree jako BT_Servces lub BT_Tasks. Odniesienie jest przekazywane jako AActor* co oznacza \xc5\xbc""e aby otrzyma\xc4\x87 szczeg\xc3\xb3\xc5\x82owe informacje o \xc5\x9b""cie\xc5\xbc""ce \nb\xc4\x99""dzie wymagane wykonanie CastTo<class type>*/" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_AI_CharacterInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ENG:\nWith this function you can get a reference to a PathActor instance that the AI \xe2\x80\x8b\xe2\x80\x8b""controller can follow. This interface is often called in controller classes or in the\nBehaviorTree as BT_Servces or BT_Tasks. The reference is passed as AActor* which means that to get detailed path information you will need to do CastTo<class type>\n\nPL:\nZa pomoc\xc4\x85 tej funkcji mo\xc5\xbcna pobra\xc4\x87 odniesienie do instancji PathActor, po kt\xc3\xb3rej kontroler AI mo\xc5\xbc""e pod\xc4\x85rza\xc4\x87. Interfejs ten jest cz\xc4\x99sto wywo\xc5\x82ywany w\xc5\x82""asnie w klasach\nkontroler\xc3\xb3w lub w BehaviorTree jako BT_Servces lub BT_Tasks. Odniesienie jest przekazywane jako AActor* co oznacza \xc5\xbc""e aby otrzyma\xc4\x87 szczeg\xc3\xb3\xc5\x82owe informacje o \xc5\x9b""cie\xc5\xbc""ce\nb\xc4\x99""dzie wymagane wykonanie CastTo<class type>" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function BPI_AI_GetPathFollowActor constinit property declarations *************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PathActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BPI_AI_GetPathFollowActor constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BPI_AI_GetPathFollowActor Property Definitions ************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_GetPathFollowActor_Statics::NewProp_PathActor = { "PathActor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_GetPathFollowActor_Parms, PathActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_GetPathFollowActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_GetPathFollowActor_Statics::NewProp_PathActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_GetPathFollowActor_Statics::PropPointers) < 2048);
// ********** End Function BPI_AI_GetPathFollowActor Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_GetPathFollowActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_CharacterInterface, nullptr, "BPI_AI_GetPathFollowActor", 	Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_GetPathFollowActor_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_GetPathFollowActor_Statics::PropPointers), 
sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_GetPathFollowActor_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_GetPathFollowActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_GetPathFollowActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_GetPathFollowActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_GetPathFollowActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_GetPathFollowActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAGLS_AI_CharacterInterface::execBPI_AI_GetPathFollowActor)
{
	P_GET_OBJECT_REF(AActor,Z_Param_Out_PathActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_AI_GetPathFollowActor_Implementation(P_ARG_GC_BARRIER(Z_Param_Out_PathActor));
	P_NATIVE_END;
}
// ********** End Interface UAGLS_AI_CharacterInterface Function BPI_AI_GetPathFollowActor *********

// ********** Begin Interface UAGLS_AI_CharacterInterface Function BPI_AI_Set_DesiredGait **********
struct AGLS_AI_CharacterInterface_eventBPI_AI_Set_DesiredGait_Parms
{
	CALS_Gait NewDesiredGait;
};
void IAGLS_AI_CharacterInterface::BPI_AI_Set_DesiredGait(CALS_Gait NewDesiredGait)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_AI_Set_DesiredGait instead.");
}
static FName NAME_UAGLS_AI_CharacterInterface_BPI_AI_Set_DesiredGait = FName(TEXT("BPI_AI_Set_DesiredGait"));
void IAGLS_AI_CharacterInterface::Execute_BPI_AI_Set_DesiredGait(UObject* O, CALS_Gait NewDesiredGait)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UAGLS_AI_CharacterInterface::StaticClass()));
	AGLS_AI_CharacterInterface_eventBPI_AI_Set_DesiredGait_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UAGLS_AI_CharacterInterface_BPI_AI_Set_DesiredGait);
	if (Func)
	{
		Parms.NewDesiredGait=std::move(NewDesiredGait);
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IAGLS_AI_CharacterInterface*)(O->GetNativeInterfaceAddress(UAGLS_AI_CharacterInterface::StaticClass())))
	{
		I->BPI_AI_Set_DesiredGait_Implementation(NewDesiredGait);
	}
}
struct Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_DesiredGait_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BPI AI Character|Set" },
		{ "ModuleRelativePath", "Public/AGLS_AI_CharacterInterface.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function BPI_AI_Set_DesiredGait constinit property declarations ****************
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewDesiredGait_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewDesiredGait;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BPI_AI_Set_DesiredGait constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BPI_AI_Set_DesiredGait Property Definitions ***************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_DesiredGait_Statics::NewProp_NewDesiredGait_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_DesiredGait_Statics::NewProp_NewDesiredGait = { "NewDesiredGait", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_Set_DesiredGait_Parms, NewDesiredGait), Z_Construct_UEnum_HelpfulFunctions_CALS_Gait, METADATA_PARAMS(0, nullptr) }; // 306123607
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_DesiredGait_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_DesiredGait_Statics::NewProp_NewDesiredGait_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_DesiredGait_Statics::NewProp_NewDesiredGait,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_DesiredGait_Statics::PropPointers) < 2048);
// ********** End Function BPI_AI_Set_DesiredGait Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_DesiredGait_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_CharacterInterface, nullptr, "BPI_AI_Set_DesiredGait", 	Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_DesiredGait_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_DesiredGait_Statics::PropPointers), 
sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Set_DesiredGait_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_DesiredGait_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_DesiredGait_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Set_DesiredGait_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_DesiredGait()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_DesiredGait_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAGLS_AI_CharacterInterface::execBPI_AI_Set_DesiredGait)
{
	P_GET_ENUM(CALS_Gait,Z_Param_NewDesiredGait);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_AI_Set_DesiredGait_Implementation(CALS_Gait(Z_Param_NewDesiredGait));
	P_NATIVE_END;
}
// ********** End Interface UAGLS_AI_CharacterInterface Function BPI_AI_Set_DesiredGait ************

// ********** Begin Interface UAGLS_AI_CharacterInterface Function BPI_AI_Set_EnableRagdoll ********
struct AGLS_AI_CharacterInterface_eventBPI_AI_Set_EnableRagdoll_Parms
{
	bool Enable;
};
void IAGLS_AI_CharacterInterface::BPI_AI_Set_EnableRagdoll(bool Enable)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_AI_Set_EnableRagdoll instead.");
}
static FName NAME_UAGLS_AI_CharacterInterface_BPI_AI_Set_EnableRagdoll = FName(TEXT("BPI_AI_Set_EnableRagdoll"));
void IAGLS_AI_CharacterInterface::Execute_BPI_AI_Set_EnableRagdoll(UObject* O, bool Enable)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UAGLS_AI_CharacterInterface::StaticClass()));
	AGLS_AI_CharacterInterface_eventBPI_AI_Set_EnableRagdoll_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UAGLS_AI_CharacterInterface_BPI_AI_Set_EnableRagdoll);
	if (Func)
	{
		Parms.Enable=std::move(Enable);
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IAGLS_AI_CharacterInterface*)(O->GetNativeInterfaceAddress(UAGLS_AI_CharacterInterface::StaticClass())))
	{
		I->BPI_AI_Set_EnableRagdoll_Implementation(Enable);
	}
}
struct Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_EnableRagdoll_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BPI AI Character|Set" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*With this function you can activate or deactivate ragdoll [Ragdoll() or UnRagdoll()] without having to refer to the whole class*/" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_AI_CharacterInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "With this function you can activate or deactivate ragdoll [Ragdoll() or UnRagdoll()] without having to refer to the whole class" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function BPI_AI_Set_EnableRagdoll constinit property declarations **************
	static void NewProp_Enable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Enable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BPI_AI_Set_EnableRagdoll constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BPI_AI_Set_EnableRagdoll Property Definitions *************************
void Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_EnableRagdoll_Statics::NewProp_Enable_SetBit(void* Obj)
{
	((AGLS_AI_CharacterInterface_eventBPI_AI_Set_EnableRagdoll_Parms*)Obj)->Enable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_EnableRagdoll_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Set_EnableRagdoll_Parms), &Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_EnableRagdoll_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_EnableRagdoll_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_EnableRagdoll_Statics::NewProp_Enable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_EnableRagdoll_Statics::PropPointers) < 2048);
// ********** End Function BPI_AI_Set_EnableRagdoll Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_EnableRagdoll_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_CharacterInterface, nullptr, "BPI_AI_Set_EnableRagdoll", 	Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_EnableRagdoll_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_EnableRagdoll_Statics::PropPointers), 
sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Set_EnableRagdoll_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_EnableRagdoll_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_EnableRagdoll_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Set_EnableRagdoll_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_EnableRagdoll()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_EnableRagdoll_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAGLS_AI_CharacterInterface::execBPI_AI_Set_EnableRagdoll)
{
	P_GET_UBOOL(Z_Param_Enable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_AI_Set_EnableRagdoll_Implementation(Z_Param_Enable);
	P_NATIVE_END;
}
// ********** End Interface UAGLS_AI_CharacterInterface Function BPI_AI_Set_EnableRagdoll **********

// ********** Begin Interface UAGLS_AI_CharacterInterface Function BPI_AI_Set_Gait *****************
struct AGLS_AI_CharacterInterface_eventBPI_AI_Set_Gait_Parms
{
	CALS_Gait NewGait;
};
void IAGLS_AI_CharacterInterface::BPI_AI_Set_Gait(CALS_Gait NewGait)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_AI_Set_Gait instead.");
}
static FName NAME_UAGLS_AI_CharacterInterface_BPI_AI_Set_Gait = FName(TEXT("BPI_AI_Set_Gait"));
void IAGLS_AI_CharacterInterface::Execute_BPI_AI_Set_Gait(UObject* O, CALS_Gait NewGait)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UAGLS_AI_CharacterInterface::StaticClass()));
	AGLS_AI_CharacterInterface_eventBPI_AI_Set_Gait_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UAGLS_AI_CharacterInterface_BPI_AI_Set_Gait);
	if (Func)
	{
		Parms.NewGait=std::move(NewGait);
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IAGLS_AI_CharacterInterface*)(O->GetNativeInterfaceAddress(UAGLS_AI_CharacterInterface::StaticClass())))
	{
		I->BPI_AI_Set_Gait_Implementation(NewGait);
	}
}
struct Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_Gait_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BPI AI Character|Set" },
		{ "ModuleRelativePath", "Public/AGLS_AI_CharacterInterface.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function BPI_AI_Set_Gait constinit property declarations ***********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewGait_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewGait;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BPI_AI_Set_Gait constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BPI_AI_Set_Gait Property Definitions **********************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_Gait_Statics::NewProp_NewGait_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_Gait_Statics::NewProp_NewGait = { "NewGait", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_Set_Gait_Parms, NewGait), Z_Construct_UEnum_HelpfulFunctions_CALS_Gait, METADATA_PARAMS(0, nullptr) }; // 306123607
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_Gait_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_Gait_Statics::NewProp_NewGait_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_Gait_Statics::NewProp_NewGait,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_Gait_Statics::PropPointers) < 2048);
// ********** End Function BPI_AI_Set_Gait Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_Gait_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_CharacterInterface, nullptr, "BPI_AI_Set_Gait", 	Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_Gait_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_Gait_Statics::PropPointers), 
sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Set_Gait_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_Gait_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_Gait_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Set_Gait_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_Gait()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_Gait_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAGLS_AI_CharacterInterface::execBPI_AI_Set_Gait)
{
	P_GET_ENUM(CALS_Gait,Z_Param_NewGait);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_AI_Set_Gait_Implementation(CALS_Gait(Z_Param_NewGait));
	P_NATIVE_END;
}
// ********** End Interface UAGLS_AI_CharacterInterface Function BPI_AI_Set_Gait *******************

// ********** Begin Interface UAGLS_AI_CharacterInterface Function BPI_AI_Set_GrounedMoveMode ******
struct AGLS_AI_CharacterInterface_eventBPI_AI_Set_GrounedMoveMode_Parms
{
	CALS_GroundedMoveMode NewMode;
};
void IAGLS_AI_CharacterInterface::BPI_AI_Set_GrounedMoveMode(CALS_GroundedMoveMode NewMode)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_AI_Set_GrounedMoveMode instead.");
}
static FName NAME_UAGLS_AI_CharacterInterface_BPI_AI_Set_GrounedMoveMode = FName(TEXT("BPI_AI_Set_GrounedMoveMode"));
void IAGLS_AI_CharacterInterface::Execute_BPI_AI_Set_GrounedMoveMode(UObject* O, CALS_GroundedMoveMode NewMode)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UAGLS_AI_CharacterInterface::StaticClass()));
	AGLS_AI_CharacterInterface_eventBPI_AI_Set_GrounedMoveMode_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UAGLS_AI_CharacterInterface_BPI_AI_Set_GrounedMoveMode);
	if (Func)
	{
		Parms.NewMode=std::move(NewMode);
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IAGLS_AI_CharacterInterface*)(O->GetNativeInterfaceAddress(UAGLS_AI_CharacterInterface::StaticClass())))
	{
		I->BPI_AI_Set_GrounedMoveMode_Implementation(NewMode);
	}
}
struct Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_GrounedMoveMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BPI AI Character|Set" },
		{ "ModuleRelativePath", "Public/AGLS_AI_CharacterInterface.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function BPI_AI_Set_GrounedMoveMode constinit property declarations ************
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BPI_AI_Set_GrounedMoveMode constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BPI_AI_Set_GrounedMoveMode Property Definitions ***********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_GrounedMoveMode_Statics::NewProp_NewMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_GrounedMoveMode_Statics::NewProp_NewMode = { "NewMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_Set_GrounedMoveMode_Parms, NewMode), Z_Construct_UEnum_HelpfulFunctions_CALS_GroundedMoveMode, METADATA_PARAMS(0, nullptr) }; // 4178313003
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_GrounedMoveMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_GrounedMoveMode_Statics::NewProp_NewMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_GrounedMoveMode_Statics::NewProp_NewMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_GrounedMoveMode_Statics::PropPointers) < 2048);
// ********** End Function BPI_AI_Set_GrounedMoveMode Property Definitions *************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_GrounedMoveMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_CharacterInterface, nullptr, "BPI_AI_Set_GrounedMoveMode", 	Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_GrounedMoveMode_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_GrounedMoveMode_Statics::PropPointers), 
sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Set_GrounedMoveMode_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_GrounedMoveMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_GrounedMoveMode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Set_GrounedMoveMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_GrounedMoveMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_GrounedMoveMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAGLS_AI_CharacterInterface::execBPI_AI_Set_GrounedMoveMode)
{
	P_GET_ENUM(CALS_GroundedMoveMode,Z_Param_NewMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_AI_Set_GrounedMoveMode_Implementation(CALS_GroundedMoveMode(Z_Param_NewMode));
	P_NATIVE_END;
}
// ********** End Interface UAGLS_AI_CharacterInterface Function BPI_AI_Set_GrounedMoveMode ********

// ********** Begin Interface UAGLS_AI_CharacterInterface Function BPI_AI_Set_LockRotationUpdate ***
struct AGLS_AI_CharacterInterface_eventBPI_AI_Set_LockRotationUpdate_Parms
{
	bool LockUpdate;
};
void IAGLS_AI_CharacterInterface::BPI_AI_Set_LockRotationUpdate(bool LockUpdate)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_AI_Set_LockRotationUpdate instead.");
}
static FName NAME_UAGLS_AI_CharacterInterface_BPI_AI_Set_LockRotationUpdate = FName(TEXT("BPI_AI_Set_LockRotationUpdate"));
void IAGLS_AI_CharacterInterface::Execute_BPI_AI_Set_LockRotationUpdate(UObject* O, bool LockUpdate)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UAGLS_AI_CharacterInterface::StaticClass()));
	AGLS_AI_CharacterInterface_eventBPI_AI_Set_LockRotationUpdate_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UAGLS_AI_CharacterInterface_BPI_AI_Set_LockRotationUpdate);
	if (Func)
	{
		Parms.LockUpdate=std::move(LockUpdate);
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IAGLS_AI_CharacterInterface*)(O->GetNativeInterfaceAddress(UAGLS_AI_CharacterInterface::StaticClass())))
	{
		I->BPI_AI_Set_LockRotationUpdate_Implementation(LockUpdate);
	}
}
struct Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_LockRotationUpdate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BPI AI Character|Set" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*ENG:\nAn important function often called in Gameplay Abilities and other Sequences*. Calling this interface function allows you to lock or unlock the base orientation \ncontrol system of the character. Most UCharacter classes in the AGLS project contain their own approach to controlling the capsule rotation. However, in some \nsituations, e.g. when performing a pick-up sequence, you want to use a different way of calculating rotation. To do this, you can lock the base rotation system \nfor the duration of the sequence, set your own orientation with SetActorRotation() + UpdateRotationVariables(...)*, and then unlock the rotation system. It is \nimportant to remember to unlock by calling back this interface! Failure to use this interface may result in capsule interpolation being colored to the given \norientation.\n\nPL:\nWa\xc5\xbcna funkcja cz\xc4\x99sto wywo\xc5\x82ywana w Gameplay Abilities oraz innych sekwencjach. Wow\xc5\x82""anie tej funkcji interfejsu pozwala na zablokowanie lub odblokowanie bazowego \nsystemu sterowania orientacj\xc4\x85 charakteru. Wi\xc4\x99kszo\xc5\x9b\xc4\x87 klas UCharacter  w projekcie AGLS zawiera w\xc5\x82""asne podej\xc5\x9b""cie do kontrolowania rotacj\xc4\x85 kapsu\xc5\x82y. Jednak w niek\xc3\xb3rych \nsytuacjach np. kiedy wykonujemy sekwencj\xc4\x99 podnoszenia przedmiotu chcemy zastosowa\xc4\x87 inny spos\xc3\xb3""b obliczania rotacji. W tym celu na czas trwania sekwencji mo\xc5\xbcna \nzablokowa\xc4\x87 bazowy system rotacji, ustawi\xc4\x87 w\xc5\x82""asn\xc4\x85 orientacj\xc4\x99 SetActorRotation() + UpdateRotationVariables(...)*, a nast\xc4\x99pnie odblokowa\xc4\x87 system rotacji. Wa\xc5\xbcne jest \naby pami\xc4\x99ta\xc4\x87 o odblokowaniu. Nie zastosowanie tego interfejsu mo\xc5\xbc""e prowadzi\xc4\x87 do kolidowania interpolacji kapsu\xc5\x82y do zadanej orientacji.*/" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_AI_CharacterInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ENG:\nAn important function often called in Gameplay Abilities and other Sequences*. Calling this interface function allows you to lock or unlock the base orientation\ncontrol system of the character. Most UCharacter classes in the AGLS project contain their own approach to controlling the capsule rotation. However, in some\nsituations, e.g. when performing a pick-up sequence, you want to use a different way of calculating rotation. To do this, you can lock the base rotation system\nfor the duration of the sequence, set your own orientation with SetActorRotation() + UpdateRotationVariables(...)*, and then unlock the rotation system. It is\nimportant to remember to unlock by calling back this interface! Failure to use this interface may result in capsule interpolation being colored to the given\norientation.\n\nPL:\nWa\xc5\xbcna funkcja cz\xc4\x99sto wywo\xc5\x82ywana w Gameplay Abilities oraz innych sekwencjach. Wow\xc5\x82""anie tej funkcji interfejsu pozwala na zablokowanie lub odblokowanie bazowego\nsystemu sterowania orientacj\xc4\x85 charakteru. Wi\xc4\x99kszo\xc5\x9b\xc4\x87 klas UCharacter  w projekcie AGLS zawiera w\xc5\x82""asne podej\xc5\x9b""cie do kontrolowania rotacj\xc4\x85 kapsu\xc5\x82y. Jednak w niek\xc3\xb3rych\nsytuacjach np. kiedy wykonujemy sekwencj\xc4\x99 podnoszenia przedmiotu chcemy zastosowa\xc4\x87 inny spos\xc3\xb3""b obliczania rotacji. W tym celu na czas trwania sekwencji mo\xc5\xbcna\nzablokowa\xc4\x87 bazowy system rotacji, ustawi\xc4\x87 w\xc5\x82""asn\xc4\x85 orientacj\xc4\x99 SetActorRotation() + UpdateRotationVariables(...)*, a nast\xc4\x99pnie odblokowa\xc4\x87 system rotacji. Wa\xc5\xbcne jest\naby pami\xc4\x99ta\xc4\x87 o odblokowaniu. Nie zastosowanie tego interfejsu mo\xc5\xbc""e prowadzi\xc4\x87 do kolidowania interpolacji kapsu\xc5\x82y do zadanej orientacji." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function BPI_AI_Set_LockRotationUpdate constinit property declarations *********
	static void NewProp_LockUpdate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_LockUpdate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BPI_AI_Set_LockRotationUpdate constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BPI_AI_Set_LockRotationUpdate Property Definitions ********************
void Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_LockRotationUpdate_Statics::NewProp_LockUpdate_SetBit(void* Obj)
{
	((AGLS_AI_CharacterInterface_eventBPI_AI_Set_LockRotationUpdate_Parms*)Obj)->LockUpdate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_LockRotationUpdate_Statics::NewProp_LockUpdate = { "LockUpdate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Set_LockRotationUpdate_Parms), &Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_LockRotationUpdate_Statics::NewProp_LockUpdate_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_LockRotationUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_LockRotationUpdate_Statics::NewProp_LockUpdate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_LockRotationUpdate_Statics::PropPointers) < 2048);
// ********** End Function BPI_AI_Set_LockRotationUpdate Property Definitions **********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_LockRotationUpdate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_CharacterInterface, nullptr, "BPI_AI_Set_LockRotationUpdate", 	Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_LockRotationUpdate_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_LockRotationUpdate_Statics::PropPointers), 
sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Set_LockRotationUpdate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_LockRotationUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_LockRotationUpdate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Set_LockRotationUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_LockRotationUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_LockRotationUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAGLS_AI_CharacterInterface::execBPI_AI_Set_LockRotationUpdate)
{
	P_GET_UBOOL(Z_Param_LockUpdate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_AI_Set_LockRotationUpdate_Implementation(Z_Param_LockUpdate);
	P_NATIVE_END;
}
// ********** End Interface UAGLS_AI_CharacterInterface Function BPI_AI_Set_LockRotationUpdate *****

// ********** Begin Interface UAGLS_AI_CharacterInterface Function BPI_AI_Set_MovementAction *******
struct AGLS_AI_CharacterInterface_eventBPI_AI_Set_MovementAction_Parms
{
	CALS_MovementAction NewAction;
};
void IAGLS_AI_CharacterInterface::BPI_AI_Set_MovementAction(CALS_MovementAction NewAction)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_AI_Set_MovementAction instead.");
}
static FName NAME_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementAction = FName(TEXT("BPI_AI_Set_MovementAction"));
void IAGLS_AI_CharacterInterface::Execute_BPI_AI_Set_MovementAction(UObject* O, CALS_MovementAction NewAction)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UAGLS_AI_CharacterInterface::StaticClass()));
	AGLS_AI_CharacterInterface_eventBPI_AI_Set_MovementAction_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementAction);
	if (Func)
	{
		Parms.NewAction=std::move(NewAction);
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IAGLS_AI_CharacterInterface*)(O->GetNativeInterfaceAddress(UAGLS_AI_CharacterInterface::StaticClass())))
	{
		I->BPI_AI_Set_MovementAction_Implementation(NewAction);
	}
}
struct Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BPI AI Character|Set" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Set Movement Action By Changing Enum Value. The functionality of this function is similar to that in the basic version of the AdvancedLocomotionSystemV4 UE4 project.*/" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_AI_CharacterInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set Movement Action By Changing Enum Value. The functionality of this function is similar to that in the basic version of the AdvancedLocomotionSystemV4 UE4 project." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function BPI_AI_Set_MovementAction constinit property declarations *************
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewAction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BPI_AI_Set_MovementAction constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BPI_AI_Set_MovementAction Property Definitions ************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementAction_Statics::NewProp_NewAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementAction_Statics::NewProp_NewAction = { "NewAction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_Set_MovementAction_Parms, NewAction), Z_Construct_UEnum_HelpfulFunctions_CALS_MovementAction, METADATA_PARAMS(0, nullptr) }; // 3164101472
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementAction_Statics::NewProp_NewAction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementAction_Statics::NewProp_NewAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementAction_Statics::PropPointers) < 2048);
// ********** End Function BPI_AI_Set_MovementAction Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementAction_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_CharacterInterface, nullptr, "BPI_AI_Set_MovementAction", 	Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementAction_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementAction_Statics::PropPointers), 
sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Set_MovementAction_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementAction_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Set_MovementAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAGLS_AI_CharacterInterface::execBPI_AI_Set_MovementAction)
{
	P_GET_ENUM(CALS_MovementAction,Z_Param_NewAction);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_AI_Set_MovementAction_Implementation(CALS_MovementAction(Z_Param_NewAction));
	P_NATIVE_END;
}
// ********** End Interface UAGLS_AI_CharacterInterface Function BPI_AI_Set_MovementAction *********

// ********** Begin Interface UAGLS_AI_CharacterInterface Function BPI_AI_Set_MovementSettingsByName 
struct AGLS_AI_CharacterInterface_eventBPI_AI_Set_MovementSettingsByName_Parms
{
	FName KeyName;
};
void IAGLS_AI_CharacterInterface::BPI_AI_Set_MovementSettingsByName(FName KeyName)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_AI_Set_MovementSettingsByName instead.");
}
static FName NAME_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementSettingsByName = FName(TEXT("BPI_AI_Set_MovementSettingsByName"));
void IAGLS_AI_CharacterInterface::Execute_BPI_AI_Set_MovementSettingsByName(UObject* O, FName KeyName)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UAGLS_AI_CharacterInterface::StaticClass()));
	AGLS_AI_CharacterInterface_eventBPI_AI_Set_MovementSettingsByName_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementSettingsByName);
	if (Func)
	{
		Parms.KeyName=std::move(KeyName);
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IAGLS_AI_CharacterInterface*)(O->GetNativeInterfaceAddress(UAGLS_AI_CharacterInterface::StaticClass())))
	{
		I->BPI_AI_Set_MovementSettingsByName_Implementation(KeyName);
	}
}
struct Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementSettingsByName_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BPI AI Character|Set" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*ENG:\nAfter properly overriding the function definition, it can affect the CharacterMovement Settings by setting the so-called 'Movement Models'. Some of these parameters in \nthe CharacterMovementComponent can be:\n- float Acceleration (taken from Curve Vector)\n- float Deceleration (taken from Curve Vector)\n- float GroundFriction (taken from Curve Vector)\nAdditionally, the Movement Model can affect the capsule interpolation speed (Rotation Curve).\n\nPL:\nPo odpowiednim nadpisaniu definicji funkcji, mo\xc5\xbc""e ona wp\xc5\x82ywa\xc4\x87 na CharacterMovement Settings ustawiaj\xc4\x85""c tak zwane 'Movement Models'. Jednymi z takich parametr\xc3\xb3w ...*/" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_AI_CharacterInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ENG:\nAfter properly overriding the function definition, it can affect the CharacterMovement Settings by setting the so-called 'Movement Models'. Some of these parameters in\nthe CharacterMovementComponent can be:\n- float Acceleration (taken from Curve Vector)\n- float Deceleration (taken from Curve Vector)\n- float GroundFriction (taken from Curve Vector)\nAdditionally, the Movement Model can affect the capsule interpolation speed (Rotation Curve).\n\nPL:\nPo odpowiednim nadpisaniu definicji funkcji, mo\xc5\xbc""e ona wp\xc5\x82ywa\xc4\x87 na CharacterMovement Settings ustawiaj\xc4\x85""c tak zwane 'Movement Models'. Jednymi z takich parametr\xc3\xb3w ..." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function BPI_AI_Set_MovementSettingsByName constinit property declarations *****
	static const UECodeGen_Private::FNamePropertyParams NewProp_KeyName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BPI_AI_Set_MovementSettingsByName constinit property declarations *******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BPI_AI_Set_MovementSettingsByName Property Definitions ****************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementSettingsByName_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_Set_MovementSettingsByName_Parms, KeyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementSettingsByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementSettingsByName_Statics::NewProp_KeyName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementSettingsByName_Statics::PropPointers) < 2048);
// ********** End Function BPI_AI_Set_MovementSettingsByName Property Definitions ******************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementSettingsByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_CharacterInterface, nullptr, "BPI_AI_Set_MovementSettingsByName", 	Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementSettingsByName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementSettingsByName_Statics::PropPointers), 
sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Set_MovementSettingsByName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementSettingsByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementSettingsByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Set_MovementSettingsByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementSettingsByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementSettingsByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAGLS_AI_CharacterInterface::execBPI_AI_Set_MovementSettingsByName)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_KeyName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_AI_Set_MovementSettingsByName_Implementation(Z_Param_KeyName);
	P_NATIVE_END;
}
// ********** End Interface UAGLS_AI_CharacterInterface Function BPI_AI_Set_MovementSettingsByName *

// ********** Begin Interface UAGLS_AI_CharacterInterface Function BPI_AI_Set_MovementState ********
struct AGLS_AI_CharacterInterface_eventBPI_AI_Set_MovementState_Parms
{
	CALS_MovementState NewState;
};
void IAGLS_AI_CharacterInterface::BPI_AI_Set_MovementState(CALS_MovementState NewState)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_AI_Set_MovementState instead.");
}
static FName NAME_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementState = FName(TEXT("BPI_AI_Set_MovementState"));
void IAGLS_AI_CharacterInterface::Execute_BPI_AI_Set_MovementState(UObject* O, CALS_MovementState NewState)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UAGLS_AI_CharacterInterface::StaticClass()));
	AGLS_AI_CharacterInterface_eventBPI_AI_Set_MovementState_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementState);
	if (Func)
	{
		Parms.NewState=std::move(NewState);
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IAGLS_AI_CharacterInterface*)(O->GetNativeInterfaceAddress(UAGLS_AI_CharacterInterface::StaticClass())))
	{
		I->BPI_AI_Set_MovementState_Implementation(NewState);
	}
}
struct Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BPI AI Character|Set" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Set Movement State By Changing Enum Value. The functionality of this function is similar to that in the basic version of the AdvancedLocomotionSystemV4 UE4 project.*/" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_AI_CharacterInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set Movement State By Changing Enum Value. The functionality of this function is similar to that in the basic version of the AdvancedLocomotionSystemV4 UE4 project." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function BPI_AI_Set_MovementState constinit property declarations **************
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BPI_AI_Set_MovementState constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BPI_AI_Set_MovementState Property Definitions *************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementState_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_Set_MovementState_Parms, NewState), Z_Construct_UEnum_HelpfulFunctions_CALS_MovementState, METADATA_PARAMS(0, nullptr) }; // 2334433285
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementState_Statics::NewProp_NewState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementState_Statics::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementState_Statics::PropPointers) < 2048);
// ********** End Function BPI_AI_Set_MovementState Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_CharacterInterface, nullptr, "BPI_AI_Set_MovementState", 	Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementState_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementState_Statics::PropPointers), 
sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Set_MovementState_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Set_MovementState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAGLS_AI_CharacterInterface::execBPI_AI_Set_MovementState)
{
	P_GET_ENUM(CALS_MovementState,Z_Param_NewState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_AI_Set_MovementState_Implementation(CALS_MovementState(Z_Param_NewState));
	P_NATIVE_END;
}
// ********** End Interface UAGLS_AI_CharacterInterface Function BPI_AI_Set_MovementState **********

// ********** Begin Interface UAGLS_AI_CharacterInterface Function BPI_AI_Set_OverlayState *********
struct AGLS_AI_CharacterInterface_eventBPI_AI_Set_OverlayState_Parms
{
	CALS_OverlayState NewState;
	bool Forced;
};
void IAGLS_AI_CharacterInterface::BPI_AI_Set_OverlayState(CALS_OverlayState NewState, bool Forced)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_AI_Set_OverlayState instead.");
}
static FName NAME_UAGLS_AI_CharacterInterface_BPI_AI_Set_OverlayState = FName(TEXT("BPI_AI_Set_OverlayState"));
void IAGLS_AI_CharacterInterface::Execute_BPI_AI_Set_OverlayState(UObject* O, CALS_OverlayState NewState, bool Forced)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UAGLS_AI_CharacterInterface::StaticClass()));
	AGLS_AI_CharacterInterface_eventBPI_AI_Set_OverlayState_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UAGLS_AI_CharacterInterface_BPI_AI_Set_OverlayState);
	if (Func)
	{
		Parms.NewState=std::move(NewState);
		Parms.Forced=std::move(Forced);
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IAGLS_AI_CharacterInterface*)(O->GetNativeInterfaceAddress(UAGLS_AI_CharacterInterface::StaticClass())))
	{
		I->BPI_AI_Set_OverlayState_Implementation(NewState,Forced);
	}
}
struct Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_OverlayState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BPI AI Character|Set" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Set Overlay State. Mainly prepared for Human AI Characters. Zombies dont have overlay states similar to ALS project. The functionality of this function is similar \nto that in the basic version of the AdvancedLocomotionSystemV4 UE4 project.*/" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_AI_CharacterInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set Overlay State. Mainly prepared for Human AI Characters. Zombies dont have overlay states similar to ALS project. The functionality of this function is similar\nto that in the basic version of the AdvancedLocomotionSystemV4 UE4 project." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function BPI_AI_Set_OverlayState constinit property declarations ***************
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewState;
	static void NewProp_Forced_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Forced;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BPI_AI_Set_OverlayState constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BPI_AI_Set_OverlayState Property Definitions **************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_OverlayState_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_OverlayState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_Set_OverlayState_Parms, NewState), Z_Construct_UEnum_HelpfulFunctions_CALS_OverlayState, METADATA_PARAMS(0, nullptr) }; // 3161285749
void Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_OverlayState_Statics::NewProp_Forced_SetBit(void* Obj)
{
	((AGLS_AI_CharacterInterface_eventBPI_AI_Set_OverlayState_Parms*)Obj)->Forced = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_OverlayState_Statics::NewProp_Forced = { "Forced", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Set_OverlayState_Parms), &Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_OverlayState_Statics::NewProp_Forced_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_OverlayState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_OverlayState_Statics::NewProp_NewState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_OverlayState_Statics::NewProp_NewState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_OverlayState_Statics::NewProp_Forced,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_OverlayState_Statics::PropPointers) < 2048);
// ********** End Function BPI_AI_Set_OverlayState Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_OverlayState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_CharacterInterface, nullptr, "BPI_AI_Set_OverlayState", 	Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_OverlayState_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_OverlayState_Statics::PropPointers), 
sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Set_OverlayState_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_OverlayState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_OverlayState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Set_OverlayState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_OverlayState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_OverlayState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAGLS_AI_CharacterInterface::execBPI_AI_Set_OverlayState)
{
	P_GET_ENUM(CALS_OverlayState,Z_Param_NewState);
	P_GET_UBOOL(Z_Param_Forced);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_AI_Set_OverlayState_Implementation(CALS_OverlayState(Z_Param_NewState),Z_Param_Forced);
	P_NATIVE_END;
}
// ********** End Interface UAGLS_AI_CharacterInterface Function BPI_AI_Set_OverlayState ***********

// ********** Begin Interface UAGLS_AI_CharacterInterface Function BPI_AI_Set_PathFollowActor ******
struct AGLS_AI_CharacterInterface_eventBPI_AI_Set_PathFollowActor_Parms
{
	AActor* PathActor;
};
void IAGLS_AI_CharacterInterface::BPI_AI_Set_PathFollowActor(AActor* PathActor)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_AI_Set_PathFollowActor instead.");
}
static FName NAME_UAGLS_AI_CharacterInterface_BPI_AI_Set_PathFollowActor = FName(TEXT("BPI_AI_Set_PathFollowActor"));
void IAGLS_AI_CharacterInterface::Execute_BPI_AI_Set_PathFollowActor(UObject* O, AActor* PathActor)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UAGLS_AI_CharacterInterface::StaticClass()));
	AGLS_AI_CharacterInterface_eventBPI_AI_Set_PathFollowActor_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UAGLS_AI_CharacterInterface_BPI_AI_Set_PathFollowActor);
	if (Func)
	{
		Parms.PathActor=std::move(PathActor);
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IAGLS_AI_CharacterInterface*)(O->GetNativeInterfaceAddress(UAGLS_AI_CharacterInterface::StaticClass())))
	{
		I->BPI_AI_Set_PathFollowActor_Implementation(PathActor);
	}
}
struct Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_PathFollowActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BPI AI Character|Set" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Set Path To Follow Actor by using interface call\n" },
#endif
		{ "ForceAsFunction", "" },
		{ "ModuleRelativePath", "Public/AGLS_AI_CharacterInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set Path To Follow Actor by using interface call" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function BPI_AI_Set_PathFollowActor constinit property declarations ************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PathActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BPI_AI_Set_PathFollowActor constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BPI_AI_Set_PathFollowActor Property Definitions ***********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_PathFollowActor_Statics::NewProp_PathActor = { "PathActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_Set_PathFollowActor_Parms, PathActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_PathFollowActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_PathFollowActor_Statics::NewProp_PathActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_PathFollowActor_Statics::PropPointers) < 2048);
// ********** End Function BPI_AI_Set_PathFollowActor Property Definitions *************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_PathFollowActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_CharacterInterface, nullptr, "BPI_AI_Set_PathFollowActor", 	Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_PathFollowActor_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_PathFollowActor_Statics::PropPointers), 
sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Set_PathFollowActor_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_PathFollowActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_PathFollowActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Set_PathFollowActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_PathFollowActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_PathFollowActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAGLS_AI_CharacterInterface::execBPI_AI_Set_PathFollowActor)
{
	P_GET_OBJECT(AActor,Z_Param_PathActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_AI_Set_PathFollowActor_Implementation(Z_Param_PathActor);
	P_NATIVE_END;
}
// ********** End Interface UAGLS_AI_CharacterInterface Function BPI_AI_Set_PathFollowActor ********

// ********** Begin Interface UAGLS_AI_CharacterInterface Function BPI_AI_Set_RotationMode *********
struct AGLS_AI_CharacterInterface_eventBPI_AI_Set_RotationMode_Parms
{
	CALS_RotationMode NewMode;
};
void IAGLS_AI_CharacterInterface::BPI_AI_Set_RotationMode(CALS_RotationMode NewMode)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_AI_Set_RotationMode instead.");
}
static FName NAME_UAGLS_AI_CharacterInterface_BPI_AI_Set_RotationMode = FName(TEXT("BPI_AI_Set_RotationMode"));
void IAGLS_AI_CharacterInterface::Execute_BPI_AI_Set_RotationMode(UObject* O, CALS_RotationMode NewMode)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UAGLS_AI_CharacterInterface::StaticClass()));
	AGLS_AI_CharacterInterface_eventBPI_AI_Set_RotationMode_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UAGLS_AI_CharacterInterface_BPI_AI_Set_RotationMode);
	if (Func)
	{
		Parms.NewMode=std::move(NewMode);
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IAGLS_AI_CharacterInterface*)(O->GetNativeInterfaceAddress(UAGLS_AI_CharacterInterface::StaticClass())))
	{
		I->BPI_AI_Set_RotationMode_Implementation(NewMode);
	}
}
struct Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_RotationMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BPI AI Character|Set" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Set Rotation Mode By Changing Enum Value. The functionality of this function is similar to that in the basic version of the AdvancedLocomotionSystemV4 UE4 project.*/" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_AI_CharacterInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set Rotation Mode By Changing Enum Value. The functionality of this function is similar to that in the basic version of the AdvancedLocomotionSystemV4 UE4 project." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function BPI_AI_Set_RotationMode constinit property declarations ***************
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BPI_AI_Set_RotationMode constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BPI_AI_Set_RotationMode Property Definitions **************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_RotationMode_Statics::NewProp_NewMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_RotationMode_Statics::NewProp_NewMode = { "NewMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_Set_RotationMode_Parms, NewMode), Z_Construct_UEnum_HelpfulFunctions_CALS_RotationMode, METADATA_PARAMS(0, nullptr) }; // 752773085
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_RotationMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_RotationMode_Statics::NewProp_NewMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_RotationMode_Statics::NewProp_NewMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_RotationMode_Statics::PropPointers) < 2048);
// ********** End Function BPI_AI_Set_RotationMode Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_RotationMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_CharacterInterface, nullptr, "BPI_AI_Set_RotationMode", 	Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_RotationMode_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_RotationMode_Statics::PropPointers), 
sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Set_RotationMode_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_RotationMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_RotationMode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Set_RotationMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_RotationMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_RotationMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAGLS_AI_CharacterInterface::execBPI_AI_Set_RotationMode)
{
	P_GET_ENUM(CALS_RotationMode,Z_Param_NewMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_AI_Set_RotationMode_Implementation(CALS_RotationMode(Z_Param_NewMode));
	P_NATIVE_END;
}
// ********** End Interface UAGLS_AI_CharacterInterface Function BPI_AI_Set_RotationMode ***********

// ********** Begin Interface UAGLS_AI_CharacterInterface Function BPI_AI_Set_StruckCharacter ******
struct AGLS_AI_CharacterInterface_eventBPI_AI_Set_StruckCharacter_Parms
{
	ACharacter* From;
	ACharacter* To;
	float Damage;
	FHitResult InHitInfo;
};
void IAGLS_AI_CharacterInterface::BPI_AI_Set_StruckCharacter(ACharacter* From, ACharacter* To, float Damage, FHitResult InHitInfo)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_AI_Set_StruckCharacter instead.");
}
static FName NAME_UAGLS_AI_CharacterInterface_BPI_AI_Set_StruckCharacter = FName(TEXT("BPI_AI_Set_StruckCharacter"));
void IAGLS_AI_CharacterInterface::Execute_BPI_AI_Set_StruckCharacter(UObject* O, ACharacter* From, ACharacter* To, float Damage, FHitResult InHitInfo)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UAGLS_AI_CharacterInterface::StaticClass()));
	AGLS_AI_CharacterInterface_eventBPI_AI_Set_StruckCharacter_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UAGLS_AI_CharacterInterface_BPI_AI_Set_StruckCharacter);
	if (Func)
	{
		Parms.From=std::move(From);
		Parms.To=std::move(To);
		Parms.Damage=std::move(Damage);
		Parms.InHitInfo=std::move(InHitInfo);
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IAGLS_AI_CharacterInterface*)(O->GetNativeInterfaceAddress(UAGLS_AI_CharacterInterface::StaticClass())))
	{
		I->BPI_AI_Set_StruckCharacter_Implementation(From,To,Damage,InHitInfo);
	}
}
struct Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_StruckCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BPI AI Character|Set" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\nThe purpose of this function is similar to 'BPI_AI_BumpReactTrigger'. However, in this case it mainly concerns 'HumanAI Characters'.\n\xf0\x9d\x90\x8d\xf0\x9d\x90\x8e\xf0\x9d\x90\x93\xf0\x9d\x90\x84: By default, it is also used in the case of the ZombieCharacter class to transfer damage to attacked enemies\n*/" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_AI_CharacterInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The purpose of this function is similar to 'BPI_AI_BumpReactTrigger'. However, in this case it mainly concerns 'HumanAI Characters'.\n\xf0\x9d\x90\x8d\xf0\x9d\x90\x8e\xf0\x9d\x90\x93\xf0\x9d\x90\x84: By default, it is also used in the case of the ZombieCharacter class to transfer damage to attacked enemies" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function BPI_AI_Set_StruckCharacter constinit property declarations ************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_From;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_To;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InHitInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BPI_AI_Set_StruckCharacter constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BPI_AI_Set_StruckCharacter Property Definitions ***********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_StruckCharacter_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_Set_StruckCharacter_Parms, From), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_StruckCharacter_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_Set_StruckCharacter_Parms, To), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_StruckCharacter_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_Set_StruckCharacter_Parms, Damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_StruckCharacter_Statics::NewProp_InHitInfo = { "InHitInfo", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_Set_StruckCharacter_Parms, InHitInfo), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 222120718
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_StruckCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_StruckCharacter_Statics::NewProp_From,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_StruckCharacter_Statics::NewProp_To,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_StruckCharacter_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_StruckCharacter_Statics::NewProp_InHitInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_StruckCharacter_Statics::PropPointers) < 2048);
// ********** End Function BPI_AI_Set_StruckCharacter Property Definitions *************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_StruckCharacter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_CharacterInterface, nullptr, "BPI_AI_Set_StruckCharacter", 	Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_StruckCharacter_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_StruckCharacter_Statics::PropPointers), 
sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Set_StruckCharacter_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_StruckCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_StruckCharacter_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Set_StruckCharacter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_StruckCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_StruckCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAGLS_AI_CharacterInterface::execBPI_AI_Set_StruckCharacter)
{
	P_GET_OBJECT(ACharacter,Z_Param_From);
	P_GET_OBJECT(ACharacter,Z_Param_To);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
	P_GET_STRUCT(FHitResult,Z_Param_InHitInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_AI_Set_StruckCharacter_Implementation(Z_Param_From,Z_Param_To,Z_Param_Damage,Z_Param_InHitInfo);
	P_NATIVE_END;
}
// ********** End Interface UAGLS_AI_CharacterInterface Function BPI_AI_Set_StruckCharacter ********

// ********** Begin Interface UAGLS_AI_CharacterInterface Function BPI_AI_TryOnlyRunDamageFX *******
struct AGLS_AI_CharacterInterface_eventBPI_AI_TryOnlyRunDamageFX_Parms
{
	ACharacter* Attacker;
	int32 HitType;
	CALS_OverlayState InOverlay;
	FHitResult HitInfo;
};
void IAGLS_AI_CharacterInterface::BPI_AI_TryOnlyRunDamageFX(ACharacter* Attacker, int32 HitType, CALS_OverlayState InOverlay, FHitResult HitInfo)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_AI_TryOnlyRunDamageFX instead.");
}
static FName NAME_UAGLS_AI_CharacterInterface_BPI_AI_TryOnlyRunDamageFX = FName(TEXT("BPI_AI_TryOnlyRunDamageFX"));
void IAGLS_AI_CharacterInterface::Execute_BPI_AI_TryOnlyRunDamageFX(UObject* O, ACharacter* Attacker, int32 HitType, CALS_OverlayState InOverlay, FHitResult HitInfo)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UAGLS_AI_CharacterInterface::StaticClass()));
	AGLS_AI_CharacterInterface_eventBPI_AI_TryOnlyRunDamageFX_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UAGLS_AI_CharacterInterface_BPI_AI_TryOnlyRunDamageFX);
	if (Func)
	{
		Parms.Attacker=std::move(Attacker);
		Parms.HitType=std::move(HitType);
		Parms.InOverlay=std::move(InOverlay);
		Parms.HitInfo=std::move(HitInfo);
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IAGLS_AI_CharacterInterface*)(O->GetNativeInterfaceAddress(UAGLS_AI_CharacterInterface::StaticClass())))
	{
		I->BPI_AI_TryOnlyRunDamageFX_Implementation(Attacker,HitType,InOverlay,HitInfo);
	}
}
struct Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_TryOnlyRunDamageFX_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BPI AI Character|Set" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\n\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88 \xf0\x9d\x90\x8c\xf0\x9d\x90\x84\xf0\x9d\x90\x8b\xf0\x9d\x90\x84\xf0\x9d\x90\x84 \xf0\x9d\x90\x82\xf0\x9d\x90\x8e\xf0\x9d\x90\x8c\xf0\x9d\x90\x81\xf0\x9d\x90\x80\xf0\x9d\x90\x93 \xf0\x9d\x90\x92\xf0\x9d\x90\x98\xf0\x9d\x90\x92\xf0\x9d\x90\x93\xf0\x9d\x90\x84\xf0\x9d\x90\x8c \xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\n\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\nAGLS v1.8 - Try Activate Damage Effects like BloodParticles, MeshDeformation, Decals \nbut not take REAL damage for Character (Not Change Health Points)\n\nTo function properly, the Character implementing the function as an Event must contain code defining visual effects\n*/" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_AI_CharacterInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\n\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88 \xf0\x9d\x90\x8c\xf0\x9d\x90\x84\xf0\x9d\x90\x8b\xf0\x9d\x90\x84\xf0\x9d\x90\x84 \xf0\x9d\x90\x82\xf0\x9d\x90\x8e\xf0\x9d\x90\x8c\xf0\x9d\x90\x81\xf0\x9d\x90\x80\xf0\x9d\x90\x93 \xf0\x9d\x90\x92\xf0\x9d\x90\x98\xf0\x9d\x90\x92\xf0\x9d\x90\x93\xf0\x9d\x90\x84\xf0\x9d\x90\x8c \xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\n\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\nAGLS v1.8 - Try Activate Damage Effects like BloodParticles, MeshDeformation, Decals\nbut not take REAL damage for Character (Not Change Health Points)\n\nTo function properly, the Character implementing the function as an Event must contain code defining visual effects" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function BPI_AI_TryOnlyRunDamageFX constinit property declarations *************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Attacker;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HitType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InOverlay_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InOverlay;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BPI_AI_TryOnlyRunDamageFX constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BPI_AI_TryOnlyRunDamageFX Property Definitions ************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_TryOnlyRunDamageFX_Statics::NewProp_Attacker = { "Attacker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_TryOnlyRunDamageFX_Parms, Attacker), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_TryOnlyRunDamageFX_Statics::NewProp_HitType = { "HitType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_TryOnlyRunDamageFX_Parms, HitType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_TryOnlyRunDamageFX_Statics::NewProp_InOverlay_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_TryOnlyRunDamageFX_Statics::NewProp_InOverlay = { "InOverlay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_TryOnlyRunDamageFX_Parms, InOverlay), Z_Construct_UEnum_HelpfulFunctions_CALS_OverlayState, METADATA_PARAMS(0, nullptr) }; // 3161285749
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_TryOnlyRunDamageFX_Statics::NewProp_HitInfo = { "HitInfo", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_TryOnlyRunDamageFX_Parms, HitInfo), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 222120718
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_TryOnlyRunDamageFX_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_TryOnlyRunDamageFX_Statics::NewProp_Attacker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_TryOnlyRunDamageFX_Statics::NewProp_HitType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_TryOnlyRunDamageFX_Statics::NewProp_InOverlay_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_TryOnlyRunDamageFX_Statics::NewProp_InOverlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_TryOnlyRunDamageFX_Statics::NewProp_HitInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_TryOnlyRunDamageFX_Statics::PropPointers) < 2048);
// ********** End Function BPI_AI_TryOnlyRunDamageFX Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_TryOnlyRunDamageFX_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_CharacterInterface, nullptr, "BPI_AI_TryOnlyRunDamageFX", 	Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_TryOnlyRunDamageFX_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_TryOnlyRunDamageFX_Statics::PropPointers), 
sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_TryOnlyRunDamageFX_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_TryOnlyRunDamageFX_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_TryOnlyRunDamageFX_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_TryOnlyRunDamageFX_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_TryOnlyRunDamageFX()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_TryOnlyRunDamageFX_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAGLS_AI_CharacterInterface::execBPI_AI_TryOnlyRunDamageFX)
{
	P_GET_OBJECT(ACharacter,Z_Param_Attacker);
	P_GET_PROPERTY(FIntProperty,Z_Param_HitType);
	P_GET_ENUM(CALS_OverlayState,Z_Param_InOverlay);
	P_GET_STRUCT(FHitResult,Z_Param_HitInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_AI_TryOnlyRunDamageFX_Implementation(Z_Param_Attacker,Z_Param_HitType,CALS_OverlayState(Z_Param_InOverlay),Z_Param_HitInfo);
	P_NATIVE_END;
}
// ********** End Interface UAGLS_AI_CharacterInterface Function BPI_AI_TryOnlyRunDamageFX *********

// ********** Begin Interface UAGLS_AI_CharacterInterface Function BPI_AI_TrySetupNewGunComponent **
struct AGLS_AI_CharacterInterface_eventBPI_AI_TrySetupNewGunComponent_Parms
{
	bool Successful;
	bool AsPistolConfig;
	int32 WeaponModelIndex;
	AActor* FromSceneInstance;
	int32 InInstanceAmmoCount;
	int32 InInstanceMagazineCount;
};
void IAGLS_AI_CharacterInterface::BPI_AI_TrySetupNewGunComponent(bool& Successful, bool AsPistolConfig, int32 WeaponModelIndex, AActor* FromSceneInstance, int32 InInstanceAmmoCount, int32 InInstanceMagazineCount)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_AI_TrySetupNewGunComponent instead.");
}
static FName NAME_UAGLS_AI_CharacterInterface_BPI_AI_TrySetupNewGunComponent = FName(TEXT("BPI_AI_TrySetupNewGunComponent"));
void IAGLS_AI_CharacterInterface::Execute_BPI_AI_TrySetupNewGunComponent(UObject* O, bool& Successful, bool AsPistolConfig, int32 WeaponModelIndex, AActor* FromSceneInstance, int32 InInstanceAmmoCount, int32 InInstanceMagazineCount)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UAGLS_AI_CharacterInterface::StaticClass()));
	AGLS_AI_CharacterInterface_eventBPI_AI_TrySetupNewGunComponent_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UAGLS_AI_CharacterInterface_BPI_AI_TrySetupNewGunComponent);
	if (Func)
	{
		Parms.Successful=std::move(Successful);
		Parms.AsPistolConfig=std::move(AsPistolConfig);
		Parms.WeaponModelIndex=std::move(WeaponModelIndex);
		Parms.FromSceneInstance=std::move(FromSceneInstance);
		Parms.InInstanceAmmoCount=std::move(InInstanceAmmoCount);
		Parms.InInstanceMagazineCount=std::move(InInstanceMagazineCount);
		O->ProcessEvent(Func, &Parms);
		Successful=std::move(Parms.Successful);
	}
	else if (auto I = (IAGLS_AI_CharacterInterface*)(O->GetNativeInterfaceAddress(UAGLS_AI_CharacterInterface::StaticClass())))
	{
		I->BPI_AI_TrySetupNewGunComponent_Implementation(Successful,AsPistolConfig,WeaponModelIndex,FromSceneInstance,InInstanceAmmoCount,InInstanceMagazineCount);
	}
}
struct Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_TrySetupNewGunComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BPI AI Character|Set" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\n\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88 Try Setup New Rifle/Pistol for Character \xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\n\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\n*/" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_AI_CharacterInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\xe2\x96\x83\n\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88 Try Setup New Rifle/Pistol for Character \xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\n\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94\xe2\x96\x94" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function BPI_AI_TrySetupNewGunComponent constinit property declarations ********
	static void NewProp_Successful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Successful;
	static void NewProp_AsPistolConfig_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AsPistolConfig;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WeaponModelIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FromSceneInstance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InInstanceAmmoCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InInstanceMagazineCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BPI_AI_TrySetupNewGunComponent constinit property declarations **********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BPI_AI_TrySetupNewGunComponent Property Definitions *******************
void Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_TrySetupNewGunComponent_Statics::NewProp_Successful_SetBit(void* Obj)
{
	((AGLS_AI_CharacterInterface_eventBPI_AI_TrySetupNewGunComponent_Parms*)Obj)->Successful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_TrySetupNewGunComponent_Statics::NewProp_Successful = { "Successful", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_TrySetupNewGunComponent_Parms), &Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_TrySetupNewGunComponent_Statics::NewProp_Successful_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_TrySetupNewGunComponent_Statics::NewProp_AsPistolConfig_SetBit(void* Obj)
{
	((AGLS_AI_CharacterInterface_eventBPI_AI_TrySetupNewGunComponent_Parms*)Obj)->AsPistolConfig = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_TrySetupNewGunComponent_Statics::NewProp_AsPistolConfig = { "AsPistolConfig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_TrySetupNewGunComponent_Parms), &Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_TrySetupNewGunComponent_Statics::NewProp_AsPistolConfig_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_TrySetupNewGunComponent_Statics::NewProp_WeaponModelIndex = { "WeaponModelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_TrySetupNewGunComponent_Parms, WeaponModelIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_TrySetupNewGunComponent_Statics::NewProp_FromSceneInstance = { "FromSceneInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_TrySetupNewGunComponent_Parms, FromSceneInstance), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_TrySetupNewGunComponent_Statics::NewProp_InInstanceAmmoCount = { "InInstanceAmmoCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_TrySetupNewGunComponent_Parms, InInstanceAmmoCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_TrySetupNewGunComponent_Statics::NewProp_InInstanceMagazineCount = { "InInstanceMagazineCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_TrySetupNewGunComponent_Parms, InInstanceMagazineCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_TrySetupNewGunComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_TrySetupNewGunComponent_Statics::NewProp_Successful,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_TrySetupNewGunComponent_Statics::NewProp_AsPistolConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_TrySetupNewGunComponent_Statics::NewProp_WeaponModelIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_TrySetupNewGunComponent_Statics::NewProp_FromSceneInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_TrySetupNewGunComponent_Statics::NewProp_InInstanceAmmoCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_TrySetupNewGunComponent_Statics::NewProp_InInstanceMagazineCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_TrySetupNewGunComponent_Statics::PropPointers) < 2048);
// ********** End Function BPI_AI_TrySetupNewGunComponent Property Definitions *********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_TrySetupNewGunComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_CharacterInterface, nullptr, "BPI_AI_TrySetupNewGunComponent", 	Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_TrySetupNewGunComponent_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_TrySetupNewGunComponent_Statics::PropPointers), 
sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_TrySetupNewGunComponent_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_TrySetupNewGunComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_TrySetupNewGunComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_TrySetupNewGunComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_TrySetupNewGunComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_TrySetupNewGunComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAGLS_AI_CharacterInterface::execBPI_AI_TrySetupNewGunComponent)
{
	P_GET_UBOOL_REF(Z_Param_Out_Successful);
	P_GET_UBOOL(Z_Param_AsPistolConfig);
	P_GET_PROPERTY(FIntProperty,Z_Param_WeaponModelIndex);
	P_GET_OBJECT(AActor,Z_Param_FromSceneInstance);
	P_GET_PROPERTY(FIntProperty,Z_Param_InInstanceAmmoCount);
	P_GET_PROPERTY(FIntProperty,Z_Param_InInstanceMagazineCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_AI_TrySetupNewGunComponent_Implementation(Z_Param_Out_Successful,Z_Param_AsPistolConfig,Z_Param_WeaponModelIndex,Z_Param_FromSceneInstance,Z_Param_InInstanceAmmoCount,Z_Param_InInstanceMagazineCount);
	P_NATIVE_END;
}
// ********** End Interface UAGLS_AI_CharacterInterface Function BPI_AI_TrySetupNewGunComponent ****

// ********** Begin Interface UAGLS_AI_CharacterInterface ******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAGLS_AI_CharacterInterface;
UClass* UAGLS_AI_CharacterInterface::GetPrivateStaticClass()
{
	using TClass = UAGLS_AI_CharacterInterface;
	if (!Z_Registration_Info_UClass_UAGLS_AI_CharacterInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AGLS_AI_CharacterInterface"),
			Z_Registration_Info_UClass_UAGLS_AI_CharacterInterface.InnerSingleton,
			StaticRegisterNativesUAGLS_AI_CharacterInterface,
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
	return Z_Registration_Info_UClass_UAGLS_AI_CharacterInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_UAGLS_AI_CharacterInterface_NoRegister()
{
	return UAGLS_AI_CharacterInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAGLS_AI_CharacterInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "AGLS AI Character Core" },
		{ "DisplayName", "INTERFACE_CharAI_Core" },
		{ "ModuleRelativePath", "Public/AGLS_AI_CharacterInterface.h" },
	};
#endif // WITH_METADATA

// ********** Begin Interface UAGLS_AI_CharacterInterface constinit property declarations **********
// ********** End Interface UAGLS_AI_CharacterInterface constinit property declarations ************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("BPI_AI_AddRemove_GameplayTagInfo"), .Pointer = &IAGLS_AI_CharacterInterface::execBPI_AI_AddRemove_GameplayTagInfo },
		{ .NameUTF8 = UTF8TEXT("BPI_AI_BumpReactTrigger"), .Pointer = &IAGLS_AI_CharacterInterface::execBPI_AI_BumpReactTrigger },
		{ .NameUTF8 = UTF8TEXT("BPI_AI_CanPlayMeleeCombatHitReact"), .Pointer = &IAGLS_AI_CharacterInterface::execBPI_AI_CanPlayMeleeCombatHitReact },
		{ .NameUTF8 = UTF8TEXT("BPI_AI_CrouchOrUncrouch"), .Pointer = &IAGLS_AI_CharacterInterface::execBPI_AI_CrouchOrUncrouch },
		{ .NameUTF8 = UTF8TEXT("BPI_AI_DoWhenIsMarkedAsOpponent"), .Pointer = &IAGLS_AI_CharacterInterface::execBPI_AI_DoWhenIsMarkedAsOpponent },
		{ .NameUTF8 = UTF8TEXT("BPI_AI_FinisherOrMeleeStarted"), .Pointer = &IAGLS_AI_CharacterInterface::execBPI_AI_FinisherOrMeleeStarted },
		{ .NameUTF8 = UTF8TEXT("BPI_AI_Get_CurrentActivatedTask"), .Pointer = &IAGLS_AI_CharacterInterface::execBPI_AI_Get_CurrentActivatedTask },
		{ .NameUTF8 = UTF8TEXT("BPI_AI_Get_CurrentStates"), .Pointer = &IAGLS_AI_CharacterInterface::execBPI_AI_Get_CurrentStates },
		{ .NameUTF8 = UTF8TEXT("BPI_AI_Get_CurrentStatesSafe"), .Pointer = &IAGLS_AI_CharacterInterface::execBPI_AI_Get_CurrentStatesSafe },
		{ .NameUTF8 = UTF8TEXT("BPI_AI_Get_EssentialValues"), .Pointer = &IAGLS_AI_CharacterInterface::execBPI_AI_Get_EssentialValues },
		{ .NameUTF8 = UTF8TEXT("BPI_AI_Get_EssentialValuesSafe"), .Pointer = &IAGLS_AI_CharacterInterface::execBPI_AI_Get_EssentialValuesSafe },
		{ .NameUTF8 = UTF8TEXT("BPI_AI_Get_LocomotionModeIndex"), .Pointer = &IAGLS_AI_CharacterInterface::execBPI_AI_Get_LocomotionModeIndex },
		{ .NameUTF8 = UTF8TEXT("BPI_AI_Get_LOD_State"), .Pointer = &IAGLS_AI_CharacterInterface::execBPI_AI_Get_LOD_State },
		{ .NameUTF8 = UTF8TEXT("BPI_AI_Get_MainTagsContainerData"), .Pointer = &IAGLS_AI_CharacterInterface::execBPI_AI_Get_MainTagsContainerData },
		{ .NameUTF8 = UTF8TEXT("BPI_AI_Get_RotationLocked"), .Pointer = &IAGLS_AI_CharacterInterface::execBPI_AI_Get_RotationLocked },
		{ .NameUTF8 = UTF8TEXT("BPI_AI_GetPathFollowActor"), .Pointer = &IAGLS_AI_CharacterInterface::execBPI_AI_GetPathFollowActor },
		{ .NameUTF8 = UTF8TEXT("BPI_AI_Set_DesiredGait"), .Pointer = &IAGLS_AI_CharacterInterface::execBPI_AI_Set_DesiredGait },
		{ .NameUTF8 = UTF8TEXT("BPI_AI_Set_EnableRagdoll"), .Pointer = &IAGLS_AI_CharacterInterface::execBPI_AI_Set_EnableRagdoll },
		{ .NameUTF8 = UTF8TEXT("BPI_AI_Set_Gait"), .Pointer = &IAGLS_AI_CharacterInterface::execBPI_AI_Set_Gait },
		{ .NameUTF8 = UTF8TEXT("BPI_AI_Set_GrounedMoveMode"), .Pointer = &IAGLS_AI_CharacterInterface::execBPI_AI_Set_GrounedMoveMode },
		{ .NameUTF8 = UTF8TEXT("BPI_AI_Set_LockRotationUpdate"), .Pointer = &IAGLS_AI_CharacterInterface::execBPI_AI_Set_LockRotationUpdate },
		{ .NameUTF8 = UTF8TEXT("BPI_AI_Set_MovementAction"), .Pointer = &IAGLS_AI_CharacterInterface::execBPI_AI_Set_MovementAction },
		{ .NameUTF8 = UTF8TEXT("BPI_AI_Set_MovementSettingsByName"), .Pointer = &IAGLS_AI_CharacterInterface::execBPI_AI_Set_MovementSettingsByName },
		{ .NameUTF8 = UTF8TEXT("BPI_AI_Set_MovementState"), .Pointer = &IAGLS_AI_CharacterInterface::execBPI_AI_Set_MovementState },
		{ .NameUTF8 = UTF8TEXT("BPI_AI_Set_OverlayState"), .Pointer = &IAGLS_AI_CharacterInterface::execBPI_AI_Set_OverlayState },
		{ .NameUTF8 = UTF8TEXT("BPI_AI_Set_PathFollowActor"), .Pointer = &IAGLS_AI_CharacterInterface::execBPI_AI_Set_PathFollowActor },
		{ .NameUTF8 = UTF8TEXT("BPI_AI_Set_RotationMode"), .Pointer = &IAGLS_AI_CharacterInterface::execBPI_AI_Set_RotationMode },
		{ .NameUTF8 = UTF8TEXT("BPI_AI_Set_StruckCharacter"), .Pointer = &IAGLS_AI_CharacterInterface::execBPI_AI_Set_StruckCharacter },
		{ .NameUTF8 = UTF8TEXT("BPI_AI_TryOnlyRunDamageFX"), .Pointer = &IAGLS_AI_CharacterInterface::execBPI_AI_TryOnlyRunDamageFX },
		{ .NameUTF8 = UTF8TEXT("BPI_AI_TrySetupNewGunComponent"), .Pointer = &IAGLS_AI_CharacterInterface::execBPI_AI_TrySetupNewGunComponent },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_AddRemove_GameplayTagInfo, "BPI_AI_AddRemove_GameplayTagInfo" }, // 835619505
		{ &Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_BumpReactTrigger, "BPI_AI_BumpReactTrigger" }, // 2482095755
		{ &Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_CanPlayMeleeCombatHitReact, "BPI_AI_CanPlayMeleeCombatHitReact" }, // 471878330
		{ &Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_CrouchOrUncrouch, "BPI_AI_CrouchOrUncrouch" }, // 3849266572
		{ &Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_DoWhenIsMarkedAsOpponent, "BPI_AI_DoWhenIsMarkedAsOpponent" }, // 47539333
		{ &Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_FinisherOrMeleeStarted, "BPI_AI_FinisherOrMeleeStarted" }, // 1661223112
		{ &Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentActivatedTask, "BPI_AI_Get_CurrentActivatedTask" }, // 260151378
		{ &Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates, "BPI_AI_Get_CurrentStates" }, // 358974926
		{ &Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStatesSafe, "BPI_AI_Get_CurrentStatesSafe" }, // 1703539666
		{ &Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValues, "BPI_AI_Get_EssentialValues" }, // 2393295414
		{ &Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValuesSafe, "BPI_AI_Get_EssentialValuesSafe" }, // 2604763568
		{ &Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_LocomotionModeIndex, "BPI_AI_Get_LocomotionModeIndex" }, // 1765881079
		{ &Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_LOD_State, "BPI_AI_Get_LOD_State" }, // 2809238263
		{ &Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_MainTagsContainerData, "BPI_AI_Get_MainTagsContainerData" }, // 3254198076
		{ &Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_RotationLocked, "BPI_AI_Get_RotationLocked" }, // 2759830136
		{ &Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_GetPathFollowActor, "BPI_AI_GetPathFollowActor" }, // 3417200632
		{ &Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_DesiredGait, "BPI_AI_Set_DesiredGait" }, // 89913942
		{ &Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_EnableRagdoll, "BPI_AI_Set_EnableRagdoll" }, // 356052488
		{ &Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_Gait, "BPI_AI_Set_Gait" }, // 2982963087
		{ &Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_GrounedMoveMode, "BPI_AI_Set_GrounedMoveMode" }, // 2568227749
		{ &Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_LockRotationUpdate, "BPI_AI_Set_LockRotationUpdate" }, // 2018031519
		{ &Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementAction, "BPI_AI_Set_MovementAction" }, // 1065436698
		{ &Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementSettingsByName, "BPI_AI_Set_MovementSettingsByName" }, // 457478407
		{ &Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementState, "BPI_AI_Set_MovementState" }, // 766957559
		{ &Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_OverlayState, "BPI_AI_Set_OverlayState" }, // 4100719391
		{ &Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_PathFollowActor, "BPI_AI_Set_PathFollowActor" }, // 2492329406
		{ &Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_RotationMode, "BPI_AI_Set_RotationMode" }, // 2102897426
		{ &Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_StruckCharacter, "BPI_AI_Set_StruckCharacter" }, // 3644190992
		{ &Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_TryOnlyRunDamageFX, "BPI_AI_TryOnlyRunDamageFX" }, // 3417151750
		{ &Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_TrySetupNewGunComponent, "BPI_AI_TrySetupNewGunComponent" }, // 3053153095
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAGLS_AI_CharacterInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAGLS_AI_CharacterInterface_Statics
UObject* (*const Z_Construct_UClass_UAGLS_AI_CharacterInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAGLS_AI_CharacterInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAGLS_AI_CharacterInterface_Statics::ClassParams = {
	&UAGLS_AI_CharacterInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAGLS_AI_CharacterInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UAGLS_AI_CharacterInterface_Statics::Class_MetaDataParams)
};
void UAGLS_AI_CharacterInterface::StaticRegisterNativesUAGLS_AI_CharacterInterface()
{
	UClass* Class = UAGLS_AI_CharacterInterface::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UAGLS_AI_CharacterInterface_Statics::Funcs));
}
UClass* Z_Construct_UClass_UAGLS_AI_CharacterInterface()
{
	if (!Z_Registration_Info_UClass_UAGLS_AI_CharacterInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAGLS_AI_CharacterInterface.OuterSingleton, Z_Construct_UClass_UAGLS_AI_CharacterInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAGLS_AI_CharacterInterface.OuterSingleton;
}
UAGLS_AI_CharacterInterface::UAGLS_AI_CharacterInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAGLS_AI_CharacterInterface);
// ********** End Interface UAGLS_AI_CharacterInterface ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UE5_7_AGLS_ProgramingCpp_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AI_CharacterInterface_h__Script_HelpfulFunctions_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAGLS_AI_CharacterInterface, UAGLS_AI_CharacterInterface::StaticClass, TEXT("UAGLS_AI_CharacterInterface"), &Z_Registration_Info_UClass_UAGLS_AI_CharacterInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAGLS_AI_CharacterInterface), 2940388546U) },
	};
}; // Z_CompiledInDeferFile_FID_Unreal_Projects_UE5_7_AGLS_ProgramingCpp_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AI_CharacterInterface_h__Script_HelpfulFunctions_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UE5_7_AGLS_ProgramingCpp_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AI_CharacterInterface_h__Script_HelpfulFunctions_2051908156{
	TEXT("/Script/HelpfulFunctions"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UE5_7_AGLS_ProgramingCpp_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AI_CharacterInterface_h__Script_HelpfulFunctions_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UE5_7_AGLS_ProgramingCpp_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AI_CharacterInterface_h__Script_HelpfulFunctions_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
