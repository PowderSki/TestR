// Copyright Epic Games, Inc. All Rights Reserved.

#include "P1GameMode.h"
#include "P1Character.h"
#include "UObject/ConstructorHelpers.h"

AP1GameMode::AP1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
