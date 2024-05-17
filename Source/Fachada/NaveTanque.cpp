// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveTanque.h"
#include "FachadaProjectile.h"

ANaveTanque::ANaveTanque()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder'"));
	mallaNaveEnemiga = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
	GetActorRelativeScale3D();
	SetActorScale3D(FVector(1.0f, 1.0f, 1.0f));

	velocidad = 1.0f;
	bCanFire = true;
	GunOffset = FVector(90.f, 0.f, 0.f);
	FireRate = 1.5f;
}

void ANaveTanque::Mover(float DeltaTime)
{
    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("NaveTanque::Mover"));
	float Radio = 100.0f;
	float VelocidadAngular = 1.0f;  // Radianes por segundo
	float Tiempo = GetWorld()->GetTimeSeconds();  // Obtener el tiempo actual del juego

	// Calcular las nuevas coordenadas en el plano XY
	float NuevaX = CentroX + Radio * FMath::Cos(Tiempo * VelocidadAngular);
	float NuevaY = CentroY + Radio * FMath::Sin(Tiempo * VelocidadAngular);

	// Obtener la ubicación actual del actor
	FVector Coordenada = GetActorLocation();

	// Calcular la nueva ubicación manteniendo Z constante
	FVector NewLocation = FVector(NuevaX, NuevaY, Coordenada.Z);

	// Establecer la nueva ubicación del actor
	SetActorLocation(NewLocation);
}

void ANaveTanque::Disparar(FVector FireDirection)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("NaveTanque::Disparar"));
}

void ANaveTanque::ShotTimerExpired()
{
}

void ANaveTanque::RecibirDanio()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("NaveTanque:: Danio"));
}

void ANaveTanque::Curarse()
{
}

void ANaveTanque::Obligacion()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("NaveTanque::Obligacion"));
}

FString ANaveTanque::TituloAstros()
{
    return "Nave Tanque";
}
