// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveTanque.h"
#include "FachadaProjectile.h"
#include "Escudo.h"

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
	FVector Coordenada = GetActorLocation();
	float posicion = velocidad * DeltaTime;
	FVector NewLocation = FVector(Coordenada.X - velocidad, Coordenada.Y, Coordenada.Z);
	SetActorLocation(NewLocation);
}

void ANaveTanque::Disparar(FVector FireDirection)
{
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
			World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &ANaveTanque::ShotTimerExpired, FireRate);

			bCanFire = false;

		}
	}
}

void ANaveTanque::ShotTimerExpired()
{
	bCanFire = true;
}

void ANaveTanque::RecibirDanio()
{
	vida -= 5;
	if (vida <= 0)
	{
		Destroy();
	}
}

void ANaveTanque::Curarse()
{
	vida += 25;

	/*FVector UbicacionNaveTanque=GetActorLocation();
	FVector UbicacionEscudo=UbicacionNaveTanque+FVector(200.0f, 0.0f, 0.0f);
	Escudo=GetWorld()->SpawnActor<AEscudo>(GetActorLocation(), FRotator::ZeroRotator);*/
}

void ANaveTanque::Obligacion()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("NaveTanque::Obligacion"));
}

FString ANaveTanque::TituloNaves()
{
    return "Nave Tanque";
}
