// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemiga.h"

// Sets default values
ANaveEnemiga::ANaveEnemiga()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

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

}

void ANaveEnemiga::ValidarAcciones(const FString& _Acciones)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Acciones: ") + _Acciones);
	if (_Acciones == "Disparar")
	{
		Disparar(FVector(-5.0f, 0.0f, 0.0f));
	}
	else if (_Acciones == "Moverse")
	{
		bcanMove = true;
		Mover(1.0f);
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
