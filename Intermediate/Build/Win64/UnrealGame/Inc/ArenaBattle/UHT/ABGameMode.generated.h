// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Game/ABGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARENABATTLE_ABGameMode_generated_h
#error "ABGameMode.generated.h already included, missing '#pragma once' in ABGameMode.h"
#endif
#define ARENABATTLE_ABGameMode_generated_h

#define FID_PracticeUnreal_ArenaBattle_Source_ArenaBattle_Game_ABGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAABGameMode(); \
	friend struct Z_Construct_UClass_AABGameMode_Statics; \
public: \
	DECLARE_CLASS(AABGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArenaBattle"), NO_API) \
	DECLARE_SERIALIZER(AABGameMode)


#define FID_PracticeUnreal_ArenaBattle_Source_ArenaBattle_Game_ABGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AABGameMode(AABGameMode&&); \
	AABGameMode(const AABGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AABGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AABGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AABGameMode) \
	NO_API virtual ~AABGameMode();


#define FID_PracticeUnreal_ArenaBattle_Source_ArenaBattle_Game_ABGameMode_h_12_PROLOG
#define FID_PracticeUnreal_ArenaBattle_Source_ArenaBattle_Game_ABGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PracticeUnreal_ArenaBattle_Source_ArenaBattle_Game_ABGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_PracticeUnreal_ArenaBattle_Source_ArenaBattle_Game_ABGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARENABATTLE_API UClass* StaticClass<class AABGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PracticeUnreal_ArenaBattle_Source_ArenaBattle_Game_ABGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
