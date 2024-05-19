// Fill out your copyright notice in the Description page of Project Settings.


#include "Capsulas.h"

ACapsulas::ACapsulas()
{
	PrimaryActorTick.bCanEverTick = true;
	limiteCaida = 0.0f;
}

void ACapsulas::PickUp()
{
	SetActorTickEnabled(false);
	SetActorHiddenInGame(true);
	SetActorEnableCollision(false);
}

void ACapsulas::PutDown(FTransform TargetLocation)
{
	SetActorTickEnabled(true);
	SetActorHiddenInGame(false);
	SetActorEnableCollision(true);
	SetActorLocation(TargetLocation.GetLocation());
}

void ACapsulas::Mover(float DeltaTime)
{
	velocidad = 3;
	FVector Posicion = GetActorLocation();
	float caidaZ = velocidad * DeltaTime;
	FVector NewLocation = FVector(Posicion.X, Posicion.Y, Posicion.Z - velocidad);
	SetActorLocation(NewLocation);
	if (NewLocation.Z < limiteCaida)
	{
		SetActorLocation(FVector(Posicion.X, Posicion.Y, 1500.0f));
	}
}

void ACapsulas::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}
