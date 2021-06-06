// Fill out your copyright notice in the Description page of Project Settings.


#include "TestCharacter.h"

// Sets default values
ATestCharacter::ATestCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	lastInput = FVector2D::ZeroVector;

}

// Called when the game starts or when spawned
void ATestCharacter::BeginPlay()
{
	Super::BeginPlay();
	encount = 0.0f;
}

// Called every frame
void ATestCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//float len = lastInput.Size();

	//�̵��Է���1���� ũ�� �����̾ƴ� ����ȭ ��ų��
	/*
	if (len > 1.0f) {
		lastInput /= len;
	}
	AddMovementInput(GetActorForwardVector(), lastInput.Y);
	AddMovementInput(GetActorRightVector(), lastInput.X);

	//�ʴ� ���������� �� �Է��� 0���� �ʱ�ȭ
	lastInput = FVector2D(0.0f, 0.0f);
	*/

}

// Called to bind functionality to input
void ATestCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	check(PlayerInputComponent);
	
	
	//PlayerInputComponent->BindAxis("MoveForward", this, &ATestCharacter::MoveForward);
	//PlayerInputComponent->BindAxis("Back", this, &ATestCharacter::Back);
	//PlayerInputComponent->BindAxis("Left", this, &ATestCharacter::Left);
	//PlayerInputComponent->BindAxis("MoveRight", this, &ATestCharacter::MoveRight);
	// ������� ���� PlayerInputComponent->BindAction("Jump",IE_Pressed ,this, &ATestCharacter::Jump);

	//PlayerInputComponent->BindAxis("Turn", this, &ATestCharacter::Turn);
	//PlayerInputComponent->BindAxis("LookUp", this, &ATestCharacter::AddControllerPitchInput);

}

void ATestCharacter::MoveForward(float value) {
	FVector Direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::X);
	AddMovementInput(Direction, value);
}
void ATestCharacter::MoveRight(float value) {
	FVector Direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::Y);
	AddMovementInput(Direction, value);
}

void ATestCharacter::Turn(float Axis) {
	AddControllerYawInput(Axis);
}


/*void ATestCharacter::Back(float value) {
	lastInput.Y -= value;
}*/
/*void ATestCharacter::Left(float value) {
	lastInput.X -= value;
}
void ATestCharacter::Right(float value) {
	lastInput.X += value;
}*/

