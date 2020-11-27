// Copyright Epic Games, Inc. All Rights Reserved.

#include "TopDownPracticeGameMode.h"
#include "TopDownPracticePlayerController.h"
#include "TopDownPracticeCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATopDownPracticeGameMode::ATopDownPracticeGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ATopDownPracticePlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}