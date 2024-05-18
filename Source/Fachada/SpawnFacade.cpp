// Fill out your copyright notice in the Description page of Project Settings.


#include "SpawnFacade.h"
#include "Obstaculo.h"
#include "Meteoro.h"
#include "Cometa.h"
#include "Capsulas.h"
#include "CapsulaVida.h"
#include "CapsulaVelocidad.h"
#include "CapsulaArma.h"


// Sets default values
ASpawnFacade::ASpawnFacade()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Incializamos los arrays
	Obstaculos = TArray<AObstaculo*>();
	Capsulas = TArray<ACapsulas*>();

	Astros = TArray<FString>();
	Comestibles = TArray<FString>();
}

// Called when the game starts or when spawned
void ASpawnFacade::BeginPlay()
{
	Super::BeginPlay();
	
	Obstaculo=GetWorld()->SpawnActor<AObstaculo>(AObstaculo::StaticClass());
	Obstaculos.Add(Obstaculo);

	Capsula = GetWorld()->SpawnActor<ACapsulas>(ACapsulas::StaticClass());
	Capsulas.Add(Capsula);
}

// Called every frame
void ASpawnFacade::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASpawnFacade::SpawnearObstaculos()
{
}

void ASpawnFacade::SpawnearCapsulas()
{
}

void ASpawnFacade::PerformTask(TArray<class AOBstaculos*>_Obstaculos, TArray<class ACapsulas*>_Capsulas, TArray<FString>_Astros, TArray<FString>_Comestibles)
{
}


