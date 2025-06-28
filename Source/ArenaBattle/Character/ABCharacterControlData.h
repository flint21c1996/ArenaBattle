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

	//Pawn 섹션의 Control Rotation의 Yaw값을 주로 체크 -> 따라서 해당 값을 체크할지 말지를 결정하기 위한 변수.
	UPROPERTY(EditAnyWhere, Category = Pawn)
	uint32 bUseControllerRotationYaw : 1;	// :1 -> 해당 변수를 1비트 크기로 선언하겠다는 뜻. (메모리 절약을 위해)

	//무브먼트에서 사용되는 변수들을 추가.
	UPROPERTY(EditAnyWhere, Category = Charactermovement)
	uint32 bOrientRotationToMovement : 1;				//캐릭터의 이동 방향에 따라 자동으로 회전할지를 제어

	UPROPERTY(EditAnyWhere, Category = Charactermovement)
	uint32 bUseControllerDesiredRotation : 1;			//true : 컨트롤러가 지정한 회전 방향을 따라 캐릭터가 회전 / false : 캐릭터는 자신의 이동 방향(또는 다른 로직)에 따라 회전

	UPROPERTY(EditAnyWhere, Category = Charactermovement)	
	FRotator RotationRate;								//캐릭터가 회전할 때 얼마나 빠르게 회전할지를 결정

	//추후 사용할 입력 매핑 콘테스트를 담을 멤버변수를 선언
	UPROPERTY(EditAnyWhere, BluePrintReadOnly, Category = Input)
	TObjectPtr<class UInputMappingContext> InputMappingContext;

	//스프링 암에 관련된 여러 속성 변수들
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
