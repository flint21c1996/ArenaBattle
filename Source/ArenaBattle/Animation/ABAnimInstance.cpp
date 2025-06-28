// Fill out your copyright notice in the Description page of Project Settings.


#include "Animation/ABAnimInstance.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"

UABAnimInstance::UABAnimInstance()
{
	MovingThreshould = 3.0f;
	JumpingThreshould = 100.f;
}

void UABAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	//���� AnimInstance�� �����ϰ� �̴� ���� ������ ���ü� �ִ� ������ �̰��� ����Ÿ������ ��ȯ�Ǳ⿡ ĳ�������� �˼� X -> ���� ����ȯ �����ش�.
	Owner = Cast<ACharacter>(GetOwningActor());
	if (Owner)
	{
		Movement = Owner->GetCharacterMovement();
	}
}

void UABAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	//�����Ӹ��� ������Ʈ�ȴ�.
	if (Movement)
	{
		Velocity = Movement->Velocity;
		GroundSpeed = Velocity.Size2D();
		bIsIdle = GroundSpeed < MovingThreshould;
		bIsFalling = Movement->IsFalling();
		bIsJumping = bIsJumping & (Velocity.Z > JumpingThreshould);
	}
}
