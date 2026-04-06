// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PairedAnimSequenceData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePairedAnimSequenceData() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UPairedAnimSequenceData();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UPairedAnimSequenceData_NoRegister();
UPackage* Z_Construct_UPackage__Script_HelpfulFunctions();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPairedAnimSequenceData **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPairedAnimSequenceData;
UClass* UPairedAnimSequenceData::GetPrivateStaticClass()
{
	using TClass = UPairedAnimSequenceData;
	if (!Z_Registration_Info_UClass_UPairedAnimSequenceData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PairedAnimSequenceData"),
			Z_Registration_Info_UClass_UPairedAnimSequenceData.InnerSingleton,
			StaticRegisterNativesUPairedAnimSequenceData,
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
	return Z_Registration_Info_UClass_UPairedAnimSequenceData.InnerSingleton;
}
UClass* Z_Construct_UClass_UPairedAnimSequenceData_NoRegister()
{
	return UPairedAnimSequenceData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPairedAnimSequenceData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\nA data asset containing a set of essential information and resources for the proper operation of so-called 'Paired Dynamic Sequences.' \nThis resource can be used for mechanics related to enemy character attacks. For the sequences to function correctly, appropriate \nanimations must be prepared, which are divided into the following categories:\n\n1) Initiation - The moment of entering a paired sequence between two characters.\n2) Struggle/Loop - This is the moment when the player has time to perform an interaction, such as rapidly pressing the 'E' button.\n3) Success - Exiting the Struggle portion and playing a sequence that does not end in the player's death.\n4) Failed - Data from this portion will be activated when the player fails to complete the interaction required in the 'Struggle' \nportion. This will usually result in the death of the player's Character.\n\n\n\nData Asset zawierajacy zbior niezbednych informacji i zasobow do prawidlowego dzialania tak zwanych 'Sparowanych Dynamicznych Seqwencji'. \nTaki zasob moze byc wykorzystywany do mechanik zwiazanych z atakami wrogich postaci. Do prawidlowego dzialania sekwencji niezbedne jest \nprzegotowanie odpowiednich animacji, ktore zostaly podzielone na odpowiednie kategorie:\n1) Initjacja - Moment wejscia do sparowanej sekwencji pomi\xef\xbf\xbd""dzy dwoma charakterami.\n2) Struggle/Loop - To moment kiedy gracz ma czas na wykonanie jakiejs interakcji np. szybkie naciskanie przycisku 'E'\n3) Success - Wyjscie z czcsci Struggle oraz odegranie sekwencji, kt\xef\xbf\xbdra nie ko\xef\xbf\xbd""czy si\xef\xbf\xbd smiercia gracza\n4) Failed - Dane z tej czesci zostana aktywowane w momencie kiedy gracz nie ukonczy interakcji wymaganej w czesci 'Struggle'. Zazwyczaj \nb\xef\xbf\xbd""dzie to oznacza\xef\xbf\xbdo smierc Charakteru gracza\n\n*/" },
