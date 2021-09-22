// Copyright Epic Games, Inc. All Rights Reserved.

#include "MP_tryGameMode.h"
#include "MP_tryCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMP_tryGameMode::AMP_tryGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
