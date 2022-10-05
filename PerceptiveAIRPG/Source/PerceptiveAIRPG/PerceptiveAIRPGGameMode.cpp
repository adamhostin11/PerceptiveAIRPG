// Copyright Epic Games, Inc. All Rights Reserved.

#include "PerceptiveAIRPGGameMode.h"
#include "PerceptiveAIRPGCharacter.h"
#include "UObject/ConstructorHelpers.h"

APerceptiveAIRPGGameMode::APerceptiveAIRPGGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
