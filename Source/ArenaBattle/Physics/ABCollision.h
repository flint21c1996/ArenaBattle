#pragma once

//언리얼 엔진에서 가장 기본적인 헤더파일 중 하나.
//기본적인 자료형(int32, FString, TArray등), 로그, 디버그,수학 함수 등, 엔진의 기본적인 핵심 요소들이 들어있음.
#include "CoreMinimal.h"

#define CPROFILE_ABCAPSULE TEXT("ABCapsule")
#define CPROFILE_ABTRIGER TEXT("ABTrigger")

//ECC_GameTraceChannel1은 언리얼 엔진에서 제공하는 사용자 정의 트레이스 채널 중 하나. ECC : Engine Collision Channel의 약자
#define CCHANNEL_ABACTION ECC_GameTraceChannel1
