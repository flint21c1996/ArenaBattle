// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "ABAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class ARENABATTLE_API UABAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
public:
	UABAnimInstance();

protected:
	//AnimInstance�� ó�� �����ɶ� �ѹ��� ȣ���� �ȴ�.
	virtual void NativeInitializeAnimation() override;

	//�� �����Ӹ��� ȣ��ȴ�.
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;	// �� �ΰ��� �Լ��� ����Ͽ� �츮�� �ִ� �׷������� ������ ���������� �����ϵ��� �ؾ��Ѵ�.

	///�ִ� �׷����� �����ؾ��� ������--------------------------------

	//�� �ν��Ͻ��� �����ϰ� �ִ� ĳ������ ������ ��� ����
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Character)
	TObjectPtr<class ACharacter> Owner;
	
	//ĳ���� Movement ������Ʈ�� ���� ��ü �����͸� ��� ���� 
	//�� �����Ӹ��� Owner->GetCharacterMovement()�̷��� ȣ���ϴ� �ͺ��� �ּҸ� �����صΰ� ���� ������ �������°� �� ȿ�����̴ϱ�.
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Character)
	TObjectPtr<class UCharacterMovementComponent> Movement;

	//ĳ���� �ӵ� ����
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Character)
	FVector Velocity;

	//�������� �ӵ�
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Character)
	float GroundSpeed;

	//���� idle �����ΰ�?
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Character)
	uint8 bIsIdle : 1;

	//���� �����̰��ִ��� �����ִ���?
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Character)
	float MovingThreshould;

	//���� falling �����ΰ�?
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Character)
	uint8 bIsFalling : 1;

	//���� Jumping �����ΰ�?
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Character)
	uint8 bIsJumping : 1;

	//���� �������ΰ�?
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Character)
	float JumpingThreshould;
};