// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HandleForItemCpp.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeHandleForItemCpp() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAttachmentRule();
JAKUBCABLECOMPONENT_API UClass* Z_Construct_UClass_UHandleForItemCpp();
JAKUBCABLECOMPONENT_API UClass* Z_Construct_UClass_UHandleForItemCpp_NoRegister();
JAKUBCABLECOMPONENT_API UClass* Z_Construct_UClass_UJakubSimpleParticleComponent();
JAKUBCABLECOMPONENT_API UEnum* Z_Construct_UEnum_JakubCableComponent_EIWALS_HandleItemType();
UPackage* Z_Construct_UPackage__Script_JakubCableComponent();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EIWALS_HandleItemType *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EIWALS_HandleItemType;
static UEnum* EIWALS_HandleItemType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EIWALS_HandleItemType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EIWALS_HandleItemType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_JakubCableComponent_EIWALS_HandleItemType, (UObject*)Z_Construct_UPackage__Script_JakubCableComponent(), TEXT("EIWALS_HandleItemType"));
	}
	return Z_Registration_Info_UEnum_EIWALS_HandleItemType.OuterSingleton;
}
template<> JAKUBCABLECOMPONENT_NON_ATTRIBUTED_API UEnum* StaticEnum<EIWALS_HandleItemType::Type>()
{
	return EIWALS_HandleItemType_StaticEnum();
}
struct Z_Construct_UEnum_JakubCableComponent_EIWALS_HandleItemType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Axe.DisplayName", "Axe" },
		{ "Axe.Name", "EIWALS_HandleItemType::Axe" },
		{ "Binoculars.DisplayName", "Binoculars" },
		{ "Binoculars.Name", "EIWALS_HandleItemType::Binoculars" },
		{ "BlueprintType", "true" },
		{ "Bow.DisplayName", "Bow" },
		{ "Bow.Name", "EIWALS_HandleItemType::Bow" },
		{ "FirstAidKit.DisplayName", "FirstAidKit" },
		{ "FirstAidKit.Name", "EIWALS_HandleItemType::FirstAidKit" },
		{ "Food.DisplayName", "Food" },
		{ "Food.Name", "EIWALS_HandleItemType::Food" },
		{ "Grenade_1.DisplayName", "Grenade_1" },
		{ "Grenade_1.Name", "EIWALS_HandleItemType::Grenade_1" },
		{ "Grenade_2.DisplayName", "Grenade_2" },
		{ "Grenade_2.Name", "EIWALS_HandleItemType::Grenade_2" },
		{ "Knife.DisplayName", "Knife" },
		{ "Knife.Name", "EIWALS_HandleItemType::Knife" },
		{ "ModuleRelativePath", "Public/HandleForItemCpp.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EIWALS_HandleItemType::None" },
		{ "Prop_1.DisplayName", "Prop_1" },
		{ "Prop_1.Name", "EIWALS_HandleItemType::Prop_1" },
		{ "Prop_2.DisplayName", "Prop_2" },
		{ "Prop_2.Name", "EIWALS_HandleItemType::Prop_2" },
		{ "Sword.DisplayName", "Sword" },
		{ "Sword.Name", "EIWALS_HandleItemType::Sword" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EIWALS_HandleItemType::None", (int64)EIWALS_HandleItemType::None },
		{ "EIWALS_HandleItemType::Binoculars", (int64)EIWALS_HandleItemType::Binoculars },
		{ "EIWALS_HandleItemType::Bow", (int64)EIWALS_HandleItemType::Bow },
		{ "EIWALS_HandleItemType::Axe", (int64)EIWALS_HandleItemType::Axe },
		{ "EIWALS_HandleItemType::Knife", (int64)EIWALS_HandleItemType::Knife },
		{ "EIWALS_HandleItemType::Sword", (int64)EIWALS_HandleItemType::Sword },
		{ "EIWALS_HandleItemType::Food", (int64)EIWALS_HandleItemType::Food },
		{ "EIWALS_HandleItemType::FirstAidKit", (int64)EIWALS_HandleItemType::FirstAidKit },
		{ "EIWALS_HandleItemType::Grenade_1", (int64)EIWALS_HandleItemType::Grenade_1 },
		{ "EIWALS_HandleItemType::Grenade_2", (int64)EIWALS_HandleItemType::Grenade_2 },
		{ "EIWALS_HandleItemType::Prop_1", (int64)EIWALS_HandleItemType::Prop_1 },
		{ "EIWALS_HandleItemType::Prop_2", (int64)EIWALS_HandleItemType::Prop_2 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_JakubCableComponent_EIWALS_HandleItemType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_JakubCableComponent_EIWALS_HandleItemType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_JakubCableComponent,
	nullptr,
	"EIWALS_HandleItemType",
	"EIWALS_HandleItemType::Type",
	Z_Construct_UEnum_JakubCableComponent_EIWALS_HandleItemType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_JakubCableComponent_EIWALS_HandleItemType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_JakubCableComponent_EIWALS_HandleItemType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_JakubCableComponent_EIWALS_HandleItemType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_JakubCableComponent_EIWALS_HandleItemType()
{
	if (!Z_Registration_Info_UEnum_EIWALS_HandleItemType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EIWALS_HandleItemType.InnerSingleton, Z_Construct_UEnum_JakubCableComponent_EIWALS_HandleItemType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EIWALS_HandleItemType.InnerSingleton;
}
// ********** End Enum EIWALS_HandleItemType *******************************************************

// ********** Begin Class UHandleForItemCpp Function AttachItemToHandleC ***************************
struct HandleForItemCpp_eventAttachItemToHandleC_Parms
{
	AActor* TargetItem;
	bool AutoHandAttach;
	int32 TypeIndex;
};
static FName NAME_UHandleForItemCpp_AttachItemToHandleC = FName(TEXT("AttachItemToHandleC"));
void UHandleForItemCpp::AttachItemToHandleC(AActor* TargetItem, bool AutoHandAttach, int32 TypeIndex)
{
	UFunction* Func = FindFunctionChecked(NAME_UHandleForItemCpp_AttachItemToHandleC);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		HandleForItemCpp_eventAttachItemToHandleC_Parms Parms;
		Parms.TargetItem=TargetItem;
		Parms.AutoHandAttach=AutoHandAttach ? true : false;
		Parms.TypeIndex=TypeIndex;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		AttachItemToHandleC_Implementation(TargetItem, AutoHandAttach, TypeIndex);
	}
}
struct Z_Construct_UFunction_UHandleForItemCpp_AttachItemToHandleC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Props Handle Component" },
		{ "DisplayName", "Attach Item To Handle" },
		{ "ForceAsFunction", "" },
		{ "Keywords", "Props,Handle" },
		{ "ModuleRelativePath", "Public/HandleForItemCpp.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function AttachItemToHandleC constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetItem;
	static void NewProp_AutoHandAttach_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AutoHandAttach;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TypeIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AttachItemToHandleC constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AttachItemToHandleC Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHandleForItemCpp_AttachItemToHandleC_Statics::NewProp_TargetItem = { "TargetItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HandleForItemCpp_eventAttachItemToHandleC_Parms, TargetItem), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UHandleForItemCpp_AttachItemToHandleC_Statics::NewProp_AutoHandAttach_SetBit(void* Obj)
{
	((HandleForItemCpp_eventAttachItemToHandleC_Parms*)Obj)->AutoHandAttach = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHandleForItemCpp_AttachItemToHandleC_Statics::NewProp_AutoHandAttach = { "AutoHandAttach", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HandleForItemCpp_eventAttachItemToHandleC_Parms), &Z_Construct_UFunction_UHandleForItemCpp_AttachItemToHandleC_Statics::NewProp_AutoHandAttach_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHandleForItemCpp_AttachItemToHandleC_Statics::NewProp_TypeIndex = { "TypeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HandleForItemCpp_eventAttachItemToHandleC_Parms, TypeIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHandleForItemCpp_AttachItemToHandleC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandleForItemCpp_AttachItemToHandleC_Statics::NewProp_TargetItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandleForItemCpp_AttachItemToHandleC_Statics::NewProp_AutoHandAttach,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandleForItemCpp_AttachItemToHandleC_Statics::NewProp_TypeIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHandleForItemCpp_AttachItemToHandleC_Statics::PropPointers) < 2048);
// ********** End Function AttachItemToHandleC Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHandleForItemCpp_AttachItemToHandleC_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHandleForItemCpp, nullptr, "AttachItemToHandleC", 	Z_Construct_UFunction_UHandleForItemCpp_AttachItemToHandleC_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UHandleForItemCpp_AttachItemToHandleC_Statics::PropPointers), 
sizeof(HandleForItemCpp_eventAttachItemToHandleC_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHandleForItemCpp_AttachItemToHandleC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHandleForItemCpp_AttachItemToHandleC_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(HandleForItemCpp_eventAttachItemToHandleC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHandleForItemCpp_AttachItemToHandleC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHandleForItemCpp_AttachItemToHandleC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHandleForItemCpp::execAttachItemToHandleC)
{
	P_GET_OBJECT(AActor,Z_Param_TargetItem);
	P_GET_UBOOL(Z_Param_AutoHandAttach);
	P_GET_PROPERTY(FIntProperty,Z_Param_TypeIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AttachItemToHandleC_Implementation(Z_Param_TargetItem,Z_Param_AutoHandAttach,Z_Param_TypeIndex);
	P_NATIVE_END;
}
// ********** End Class UHandleForItemCpp Function AttachItemToHandleC *****************************

// ********** Begin Class UHandleForItemCpp Function AttachToHandC *********************************
static FName NAME_UHandleForItemCpp_AttachToHandC = FName(TEXT("AttachToHandC"));
void UHandleForItemCpp::AttachToHandC()
{
	UFunction* Func = FindFunctionChecked(NAME_UHandleForItemCpp_AttachToHandC);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		AttachToHandC_Implementation();
	}
}
struct Z_Construct_UFunction_UHandleForItemCpp_AttachToHandC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Props Handle Component" },
		{ "DisplayName", "Attach To Hand" },
		{ "ForceAsFunction", "" },
		{ "Keywords", "Props,Handle" },
		{ "ModuleRelativePath", "Public/HandleForItemCpp.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function AttachToHandC constinit property declarations *************************
// ********** End Function AttachToHandC constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHandleForItemCpp_AttachToHandC_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHandleForItemCpp, nullptr, "AttachToHandC", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHandleForItemCpp_AttachToHandC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHandleForItemCpp_AttachToHandC_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UHandleForItemCpp_AttachToHandC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHandleForItemCpp_AttachToHandC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHandleForItemCpp::execAttachToHandC)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AttachToHandC_Implementation();
	P_NATIVE_END;
}
// ********** End Class UHandleForItemCpp Function AttachToHandC ***********************************

// ********** Begin Class UHandleForItemCpp ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UHandleForItemCpp;
UClass* UHandleForItemCpp::GetPrivateStaticClass()
{
	using TClass = UHandleForItemCpp;
	if (!Z_Registration_Info_UClass_UHandleForItemCpp.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("HandleForItemCpp"),
			Z_Registration_Info_UClass_UHandleForItemCpp.InnerSingleton,
			StaticRegisterNativesUHandleForItemCpp,
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
	return Z_Registration_Info_UClass_UHandleForItemCpp.InnerSingleton;
}
UClass* Z_Construct_UClass_UHandleForItemCpp_NoRegister()
{
	return UHandleForItemCpp::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHandleForItemCpp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//A class that builds a component whose purpose is to create appropriate holders for player props.\n" },
#endif
		{ "HideCategories", "Object LOD Physics Lighting TextureStreaming Activation Components|Activation Collision Mobility VirtualTexture Trigger" },
		{ "IncludePath", "HandleForItemCpp.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HandleForItemCpp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A class that builds a component whose purpose is to create appropriate holders for player props." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketTypeC_MetaData[] = {
		{ "Category", "Handle Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09""A variable defining the type of the 'item socket'. This is an identifier that many other \n\x09""components will use. This value determines whether the Actor associated with HandleForItem \n\x09should be attached to the hand or remain in place.\n\x09*/" },
#endif
		{ "DisplayName", "Socket Type" },
		{ "Keywords", "Physic Handle Item" },
		{ "ModuleRelativePath", "Public/HandleForItemCpp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A variable defining the type of the 'item socket'. This is an identifier that many other\ncomponents will use. This value determines whether the Actor associated with HandleForItem\nshould be attached to the hand or remain in place." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachSocketNameC_MetaData[] = {
		{ "Category", "Handle Config" },
		{ "DisplayName", "Attach Socket Name" },
		{ "Keywords", "Physic Handle Item" },
		{ "ModuleRelativePath", "Public/HandleForItemCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachRuleC_MetaData[] = {
		{ "Category", "Handle Config" },
		{ "DisplayName", "Attach Rule" },
		{ "Keywords", "Physic Handle Item" },
		{ "ModuleRelativePath", "Public/HandleForItemCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachToBackpackC_MetaData[] = {
		{ "Category", "Handle Config" },
		{ "DisplayName", "Attach To Backpack" },
		{ "Keywords", "Physic Handle Item" },
		{ "ModuleRelativePath", "Public/HandleForItemCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanEquipItemC_MetaData[] = {
		{ "Category", "Handle Config" },
		{ "DisplayName", "Can Equip Item" },
		{ "Keywords", "Physic Handle Item" },
		{ "ModuleRelativePath", "Public/HandleForItemCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropAttachOffsetC_MetaData[] = {
		{ "Category", "Handle Config" },
		{ "DisplayName", "Prop Attach Offset" },
		{ "Keywords", "Physic Handle Item" },
		{ "ModuleRelativePath", "Public/HandleForItemCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseAutoAttachToHand_MetaData[] = {
		{ "Category", "Handle Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*ENG:\n\x09Leaving this option enabled causes HandleForItem to attach the prop Actor to the appropriate \n\x09""component associated with the hand position. Such attachment of the Actor will occur when the \n\x09player changes the Overlay State to the one corresponding to the Handle component (this is \n\x09""determined by the SocketType variable). The EquipWaitDelay variable affects the delay of this \n\x09""attachment. It is worth remembering that despite enabling this functionality, there are cases \n\x09when the attachment will be automatically ignored. This applies to the case when we add elements \n\x09to the 'PreOverlayStateToIgnoreAttach' variable.\n\x09\n\x09PL:\n\x09Pozostawienie tej opcji wlaczonej powoduje ze HandleForItem bedzie doczepiac Aktora rekwizytu do \n\x09odpowiedniego komponentu powiazanego z pozycja reki. Takie doczepienie aktora bedzie nastepowac \n\x09w momencie kiedy gracz zmieni stan nakladki (Overlay State) na ten odpowiadajacy komponentowi \n\x09Handle (okresla to zmienna SocketType). Zmienna EquipWaitDelay wplywa na opoznienie tego \n\x09""doczepienia. Warto pamietac ze mimo wlaczenia tej funkcjonalnosci, sa przypadki kiedy\n\x09""automatyczne doczepienie zostanie z ignorowane. Dotyczy to przypadku kiedy dodamy elementy do \n\x09zmiennej 'PreOverlayStateToIgnoreAttach'. \n\x09*/" },
#endif
		{ "DisplayName", "Use Auto Attach" },
		{ "Keywords", "Physic Handle Item" },
		{ "ModuleRelativePath", "Public/HandleForItemCpp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ENG:\n       Leaving this option enabled causes HandleForItem to attach the prop Actor to the appropriate\n       component associated with the hand position. Such attachment of the Actor will occur when the\n       player changes the Overlay State to the one corresponding to the Handle component (this is\n       determined by the SocketType variable). The EquipWaitDelay variable affects the delay of this\n       attachment. It is worth remembering that despite enabling this functionality, there are cases\n       when the attachment will be automatically ignored. This applies to the case when we add elements\n       to the 'PreOverlayStateToIgnoreAttach' variable.\n\n       PL:\n       Pozostawienie tej opcji wlaczonej powoduje ze HandleForItem bedzie doczepiac Aktora rekwizytu do\n       odpowiedniego komponentu powiazanego z pozycja reki. Takie doczepienie aktora bedzie nastepowac\n       w momencie kiedy gracz zmieni stan nakladki (Overlay State) na ten odpowiadajacy komponentowi\n       Handle (okresla to zmienna SocketType). Zmienna EquipWaitDelay wplywa na opoznienie tego\n       doczepienia. Warto pamietac ze mimo wlaczenia tej funkcjonalnosci, sa przypadki kiedy\n       automatyczne doczepienie zostanie z ignorowane. Dotyczy to przypadku kiedy dodamy elementy do\n       zmiennej 'PreOverlayStateToIgnoreAttach'." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipWaitDelay_MetaData[] = {
		{ "Category", "Handle Config" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09Variable defining how long after changing the overlay state the item should be attached to the correct hand \n\x09(This may not necessarily mean that the Actor will be attached to the Mesh IK bone. It may be related to \n\x09""another component that defines the position the item should hold)\n\x09*/" },
#endif
		{ "DisplayName", "Equip Wait Delay" },
		{ "EditCondition", "UseAutoAttachToHand" },
		{ "Keywords", "Physic Handle Item" },
		{ "ModuleRelativePath", "Public/HandleForItemCpp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Variable defining how long after changing the overlay state the item should be attached to the correct hand\n(This may not necessarily mean that the Actor will be attached to the Mesh IK bone. It may be related to\nanother component that defines the position the item should hold)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DropItemDelay_MetaData[] = {
		{ "Category", "Handle Config" },
		{ "DisplayName", "Drop Item Delay" },
		{ "Keywords", "Physic Handle Item" },
		{ "ModuleRelativePath", "Public/HandleForItemCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsInEquipmentC_MetaData[] = {
		{ "Category", "Props Handle|Main" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//System Variables\n" },
#endif
		{ "DisplayName", "Is In Equipment" },
		{ "Keywords", "Physic Handle Item" },
		{ "ModuleRelativePath", "Public/HandleForItemCpp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "System Variables" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterC_MetaData[] = {
		{ "Category", "Props Handle|Main" },
		{ "DisplayName", "Character" },
		{ "Keywords", "Physic Handle Item" },
		{ "ModuleRelativePath", "Public/HandleForItemCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemToPickC_MetaData[] = {
		{ "Category", "Props Handle|Main" },
		{ "DisplayName", "Item To Pick" },
		{ "Keywords", "Physic Handle Item" },
		{ "ModuleRelativePath", "Public/HandleForItemCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackpackActorC_MetaData[] = {
		{ "Category", "Props Handle|Main" },
		{ "DisplayName", "Backpack Actor" },
		{ "Keywords", "Physic Handle Item" },
		{ "ModuleRelativePath", "Public/HandleForItemCpp.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UHandleForItemCpp constinit property declarations ************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_SocketTypeC;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AttachSocketNameC;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AttachRuleC_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AttachRuleC;
	static void NewProp_AttachToBackpackC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttachToBackpackC;
	static void NewProp_CanEquipItemC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CanEquipItemC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PropAttachOffsetC;
	static void NewProp_UseAutoAttachToHand_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseAutoAttachToHand;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EquipWaitDelay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DropItemDelay;
	static void NewProp_IsInEquipmentC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsInEquipmentC;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterC;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemToPickC;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackpackActorC;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UHandleForItemCpp constinit property declarations **************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AttachItemToHandleC"), .Pointer = &UHandleForItemCpp::execAttachItemToHandleC },
		{ .NameUTF8 = UTF8TEXT("AttachToHandC"), .Pointer = &UHandleForItemCpp::execAttachToHandC },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHandleForItemCpp_AttachItemToHandleC, "AttachItemToHandleC" }, // 3371693888
		{ &Z_Construct_UFunction_UHandleForItemCpp_AttachToHandC, "AttachToHandC" }, // 63524404
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHandleForItemCpp>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UHandleForItemCpp_Statics

// ********** Begin Class UHandleForItemCpp Property Definitions ***********************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_SocketTypeC = { "SocketTypeC", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHandleForItemCpp, SocketTypeC), Z_Construct_UEnum_JakubCableComponent_EIWALS_HandleItemType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketTypeC_MetaData), NewProp_SocketTypeC_MetaData) }; // 2473246592
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_AttachSocketNameC = { "AttachSocketNameC", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHandleForItemCpp, AttachSocketNameC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachSocketNameC_MetaData), NewProp_AttachSocketNameC_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_AttachRuleC_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_AttachRuleC = { "AttachRuleC", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHandleForItemCpp, AttachRuleC), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachRuleC_MetaData), NewProp_AttachRuleC_MetaData) }; // 372168307
void Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_AttachToBackpackC_SetBit(void* Obj)
{
	((UHandleForItemCpp*)Obj)->AttachToBackpackC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_AttachToBackpackC = { "AttachToBackpackC", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHandleForItemCpp), &Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_AttachToBackpackC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachToBackpackC_MetaData), NewProp_AttachToBackpackC_MetaData) };
void Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_CanEquipItemC_SetBit(void* Obj)
{
	((UHandleForItemCpp*)Obj)->CanEquipItemC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_CanEquipItemC = { "CanEquipItemC", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHandleForItemCpp), &Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_CanEquipItemC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanEquipItemC_MetaData), NewProp_CanEquipItemC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_PropAttachOffsetC = { "PropAttachOffsetC", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHandleForItemCpp, PropAttachOffsetC), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropAttachOffsetC_MetaData), NewProp_PropAttachOffsetC_MetaData) };
void Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_UseAutoAttachToHand_SetBit(void* Obj)
{
	((UHandleForItemCpp*)Obj)->UseAutoAttachToHand = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_UseAutoAttachToHand = { "UseAutoAttachToHand", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHandleForItemCpp), &Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_UseAutoAttachToHand_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseAutoAttachToHand_MetaData), NewProp_UseAutoAttachToHand_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_EquipWaitDelay = { "EquipWaitDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHandleForItemCpp, EquipWaitDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipWaitDelay_MetaData), NewProp_EquipWaitDelay_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_DropItemDelay = { "DropItemDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHandleForItemCpp, DropItemDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DropItemDelay_MetaData), NewProp_DropItemDelay_MetaData) };
void Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_IsInEquipmentC_SetBit(void* Obj)
{
	((UHandleForItemCpp*)Obj)->IsInEquipmentC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_IsInEquipmentC = { "IsInEquipmentC", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHandleForItemCpp), &Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_IsInEquipmentC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsInEquipmentC_MetaData), NewProp_IsInEquipmentC_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_CharacterC = { "CharacterC", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHandleForItemCpp, CharacterC), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterC_MetaData), NewProp_CharacterC_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_ItemToPickC = { "ItemToPickC", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHandleForItemCpp, ItemToPickC), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemToPickC_MetaData), NewProp_ItemToPickC_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_BackpackActorC = { "BackpackActorC", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHandleForItemCpp, BackpackActorC), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackpackActorC_MetaData), NewProp_BackpackActorC_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHandleForItemCpp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_SocketTypeC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_AttachSocketNameC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_AttachRuleC_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_AttachRuleC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_AttachToBackpackC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_CanEquipItemC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_PropAttachOffsetC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_UseAutoAttachToHand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_EquipWaitDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_DropItemDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_IsInEquipmentC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_CharacterC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_ItemToPickC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_BackpackActorC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHandleForItemCpp_Statics::PropPointers) < 2048);
// ********** End Class UHandleForItemCpp Property Definitions *************************************
UObject* (*const Z_Construct_UClass_UHandleForItemCpp_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UJakubSimpleParticleComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_JakubCableComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHandleForItemCpp_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHandleForItemCpp_Statics::ClassParams = {
	&UHandleForItemCpp::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UHandleForItemCpp_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UHandleForItemCpp_Statics::PropPointers),
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHandleForItemCpp_Statics::Class_MetaDataParams), Z_Construct_UClass_UHandleForItemCpp_Statics::Class_MetaDataParams)
};
void UHandleForItemCpp::StaticRegisterNativesUHandleForItemCpp()
{
	UClass* Class = UHandleForItemCpp::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UHandleForItemCpp_Statics::Funcs));
}
UClass* Z_Construct_UClass_UHandleForItemCpp()
{
	if (!Z_Registration_Info_UClass_UHandleForItemCpp.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHandleForItemCpp.OuterSingleton, Z_Construct_UClass_UHandleForItemCpp_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHandleForItemCpp.OuterSingleton;
}
UHandleForItemCpp::UHandleForItemCpp() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UHandleForItemCpp);
UHandleForItemCpp::~UHandleForItemCpp() {}
// ********** End Class UHandleForItemCpp **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UE5_7_AGLS_v1_7_0_5_7_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_HandleForItemCpp_h__Script_JakubCableComponent_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EIWALS_HandleItemType_StaticEnum, TEXT("EIWALS_HandleItemType"), &Z_Registration_Info_UEnum_EIWALS_HandleItemType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2473246592U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHandleForItemCpp, UHandleForItemCpp::StaticClass, TEXT("UHandleForItemCpp"), &Z_Registration_Info_UClass_UHandleForItemCpp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHandleForItemCpp), 3886127265U) },
	};
}; // Z_CompiledInDeferFile_FID_Unreal_Projects_UE5_7_AGLS_v1_7_0_5_7_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_HandleForItemCpp_h__Script_JakubCableComponent_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UE5_7_AGLS_v1_7_0_5_7_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_HandleForItemCpp_h__Script_JakubCableComponent_2352842830{
	TEXT("/Script/JakubCableComponent"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UE5_7_AGLS_v1_7_0_5_7_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_HandleForItemCpp_h__Script_JakubCableComponent_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UE5_7_AGLS_v1_7_0_5_7_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_HandleForItemCpp_h__Script_JakubCableComponent_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Unreal_Projects_UE5_7_AGLS_v1_7_0_5_7_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_HandleForItemCpp_h__Script_JakubCableComponent_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UE5_7_AGLS_v1_7_0_5_7_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_HandleForItemCpp_h__Script_JakubCableComponent_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
