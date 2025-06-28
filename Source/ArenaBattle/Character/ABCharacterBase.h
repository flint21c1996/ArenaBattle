// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ABCharacterBase.generated.h"

UENUM()	//숄더뷰, 쿼터뷰 2가지를 열거형으로 선언
enum class ECharacterControlType : uint8
{
	Shoulder,
	Quater
};

UCLASS()
class ARENABATTLE_API AABCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AABCharacterBase();

protected:
	virtual void SetCharacterControlData(const class UABCharacterControlData* CharacterControlData);

	//열거형을 바탕으로 두 가지 에셋 오브젝트를 바로 얻어올수 있도록 맵으로 데이터를 선언
	UPROPERTY(EditAnywhere, Category = CharacterControl, Meta = (AllowprivateAccess = "true"))
	TMap<ECharacterControlType, class UABCharacterControlData*> CharacterControlManager;

};
