#include "HealingItem.h"
#include "SpartaCharacter.h"

AHealingItem::AHealingItem()
{
	HealAmount = 20.0f;
	ItemType = "Healing";
}

void AHealingItem::ActivateItem(AActor* Activator)
{
	Super::ActivateItem(Activator);

	if (Activator && Activator->ActorHasTag("Player"))
	{
		GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, FString::Printf(TEXT("Player Gained %d HP"), HealAmount));
		
		if (ASpartaCharacter* PlayerCharacter = Cast<ASpartaCharacter>(Activator))
		{
			PlayerCharacter->AddHealth(HealAmount);
		}
		
		DestroyItem();
	}
}