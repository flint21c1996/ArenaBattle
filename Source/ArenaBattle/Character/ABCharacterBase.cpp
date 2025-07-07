// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/ABCharacterBase.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "ABCharacterControlData.h"
#include "Animation/AnimMontage.h"
#include "ABComboActionData.h"
#include "Physics/ABCollision.h"
// Sets default values
AABCharacterBase::AABCharacterBase()
{
	// Pawn
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
	GetCapsuleComponent()->SetCollisionProfileName(TEXT("Pawn"));

	// Movement
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f);
	GetCharacterMovement()->JumpZVelocity = 700.f;
	GetCharacterMovement()->AirControl = 0.35f;
	GetCharacterMovement()->MaxWalkSpeed = 500.f;
	GetCharacterMovement()->MinAnalogWalkSpeed = 20.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;

	// Mesh
	GetMesh()->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, -100.0f), FRotator(0.0f, -90.0f, 0.0f));
	GetMesh()->SetAnimationMode(EAnimationMode::AnimationBlueprint);
	GetMesh()->SetCollisionProfileName(TEXT("CharacterMesh"));

	static ConstructorHelpers::FObjectFinder<USkeletalMesh> CharacterMeshRef(TEXT("/Script/Engine.SkeletalMesh'/Game/InfinityBladeWarriors/Character/CompleteCharacters/SK_CharM_Cardboard.SK_CharM_Cardboard'"));
	if (CharacterMeshRef.Object)
	{
		GetMesh()->SetSkeletalMesh(CharacterMeshRef.Object);
	}

	static ConstructorHelpers::FClassFinder<UAnimInstance> AnimInstanceClassRef(TEXT("/Game/ArenaBattle/Animation/ABP_ABCharacter.ABP_ABCharacter_C"));
	if (AnimInstanceClassRef.Class)
	{
		GetMesh()->SetAnimInstanceClass(AnimInstanceClassRef.Class);
	}

	static ConstructorHelpers::FObjectFinder<UABCharacterControlData> ShoulderDataRef(TEXT("/Script/ArenaBattle.ABCharacterControlData'/Game/ArenaBattle/CharacterControl/ABC_Soulder.ABC_Soulder'"));
	if (ShoulderDataRef.Object)
	{
		CharacterControlManager.Add(ECharacterControlType::Shoulder, ShoulderDataRef.Object);
	}

	static ConstructorHelpers::FObjectFinder<UABCharacterControlData> QuaterDataRef(TEXT("/Script/ArenaBattle.ABCharacterControlData'/Game/ArenaBattle/CharacterControl/ABC_Quater.ABC_Quater'"));
	if (QuaterDataRef.Object)
	{
		CharacterControlManager.Add(ECharacterControlType::Quater, QuaterDataRef.Object);
	}
	
}

void AABCharacterBase::SetCharacterControlData(const class UABCharacterControlData* CharacterControlData)
{
	//Pawn과 CharacterMovement에 대한 속성 세팅은 NPC, AI, Player 모두 동일하므로 AABCharacterBase에서 세팅하는 것이 옳다.
	//하지만 Input, SpringArm의 경우 플레이어 조작과 관련된 요소이고, NPC, AI에는 필요가 없기에 플레이어 전용으로 분리 한다. 즉, AABCharacterPlayer내에서 속성 세팅을 할것인다.
	
	//Pawn 관련 속성 세팅
	bUseControllerRotationYaw = CharacterControlData->bUseControllerRotationYaw;

	//CharacterMovement
	GetCharacterMovement()->bOrientRotationToMovement = CharacterControlData->bOrientRotationToMovement;
	GetCharacterMovement()->bUseControllerDesiredRotation = CharacterControlData->bUseControllerDesiredRotation;
	GetCharacterMovement()->RotationRate = CharacterControlData->RotationRate;
	
}

void AABCharacterBase::ProcessComboCommand()
{
	if (CurrentCombo == 0)
	{
		UE_LOG(LogTemp, Error, TEXT("ProcessComboCommand %d" ),ComboActionData->MaxComboCount);
		ComboActionBegin();
		return;
	}

	if (!ComboTimerHandle.IsValid())
	{
		HasNextComboCommand = false;
	}
	else
	{
		HasNextComboCommand = true;
	}
}

