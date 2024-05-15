// Fill out your copyright notice in the Description page of Project Settings.


#include "AccionesFacade.h"

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
	
}

// Called every frame
void AAccionesFacade::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AAccionesFacade::Disparar()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Disparar"));
}

void AAccionesFacade::Moverse()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Moverse"));
}

void AAccionesFacade::Energia()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Energia"));
}

void AAccionesFacade::AccionesAprobadas(const TArray<FString>& _Acciones)
{
	for(FString Acciones : _Acciones)
	{
		ValidarAcciones(Acciones);
	}
}

void AAccionesFacade::ValidarAcciones(const FString& _Acciones)
{
	if(_Acciones == "Disparar")
	{
		Disparar();
	}
	else if(_Acciones == "Moverse")
	{
		Moverse();
	}
	else if(_Acciones == "Energia")
	{
		Energia();
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Accion no valida"));
	}
}

