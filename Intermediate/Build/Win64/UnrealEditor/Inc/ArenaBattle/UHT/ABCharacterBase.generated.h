// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/ABCharacterBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARENABATTLE_ABCharacterBase_generated_h
#error "ABCharacterBase.generated.h already included, missing '#pragma once' in ABCharacterBase.h"
#endif
#define ARENABATTLE_ABCharacterBase_generated_h

#define FID_PracticeUnreal_ArenaBattle_Source_ArenaBattle_Character_ABCharacterBase_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAABCharacterBase(); \
	friend struct Z_Construct_UClass_AABCharacterBase_Statics; \
public: \
	DECLARE_CLASS(AABCharacterBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArenaBattle"), NO_API) \
	DECLARE_SERIALIZER(AABCharacterBase) \
	virtual UObject* _getUObject() const override { return const_cast<AABCharacterBase*>(this); }


#define FID_PracticeUnreal_ArenaBattle_Source_ArenaBattle_Character_ABCharacterBase_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AABCharacterBase(AABCharacterBase&&); \
	AABCharacterBase(const AABCharacterBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AABCharacterBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AABCharacterBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AABCharacterBase) \
	NO_API virtual ~AABCharacterBase();


#define FID_PracticeUnreal_ArenaBattle_Source_ArenaBattle_Character_ABCharacterBase_h_17_PROLOG
#define FID_PracticeUnreal_ArenaBattle_Source_ArenaBattle_Character_ABCharacterBase_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PracticeUnreal_ArenaBattle_Source_ArenaBattle_Character_ABCharacterBase_h_20_INCLASS_NO_PURE_DECLS \
	FID_PracticeUnreal_ArenaBattle_Source_ArenaBattle_Character_ABCharacterBase_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARENABATTLE_API UClass* StaticClass<class AABCharacterBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PracticeUnreal_ArenaBattle_Source_ArenaBattle_Character_ABCharacterBase_h


#define FOREACH_ENUM_ECHARACTERCONTROLTYPE(op) \
	op(ECharacterControlType::Shoulder) \
	op(ECharacterControlType::Quater) 

enum class ECharacterControlType : uint8;
template<> struct TIsUEnumClass<ECharacterControlType> { enum { Value = true }; };
template<> ARENABATTLE_API UEnum* StaticEnum<ECharacterControlType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
