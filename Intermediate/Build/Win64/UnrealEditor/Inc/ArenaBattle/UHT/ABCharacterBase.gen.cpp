// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle/Character/ABCharacterBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABCharacterBase() {}

// Begin Cross Module References
ARENABATTLE_API UClass* Z_Construct_UClass_AABCharacterBase();
ARENABATTLE_API UClass* Z_Construct_UClass_AABCharacterBase_NoRegister();
ARENABATTLE_API UClass* Z_Construct_UClass_UABCharacterControlData_NoRegister();
ARENABATTLE_API UClass* Z_Construct_UClass_UABComboActionData_NoRegister();
ARENABATTLE_API UEnum* Z_Construct_UEnum_ArenaBattle_ECharacterControlType();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
UPackage* Z_Construct_UPackage__Script_ArenaBattle();
// End Cross Module References

// Begin Enum ECharacterControlType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECharacterControlType;
static UEnum* ECharacterControlType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECharacterControlType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECharacterControlType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ArenaBattle_ECharacterControlType, (UObject*)Z_Construct_UPackage__Script_ArenaBattle(), TEXT("ECharacterControlType"));
	}
	return Z_Registration_Info_UEnum_ECharacterControlType.OuterSingleton;
}
template<> ARENABATTLE_API UEnum* StaticEnum<ECharacterControlType>()
{
	return ECharacterControlType_StaticEnum();
}
struct Z_Construct_UEnum_ArenaBattle_ECharacterControlType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd, \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xba\xef\xbf\xbd 2\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Character/ABCharacterBase.h" },
		{ "Quater.Name", "ECharacterControlType::Quater" },
		{ "Shoulder.Name", "ECharacterControlType::Shoulder" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd, \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xba\xef\xbf\xbd 2\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECharacterControlType::Shoulder", (int64)ECharacterControlType::Shoulder },
		{ "ECharacterControlType::Quater", (int64)ECharacterControlType::Quater },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ArenaBattle_ECharacterControlType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ArenaBattle,
	nullptr,
	"ECharacterControlType",
	"ECharacterControlType",
	Z_Construct_UEnum_ArenaBattle_ECharacterControlType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ArenaBattle_ECharacterControlType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ArenaBattle_ECharacterControlType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ArenaBattle_ECharacterControlType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ArenaBattle_ECharacterControlType()
{
	if (!Z_Registration_Info_UEnum_ECharacterControlType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECharacterControlType.InnerSingleton, Z_Construct_UEnum_ArenaBattle_ECharacterControlType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECharacterControlType.InnerSingleton;
}
// End Enum ECharacterControlType

// Begin Class AABCharacterBase
void AABCharacterBase::StaticRegisterNativesAABCharacterBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AABCharacterBase);
UClass* Z_Construct_UClass_AABCharacterBase_NoRegister()
{
	return AABCharacterBase::StaticClass();
}
struct Z_Construct_UClass_AABCharacterBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/ABCharacterBase.h" },
		{ "ModuleRelativePath", "Character/ABCharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterControlManager_MetaData[] = {
		{ "AllowprivateAccess", "true" },
		{ "Category", "CharacterControl" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd9\xb7\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xbc\xef\xbf\xbd \xef\xbf\xbd\xd6\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Character/ABCharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd9\xb7\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xbc\xef\xbf\xbd \xef\xbf\xbd\xd6\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboActionMontage_MetaData[] = {
		{ "Category", "Animaition" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xf0\xb8\xae\xbe\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd, \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xb5\xc8\xb4\xef\xbf\xbd.\n" },
#endif
		{ "ModuleRelativePath", "Character/ABCharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xf0\xb8\xae\xbe\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd, \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xb5\xc8\xb4\xef\xbf\xbd." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboActionData_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Attack" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xce\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xb1\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Character/ABCharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xce\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xb1\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterControlManager_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CharacterControlManager_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CharacterControlManager_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CharacterControlManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ComboActionMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ComboActionData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AABCharacterBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AABCharacterBase_Statics::NewProp_CharacterControlManager_ValueProp = { "CharacterControlManager", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UABCharacterControlData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AABCharacterBase_Statics::NewProp_CharacterControlManager_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AABCharacterBase_Statics::NewProp_CharacterControlManager_Key_KeyProp = { "CharacterControlManager_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_ArenaBattle_ECharacterControlType, METADATA_PARAMS(0, nullptr) }; // 2494479591
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AABCharacterBase_Statics::NewProp_CharacterControlManager = { "CharacterControlManager", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABCharacterBase, CharacterControlManager), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterControlManager_MetaData), NewProp_CharacterControlManager_MetaData) }; // 2494479591
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AABCharacterBase_Statics::NewProp_ComboActionMontage = { "ComboActionMontage", nullptr, (EPropertyFlags)0x0124080000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABCharacterBase, ComboActionMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboActionMontage_MetaData), NewProp_ComboActionMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AABCharacterBase_Statics::NewProp_ComboActionData = { "ComboActionData", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABCharacterBase, ComboActionData), Z_Construct_UClass_UABComboActionData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboActionData_MetaData), NewProp_ComboActionData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AABCharacterBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABCharacterBase_Statics::NewProp_CharacterControlManager_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABCharacterBase_Statics::NewProp_CharacterControlManager_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABCharacterBase_Statics::NewProp_CharacterControlManager_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABCharacterBase_Statics::NewProp_CharacterControlManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABCharacterBase_Statics::NewProp_ComboActionMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABCharacterBase_Statics::NewProp_ComboActionData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AABCharacterBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AABCharacterBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AABCharacterBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AABCharacterBase_Statics::ClassParams = {
	&AABCharacterBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AABCharacterBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AABCharacterBase_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AABCharacterBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AABCharacterBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AABCharacterBase()
{
	if (!Z_Registration_Info_UClass_AABCharacterBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AABCharacterBase.OuterSingleton, Z_Construct_UClass_AABCharacterBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AABCharacterBase.OuterSingleton;
}
template<> ARENABATTLE_API UClass* StaticClass<AABCharacterBase>()
{
	return AABCharacterBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AABCharacterBase);
AABCharacterBase::~AABCharacterBase() {}
// End Class AABCharacterBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_PracticeUnreal_ArenaBattle_Source_ArenaBattle_Character_ABCharacterBase_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECharacterControlType_StaticEnum, TEXT("ECharacterControlType"), &Z_Registration_Info_UEnum_ECharacterControlType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2494479591U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AABCharacterBase, AABCharacterBase::StaticClass, TEXT("AABCharacterBase"), &Z_Registration_Info_UClass_AABCharacterBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AABCharacterBase), 1072341921U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PracticeUnreal_ArenaBattle_Source_ArenaBattle_Character_ABCharacterBase_h_427659075(TEXT("/Script/ArenaBattle"),
	Z_CompiledInDeferFile_FID_PracticeUnreal_ArenaBattle_Source_ArenaBattle_Character_ABCharacterBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PracticeUnreal_ArenaBattle_Source_ArenaBattle_Character_ABCharacterBase_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_PracticeUnreal_ArenaBattle_Source_ArenaBattle_Character_ABCharacterBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PracticeUnreal_ArenaBattle_Source_ArenaBattle_Character_ABCharacterBase_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
