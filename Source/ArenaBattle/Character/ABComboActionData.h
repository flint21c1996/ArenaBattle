// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ABComboActionData.generated.h"

/**
 * 
 */
UCLASS()
class ARENABATTLE_API UABComboActionData : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UABComboActionData();

	//몽타주 섹션 이름
	UPROPERTY(EditAnyWhere, Category = Name)
	FString MontageSectionNamePrefix;

	//몇개의 콤보 액션이 있는가?
	UPROPERTY(EditAnyWhere, Category = Name)
	uint8 MaxComboCount;

	//입력이 사전에 입력됐는지를 감지하는 프레임들을 지정 할 때
	//사용될 프레임의 기준 재생속도를 지정
	UPROPERTY(EditAnyWhere, Category = Name)
	float FrameRate;

	//
	UPROPERTY(EditAnyWhere, Category = ComboData)
	TArray<float> EffectiveFrameCount;
	
};
