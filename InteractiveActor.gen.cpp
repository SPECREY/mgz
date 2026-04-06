// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractiveActor.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeInteractiveActor() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_AInteractiveActor();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_AInteractiveActor_NoRegister();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UInteractionWidgetCondition_NoRegister();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UInteractiveActorsInterface_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_HelpfulFunctions();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AInteractiveActor Function ForceDestroyWidget ****************************
struct Z_Construct_UFunction_AInteractiveActor_ForceDestroyWidget_Statics
{
	struct InteractiveActor_eventForceDestroyWidget_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interactive Actor" },
		{ "ModuleRelativePath", "Public/InteractiveActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ForceDestroyWidget constinit property declarations ********************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ForceDestroyWidget constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ForceDestroyWidget Property Definitions *******************************
void Z_Construct_UFunction_AInteractiveActor_ForceDestroyWidget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InteractiveActor_eventForceDestroyWidget_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AInteractiveActor_ForceDestroyWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InteractiveActor_eventForceDestroyWidget_Parms), &Z_Construct_UFunction_AInteractiveActor_ForceDestroyWidget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractiveActor_ForceDestroyWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractiveActor_ForceDestroyWidget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractiveActor_ForceDestroyWidget_Statics::PropPointers) < 2048);
// ********** End Function ForceDestroyWidget Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractiveActor_ForceDestroyWidget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AInteractiveActor, nullptr, "ForceDestroyWidget", 	Z_Construct_UFunction_AInteractiveActor_ForceDestroyWidget_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractiveActor_ForceDestroyWidget_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AInteractiveActor_ForceDestroyWidget_Statics::InteractiveActor_eventForceDestroyWidget_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractiveActor_ForceDestroyWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_AInteractiveActor_ForceDestroyWidget_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AInteractiveActor_ForceDestroyWidget_Statics::InteractiveActor_eventForceDestroyWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AInteractiveActor_ForceDestroyWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractiveActor_ForceDestroyWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AInteractiveActor::execForceDestroyWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ForceDestroyWidget();
	P_NATIVE_END;
}
// ********** End Class AInteractiveActor Function ForceDestroyWidget ******************************

// ********** Begin Class AInteractiveActor Function GetInteractionState ***************************
struct Z_Construct_UFunction_AInteractiveActor_GetInteractionState_Statics
{
	struct InteractiveActor_eventGetInteractionState_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interactive Actor" },
		{ "ModuleRelativePath", "Public/InteractiveActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetInteractionState constinit property declarations *******************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetInteractionState constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetInteractionState Property Definitions ******************************
void Z_Construct_UFunction_AInteractiveActor_GetInteractionState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InteractiveActor_eventGetInteractionState_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AInteractiveActor_GetInteractionState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InteractiveActor_eventGetInteractionState_Parms), &Z_Construct_UFunction_AInteractiveActor_GetInteractionState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractiveActor_GetInteractionState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractiveActor_GetInteractionState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractiveActor_GetInteractionState_Statics::PropPointers) < 2048);
// ********** End Function GetInteractionState Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractiveActor_GetInteractionState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AInteractiveActor, nullptr, "GetInteractionState", 	Z_Construct_UFunction_AInteractiveActor_GetInteractionState_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractiveActor_GetInteractionState_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AInteractiveActor_GetInteractionState_Statics::InteractiveActor_eventGetInteractionState_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractiveActor_GetInteractionState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AInteractiveActor_GetInteractionState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AInteractiveActor_GetInteractionState_Statics::InteractiveActor_eventGetInteractionState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AInteractiveActor_GetInteractionState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractiveActor_GetInteractionState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AInteractiveActor::execGetInteractionState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetInteractionState();
	P_NATIVE_END;
}
// ********** End Class AInteractiveActor Function GetInteractionState *****************************

