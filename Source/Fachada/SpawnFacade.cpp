// Fill out your copyright notice in the Description page of Project Settings.


#include "SpawnFacade.h"
#include "NaveEnemiga.h"
#include "Obstaculo.h"



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
	
	//Inicializacion de los arrays
	/*Astros = TArray<AAccionesFacade*>();
	Acciones = TArray<FString*>();*/
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

//void ASpawnFacade::SpawnearCapsula()
//{
//}

void ASpawnFacade::PerformTask(TArray<class AAccionesFacade*> _Astros, TArray<AActor*> _Acciones)
{
}


