// Fill out your copyright notice in the Description page of Project Settings.


#include "AgujeroNegro.h"
#include "Meteoro.h"
#include "Cometa.h"

void AAgujeroNegro::GenerarMeteoros()
{
	//Insertar Meteoros
	for (int i = 0; i < 5; i++)
	{
		FVector SpawnLocation = FVector(FMath::RandRange(-1000.0f, 500.0f), FMath::RandRange(-1200.0f, -1000.0f), 215.0f);
		AMeteoro* NewMeteoro = GetWorld()->SpawnActor<AMeteoro>(AMeteoro::StaticClass(), SpawnLocation, FRotator::ZeroRotator);
	}
}

void AAgujeroNegro::GenerarCometas()
{
	for (int i = 0; i < 5; i++)
	{
		FVector SpawnLocation = FVector(FMath::RandRange(-1000.0f, 500.0f), FMath::RandRange(1200.0f, 1000.0f), 215.0f);
		ACometa* NewObstacle = GetWorld()->SpawnActor<ACometa>(ACometa::StaticClass(), SpawnLocation, FRotator::ZeroRotator);
	}
}

void AAgujeroNegro::GenerarCapsulas()
{
}


