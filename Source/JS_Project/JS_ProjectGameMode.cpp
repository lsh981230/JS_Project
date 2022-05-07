// Copyright Epic Games, Inc. All Rights Reserved.

#include "JS_ProjectGameMode.h"
#include "JS_ProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AJS_ProjectGameMode::AJS_ProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{

		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
