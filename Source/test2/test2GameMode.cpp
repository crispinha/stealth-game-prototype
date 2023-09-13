// Copyright Epic Games, Inc. All Rights Reserved.

#include "test2GameMode.h"
#include "test2PlayerController.h"
#include "test2Character.h"
#include "UObject/ConstructorHelpers.h"

Atest2GameMode::Atest2GameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = Atest2PlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	// set default controller to our Blueprinted controller
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownPlayerController"));
	if(PlayerControllerBPClass.Class != NULL)
	{
		PlayerControllerClass = PlayerControllerBPClass.Class;
	}
}