// Copyright Epic Games, Inc. All Rights Reserved.

#include "test2PlayerController.h"
#include "GameFramework/Pawn.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "NiagaraSystem.h"
#include "NiagaraFunctionLibrary.h"
#include "PropertyAccess.h"
#include "test2Character.h"
#include "Engine/World.h"
#include "Mac/CocoaMenu.h"

Atest2PlayerController::Atest2PlayerController()
{

}

void Atest2PlayerController::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);
}

void Atest2PlayerController::SetupInputComponent()
{
	// set up gameplay key bindings
	Super::SetupInputComponent();
	

	InputComponent->BindAxis("ForwdBack", this, &Atest2PlayerController::OnForwdBack);
	InputComponent->BindAxis("LeftRight", this, &Atest2PlayerController::OnLeftRight);


}

void Atest2PlayerController::OnForwdBack(float val) {
	APawn* const MyPawn = GetPawn();
	if(MyPawn)
	{
		MyPawn->AddMovementInput(FVector(1.f, 0.f, 0.f), val, false);
	}
}

void Atest2PlayerController::OnLeftRight(float val) {
	APawn* const MyPawn = GetPawn();
	if(MyPawn)
	{
		MyPawn->AddMovementInput(FVector(0.f, 1.f, 0.f), val, false);
	}
}