void AABCharacterBase::ComboActionBegin()
{
	//Combo Status
	CurrentCombo = 1;

	//Movement Setting
	GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_None);	//이동기능이 없어짐

	//Animation Setting
	const float AttackSpeedRate = 1.f;
	//몽타주를 재생하기 위해서는 먼저 애님 인스턴스에 대한 포인터를 얻어와야된다.
	//참고로 캐릭터마다 AnimInstance가 다를수 있기에 static선언은 하지 않았다.
	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance(); //스캘레탈 메쉬에 있고 GetInstance라는 함수를 호출해서 가져올 수 있다.
	AnimInstance->Montage_Play(ComboActionMontage, AttackSpeedRate);

	///몽타주가 실행된 후 몽타주가 종료될깨 ComboActionEnd함수가 호출이 되도록 해야한다.
	FOnMontageEnded EndDelegate;
	EndDelegate.BindUObject(this, &AABCharacterBase::ComboActionEnd);
	AnimInstance->Montage_SetEndDelegate(EndDelegate, ComboActionMontage);

	ComboTimerHandle.Invalidate();
	SetComboCheckTimer();
}

void AABCharacterBase::ComboActionEnd(class UAnimMontage* TargetMontage, bool IsProperlyEnded)
{
	ensure(CurrentCombo != 0);	//조건식이 false일 경우 경고 출력
	CurrentCombo = 0;
	GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_Walking);

}

void AABCharacterBase::SetComboCheckTimer()
{
	int32 ComboIndex = CurrentCombo - 1;
	if (ComboActionData == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("ComboActionData is nullptr! ComboIndex: %d, CurrentCombo: %d"), ComboIndex, CurrentCombo);
		return;
	}
	ensure(ComboActionData->EffectiveFrameCount.IsValidIndex(ComboIndex));

	const float AttackSpeedRate = 1.0f;
	float ComboEffectiveTime = (ComboActionData->EffectiveFrameCount[ComboIndex] / ComboActionData->FrameRate) / AttackSpeedRate;

	if (ComboEffectiveTime > 0.0f)
	{
		GetWorld()->GetTimerManager().SetTimer(ComboTimerHandle, this, &AABCharacterBase::ComboCheck, ComboEffectiveTime, false);
	}
	
}

void AABCharacterBase::ComboCheck()
{
	ComboTimerHandle.Invalidate();
	if (HasNextComboCommand)
	{
		UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();

		CurrentCombo = FMath::Clamp(CurrentCombo + 1, 1, ComboActionData->MaxComboCount);
		FName NextSection = *FString::Printf(TEXT("%s%d"), *ComboActionData->MontageSectionNamePrefix, CurrentCombo);
		AnimInstance->Montage_JumpToSection(NextSection, ComboActionMontage);
		SetComboCheckTimer();
		HasNextComboCommand = false;
	}
}

void AABCharacterBase::AttackHitCheck()
{
	//트레이스 채널을 설정해서 물체가 서로 충돌하는지를 검사하는 로직

	//트레이스 결과가 저장될 구조체, 무엇과 충돌했는지, 어디에 맞았는지 등의 정보가 들어있다.
	FHitResult OurHitResult;

	//충돌 검사에 사용될 파라미터를 설정
	//SCENE_QUERY_STAT(Attack) - 성능 추적용 이름(트레이스 이름)
	//false - 복잡한 콜리전 여부(true이면 복잡한 콜리전 사용, 여기선 단순 처리)
	//this - 자기자신은 충돌 대상에서 제외
	FCollisionQueryParams(SCENE_QUERY_STAT(Attack), false, this);

	const float AttackRange = 40.0f;		//트레이스가 나아갈 자리
	const float AttackRadius = 50.0f;		//Sweep 구의 반지름(지름 100cm 구)
	const float AttackDamage = 30.0f;		//실제로 적용할 데미지

	//공격 시작 위치 - 내 위치에서 앞쪽으로 캡슐 반지름 만큼 떨어진 지점 -> 자기자신이 공격을 맞지 않도록 앞에서 시작하게 함
	const FVector Start = GetActorLocation() + GetActorForwardVector() * GetCapsuleComponent()->GetScaledCapsuleRadius();

	//공격이 진행되는 방향의 끝점
	const FVector End = Start + GetActorForwardVector() * AttackRange;

	bool HitDetected = GetWorld()->SweepSingleByChannel(OurHitResult, Start, End, FQuat::Identity, CCHANNEL_ABACTION, FCollisionShape::MakeSphere(AttackRange), Params)

}