#endif
		{ "IncludePath", "PairedAnimSequenceData.h" },
		{ "ModuleRelativePath", "Public/PairedAnimSequenceData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A data asset containing a set of essential information and resources for the proper operation of so-called 'Paired Dynamic Sequences.'\nThis resource can be used for mechanics related to enemy character attacks. For the sequences to function correctly, appropriate\nanimations must be prepared, which are divided into the following categories:\n\n1) Initiation - The moment of entering a paired sequence between two characters.\n2) Struggle/Loop - This is the moment when the player has time to perform an interaction, such as rapidly pressing the 'E' button.\n3) Success - Exiting the Struggle portion and playing a sequence that does not end in the player's death.\n4) Failed - Data from this portion will be activated when the player fails to complete the interaction required in the 'Struggle'\nportion. This will usually result in the death of the player's Character.\n\n\n\nData Asset zawierajacy zbior niezbednych informacji i zasobow do prawidlowego dzialania tak zwanych 'Sparowanych Dynamicznych Seqwencji'.\nTaki zasob moze byc wykorzystywany do mechanik zwiazanych z atakami wrogich postaci. Do prawidlowego dzialania sekwencji niezbedne jest\nprzegotowanie odpowiednich animacji, ktore zostaly podzielone na odpowiednie kategorie:\n1) Initjacja - Moment wejscia do sparowanej sekwencji pomi\xef\xbf\xbd""dzy dwoma charakterami.\n2) Struggle/Loop - To moment kiedy gracz ma czas na wykonanie jakiejs interakcji np. szybkie naciskanie przycisku 'E'\n3) Success - Wyjscie z czcsci Struggle oraz odegranie sekwencji, kt\xef\xbf\xbdra nie ko\xef\xbf\xbd""czy si\xef\xbf\xbd smiercia gracza\n4) Failed - Dane z tej czesci zostana aktywowane w momencie kiedy gracz nie ukonczy interakcji wymaganej w czesci 'Struggle'. Zazwyczaj\nb\xef\xbf\xbd""dzie to oznacza\xef\xbf\xbdo smierc Charakteru gracza" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetTags_MetaData[] = {
		{ "Category", "Paired Sequences Data|Global" },
		{ "ModuleRelativePath", "Public/PairedAnimSequenceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstGlobalRootsOffset_MetaData[] = {
		{ "Category", "Paired Sequences Data|Global" },
		{ "ModuleRelativePath", "Public/PairedAnimSequenceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstGlobalRotationDelta_MetaData[] = {
		{ "Category", "Paired Sequences Data|Global" },
		{ "ModuleRelativePath", "Public/PairedAnimSequenceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInverseRotationDeltaForVic_MetaData[] = {
		{ "Category", "Paired Sequences Data|Global" },
		{ "ModuleRelativePath", "Public/PairedAnimSequenceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInverseRotationDeltaForAtt_MetaData[] = {
		{ "Category", "Paired Sequences Data|Global" },
		{ "ModuleRelativePath", "Public/PairedAnimSequenceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MontageInitializeAtt_MetaData[] = {
		{ "Category", "Paired Sequences Data|Data - Initialize" },
		{ "ModuleRelativePath", "Public/PairedAnimSequenceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MontageInitializeVic_MetaData[] = {
		{ "Category", "Paired Sequences Data|Data - Initialize" },
		{ "ModuleRelativePath", "Public/PairedAnimSequenceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UsePoseSearchForInitialze_MetaData[] = {
		{ "Category", "Paired Sequences Data|Data - Initialize" },
		{ "ModuleRelativePath", "Public/PairedAnimSequenceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForPoseSearchMontagesAtt_MetaData[] = {
		{ "Category", "Paired Sequences Data|Data - Initialize" },
		{ "EditCondition", "UsePoseSearchForInitialze" },
		{ "ModuleRelativePath", "Public/PairedAnimSequenceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimStruggleDynamicTimeAtt_MetaData[] = {
		{ "Category", "Paired Sequences Data|Data - Struggle" },
		{ "ModuleRelativePath", "Public/PairedAnimSequenceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimStruggleDynamicTimeVic_MetaData[] = {
		{ "Category", "Paired Sequences Data|Data - Struggle" },
		{ "ModuleRelativePath", "Public/PairedAnimSequenceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrugglePartMaxTimeValue_MetaData[] = {
		{ "Category", "Paired Sequences Data|Data - Struggle" },
		{ "ModuleRelativePath", "Public/PairedAnimSequenceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrugglePartCriticalValue_MetaData[] = {
		{ "Category", "Paired Sequences Data|Data - Struggle" },
		{ "ModuleRelativePath", "Public/PairedAnimSequenceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoftAddtiveAnimStruggleLoopAtt_MetaData[] = {
		{ "Category", "Paired Sequences Data|Data - Struggle" },
		{ "ModuleRelativePath", "Public/PairedAnimSequenceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoftAddtiveAnimStruggleLoopVic_MetaData[] = {
		{ "Category", "Paired Sequences Data|Data - Struggle" },
		{ "ModuleRelativePath", "Public/PairedAnimSequenceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoftMontageSuccessAtt_MetaData[] = {
		{ "Category", "Paired Sequences Data|Data - Success" },
		{ "ModuleRelativePath", "Public/PairedAnimSequenceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoftMontageSuccessVic_MetaData[] = {
		{ "Category", "Paired Sequences Data|Data - Success" },
		{ "ModuleRelativePath", "Public/PairedAnimSequenceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SuccessMontagesTimeStartRange_MetaData[] = {
		{ "Category", "Paired Sequences Data|Data - Success" },
		{ "ModuleRelativePath", "Public/PairedAnimSequenceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SuccessLocalOffset_MetaData[] = {
		{ "Category", "Paired Sequences Data|Data - Success" },
		{ "ModuleRelativePath", "Public/PairedAnimSequenceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoftMontageFailedAtt_MetaData[] = {
		{ "Category", "Paired Sequences Data|Data - Failed" },
		{ "ModuleRelativePath", "Public/PairedAnimSequenceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoftMontageFailedVic_MetaData[] = {
		{ "Category", "Paired Sequences Data|Data - Failed" },
		{ "ModuleRelativePath", "Public/PairedAnimSequenceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FailedMontagesTimeStartRange_MetaData[] = {
		{ "Category", "Paired Sequences Data|Data - Failed" },
		{ "ModuleRelativePath", "Public/PairedAnimSequenceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FailedLocalOffset_MetaData[] = {
		{ "Category", "Paired Sequences Data|Data - Failed" },
		{ "ModuleRelativePath", "Public/PairedAnimSequenceData.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPairedAnimSequenceData constinit property declarations ******************
	static const UECodeGen_Private::FNamePropertyParams NewProp_AssetTags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConstGlobalRootsOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConstGlobalRotationDelta;
	static void NewProp_bInverseRotationDeltaForVic_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInverseRotationDeltaForVic;
	static void NewProp_bInverseRotationDeltaForAtt_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInverseRotationDeltaForAtt;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MontageInitializeAtt;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MontageInitializeVic;
	static void NewProp_UsePoseSearchForInitialze_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UsePoseSearchForInitialze;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ForPoseSearchMontagesAtt_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ForPoseSearchMontagesAtt;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimStruggleDynamicTimeAtt;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimStruggleDynamicTimeVic;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StrugglePartMaxTimeValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StrugglePartCriticalValue;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SoftAddtiveAnimStruggleLoopAtt;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SoftAddtiveAnimStruggleLoopVic;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SoftMontageSuccessAtt;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SoftMontageSuccessVic;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SuccessMontagesTimeStartRange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SuccessLocalOffset;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SoftMontageFailedAtt;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SoftMontageFailedVic;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FailedMontagesTimeStartRange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FailedLocalOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPairedAnimSequenceData constinit property declarations ********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPairedAnimSequenceData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPairedAnimSequenceData_Statics

// ********** Begin Class UPairedAnimSequenceData Property Definitions *****************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPairedAnimSequenceData_Statics::NewProp_AssetTags_Inner = { "AssetTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPairedAnimSequenceData_Statics::NewProp_AssetTags = { "AssetTags", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPairedAnimSequenceData, AssetTags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetTags_MetaData), NewProp_AssetTags_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPairedAnimSequenceData_Statics::NewProp_ConstGlobalRootsOffset = { "ConstGlobalRootsOffset", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPairedAnimSequenceData, ConstGlobalRootsOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstGlobalRootsOffset_MetaData), NewProp_ConstGlobalRootsOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPairedAnimSequenceData_Statics::NewProp_ConstGlobalRotationDelta = { "ConstGlobalRotationDelta", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPairedAnimSequenceData, ConstGlobalRotationDelta), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstGlobalRotationDelta_MetaData), NewProp_ConstGlobalRotationDelta_MetaData) };
void Z_Construct_UClass_UPairedAnimSequenceData_Statics::NewProp_bInverseRotationDeltaForVic_SetBit(void* Obj)
{
	((UPairedAnimSequenceData*)Obj)->bInverseRotationDeltaForVic = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPairedAnimSequenceData_Statics::NewProp_bInverseRotationDeltaForVic = { "bInverseRotationDeltaForVic", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPairedAnimSequenceData), &Z_Construct_UClass_UPairedAnimSequenceData_Statics::NewProp_bInverseRotationDeltaForVic_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInverseRotationDeltaForVic_MetaData), NewProp_bInverseRotationDeltaForVic_MetaData) };
void Z_Construct_UClass_UPairedAnimSequenceData_Statics::NewProp_bInverseRotationDeltaForAtt_SetBit(void* Obj)
{
	((UPairedAnimSequenceData*)Obj)->bInverseRotationDeltaForAtt = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPairedAnimSequenceData_Statics::NewProp_bInverseRotationDeltaForAtt = { "bInverseRotationDeltaForAtt", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPairedAnimSequenceData), &Z_Construct_UClass_UPairedAnimSequenceData_Statics::NewProp_bInverseRotationDeltaForAtt_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInverseRotationDeltaForAtt_MetaData), NewProp_bInverseRotationDeltaForAtt_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPairedAnimSequenceData_Statics::NewProp_MontageInitializeAtt = { "MontageInitializeAtt", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPairedAnimSequenceData, MontageInitializeAtt), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MontageInitializeAtt_MetaData), NewProp_MontageInitializeAtt_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPairedAnimSequenceData_Statics::NewProp_MontageInitializeVic = { "MontageInitializeVic", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPairedAnimSequenceData, MontageInitializeVic), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MontageInitializeVic_MetaData), NewProp_MontageInitializeVic_MetaData) };
void Z_Construct_UClass_UPairedAnimSequenceData_Statics::NewProp_UsePoseSearchForInitialze_SetBit(void* Obj)
{
	((UPairedAnimSequenceData*)Obj)->UsePoseSearchForInitialze = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPairedAnimSequenceData_Statics::NewProp_UsePoseSearchForInitialze = { "UsePoseSearchForInitialze", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPairedAnimSequenceData), &Z_Construct_UClass_UPairedAnimSequenceData_Statics::NewProp_UsePoseSearchForInitialze_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UsePoseSearchForInitialze_MetaData), NewProp_UsePoseSearchForInitialze_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPairedAnimSequenceData_Statics::NewProp_ForPoseSearchMontagesAtt_Inner = { "ForPoseSearchMontagesAtt", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPairedAnimSequenceData_Statics::NewProp_ForPoseSearchMontagesAtt = { "ForPoseSearchMontagesAtt", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPairedAnimSequenceData, ForPoseSearchMontagesAtt), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForPoseSearchMontagesAtt_MetaData), NewProp_ForPoseSearchMontagesAtt_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPairedAnimSequenceData_Statics::NewProp_AnimStruggleDynamicTimeAtt = { "AnimStruggleDynamicTimeAtt", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPairedAnimSequenceData, AnimStruggleDynamicTimeAtt), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimStruggleDynamicTimeAtt_MetaData), NewProp_AnimStruggleDynamicTimeAtt_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPairedAnimSequenceData_Statics::NewProp_AnimStruggleDynamicTimeVic = { "AnimStruggleDynamicTimeVic", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPairedAnimSequenceData, AnimStruggleDynamicTimeVic), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimStruggleDynamicTimeVic_MetaData), NewProp_AnimStruggleDynamicTimeVic_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPairedAnimSequenceData_Statics::NewProp_StrugglePartMaxTimeValue = { "StrugglePartMaxTimeValue", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPairedAnimSequenceData, StrugglePartMaxTimeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrugglePartMaxTimeValue_MetaData), NewProp_StrugglePartMaxTimeValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPairedAnimSequenceData_Statics::NewProp_StrugglePartCriticalValue = { "StrugglePartCriticalValue", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPairedAnimSequenceData, StrugglePartCriticalValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrugglePartCriticalValue_MetaData), NewProp_StrugglePartCriticalValue_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UPairedAnimSequenceData_Statics::NewProp_SoftAddtiveAnimStruggleLoopAtt = { "SoftAddtiveAnimStruggleLoopAtt", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPairedAnimSequenceData, SoftAddtiveAnimStruggleLoopAtt), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoftAddtiveAnimStruggleLoopAtt_MetaData), NewProp_SoftAddtiveAnimStruggleLoopAtt_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UPairedAnimSequenceData_Statics::NewProp_SoftAddtiveAnimStruggleLoopVic = { "SoftAddtiveAnimStruggleLoopVic", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPairedAnimSequenceData, SoftAddtiveAnimStruggleLoopVic), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoftAddtiveAnimStruggleLoopVic_MetaData), NewProp_SoftAddtiveAnimStruggleLoopVic_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UPairedAnimSequenceData_Statics::NewProp_SoftMontageSuccessAtt = { "SoftMontageSuccessAtt", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPairedAnimSequenceData, SoftMontageSuccessAtt), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoftMontageSuccessAtt_MetaData), NewProp_SoftMontageSuccessAtt_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UPairedAnimSequenceData_Statics::NewProp_SoftMontageSuccessVic = { "SoftMontageSuccessVic", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPairedAnimSequenceData, SoftMontageSuccessVic), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoftMontageSuccessVic_MetaData), NewProp_SoftMontageSuccessVic_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPairedAnimSequenceData_Statics::NewProp_SuccessMontagesTimeStartRange = { "SuccessMontagesTimeStartRange", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPairedAnimSequenceData, SuccessMontagesTimeStartRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SuccessMontagesTimeStartRange_MetaData), NewProp_SuccessMontagesTimeStartRange_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPairedAnimSequenceData_Statics::NewProp_SuccessLocalOffset = { "SuccessLocalOffset", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPairedAnimSequenceData, SuccessLocalOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SuccessLocalOffset_MetaData), NewProp_SuccessLocalOffset_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UPairedAnimSequenceData_Statics::NewProp_SoftMontageFailedAtt = { "SoftMontageFailedAtt", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPairedAnimSequenceData, SoftMontageFailedAtt), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoftMontageFailedAtt_MetaData), NewProp_SoftMontageFailedAtt_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UPairedAnimSequenceData_Statics::NewProp_SoftMontageFailedVic = { "SoftMontageFailedVic", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPairedAnimSequenceData, SoftMontageFailedVic), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoftMontageFailedVic_MetaData), NewProp_SoftMontageFailedVic_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPairedAnimSequenceData_Statics::NewProp_FailedMontagesTimeStartRange = { "FailedMontagesTimeStartRange", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPairedAnimSequenceData, FailedMontagesTimeStartRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FailedMontagesTimeStartRange_MetaData), NewProp_FailedMontagesTimeStartRange_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPairedAnimSequenceData_Statics::NewProp_FailedLocalOffset = { "FailedLocalOffset", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPairedAnimSequenceData, FailedLocalOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FailedLocalOffset_MetaData), NewProp_FailedLocalOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPairedAnimSequenceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPairedAnimSequenceData_Statics::NewProp_AssetTags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPairedAnimSequenceData_Statics::NewProp_AssetTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPairedAnimSequenceData_Statics::NewProp_ConstGlobalRootsOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPairedAnimSequenceData_Statics::NewProp_ConstGlobalRotationDelta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPairedAnimSequenceData_Statics::NewProp_bInverseRotationDeltaForVic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPairedAnimSequenceData_Statics::NewProp_bInverseRotationDeltaForAtt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPairedAnimSequenceData_Statics::NewProp_MontageInitializeAtt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPairedAnimSequenceData_Statics::NewProp_MontageInitializeVic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPairedAnimSequenceData_Statics::NewProp_UsePoseSearchForInitialze,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPairedAnimSequenceData_Statics::NewProp_ForPoseSearchMontagesAtt_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPairedAnimSequenceData_Statics::NewProp_ForPoseSearchMontagesAtt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPairedAnimSequenceData_Statics::NewProp_AnimStruggleDynamicTimeAtt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPairedAnimSequenceData_Statics::NewProp_AnimStruggleDynamicTimeVic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPairedAnimSequenceData_Statics::NewProp_StrugglePartMaxTimeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPairedAnimSequenceData_Statics::NewProp_StrugglePartCriticalValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPairedAnimSequenceData_Statics::NewProp_SoftAddtiveAnimStruggleLoopAtt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPairedAnimSequenceData_Statics::NewProp_SoftAddtiveAnimStruggleLoopVic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPairedAnimSequenceData_Statics::NewProp_SoftMontageSuccessAtt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPairedAnimSequenceData_Statics::NewProp_SoftMontageSuccessVic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPairedAnimSequenceData_Statics::NewProp_SuccessMontagesTimeStartRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPairedAnimSequenceData_Statics::NewProp_SuccessLocalOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPairedAnimSequenceData_Statics::NewProp_SoftMontageFailedAtt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPairedAnimSequenceData_Statics::NewProp_SoftMontageFailedVic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPairedAnimSequenceData_Statics::NewProp_FailedMontagesTimeStartRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPairedAnimSequenceData_Statics::NewProp_FailedLocalOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPairedAnimSequenceData_Statics::PropPointers) < 2048);
// ********** End Class UPairedAnimSequenceData Property Definitions *******************************
UObject* (*const Z_Construct_UClass_UPairedAnimSequenceData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPairedAnimSequenceData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPairedAnimSequenceData_Statics::ClassParams = {
	&UPairedAnimSequenceData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPairedAnimSequenceData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPairedAnimSequenceData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPairedAnimSequenceData_Statics::Class_MetaDataParams), Z_Construct_UClass_UPairedAnimSequenceData_Statics::Class_MetaDataParams)
};
void UPairedAnimSequenceData::StaticRegisterNativesUPairedAnimSequenceData()
{
}
UClass* Z_Construct_UClass_UPairedAnimSequenceData()
{
	if (!Z_Registration_Info_UClass_UPairedAnimSequenceData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPairedAnimSequenceData.OuterSingleton, Z_Construct_UClass_UPairedAnimSequenceData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPairedAnimSequenceData.OuterSingleton;
}
UPairedAnimSequenceData::UPairedAnimSequenceData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPairedAnimSequenceData);
UPairedAnimSequenceData::~UPairedAnimSequenceData() {}
// ********** End Class UPairedAnimSequenceData ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UE5_7_AGLS_ProgramingCpp_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_PairedAnimSequenceData_h__Script_HelpfulFunctions_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPairedAnimSequenceData, UPairedAnimSequenceData::StaticClass, TEXT("UPairedAnimSequenceData"), &Z_Registration_Info_UClass_UPairedAnimSequenceData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPairedAnimSequenceData), 3444421890U) },
	};
}; // Z_CompiledInDeferFile_FID_Unreal_Projects_UE5_7_AGLS_ProgramingCpp_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_PairedAnimSequenceData_h__Script_HelpfulFunctions_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UE5_7_AGLS_ProgramingCpp_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_PairedAnimSequenceData_h__Script_HelpfulFunctions_3138504765{
	TEXT("/Script/HelpfulFunctions"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UE5_7_AGLS_ProgramingCpp_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_PairedAnimSequenceData_h__Script_HelpfulFunctions_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UE5_7_AGLS_ProgramingCpp_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_PairedAnimSequenceData_h__Script_HelpfulFunctions_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
