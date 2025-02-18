// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ItemSpawnRow.generated.h"

USTRUCT(BluePrintType)
struct FItemSpawnRow : public FTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ItemName;
	// TSubclassOf: �ϵ� ���۷��� Ŭ������ �׻� �޸𸮿� �ε�� ���¿��� �ٷ� ����
	// TSoftClassPtr: ����Ʈ ���۷��� Ŭ������ ��θ� ����
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AActor> ItemClass;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Spawnchance;
};
