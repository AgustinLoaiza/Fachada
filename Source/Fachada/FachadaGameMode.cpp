// Copyright Epic Games, Inc. All Rights Reserved.

#include "FachadaGameMode.h"
#include "FachadaPawn.h"
#include "AccionesFacade.h"

AFachadaGameMode::AFachadaGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AFachadaPawn::StaticClass();
	PrimaryActorTick.bCanEverTick = true;
}

void AFachadaGameMode::BeginPlay()
{
	Super::BeginPlay();

	AccionesFacade=GetWorld()->SpawnActor<AAccionesFacade>(FVector::ZeroVector, FRotator::ZeroRotator);
}

void AFachadaGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Temporizador+=DeltaTime;
	if (Temporizador >= 5)
	{
		AccionesFacade->EstrategiaOfensiva();
	}
	if (Temporizador >=10)
	{
		AccionesFacade->EstrategiaDefensiva();
	}
	if (Temporizador >= 15)
	{
		AccionesFacade->EstrategiaAgresiva();
		Temporizador = 0;
	}
}

