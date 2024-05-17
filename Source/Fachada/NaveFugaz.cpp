// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveFugaz.h"
#include "FachadaProjectile.h"

ANaveFugaz::ANaveFugaz()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));
	mallaNaveEnemiga = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
	GetActorRelativeScale3D();
	SetActorScale3D(FVector(1.0f, 1.0f, 1.0f));

	velocidad = 1.0f;
	bCanFire = true;
	GunOffset = FVector(90.f, 0.f, 0.f);
	FireRate = 1.5f;
}

void ANaveFugaz::Mover(float DeltaTime)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("NaveFugaz::Mover"));
	float Amplitud = 2.0f;
	float Frecuencia = 1.0f;
	float Tiempo = GetWorld()->GetTimeSeconds();  // Obtener el tiempo actual del juego

	// Obtener la ubicación actual del actor
	FVector Coordenada = GetActorLocation(); 

	// Calcular el desplazamiento en zigzag en el eje Y
	float ZigZagY = FMath::Sin(Tiempo * Frecuencia) * Amplitud; 

	// Calcular la nueva ubicación
	FVector NewLocation = FVector(Coordenada.X - velocidad * DeltaTime, Coordenada.Y + ZigZagY, Coordenada.Z); 

	// Establecer la nueva ubicación del actor
	SetActorLocation(NewLocation); 
}

void ANaveFugaz::Disparar(FVector FireDirection)
{
	// If it's ok to fire again
	if (bCanFire == true)
	{
		// If we are pressing fire stick in a direction
		if (FireDirection.SizeSquared() > 0.0f)
		{
			const FRotator FireRotation = FireDirection.Rotation();
			// Spawn projectile at an offset from this pawn
			const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);

			UWorld* const World = GetWorld();
			if (World != nullptr)
			{
				// spawn the projectile
				World->SpawnActor<AFachadaProjectile>(SpawnLocation, FireRotation);


			}
			bCanFire = false;
			World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &ANaveFugaz::ShotTimerExpired, FireRate);

			bCanFire = false;

		}
	}
}

void ANaveFugaz::ShotTimerExpired()
{
	bCanFire = true;
}

void ANaveFugaz::RecibirDanio()
{
	vida -= 5;
	if (vida <= 0)
	{
		Destroy();
	}
}

void ANaveFugaz::Curarse()
{
	vida += 25;
}

void ANaveFugaz::Obligacion()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("NaveFugaz::Obligacion"));
}

FString ANaveFugaz::TituloAstros()
{
	return "NaveFugaz";
}
