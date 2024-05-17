// Fill out your copyright notice in the Description page of Project Settings.


#include "SpawnFacade.h"
#include "NaveEnemiga.h"
#include "NaveCaza.h"
#include "NaveTanque.h"
#include "NaveFugaz.h"
#include "Obstaculo.h"
#include "Meteoro.h"
#include "Cometa.h"
#include "Capsulas.h"



// Sets default values
ASpawnFacade::ASpawnFacade()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASpawnFacade::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASpawnFacade::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}



void ASpawnFacade::SpawnearNaves()
{
}

void ASpawnFacade::SpawnearObstaculos()
{
}

void ASpawnFacade::SpawnearCapsulas()
{
}

void ASpawnFacade::PerformTask(TArray<class AAccionesFacade*> _Astros, TArray<FString> _Acciones)
{
}


