// Fill out your copyright notice in the Description page of Project Settings.


#include "SpartaGameInstance.h"

USpartaGameInstance::USpartaGameInstance()
{
	TotalScore = 0;
	CurrentLevelIndex = 0;

  // 게임 인스턴스 생성 시 주소 출력
  if (GEngine)
  {
    FString Msg = FString::Printf(TEXT("GameInstance Created at: %p"), this);
    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, Msg);
  }
}

void USpartaGameInstance::AddToScore(int32 Amount)
{
	TotalScore += Amount;
	UE_LOG(LogTemp, Warning, TEXT("Total Score Updated: %d"), TotalScore);
}