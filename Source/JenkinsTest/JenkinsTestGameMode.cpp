// Copyright Epic Games, Inc. All Rights Reserved.

#include "JenkinsTestGameMode.h"
#include "JenkinsTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AJenkinsTestGameMode::AJenkinsTestGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
