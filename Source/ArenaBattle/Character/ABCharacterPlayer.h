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
	//DefaultMappingContext�� �Ҵ��ϴ� ������ �����ϱ� ����, Ű���带 ���� �Է��� ���� ������, Ű�е带 ���� �Է��� ���� �������� BeginPlay�� Default Mapping Context�� ���� �����Ѵ�.
	virtual void BeginPlay() override;	

public:
	//�𸮾� ������ inputSystem���� �Է� �׼ǰ� ������ Move�� Look �Լ��� ���� ���� �����ִ� ���� �����ϱ� ����
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override; 


//ī�޶� ���� ����
protected:
	//������ �� - ī�޶� �������ִ� ������ ������ �ϴ� ������Ʈ
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, Meta = (AllowPrivateAccess = "true")/*private���� ����� ������Ʈ ��ü���� �������Ʈ������ ���� �����ϰ� �ϴ� ���þ�*/)
	TObjectPtr<class USpringArmComponent> CameraBoom;

	//���� ī�޶� ������Ʈ
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, Meta = (AllowPrivateAccess = "true"))
	TObjectPtr<class UCameraComponent> FollowCamera;

//�Է� ���� ����
protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, Meta = (AllowPrivateAccess = "true"))
	TObjectPtr<class UInputMappingContext> DefaultMappingContext;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, Meta = (AllowPrivateAccess = "true"))
	TObjectPtr<class UInputAction> JumpAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, Meta = (AllowPrivateAccess = "true"))
	TObjectPtr<class UInputAction> MoveAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, Meta = (AllowPrivateAccess = "true"))
	TObjectPtr<class UInputAction> LookAction;

	void Move(const FInputActionValue& Value);
	void Look(const FInputActionValue& Value);

};
