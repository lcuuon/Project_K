// Copyright Epic Games, Inc. All Rights Reserved.

#include "Project_KGameMode.h"
#include "Project_KCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProject_KGameMode::AProject_KGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
