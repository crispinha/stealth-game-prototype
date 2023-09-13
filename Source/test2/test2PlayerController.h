// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/PlayerController.h"
#include "test2PlayerController.generated.h"

/** Forward declaration to improve compiling times */
// class UNiagaraSystem;

UCLASS()
class Atest2PlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	Atest2PlayerController();


protected:
	/** True if the controlled character should navigate to the mouse cursor. */

	// Begin PlayerController interface
	virtual void PlayerTick(float DeltaTime) override;
	virtual void SetupInputComponent() override;
	// End PlayerController interface

	void OnForwdBack(float val);
	void OnLeftRight(float val);
};


