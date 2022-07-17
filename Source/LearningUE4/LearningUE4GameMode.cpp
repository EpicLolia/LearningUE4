// Copyright Epic Games, Inc. All Rights Reserved.

#include "LearningUE4GameMode.h"
#include "LearningUE4Character.h"
#include "UObject/ConstructorHelpers.h"

ALearningUE4GameMode::ALearningUE4GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
