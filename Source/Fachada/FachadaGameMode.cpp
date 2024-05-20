// Copyright Epic Games, Inc. All Rights Reserved.

#include "FachadaGameMode.h"
#include "FachadaPawn.h"
#include "AccionesFacade.h"
#include "SpawnFacade.h"

AFachadaGameMode::AFachadaGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AFachadaPawn::StaticClass();
	PrimaryActorTick.bCanEverTick = true;

	bcanAction1 = true;
	bcanAction2 = true;
	bcanAction3 = true;
}

void AFachadaGameMode::BeginPlay()
{
	Super::BeginPlay();

	AccionesFacade=GetWorld()->SpawnActor<AAccionesFacade>(FVector::ZeroVector, FRotator::ZeroRotator);
	SpawnFacade=GetWorld()->SpawnActor<ASpawnFacade>(FVector::ZeroVector, FRotator::ZeroRotator);

	SpawnFacade->lluviadeMeteoritos();
	SpawnFacade->lluviadeCometas();
	SpawnFacade->dropsCapsulas();
}

void AFachadaGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Temporizador1 += DeltaTime;
	Temporizador2 += DeltaTime;
	Temporizador3 += DeltaTime;
	if (Temporizador1 >= 5 && bcanAction1==true)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Estrategia Ofensiva"));
		AccionesFacade->Atacar();
		Temporizador1 = 0;
		bcanAction1 = false;
	}
	if (Temporizador2 >=10 && bcanAction2==true)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Estrategia Defensiva"));
		AccionesFacade->Defender();
		Temporizador2 = 0;
		bcanAction2 = false;
	}
	if (Temporizador3 >= 15 && bcanAction3==true)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Estrategia Agresiva"));
		AccionesFacade->Avanzar();
		Temporizador3 = 0;
		bcanAction3 = false;
	}
}

