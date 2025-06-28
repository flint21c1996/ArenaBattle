// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle/ArenaBattleGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArenaBattleGameMode() {}

// Begin Cross Module References
ARENABATTLE_API UClass* Z_Construct_UClass_AArenaBattleGameMode();
ARENABATTLE_API UClass* Z_Construct_UClass_AArenaBattleGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_ArenaBattle();
// End Cross Module References

// Begin Class AArenaBattleGameMode
void AArenaBattleGameMode::StaticRegisterNativesAArenaBattleGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AArenaBattleGameMode);
UClass* Z_Construct_UClass_AArenaBattleGameMode_NoRegister()
{
	return AArenaBattleGameMode::StaticClass();
}
struct Z_Construct_UClass_AArenaBattleGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ArenaBattleGameMode.h" },
		{ "ModuleRelativePath", "ArenaBattleGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArenaBattleGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AArenaBattleGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AArenaBattleGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AArenaBattleGameMode_Statics::ClassParams = {
	&AArenaBattleGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArenaBattleGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AArenaBattleGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AArenaBattleGameMode()
{
	if (!Z_Registration_Info_UClass_AArenaBattleGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AArenaBattleGameMode.OuterSingleton, Z_Construct_UClass_AArenaBattleGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AArenaBattleGameMode.OuterSingleton;
}
template<> ARENABATTLE_API UClass* StaticClass<AArenaBattleGameMode>()
{
	return AArenaBattleGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AArenaBattleGameMode);
AArenaBattleGameMode::~AArenaBattleGameMode() {}
// End Class AArenaBattleGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_PracticeUnreal_ArenaBattle_Source_ArenaBattle_ArenaBattleGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AArenaBattleGameMode, AArenaBattleGameMode::StaticClass, TEXT("AArenaBattleGameMode"), &Z_Registration_Info_UClass_AArenaBattleGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AArenaBattleGameMode), 2312584047U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PracticeUnreal_ArenaBattle_Source_ArenaBattle_ArenaBattleGameMode_h_1374163519(TEXT("/Script/ArenaBattle"),
	Z_CompiledInDeferFile_FID_PracticeUnreal_ArenaBattle_Source_ArenaBattle_ArenaBattleGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PracticeUnreal_ArenaBattle_Source_ArenaBattle_ArenaBattleGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
