// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PairedAttackSequenceData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePairedAttackSequenceData() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_APairedAttackSequenceData();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_APairedAttackSequenceData_NoRegister();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_PairedAttackSeqPreviewMode();
UPackage* Z_Construct_UPackage__Script_HelpfulFunctions();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum PairedAttackSeqPreviewMode ************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_PairedAttackSeqPreviewMode;
static UEnum* PairedAttackSeqPreviewMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_PairedAttackSeqPreviewMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_PairedAttackSeqPreviewMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HelpfulFunctions_PairedAttackSeqPreviewMode, (UObject*)Z_Construct_UPackage__Script_HelpfulFunctions(), TEXT("PairedAttackSeqPreviewMode"));
	}
	return Z_Registration_Info_UEnum_PairedAttackSeqPreviewMode.OuterSingleton;
}
template<> HELPFULFUNCTIONS_NON_ATTRIBUTED_API UEnum* StaticEnum<PairedAttackSeqPreviewMode>()
{
	return PairedAttackSeqPreviewMode_StaticEnum();
}
struct Z_Construct_UEnum_HelpfulFunctions_PairedAttackSeqPreviewMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Failed.Name", "PairedAttackSeqPreviewMode::Failed" },
		{ "Initialize.Name", "PairedAttackSeqPreviewMode::Initialize" },
		{ "ModuleRelativePath", "Public/PairedAttackSequenceData.h" },
		{ "Struggle.Name", "PairedAttackSeqPreviewMode::Struggle" },
		{ "Success.Name", "PairedAttackSeqPreviewMode::Success" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "PairedAttackSeqPreviewMode::Initialize", (int64)PairedAttackSeqPreviewMode::Initialize },
		{ "PairedAttackSeqPreviewMode::Struggle", (int64)PairedAttackSeqPreviewMode::Struggle },
		{ "PairedAttackSeqPreviewMode::Success", (int64)PairedAttackSeqPreviewMode::Success },
		{ "PairedAttackSeqPreviewMode::Failed", (int64)PairedAttackSeqPreviewMode::Failed },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_HelpfulFunctions_PairedAttackSeqPreviewMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HelpfulFunctions_PairedAttackSeqPreviewMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HelpfulFunctions,
	nullptr,
	"PairedAttackSeqPreviewMode",
	"PairedAttackSeqPreviewMode",
	Z_Construct_UEnum_HelpfulFunctions_PairedAttackSeqPreviewMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HelpfulFunctions_PairedAttackSeqPreviewMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HelpfulFunctions_PairedAttackSeqPreviewMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HelpfulFunctions_PairedAttackSeqPreviewMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HelpfulFunctions_PairedAttackSeqPreviewMode()
{
	if (!Z_Registration_Info_UEnum_PairedAttackSeqPreviewMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_PairedAttackSeqPreviewMode.InnerSingleton, Z_Construct_UEnum_HelpfulFunctions_PairedAttackSeqPreviewMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_PairedAttackSeqPreviewMode.InnerSingleton;
}
// ********** End Enum PairedAttackSeqPreviewMode **************************************************

// ********** Begin Class APairedAttackSequenceData ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_APairedAttackSequenceData;
UClass* APairedAttackSequenceData::GetPrivateStaticClass()
{
	using TClass = APairedAttackSequenceData;
	if (!Z_Registration_Info_UClass_APairedAttackSequenceData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PairedAttackSequenceData"),
			Z_Registration_Info_UClass_APairedAttackSequenceData.InnerSingleton,
			StaticRegisterNativesAPairedAttackSequenceData,
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
	return Z_Registration_Info_UClass_APairedAttackSequenceData.InnerSingleton;
}
UClass* Z_Construct_UClass_APairedAttackSequenceData_NoRegister()
{
	return APairedAttackSequenceData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APairedAttackSequenceData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ChildCannotTick", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\nA data asset containing a set of essential information and resources for the proper operation of so-called 'Paired Dynamic Sequences.'\nThis resource can be used for mechanics related to enemy character attacks. For the sequences to function correctly, appropriate\nanimations must be prepared, which are divided into the following categories:\n\n1) Initiation - The moment of entering a paired sequence between two characters.\n2) Struggle/Loop - This is the moment when the player has time to perform an interaction, such as rapidly pressing the 'E' button.\n3) Success - Exiting the Struggle portion and playing a sequence that does not end in the player's death.\n4) Failed - Data from this portion will be activated when the player fails to complete the interaction required in the 'Struggle'\nportion. This will usually result in the death of the player's Character.\n\n\n\nData Asset zawierajacy zbior niezbednych informacji i zasobow do prawidlowego dzialania tak zwanych 'Sparowanych Dynamicznych Seqwencji'.\nTaki zasob moze byc wykorzystywany do mechanik zwiazanych z atakami wrogich postaci. Do prawidlowego dzialania sekwencji niezbedne jest\nprzegotowanie odpowiednich animacji, ktore zostaly podzielone na odpowiednie kategorie:\n1) Inicjacja - Moment wejscia do sparowanej sekwencji pomiedzy dwoma charakterami.\n2) Struggle/Loop - To moment kiedy gracz ma czas na wykonanie jakiejs interakcji np. szybkie naciskanie przycisku 'E'\n3) Success - Wyjscie z czesci Struggle oraz odegranie sekwencji, ktora nie konczy sie smiercia gracza\n4) Failed - Dane z tej czesci zostana aktywowane w momencie kiedy gracz nie ukonczy interakcji wymaganej w czesci 'Struggle'. Zazwyczaj\nb\xef\xbf\xbd""dzie to oznacza\xef\xbf\xbdo smierc Charakteru gracza\n\n*/" },
#endif
		{ "HideCategories", "Navigation HLOD Input NetWorking Replication Mobile DataLayers Actor Tick Actor WorldPartition LevelInstance Collision Events Physics" },
		{ "IncludePath", "PairedAttackSequenceData.h" },
		{ "ModuleRelativePath", "Public/PairedAttackSequenceData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A data asset containing a set of essential information and resources for the proper operation of so-called 'Paired Dynamic Sequences.'\nThis resource can be used for mechanics related to enemy character attacks. For the sequences to function correctly, appropriate\nanimations must be prepared, which are divided into the following categories:\n\n1) Initiation - The moment of entering a paired sequence between two characters.\n2) Struggle/Loop - This is the moment when the player has time to perform an interaction, such as rapidly pressing the 'E' button.\n3) Success - Exiting the Struggle portion and playing a sequence that does not end in the player's death.\n4) Failed - Data from this portion will be activated when the player fails to complete the interaction required in the 'Struggle'\nportion. This will usually result in the death of the player's Character.\n\n\n\nData Asset zawierajacy zbior niezbednych informacji i zasobow do prawidlowego dzialania tak zwanych 'Sparowanych Dynamicznych Seqwencji'.\nTaki zasob moze byc wykorzystywany do mechanik zwiazanych z atakami wrogich postaci. Do prawidlowego dzialania sekwencji niezbedne jest\nprzegotowanie odpowiednich animacji, ktore zostaly podzielone na odpowiednie kategorie:\n1) Inicjacja - Moment wejscia do sparowanej sekwencji pomiedzy dwoma charakterami.\n2) Struggle/Loop - To moment kiedy gracz ma czas na wykonanie jakiejs interakcji np. szybkie naciskanie przycisku 'E'\n3) Success - Wyjscie z czesci Struggle oraz odegranie sekwencji, ktora nie konczy sie smiercia gracza\n4) Failed - Dane z tej czesci zostana aktywowane w momencie kiedy gracz nie ukonczy interakcji wymaganej w czesci 'Struggle'. Zazwyczaj\nb\xef\xbf\xbd""dzie to oznacza\xef\xbf\xbdo smierc Charakteru gracza" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGeneratePreview_MetaData[] = {
		{ "Category", "Paired Sequences Data|Preview" },
		{ "ModuleRelativePath", "Public/PairedAttackSequenceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimNormalizedTime_MetaData[] = {
		{ "Category", "Paired Sequences Data|Preview" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bGeneratePreview" },
		{ "ModuleRelativePath", "Public/PairedAttackSequenceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimsPreviewMode_MetaData[] = {
		{ "Category", "Paired Sequences Data|Preview" },
		{ "EditCondition", "bGeneratePreview" },
		{ "ModuleRelativePath", "Public/PairedAttackSequenceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshAtt_MetaData[] = {
		{ "Category", "Paired Sequences Data|Global" },
		{ "ModuleRelativePath", "Public/PairedAttackSequenceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshVic_MetaData[] = {
		{ "Category", "Paired Sequences Data|Global" },
		{ "ModuleRelativePath", "Public/PairedAttackSequenceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetTags_MetaData[] = {
		{ "Category", "Paired Sequences Data|Global" },
		{ "ModuleRelativePath", "Public/PairedAttackSequenceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVicCharacterIsRoot_MetaData[] = {
		{ "Category", "Paired Sequences Data|Global" },
		{ "ModuleRelativePath", "Public/PairedAttackSequenceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstGlobalRootsOffset_MetaData[] = {
		{ "Category", "Paired Sequences Data|Global" },
		{ "ModuleRelativePath", "Public/PairedAttackSequenceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstGlobalRotationDelta_MetaData[] = {
		{ "Category", "Paired Sequences Data|Global" },
		{ "ModuleRelativePath", "Public/PairedAttackSequenceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInverseRotationDeltaForVic_MetaData[] = {
		{ "Category", "Paired Sequences Data|Global" },
		{ "ModuleRelativePath", "Public/PairedAttackSequenceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInverseRotationDeltaForAtt_MetaData[] = {
		{ "Category", "Paired Sequences Data|Global" },
		{ "ModuleRelativePath", "Public/PairedAttackSequenceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MontageInitializeAtt_MetaData[] = {
		{ "Category", "Paired Sequences Data|Data - Initialize" },
		{ "ModuleRelativePath", "Public/PairedAttackSequenceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MontageInitializeVic_MetaData[] = {
		{ "Category", "Paired Sequences Data|Data - Initialize" },
		{ "ModuleRelativePath", "Public/PairedAttackSequenceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UsePoseSearchForInitialze_MetaData[] = {
		{ "Category", "Paired Sequences Data|Data - Initialize" },
		{ "ModuleRelativePath", "Public/PairedAttackSequenceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForPoseSearchMontagesAtt_MetaData[] = {
		{ "Category", "Paired Sequences Data|Data - Initialize" },
		{ "EditCondition", "UsePoseSearchForInitialze" },
		{ "ModuleRelativePath", "Public/PairedAttackSequenceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimStruggleDynamicTimeAtt_MetaData[] = {
		{ "Category", "Paired Sequences Data|Data - Struggle" },
		{ "ModuleRelativePath", "Public/PairedAttackSequenceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimStruggleDynamicTimeVic_MetaData[] = {
		{ "Category", "Paired Sequences Data|Data - Struggle" },
		{ "ModuleRelativePath", "Public/PairedAttackSequenceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrugglePartInitProgressValue_MetaData[] = {
		{ "Category", "Paired Sequences Data|Data - Struggle" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/PairedAttackSequenceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrugglePartCriticalValue_MetaData[] = {
		{ "Category", "Paired Sequences Data|Data - Struggle" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/PairedAttackSequenceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrugglePartProgressDeltaAdd_MetaData[] = {
		{ "Category", "Paired Sequences Data|Data - Struggle" },
		{ "ClampMax", "0.5" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/PairedAttackSequenceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrugglePartProgressDeltaSub_MetaData[] = {
		{ "Category", "Paired Sequences Data|Data - Struggle" },
		{ "ClampMax", "0.5" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/PairedAttackSequenceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoftAddtiveAnimStruggleLoopAtt_MetaData[] = {
		{ "Category", "Paired Sequences Data|Data - Struggle" },
		{ "ModuleRelativePath", "Public/PairedAttackSequenceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoftAddtiveAnimStruggleLoopVic_MetaData[] = {
		{ "Category", "Paired Sequences Data|Data - Struggle" },
		{ "ModuleRelativePath", "Public/PairedAttackSequenceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoftMontageSuccessAtt_MetaData[] = {
		{ "Category", "Paired Sequences Data|Data - Success" },
		{ "ModuleRelativePath", "Public/PairedAttackSequenceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoftMontageSuccessVic_MetaData[] = {
		{ "Category", "Paired Sequences Data|Data - Success" },
		{ "ModuleRelativePath", "Public/PairedAttackSequenceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SuccessMontagesTimeStartRange_MetaData[] = {
		{ "Category", "Paired Sequences Data|Data - Success" },
		{ "ModuleRelativePath", "Public/PairedAttackSequenceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SuccessLocalOffset_MetaData[] = {
		{ "Category", "Paired Sequences Data|Data - Success" },
		{ "ModuleRelativePath", "Public/PairedAttackSequenceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoftMontageFailedAtt_MetaData[] = {
		{ "Category", "Paired Sequences Data|Data - Failed" },
		{ "ModuleRelativePath", "Public/PairedAttackSequenceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoftMontageFailedVic_MetaData[] = {
		{ "Category", "Paired Sequences Data|Data - Failed" },
		{ "ModuleRelativePath", "Public/PairedAttackSequenceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FailedMontagesTimeStartRange_MetaData[] = {
		{ "Category", "Paired Sequences Data|Data - Failed" },
		{ "ModuleRelativePath", "Public/PairedAttackSequenceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FailedLocalOffset_MetaData[] = {
		{ "Category", "Paired Sequences Data|Data - Failed" },
		{ "ModuleRelativePath", "Public/PairedAttackSequenceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraDesiredTransformStart_MetaData[] = {
		{ "Category", "Paired Sequences Data|Camera Control" },
		{ "ModuleRelativePath", "Public/PairedAttackSequenceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraDesiredTransformEnd_MetaData[] = {
		{ "Category", "Paired Sequences Data|Camera Control" },
		{ "ModuleRelativePath", "Public/PairedAttackSequenceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraInterpSpeedBias_MetaData[] = {
		{ "Category", "Paired Sequences Data|Camera Control" },
		{ "ModuleRelativePath", "Public/PairedAttackSequenceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraFOV_Bias_MetaData[] = {
		{ "Category", "Paired Sequences Data|Camera Control" },
		{ "ModuleRelativePath", "Public/PairedAttackSequenceData.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class APairedAttackSequenceData constinit property declarations ****************
	static void NewProp_bGeneratePreview_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGeneratePreview;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimNormalizedTime;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AnimsPreviewMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AnimsPreviewMode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshAtt;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshVic;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AssetTags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetTags;
	static void NewProp_bVicCharacterIsRoot_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVicCharacterIsRoot;
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
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StrugglePartInitProgressValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StrugglePartCriticalValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StrugglePartProgressDeltaAdd;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StrugglePartProgressDeltaSub;
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
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraDesiredTransformStart;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraDesiredTransformEnd;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraInterpSpeedBias;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraFOV_Bias;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class APairedAttackSequenceData constinit property declarations ******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APairedAttackSequenceData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_APairedAttackSequenceData_Statics

// ********** Begin Class APairedAttackSequenceData Property Definitions ***************************
void Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_bGeneratePreview_SetBit(void* Obj)
{
	((APairedAttackSequenceData*)Obj)->bGeneratePreview = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_bGeneratePreview = { "bGeneratePreview", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APairedAttackSequenceData), &Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_bGeneratePreview_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGeneratePreview_MetaData), NewProp_bGeneratePreview_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_AnimNormalizedTime = { "AnimNormalizedTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APairedAttackSequenceData, AnimNormalizedTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimNormalizedTime_MetaData), NewProp_AnimNormalizedTime_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_AnimsPreviewMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_AnimsPreviewMode = { "AnimsPreviewMode", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APairedAttackSequenceData, AnimsPreviewMode), Z_Construct_UEnum_HelpfulFunctions_PairedAttackSeqPreviewMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimsPreviewMode_MetaData), NewProp_AnimsPreviewMode_MetaData) }; // 1507028108
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_SkeletalMeshAtt = { "SkeletalMeshAtt", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APairedAttackSequenceData, SkeletalMeshAtt), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMeshAtt_MetaData), NewProp_SkeletalMeshAtt_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_SkeletalMeshVic = { "SkeletalMeshVic", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APairedAttackSequenceData, SkeletalMeshVic), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMeshVic_MetaData), NewProp_SkeletalMeshVic_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_AssetTags_Inner = { "AssetTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_AssetTags = { "AssetTags", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APairedAttackSequenceData, AssetTags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetTags_MetaData), NewProp_AssetTags_MetaData) };
void Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_bVicCharacterIsRoot_SetBit(void* Obj)
{
	((APairedAttackSequenceData*)Obj)->bVicCharacterIsRoot = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_bVicCharacterIsRoot = { "bVicCharacterIsRoot", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APairedAttackSequenceData), &Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_bVicCharacterIsRoot_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVicCharacterIsRoot_MetaData), NewProp_bVicCharacterIsRoot_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_ConstGlobalRootsOffset = { "ConstGlobalRootsOffset", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APairedAttackSequenceData, ConstGlobalRootsOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstGlobalRootsOffset_MetaData), NewProp_ConstGlobalRootsOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_ConstGlobalRotationDelta = { "ConstGlobalRotationDelta", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APairedAttackSequenceData, ConstGlobalRotationDelta), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstGlobalRotationDelta_MetaData), NewProp_ConstGlobalRotationDelta_MetaData) };
void Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_bInverseRotationDeltaForVic_SetBit(void* Obj)
{
	((APairedAttackSequenceData*)Obj)->bInverseRotationDeltaForVic = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_bInverseRotationDeltaForVic = { "bInverseRotationDeltaForVic", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APairedAttackSequenceData), &Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_bInverseRotationDeltaForVic_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInverseRotationDeltaForVic_MetaData), NewProp_bInverseRotationDeltaForVic_MetaData) };
void Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_bInverseRotationDeltaForAtt_SetBit(void* Obj)
{
	((APairedAttackSequenceData*)Obj)->bInverseRotationDeltaForAtt = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_bInverseRotationDeltaForAtt = { "bInverseRotationDeltaForAtt", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APairedAttackSequenceData), &Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_bInverseRotationDeltaForAtt_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInverseRotationDeltaForAtt_MetaData), NewProp_bInverseRotationDeltaForAtt_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_MontageInitializeAtt = { "MontageInitializeAtt", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APairedAttackSequenceData, MontageInitializeAtt), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MontageInitializeAtt_MetaData), NewProp_MontageInitializeAtt_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_MontageInitializeVic = { "MontageInitializeVic", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APairedAttackSequenceData, MontageInitializeVic), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MontageInitializeVic_MetaData), NewProp_MontageInitializeVic_MetaData) };
void Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_UsePoseSearchForInitialze_SetBit(void* Obj)
{
	((APairedAttackSequenceData*)Obj)->UsePoseSearchForInitialze = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_UsePoseSearchForInitialze = { "UsePoseSearchForInitialze", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APairedAttackSequenceData), &Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_UsePoseSearchForInitialze_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UsePoseSearchForInitialze_MetaData), NewProp_UsePoseSearchForInitialze_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_ForPoseSearchMontagesAtt_Inner = { "ForPoseSearchMontagesAtt", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_ForPoseSearchMontagesAtt = { "ForPoseSearchMontagesAtt", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APairedAttackSequenceData, ForPoseSearchMontagesAtt), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForPoseSearchMontagesAtt_MetaData), NewProp_ForPoseSearchMontagesAtt_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_AnimStruggleDynamicTimeAtt = { "AnimStruggleDynamicTimeAtt", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APairedAttackSequenceData, AnimStruggleDynamicTimeAtt), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimStruggleDynamicTimeAtt_MetaData), NewProp_AnimStruggleDynamicTimeAtt_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_AnimStruggleDynamicTimeVic = { "AnimStruggleDynamicTimeVic", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APairedAttackSequenceData, AnimStruggleDynamicTimeVic), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimStruggleDynamicTimeVic_MetaData), NewProp_AnimStruggleDynamicTimeVic_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_StrugglePartInitProgressValue = { "StrugglePartInitProgressValue", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APairedAttackSequenceData, StrugglePartInitProgressValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrugglePartInitProgressValue_MetaData), NewProp_StrugglePartInitProgressValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_StrugglePartCriticalValue = { "StrugglePartCriticalValue", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APairedAttackSequenceData, StrugglePartCriticalValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrugglePartCriticalValue_MetaData), NewProp_StrugglePartCriticalValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_StrugglePartProgressDeltaAdd = { "StrugglePartProgressDeltaAdd", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APairedAttackSequenceData, StrugglePartProgressDeltaAdd), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrugglePartProgressDeltaAdd_MetaData), NewProp_StrugglePartProgressDeltaAdd_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_StrugglePartProgressDeltaSub = { "StrugglePartProgressDeltaSub", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APairedAttackSequenceData, StrugglePartProgressDeltaSub), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrugglePartProgressDeltaSub_MetaData), NewProp_StrugglePartProgressDeltaSub_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_SoftAddtiveAnimStruggleLoopAtt = { "SoftAddtiveAnimStruggleLoopAtt", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APairedAttackSequenceData, SoftAddtiveAnimStruggleLoopAtt), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoftAddtiveAnimStruggleLoopAtt_MetaData), NewProp_SoftAddtiveAnimStruggleLoopAtt_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_SoftAddtiveAnimStruggleLoopVic = { "SoftAddtiveAnimStruggleLoopVic", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APairedAttackSequenceData, SoftAddtiveAnimStruggleLoopVic), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoftAddtiveAnimStruggleLoopVic_MetaData), NewProp_SoftAddtiveAnimStruggleLoopVic_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_SoftMontageSuccessAtt = { "SoftMontageSuccessAtt", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APairedAttackSequenceData, SoftMontageSuccessAtt), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoftMontageSuccessAtt_MetaData), NewProp_SoftMontageSuccessAtt_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_SoftMontageSuccessVic = { "SoftMontageSuccessVic", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APairedAttackSequenceData, SoftMontageSuccessVic), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoftMontageSuccessVic_MetaData), NewProp_SoftMontageSuccessVic_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_SuccessMontagesTimeStartRange = { "SuccessMontagesTimeStartRange", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APairedAttackSequenceData, SuccessMontagesTimeStartRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SuccessMontagesTimeStartRange_MetaData), NewProp_SuccessMontagesTimeStartRange_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_SuccessLocalOffset = { "SuccessLocalOffset", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APairedAttackSequenceData, SuccessLocalOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SuccessLocalOffset_MetaData), NewProp_SuccessLocalOffset_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_SoftMontageFailedAtt = { "SoftMontageFailedAtt", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APairedAttackSequenceData, SoftMontageFailedAtt), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoftMontageFailedAtt_MetaData), NewProp_SoftMontageFailedAtt_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_SoftMontageFailedVic = { "SoftMontageFailedVic", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APairedAttackSequenceData, SoftMontageFailedVic), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoftMontageFailedVic_MetaData), NewProp_SoftMontageFailedVic_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_FailedMontagesTimeStartRange = { "FailedMontagesTimeStartRange", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APairedAttackSequenceData, FailedMontagesTimeStartRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FailedMontagesTimeStartRange_MetaData), NewProp_FailedMontagesTimeStartRange_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_FailedLocalOffset = { "FailedLocalOffset", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APairedAttackSequenceData, FailedLocalOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FailedLocalOffset_MetaData), NewProp_FailedLocalOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_CameraDesiredTransformStart = { "CameraDesiredTransformStart", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APairedAttackSequenceData, CameraDesiredTransformStart), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraDesiredTransformStart_MetaData), NewProp_CameraDesiredTransformStart_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_CameraDesiredTransformEnd = { "CameraDesiredTransformEnd", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APairedAttackSequenceData, CameraDesiredTransformEnd), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraDesiredTransformEnd_MetaData), NewProp_CameraDesiredTransformEnd_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_CameraInterpSpeedBias = { "CameraInterpSpeedBias", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APairedAttackSequenceData, CameraInterpSpeedBias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraInterpSpeedBias_MetaData), NewProp_CameraInterpSpeedBias_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_CameraFOV_Bias = { "CameraFOV_Bias", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APairedAttackSequenceData, CameraFOV_Bias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraFOV_Bias_MetaData), NewProp_CameraFOV_Bias_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APairedAttackSequenceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_bGeneratePreview,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_AnimNormalizedTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_AnimsPreviewMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_AnimsPreviewMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_SkeletalMeshAtt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_SkeletalMeshVic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_AssetTags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_AssetTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_bVicCharacterIsRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_ConstGlobalRootsOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_ConstGlobalRotationDelta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_bInverseRotationDeltaForVic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_bInverseRotationDeltaForAtt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_MontageInitializeAtt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_MontageInitializeVic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_UsePoseSearchForInitialze,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_ForPoseSearchMontagesAtt_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_ForPoseSearchMontagesAtt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_AnimStruggleDynamicTimeAtt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_AnimStruggleDynamicTimeVic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_StrugglePartInitProgressValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_StrugglePartCriticalValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_StrugglePartProgressDeltaAdd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_StrugglePartProgressDeltaSub,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_SoftAddtiveAnimStruggleLoopAtt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_SoftAddtiveAnimStruggleLoopVic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_SoftMontageSuccessAtt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_SoftMontageSuccessVic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_SuccessMontagesTimeStartRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_SuccessLocalOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_SoftMontageFailedAtt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_SoftMontageFailedVic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_FailedMontagesTimeStartRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_FailedLocalOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_CameraDesiredTransformStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_CameraDesiredTransformEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_CameraInterpSpeedBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APairedAttackSequenceData_Statics::NewProp_CameraFOV_Bias,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APairedAttackSequenceData_Statics::PropPointers) < 2048);
// ********** End Class APairedAttackSequenceData Property Definitions *****************************
UObject* (*const Z_Construct_UClass_APairedAttackSequenceData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APairedAttackSequenceData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APairedAttackSequenceData_Statics::ClassParams = {
	&APairedAttackSequenceData::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APairedAttackSequenceData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APairedAttackSequenceData_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APairedAttackSequenceData_Statics::Class_MetaDataParams), Z_Construct_UClass_APairedAttackSequenceData_Statics::Class_MetaDataParams)
};
void APairedAttackSequenceData::StaticRegisterNativesAPairedAttackSequenceData()
{
}
UClass* Z_Construct_UClass_APairedAttackSequenceData()
{
	if (!Z_Registration_Info_UClass_APairedAttackSequenceData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APairedAttackSequenceData.OuterSingleton, Z_Construct_UClass_APairedAttackSequenceData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APairedAttackSequenceData.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, APairedAttackSequenceData);
APairedAttackSequenceData::~APairedAttackSequenceData() {}
// ********** End Class APairedAttackSequenceData **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UE5_7_AGLS_ProgramingCpp_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_PairedAttackSequenceData_h__Script_HelpfulFunctions_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ PairedAttackSeqPreviewMode_StaticEnum, TEXT("PairedAttackSeqPreviewMode"), &Z_Registration_Info_UEnum_PairedAttackSeqPreviewMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1507028108U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APairedAttackSequenceData, APairedAttackSequenceData::StaticClass, TEXT("APairedAttackSequenceData"), &Z_Registration_Info_UClass_APairedAttackSequenceData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APairedAttackSequenceData), 3707121941U) },
	};
}; // Z_CompiledInDeferFile_FID_Unreal_Projects_UE5_7_AGLS_ProgramingCpp_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_PairedAttackSequenceData_h__Script_HelpfulFunctions_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UE5_7_AGLS_ProgramingCpp_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_PairedAttackSequenceData_h__Script_HelpfulFunctions_240271088{
	TEXT("/Script/HelpfulFunctions"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UE5_7_AGLS_ProgramingCpp_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_PairedAttackSequenceData_h__Script_HelpfulFunctions_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UE5_7_AGLS_ProgramingCpp_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_PairedAttackSequenceData_h__Script_HelpfulFunctions_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Unreal_Projects_UE5_7_AGLS_ProgramingCpp_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_PairedAttackSequenceData_h__Script_HelpfulFunctions_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UE5_7_AGLS_ProgramingCpp_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_PairedAttackSequenceData_h__Script_HelpfulFunctions_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
