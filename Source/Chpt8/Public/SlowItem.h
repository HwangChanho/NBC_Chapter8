// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseItem.h"
#include "GameFramework/Actor.h"
#include "SlowItem.generated.h"

UCLASS()
class CHPT8_API ASlowItem : public ABaseItem
{
	GENERATED_BODY()
	
public:	
	ASlowItem();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	int32 SlowValue;

	virtual void ActivateItem(AActor* Activator) override;

};
