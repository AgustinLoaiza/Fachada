// Fill out your copyright notice in the Description page of Project Settings.


#include "Obstaculo.h"
#include "Meteoro.h"
#include "Cometa.h"

// Sets default values
AObstaculo::AObstaculo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AObstaculo::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AObstaculo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AObstaculo::GenerarMeteoros()
{
	for (int i = 0; i < 7; i++)
	{
		FVector SpawnLocation = FVector(FMath::RandRange(-600.0f, -500.0f), FMath::RandRange(-1000.0f, 1000.0f), 0.0f);
		AMeteoro* NewMeteoro = GetWorld()->SpawnActor<AMeteoro>(AMeteoro::StaticClass(), SpawnLocation, FRotator::ZeroRotator);
		MeteorosCometas.Add(SpawnLocation, NewMeteoro);
	}
}

void AObstaculo::GenerarCometas()
{
	for (int i = 0; i < 3; i++)
	{
		FVector SpawnLocation = FVector(FMath::RandRange(-400.0f, 0.0f), FMath::RandRange(-1000.0f, 1000.0f), 0.0f);
		ACometa* NewObstacle = GetWorld()->SpawnActor<ACometa>(ACometa::StaticClass(), SpawnLocation, FRotator::ZeroRotator);
		MeteorosCometas.Add(SpawnLocation, NewObstacle);
	}
}

void AObstaculo::CrearOrden(const FString& _Orden)
{
	if (_Orden == "Meteoro")
	{
		GenerarMeteoros();
	}
	else if (_Orden == "Cometa")
	{
		GenerarCometas();
	}
}

void AObstaculo::RecibirOrden(const TArray<FString>& _Orden)
{
	for(const FString& Orden : _Orden)
	{
		CrearOrden(Orden);
	}
}