// ********** Begin Class AInteractiveActor Function UpdateInteractionState ************************
struct Z_Construct_UFunction_AInteractiveActor_UpdateInteractionState_Statics
{
	struct InteractiveActor_eventUpdateInteractionState_Parms
	{
		bool StartedInteraction;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interactive Actor" },
		{ "ModuleRelativePath", "Public/InteractiveActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function UpdateInteractionState constinit property declarations ****************
	static void NewProp_StartedInteraction_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_StartedInteraction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UpdateInteractionState constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UpdateInteractionState Property Definitions ***************************
void Z_Construct_UFunction_AInteractiveActor_UpdateInteractionState_Statics::NewProp_StartedInteraction_SetBit(void* Obj)
{
	((InteractiveActor_eventUpdateInteractionState_Parms*)Obj)->StartedInteraction = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AInteractiveActor_UpdateInteractionState_Statics::NewProp_StartedInteraction = { "StartedInteraction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InteractiveActor_eventUpdateInteractionState_Parms), &Z_Construct_UFunction_AInteractiveActor_UpdateInteractionState_Statics::NewProp_StartedInteraction_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractiveActor_UpdateInteractionState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractiveActor_UpdateInteractionState_Statics::NewProp_StartedInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractiveActor_UpdateInteractionState_Statics::PropPointers) < 2048);
// ********** End Function UpdateInteractionState Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractiveActor_UpdateInteractionState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AInteractiveActor, nullptr, "UpdateInteractionState", 	Z_Construct_UFunction_AInteractiveActor_UpdateInteractionState_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractiveActor_UpdateInteractionState_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AInteractiveActor_UpdateInteractionState_Statics::InteractiveActor_eventUpdateInteractionState_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractiveActor_UpdateInteractionState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AInteractiveActor_UpdateInteractionState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AInteractiveActor_UpdateInteractionState_Statics::InteractiveActor_eventUpdateInteractionState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AInteractiveActor_UpdateInteractionState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractiveActor_UpdateInteractionState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AInteractiveActor::execUpdateInteractionState)
{
	P_GET_UBOOL(Z_Param_StartedInteraction);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateInteractionState(Z_Param_StartedInteraction);
	P_NATIVE_END;
}
// ********** End Class AInteractiveActor Function UpdateInteractionState **************************

// ********** Begin Class AInteractiveActor ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AInteractiveActor;
UClass* AInteractiveActor::GetPrivateStaticClass()
{
	using TClass = AInteractiveActor;
	if (!Z_Registration_Info_UClass_AInteractiveActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("InteractiveActor"),
			Z_Registration_Info_UClass_AInteractiveActor.InnerSingleton,
			StaticRegisterNativesAInteractiveActor,
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
	return Z_Registration_Info_UClass_AInteractiveActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AInteractiveActor_NoRegister()
{
	return AInteractiveActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AInteractiveActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\nBase class that allows efficient management of interactions between the environment and the player. \n\nThe basic way of interaction is to: \n- find actors with the ability to interact via Overlaps \n- select the most appropriate instance\n- find the correct GameplayAbility class\n- and finally activate it.\n\nSome elements are loaded asynchronously, which improves performance, but mainly in the packed game. \nIn the editor, the loading time of classes is much longer.\n*/" },
#endif
		{ "HideCategories", "Navigation HLOD Input NetWorking Replication Mobile DataLayers" },
		{ "IncludePath", "InteractiveActor.h" },
		{ "ModuleRelativePath", "Public/InteractiveActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base class that allows efficient management of interactions between the environment and the player.\n\nThe basic way of interaction is to:\n- find actors with the ability to interact via Overlaps\n- select the most appropriate instance\n- find the correct GameplayAbility class\n- and finally activate it.\n\nSome elements are loaded asynchronously, which improves performance, but mainly in the packed game.\nIn the editor, the loading time of classes is much longer." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionAbilityTag_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Interaction Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*a parameter specifying what 'Gameplay Ability' class has been assigned to the actor. \nThis is a value that identifies and distinguishes the class for AbilitySystem. \nNote: One GameplayTag should be assigned to a given class.*/" },
#endif
		{ "ModuleRelativePath", "Public/InteractiveActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "a parameter specifying what 'Gameplay Ability' class has been assigned to the actor.\nThis is a value that identifies and distinguishes the class for AbilitySystem.\nNote: One GameplayTag should be assigned to a given class." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadAbilityClassOnOverlap_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Interaction Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Some Abilities for a given interaction may not be in memory yet. Therefore, the Ability class must be loaded asynchronously somewhere. \nIf this value is set to 'true', the Ability Class will be loaded when activated by Overlap (this does not mean that the actor will \nbe used for interaction, but that the player is in near distance). If the value is 'false', the Ability Class will be loaded when an \nattempt is made to interact with the actor (usually via the 'E' input).*/" },
#endif
		{ "ModuleRelativePath", "Public/InteractiveActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Some Abilities for a given interaction may not be in memory yet. Therefore, the Ability class must be loaded asynchronously somewhere.\nIf this value is set to 'true', the Ability Class will be loaded when activated by Overlap (this does not mean that the actor will\nbe used for interaction, but that the player is in near distance). If the value is 'false', the Ability Class will be loaded when an\nattempt is made to interact with the actor (usually via the 'E' input)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideWidgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Interaction Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*It allows you to assign another class 'Widget Blueprint' that displays the ability to interact with the actor. It is not HardReference, \nwhich means that the class will need to be loaded before it can be spawned as instance.*/" },
#endif
		{ "ModuleRelativePath", "Public/InteractiveActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "It allows you to assign another class 'Widget Blueprint' that displays the ability to interact with the actor. It is not HardReference,\nwhich means that the class will need to be loaded before it can be spawned as instance." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetTickInterval_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Interaction Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Defines how often the Widget's position will be updated, once it has been created. Another important element is checking if the \nPlayer is still overlaping the object collision. If this condition is not valid, it means that the widget instance should be destroyed*/" },
#endif
		{ "ModuleRelativePath", "Public/InteractiveActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defines how often the Widget's position will be updated, once it has been created. Another important element is checking if the\nPlayer is still overlaping the object collision. If this condition is not valid, it means that the widget instance should be destroyed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetTextSlot01_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Interaction Config" },
		{ "ModuleRelativePath", "Public/InteractiveActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetTextSlot02_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Interaction Config" },
		{ "ModuleRelativePath", "Public/InteractiveActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDestroyWidgetWhenAbilityRun_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Interaction Config" },
		{ "ModuleRelativePath", "Public/InteractiveActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CalculateFakeVelocity_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Interaction Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Activating this causes the actor instance to try to calculate Velocity based on getting its position in the current frame, \nand the previous one. For this to work correctly, the TickEvent must be active*/" },
#endif
		{ "ModuleRelativePath", "Public/InteractiveActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Activating this causes the actor instance to try to calculate Velocity based on getting its position in the current frame,\nand the previous one. For this to work correctly, the TickEvent must be active" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddtiveInteractionID_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Interaction Config" },
		{ "ModuleRelativePath", "Public/InteractiveActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddtiveConditionClass_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Interaction Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*When trying to generate a Widget instance, we may want to check for an additional condition. For this purpose, \nwe can use the addition of such a condition via the appropriate blueprint class (InteractionWidgetCondition). \nWhen this parameter is null then we ignore this segment. */" },
#endif
		{ "ModuleRelativePath", "Public/InteractiveActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When trying to generate a Widget instance, we may want to check for an additional condition. For this purpose,\nwe can use the addition of such a condition via the appropriate blueprint class (InteractionWidgetCondition).\nWhen this parameter is null then we ignore this segment." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanDisplayWidget_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Interaction Config" },
		{ "ModuleRelativePath", "Public/InteractiveActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AInteractiveActor constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_InteractionAbilityTag;
	static void NewProp_LoadAbilityClassOnOverlap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_LoadAbilityClassOnOverlap;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_OverrideWidgetClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WidgetTickInterval;
	static const UECodeGen_Private::FNamePropertyParams NewProp_WidgetTextSlot01;
	static const UECodeGen_Private::FNamePropertyParams NewProp_WidgetTextSlot02;
	static void NewProp_bDestroyWidgetWhenAbilityRun_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDestroyWidgetWhenAbilityRun;
	static void NewProp_CalculateFakeVelocity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CalculateFakeVelocity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AddtiveInteractionID;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AddtiveConditionClass;
	static void NewProp_bCanDisplayWidget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanDisplayWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AInteractiveActor constinit property declarations **************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ForceDestroyWidget"), .Pointer = &AInteractiveActor::execForceDestroyWidget },
		{ .NameUTF8 = UTF8TEXT("GetInteractionState"), .Pointer = &AInteractiveActor::execGetInteractionState },
		{ .NameUTF8 = UTF8TEXT("UpdateInteractionState"), .Pointer = &AInteractiveActor::execUpdateInteractionState },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AInteractiveActor_ForceDestroyWidget, "ForceDestroyWidget" }, // 3342949300
		{ &Z_Construct_UFunction_AInteractiveActor_GetInteractionState, "GetInteractionState" }, // 4197649155
		{ &Z_Construct_UFunction_AInteractiveActor_UpdateInteractionState, "UpdateInteractionState" }, // 923947273
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractiveActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AInteractiveActor_Statics

// ********** Begin Class AInteractiveActor Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AInteractiveActor_Statics::NewProp_InteractionAbilityTag = { "InteractionAbilityTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractiveActor, InteractionAbilityTag), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionAbilityTag_MetaData), NewProp_InteractionAbilityTag_MetaData) }; // 3438578166
void Z_Construct_UClass_AInteractiveActor_Statics::NewProp_LoadAbilityClassOnOverlap_SetBit(void* Obj)
{
	((AInteractiveActor*)Obj)->LoadAbilityClassOnOverlap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AInteractiveActor_Statics::NewProp_LoadAbilityClassOnOverlap = { "LoadAbilityClassOnOverlap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AInteractiveActor), &Z_Construct_UClass_AInteractiveActor_Statics::NewProp_LoadAbilityClassOnOverlap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadAbilityClassOnOverlap_MetaData), NewProp_LoadAbilityClassOnOverlap_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_AInteractiveActor_Statics::NewProp_OverrideWidgetClass = { "OverrideWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractiveActor, OverrideWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideWidgetClass_MetaData), NewProp_OverrideWidgetClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AInteractiveActor_Statics::NewProp_WidgetTickInterval = { "WidgetTickInterval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractiveActor, WidgetTickInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetTickInterval_MetaData), NewProp_WidgetTickInterval_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AInteractiveActor_Statics::NewProp_WidgetTextSlot01 = { "WidgetTextSlot01", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractiveActor, WidgetTextSlot01), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetTextSlot01_MetaData), NewProp_WidgetTextSlot01_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AInteractiveActor_Statics::NewProp_WidgetTextSlot02 = { "WidgetTextSlot02", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractiveActor, WidgetTextSlot02), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetTextSlot02_MetaData), NewProp_WidgetTextSlot02_MetaData) };
void Z_Construct_UClass_AInteractiveActor_Statics::NewProp_bDestroyWidgetWhenAbilityRun_SetBit(void* Obj)
{
	((AInteractiveActor*)Obj)->bDestroyWidgetWhenAbilityRun = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AInteractiveActor_Statics::NewProp_bDestroyWidgetWhenAbilityRun = { "bDestroyWidgetWhenAbilityRun", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AInteractiveActor), &Z_Construct_UClass_AInteractiveActor_Statics::NewProp_bDestroyWidgetWhenAbilityRun_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDestroyWidgetWhenAbilityRun_MetaData), NewProp_bDestroyWidgetWhenAbilityRun_MetaData) };
void Z_Construct_UClass_AInteractiveActor_Statics::NewProp_CalculateFakeVelocity_SetBit(void* Obj)
{
	((AInteractiveActor*)Obj)->CalculateFakeVelocity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AInteractiveActor_Statics::NewProp_CalculateFakeVelocity = { "CalculateFakeVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AInteractiveActor), &Z_Construct_UClass_AInteractiveActor_Statics::NewProp_CalculateFakeVelocity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CalculateFakeVelocity_MetaData), NewProp_CalculateFakeVelocity_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AInteractiveActor_Statics::NewProp_AddtiveInteractionID = { "AddtiveInteractionID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractiveActor, AddtiveInteractionID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddtiveInteractionID_MetaData), NewProp_AddtiveInteractionID_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AInteractiveActor_Statics::NewProp_AddtiveConditionClass = { "AddtiveConditionClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractiveActor, AddtiveConditionClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UInteractionWidgetCondition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddtiveConditionClass_MetaData), NewProp_AddtiveConditionClass_MetaData) };
void Z_Construct_UClass_AInteractiveActor_Statics::NewProp_bCanDisplayWidget_SetBit(void* Obj)
{
	((AInteractiveActor*)Obj)->bCanDisplayWidget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AInteractiveActor_Statics::NewProp_bCanDisplayWidget = { "bCanDisplayWidget", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AInteractiveActor), &Z_Construct_UClass_AInteractiveActor_Statics::NewProp_bCanDisplayWidget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanDisplayWidget_MetaData), NewProp_bCanDisplayWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInteractiveActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractiveActor_Statics::NewProp_InteractionAbilityTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractiveActor_Statics::NewProp_LoadAbilityClassOnOverlap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractiveActor_Statics::NewProp_OverrideWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractiveActor_Statics::NewProp_WidgetTickInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractiveActor_Statics::NewProp_WidgetTextSlot01,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractiveActor_Statics::NewProp_WidgetTextSlot02,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractiveActor_Statics::NewProp_bDestroyWidgetWhenAbilityRun,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractiveActor_Statics::NewProp_CalculateFakeVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractiveActor_Statics::NewProp_AddtiveInteractionID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractiveActor_Statics::NewProp_AddtiveConditionClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractiveActor_Statics::NewProp_bCanDisplayWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractiveActor_Statics::PropPointers) < 2048);
// ********** End Class AInteractiveActor Property Definitions *************************************
UObject* (*const Z_Construct_UClass_AInteractiveActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractiveActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AInteractiveActor_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractiveActorsInterface_NoRegister, (int32)VTABLE_OFFSET(AInteractiveActor, IInteractiveActorsInterface), false },  // 3136346624
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AInteractiveActor_Statics::ClassParams = {
	&AInteractiveActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AInteractiveActor_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AInteractiveActor_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractiveActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AInteractiveActor_Statics::Class_MetaDataParams)
};
void AInteractiveActor::StaticRegisterNativesAInteractiveActor()
{
	UClass* Class = AInteractiveActor::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_AInteractiveActor_Statics::Funcs));
}
UClass* Z_Construct_UClass_AInteractiveActor()
{
	if (!Z_Registration_Info_UClass_AInteractiveActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInteractiveActor.OuterSingleton, Z_Construct_UClass_AInteractiveActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AInteractiveActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AInteractiveActor);
AInteractiveActor::~AInteractiveActor() {}
// ********** End Class AInteractiveActor **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UE5_7_AGLS_ProgramingCpp_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractiveActor_h__Script_HelpfulFunctions_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AInteractiveActor, AInteractiveActor::StaticClass, TEXT("AInteractiveActor"), &Z_Registration_Info_UClass_AInteractiveActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInteractiveActor), 1621958088U) },
	};
}; // Z_CompiledInDeferFile_FID_Unreal_Projects_UE5_7_AGLS_ProgramingCpp_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractiveActor_h__Script_HelpfulFunctions_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UE5_7_AGLS_ProgramingCpp_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractiveActor_h__Script_HelpfulFunctions_1205211291{
	TEXT("/Script/HelpfulFunctions"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UE5_7_AGLS_ProgramingCpp_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractiveActor_h__Script_HelpfulFunctions_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UE5_7_AGLS_ProgramingCpp_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractiveActor_h__Script_HelpfulFunctions_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
