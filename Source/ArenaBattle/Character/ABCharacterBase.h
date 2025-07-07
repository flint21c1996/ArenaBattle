// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Interface/ABAnimationAttackInterface.h"
#include "ABCharacterBase.generated.h"

UENUM()	//�����, ���ͺ� 2������ ���������� ����
enum class ECharacterControlType : uint8
{
	Shoulder,
	Quater
};

UCLASS()
class ARENABATTLE_API AABCharacterBase : public ACharacter, public IABAnimationAttackInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AABCharacterBase();

protected:
	virtual void SetCharacterControlData(const class UABCharacterControlData* CharacterControlData);

	//�������� �������� �� ���� ���� ������Ʈ�� �ٷ� ���ü� �ֵ��� ������ �����͸� ����
	UPROPERTY(EditAnywhere, Category = CharacterControl, Meta = (AllowprivateAccess = "true"))
	TMap<ECharacterControlType, class UABCharacterControlData*> CharacterControlManager;

//�޺��׼� ���� / �ִϸ��̼� ��Ÿ�ָ� Ȱ���� 
protected:
	//�𸮾� ������, �������Ʈ���� ���� ���õȴ�.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animaition)
	TObjectPtr<class UAnimMontage>ComboActionMontage;

	//������ ������ �ε��� ������ �ֱ� ���� ����
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Attack, Meta = (AllowPrivateAccess = "true"))
	TObjectPtr<class UABComboActionData> ComboActionData;

	void ProcessComboCommand();

	void ComboActionBegin();

	//�޺��� ������ �Լ��� ��� ��Ÿ�ֿ� ������ ��������Ʈ�� ���� �ٷ� ȣ��ɼ� �ֵ��� �Ķ���͸� ���߰���.
	void ComboActionEnd(class UAnimMontage* TargetMontage, bool IsProperlyEnded);

	//Ÿ�̸Ӹ� �ߵ���ų �Լ�
	void SetComboCheckTimer();

	//Ÿ�̸Ӱ� �ߵ��ʤ� �Է��� ���Դ��� üũ�ϴ� �Լ�
	void ComboCheck();

	//���� �޺��� ������ ����Ǿ�����?
	int32 CurrentCombo = 0;	//0 : �޺�����x  //1>= : �޺���
	FTimerHandle ComboTimerHandle;
	bool HasNextComboCommand = false;	//���ο����� �����̱�� bool��.


///Attack Hit Section
protected:
	virtual void AttackHitCheck() override;
};
