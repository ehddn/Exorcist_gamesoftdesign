// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TestGamemode.generated.h"

/**
 * 
 */

//전체적인 게임모드를 담당

UCLASS()
class TEST12_API ATestGamemode : public AGameModeBase
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = UIFuncs)
	void ButtonClicked() {
		UE_LOG(LogTemp, Warning, TEXT("UI Button Clicked"));
	}
	
};
