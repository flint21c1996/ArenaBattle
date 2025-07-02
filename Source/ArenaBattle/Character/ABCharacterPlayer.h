// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/ABCharacterBase.h"
#include "InputActionValue.h"

#include "ABCharacterPlayer.generated.h"


/**
 *
 */
UCLASS()
class ARENABATTLE_API AABCharacterPlayer : public AABCharacterBase
{
	GENERATED_BODY()

public:
	AABCharacterPlayer();

protected:
	//DefaultMappingContext을 할당하는 역할을 수행하기 위해, 키보드를 통해 입력을 받을 것인지, 키패드를 통해 입력을 받을 것인지는 BeginPlay의 Default Mapping Context를 통해 진행한다.
	virtual void BeginPlay() override;

public:
	//언리얼 엔진의 inputSystem에서 입력 액션과 선언한 Move와 Look 함수를 서로 맵핑 시켜주는 것을 수행하기 위해
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//캐릭터 컨트롤 섹션
protected:

	//V키를 눌러 컨트롤러를 바꾸었을 때 구현하는 함수.
	void ChangeCharacterControl();	

	//실제로 변경이 발생했을때 컨트롤에 관련된 모든 설정을 해주는 함수
	void SetCharacterControl(ECharacterControlType NewCharacterControlType);

	virtual void SetCharacterControlData(const class UABCharacterControlData* CharacterControlData);


	//카메라 관련 섹션
protected:
	//스프링 암 - 카메라를 지탱해주는 지지대 역할을 하는 컴포넌트
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, Meta = (AllowPrivateAccess = "true")/*private으로 선언된 오브젝트 객체들을 블루프린트에서도 접근 가능하게 하는 지시어*/)
	TObjectPtr<class USpringArmComponent> CameraBoom;

	//실제 카메라 컴포넌트
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, Meta = (AllowPrivateAccess = "true"))
	TObjectPtr<class UCameraComponent> FollowCamera;

	//입력 관련 섹션
protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, Meta = (AllowPrivateAccess = "true"))
	TObjectPtr<class UInputMappingContext> DefaultMappingContext;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, Meta = (AllowPrivateAccess = "true"))
	TObjectPtr<class UInputAction> JumpAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, Meta = (AllowPrivateAccess = "true"))
	TObjectPtr<class UInputAction> ChangeControlAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, Meta = (AllowPrivateAccess = "true"))
	TObjectPtr<class UInputAction> ShoulderMoveAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, Meta = (AllowPrivateAccess = "true"))
	TObjectPtr<class UInputAction> ShoulderLookAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, Meta = (AllowPrivateAccess = "true"))
	TObjectPtr<class UInputAction> QuaterMoveAction;

	//공격 입력 액션
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, Meta = (AllowPrivateAccess = "true"))
	TObjectPtr<class UInputAction> AttackAction;

	void ShoulderMove(const FInputActionValue& Value);
	void ShoulderLook(const FInputActionValue& Value);

	void QuaterMove(const FInputActionValue& Value);

	void Attack();

	ECharacterControlType CurrentCharacterControlType;


};
