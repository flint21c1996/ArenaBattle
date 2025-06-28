// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ABCharacterControlData.generated.h"

/**
 *
 */
UCLASS()
class ARENABATTLE_API UABCharacterControlData : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UABCharacterControlData();

	//Pawn ������ Control Rotation�� Yaw���� �ַ� üũ -> ���� �ش� ���� üũ���� ������ �����ϱ� ���� ����.
	UPROPERTY(EditAnyWhere, Category = Pawn)
	uint32 bUseControllerRotationYaw : 1;	// :1 -> �ش� ������ 1��Ʈ ũ��� �����ϰڴٴ� ��. (�޸� ������ ����)

	//�����Ʈ���� ���Ǵ� �������� �߰�.
	UPROPERTY(EditAnyWhere, Category = Charactermovement)
	uint32 bOrientRotationToMovement : 1;				//ĳ������ �̵� ���⿡ ���� �ڵ����� ȸ�������� ����

	UPROPERTY(EditAnyWhere, Category = Charactermovement)
	uint32 bUseControllerDesiredRotation : 1;			//true : ��Ʈ�ѷ��� ������ ȸ�� ������ ���� ĳ���Ͱ� ȸ�� / false : ĳ���ʹ� �ڽ��� �̵� ����(�Ǵ� �ٸ� ����)�� ���� ȸ��

	UPROPERTY(EditAnyWhere, Category = Charactermovement)	
	FRotator RotationRate;								//ĳ���Ͱ� ȸ���� �� �󸶳� ������ ȸ�������� ����

	//���� ����� �Է� ���� ���׽�Ʈ�� ���� ��������� ����
	UPROPERTY(EditAnyWhere, BluePrintReadOnly, Category = Input)
	TObjectPtr<class UInputMappingContext> InputMappingContext;

	//������ �Ͽ� ���õ� ���� �Ӽ� ������
	UPROPERTY(EditAnywhere, Category = SpringArm)
	float TargetArmLength;

	UPROPERTY(EditAnywhere, Category = SpringArm)
	FRotator RelativeRotation;

	UPROPERTY(EditAnywhere, Category = SpringArm)
	uint32 bUsePawnControlRotation : 1;

	UPROPERTY(EditAnywhere, Category = SpringArm)
	uint32 bInheritPitch : 1;

	UPROPERTY(EditAnywhere, Category = SpringArm)
	uint32 bInheritYaw : 1;

	UPROPERTY(EditAnywhere, Category = SpringArm)
	uint32 bInheritRoll : 1;

	UPROPERTY(EditAnywhere, Category = SpringArm)
	uint32 bDoCollisionTest : 1;

};
