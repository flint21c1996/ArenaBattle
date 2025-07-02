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

	//��Ÿ�� ���� �̸�
	UPROPERTY(EditAnyWhere, Category = Name)
	FString MontageSectionNamePrefix;

	//��� �޺� �׼��� �ִ°�?
	UPROPERTY(EditAnyWhere, Category = Name)
	uint8 MaxComboCount;

	//�Է��� ������ �Էµƴ����� �����ϴ� �����ӵ��� ���� �� ��
	//���� �������� ���� ����ӵ��� ����
	UPROPERTY(EditAnyWhere, Category = Name)
	float FrameRate;

	//
	UPROPERTY(EditAnyWhere, Category = ComboData)
	TArray<float> EffectiveFrameCount;
	
};
