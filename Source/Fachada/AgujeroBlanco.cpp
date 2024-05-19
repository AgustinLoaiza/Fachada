// Fill out your copyright notice in the Description page of Project Settings.


#include "AgujeroBlanco.h"
#include "CapsulaArma.h"
#include "CapsulaVida.h"
#include "CapsulaVelocidad.h"

void AAgujeroBlanco::GenerarMeteoros()
{
}

void AAgujeroBlanco::GenerarCometas()
{
}

void AAgujeroBlanco::GenerarCapsulas()
{
	for (int i = 0; i < 3; i++)
	{
		FVector SpawnLocation = FVector(FMath::RandRange(-400.0f, 0.0f), FMath::RandRange(-1000.0f, 1000.0f), 1500.0f);
		ACapsulaVida* NewCapsula = GetWorld()->SpawnActor<ACapsulaVida>(ACapsulaVida::StaticClass(), SpawnLocation, FRotator::ZeroRotator);
	}
	for (int i = 0; i < 3; i++)
	{
		FVector SpawnLocation = FVector(FMath::RandRange(-400.0f, 0.0f), FMath::RandRange(-1000.0f, 1000.0f), 1500.0f);
		ACapsulaArma* NewCapsula = GetWorld()->SpawnActor<ACapsulaArma>(ACapsulaArma::StaticClass(), SpawnLocation, FRotator::ZeroRotator);
	}
	for (int i = 0; i < 3; i++)
	{
		FVector SpawnLocation = FVector(FMath::RandRange(-400.0f, 0.0f), FMath::RandRange(-1000.0f, 1000.0f), 1500.0f);
		ACapsulaVelocidad* NewCapsula = GetWorld()->SpawnActor<ACapsulaVelocidad>(ACapsulaVelocidad::StaticClass(), SpawnLocation, FRotator::ZeroRotator);
	}
}

