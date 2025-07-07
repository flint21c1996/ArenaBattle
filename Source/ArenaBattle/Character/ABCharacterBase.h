// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Interface/ABAnimationAttackInterface.h"
#include "ABCharacterBase.generated.h"

UENUM()	//숄더뷰, 쿼터뷰 2가지를 열거형으로 선언
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

	//열거형을 바탕으로 두 가지 에셋 오브젝트를 바로 얻어올수 있도록 맵으로 데이터를 선언
	UPROPERTY(EditAnywhere, Category = CharacterControl, Meta = (AllowprivateAccess = "true"))
	TMap<ECharacterControlType, class UABCharacterControlData*> CharacterControlManager;

//콤보액션 섹션 / 애니메이션 몽타주를 활용한 
protected:
	//언리얼 에디터, 블루프린트에서 값이 세팅된다.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animaition)
	TObjectPtr<class UAnimMontage>ComboActionMontage;

	//데이터 에셋을 로딩해 가지고 있기 위한 변수
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Attack, Meta = (AllowPrivateAccess = "true"))
	TObjectPtr<class UABComboActionData> ComboActionData;

	void ProcessComboCommand();

	void ComboActionBegin();

	//콤보가 끝나는 함수의 경우 몽타주에 설정된 델리게이트를 통해 바로 호출될수 있도록 파라미터를 맞추겠음.
	void ComboActionEnd(class UAnimMontage* TargetMontage, bool IsProperlyEnded);

	//타이머를 발동시킬 함수
	void SetComboCheckTimer();

	//타이머가 발동됨ㄴ 입력이 들어왔는지 체크하는 함수
	void ComboCheck();

	//현재 콤보가 어디까지 실행되었는지?
	int32 CurrentCombo = 0;	//0 : 콤보시작x  //1>= : 콤보중
	FTimerHandle ComboTimerHandle;
	bool HasNextComboCommand = false;	//내부에서만 쓸것이기네 bool씀.


///Attack Hit Section
protected:
	virtual void AttackHitCheck() override;
};
