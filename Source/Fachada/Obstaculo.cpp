// Fill out your copyright notice in the Description page of Project Settings.


#include "Obstaculo.h"

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


//void AObstaculo::energia()
//{
//}
//
//void AObstaculo::mover(float DeltaTime)
//{
//}

//void AObstaculo::Obligacion()
//{
//	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Crear Obstaculos"), *TituloAstros()));
//}
//
//FString AObstaculo::TituloAstros()
//{
//	return "Obstaculo";
//}

