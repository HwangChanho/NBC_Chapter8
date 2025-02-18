// Fill out your copyright notice in the Description page of Project Settings.

#include "SlowItem.h"
#include "SpartaCharacter.h"

ASlowItem::ASlowItem()
{
	PrimaryActorTick.bCanEverTick = false;

	SlowValue = 50;
	ItemType = "DefaultCoin";
}

void ASlowItem::ActivateItem(AActor* Activator)
{
	Super::ActivateItem(Activator);

	if (Activator && Activator->ActorHasTag("Player"))
	{
		GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, FString::Printf(TEXT("Player lost %d"), SlowValue));

		if (ASpartaCharacter* PlayerCharacter = Cast<ASpartaCharacter>(Activator))
		{
			PlayerCharacter->ReduceSpeed(SlowValue);
		}

		DestroyItem();
	}
}

