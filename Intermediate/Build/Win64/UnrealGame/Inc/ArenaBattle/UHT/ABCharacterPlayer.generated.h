// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/ABCharacterPlayer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARENABATTLE_ABCharacterPlayer_generated_h
#error "ABCharacterPlayer.generated.h already included, missing '#pragma once' in ABCharacterPlayer.h"
#endif
#define ARENABATTLE_ABCharacterPlayer_generated_h

#define FID_PracticeUnreal_ArenaBattle_Source_ArenaBattle_Character_ABCharacterPlayer_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAABCharacterPlayer(); \
	friend struct Z_Construct_UClass_AABCharacterPlayer_Statics; \
public: \
	DECLARE_CLASS(AABCharacterPlayer, AABCharacterBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArenaBattle"), NO_API) \
	DECLARE_SERIALIZER(AABCharacterPlayer)


#define FID_PracticeUnreal_ArenaBattle_Source_ArenaBattle_Character_ABCharacterPlayer_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AABCharacterPlayer(AABCharacterPlayer&&); \
	AABCharacterPlayer(const AABCharacterPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AABCharacterPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AABCharacterPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AABCharacterPlayer) \
	NO_API virtual ~AABCharacterPlayer();


#define FID_PracticeUnreal_ArenaBattle_Source_ArenaBattle_Character_ABCharacterPlayer_h_15_PROLOG
#define FID_PracticeUnreal_ArenaBattle_Source_ArenaBattle_Character_ABCharacterPlayer_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PracticeUnreal_ArenaBattle_Source_ArenaBattle_Character_ABCharacterPlayer_h_18_INCLASS_NO_PURE_DECLS \
	FID_PracticeUnreal_ArenaBattle_Source_ArenaBattle_Character_ABCharacterPlayer_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARENABATTLE_API UClass* StaticClass<class AABCharacterPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PracticeUnreal_ArenaBattle_Source_ArenaBattle_Character_ABCharacterPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
