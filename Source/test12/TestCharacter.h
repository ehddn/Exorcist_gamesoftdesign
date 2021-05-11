// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TestCharacter.generated.h"

UCLASS()
class TEST12_API ATestCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ATestCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	FVector2D lastInput;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//ĳ���� ������ ���� ��������
	void Forward(float value);
	void Back(float value);
	void Left(float value);
	void Right(float value);
	
	//ĳ���� ������ �Լ� 
	UFUNCTION()
	void MoveForward(float value);
	UFUNCTION()
	void MoveRight(float value);

	//��ī���� ���� ����
	UPROPERTY(EditAnywhere,BlueprintReadWrite) float encount;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsEncount;
	

};
