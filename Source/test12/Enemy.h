// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Enemy.generated.h"

//적 몬스터 클래스
UCLASS()
class TEST12_API AEnemy : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AEnemy();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	

	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Enemy_property")
		FString Name;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy_property")
		int Type;    //속성, 비교하기 편하게 인수형으로 할 생각
	//URPOPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy_property")
	//체력 만들 예정. 지금은 블루프린트화




};
