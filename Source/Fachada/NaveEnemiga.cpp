// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemiga.h"

// Sets default values
ANaveEnemiga::ANaveEnemiga()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	bcanMove = false;
}

// Called when the game starts or when spawned
void ANaveEnemiga::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANaveEnemiga::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

void ANaveEnemiga::MoverExpired()
{
	if (bcanMove==true)
	{
		bcanMove = false;
	}
	else if (bcanMove==false)
	{
		bcanMove = true;
	}
}

void ANaveEnemiga::ValidarAcciones(const FString& _Acciones)
{
	if (_Acciones == "Disparar")
	{
		Disparar(FVector(-5.0f, 0.0f, 0.0f));
	}
	else if (_Acciones == "Moverse")
	{
		MoverExpired();
	}
	else if (_Acciones == "Energia")
	{
		Curarse();
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Accion no valida"));
	}
}

void ANaveEnemiga::Acciones(const TArray<FString>& _Acciones)
{
	for (const FString& Accion : _Acciones) 
	{
		ValidarAcciones(Accion); 
	}
}
