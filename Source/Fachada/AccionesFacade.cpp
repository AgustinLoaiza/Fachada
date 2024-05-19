// Fill out your copyright notice in the Description page of Project Settings.


#include "AccionesFacade.h"
#include "NaveEnemiga.h"
#include "NaveCaza.h"
#include "NaveTanque.h"
#include "NaveFugaz.h"

// Sets default values
AAccionesFacade::AAccionesFacade()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAccionesFacade::BeginPlay()
{
	Super::BeginPlay();
	
	//Inicializacion de los arrays
	Naves = TArray<ANaveEnemiga*>();
	Acciones = TArray<FString>();

	FVector ubicacionInicialNavesCazas = FVector(1000.0f, -150.0f, 200.0f);
	FVector ubicacionInicialNavesTanques = FVector(800.0f, -150.0f, 200.0f);
	FVector ubicacionInicialNavesFugaces = FVector(1200.0f, -450.0f, 200.0f);

	// Generar Naves Fugaces en las esquinas
	for (int i = 0; i < 2; i++) {
		FVector PosicionNaveActual = FVector(ubicacionInicialNavesFugaces.X, ubicacionInicialNavesFugaces.Y + i * 1200, ubicacionInicialNavesFugaces.Z);
		NaveFugaz = GetWorld()->SpawnActor<ANaveFugaz>(PosicionNaveActual, FRotator::ZeroRotator);
		Naves.Add(NaveFugaz); 
	}

	// Generar Naves Tanques
	for (int i = 0; i < 2; i++) {
		FVector PosicionNaveActual = FVector(ubicacionInicialNavesTanques.X, ubicacionInicialNavesTanques.Y + i * 500, ubicacionInicialNavesTanques.Z);
		NaveTanque = GetWorld()->SpawnActor<ANaveTanque>(PosicionNaveActual, FRotator::ZeroRotator);
		Naves.Add(NaveTanque); 
	}

	// Generar Naves Caza
	for (int i = 0; i < 5; i++) { 
		FVector PosicionNaveActual = FVector(ubicacionInicialNavesCazas.X, ubicacionInicialNavesCazas.Y + i * 200, ubicacionInicialNavesCazas.Z);
		NaveCaza = GetWorld()->SpawnActor<ANaveCaza>(PosicionNaveActual, FRotator::ZeroRotator);
		Naves.Add(NaveCaza); 
	}
}

// Called every frame
void AAccionesFacade::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AAccionesFacade::EstrategiaOfensiva()
{
	Acciones.Empty();
	Acciones.Add("Disparar");
	Acciones.Add("Moverse");
	RealizarAcciones(Acciones, Naves);
}

void AAccionesFacade::EstrategiaDefensiva()
{
	Acciones.Empty();
	Acciones.Add("Energia");
	Acciones.Add("Moverse");
	RealizarAcciones(Acciones, Naves);
}

void AAccionesFacade::EstrategiaAgresiva()
{
	Acciones.Empty();
	Acciones.Add("Disparar");
	Acciones.Add("Moverse");
	Acciones.Add("Energia");
	RealizarAcciones(Acciones, Naves);
}

void AAccionesFacade::RealizarAcciones(TArray<FString> _Acciones, TArray<class ANaveEnemiga*> _Naves)
{
	for (ANaveEnemiga* Nave : _Naves)
	{
		Nave->Acciones(_Acciones);
	}
}