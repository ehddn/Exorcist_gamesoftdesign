// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Card.generated.h"

UCLASS()
class TEST12_API ACard : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACard();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Property)
		int type;
	// 카드 속성, 0은 무속성, 1은 물, 2는 불, 3은 땅
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Property)
		int Card_cost;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Property)
		int CardKinds;
	//카드 종류, 0은 주문류, 1은 공격류

	//데미지는 후에 추가할예정, 지금은 블루프린트 내에 변수 있음!

	virtual void Attack(int type) override;
	

};
