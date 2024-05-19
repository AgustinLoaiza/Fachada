// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveCaza.h"
#include "FachadaProjectile.h"

ANaveCaza::ANaveCaza()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_TriPyramid.Shape_TriPyramid'"));
	mallaNaveEnemiga = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
	GetActorRelativeScale3D();
	SetActorScale3D(FVector(1.0f, 1.0f, 1.0f));

	velocidad= 1.0f;
	bCanFire = true;
	GunOffset = FVector(90.f, 0.f, 0.f); 
	FireRate = 1.5f; 
}

void ANaveCaza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime); 
	Disparar(FVector(-1.0f, 0.0f, 0.0f));
}


void ANaveCaza::Mover(float DeltaTime)
{
	if (bcanMove)
	{
		FVector Coordenada = GetActorLocation();
		float posicion = velocidad * DeltaTime;
		FVector NewLocation = FVector(Coordenada.X - velocidad, Coordenada.Y, Coordenada.Z);
		SetActorLocation(NewLocation);
	}
}


void ANaveCaza::Disparar(FVector FireDirection)
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
			World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &ANaveCaza::ShotTimerExpired, FireRate);

			bCanFire = false;

		}
	}
}

void ANaveCaza::ShotTimerExpired()
{
	bCanFire = true;
}

void ANaveCaza::RecibirDanio()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("NaveCaza::RecibirDanio"));
	vida -= 5;
	if (vida <= 0)
	{
		Destroy(); 
	}
}

void ANaveCaza::Curarse()
{
	vida += 25;
}

void ANaveCaza::Obligacion()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("NaveCaza::Obligacion"));
}

FString ANaveCaza::TituloNaves()
{
    return "Nave Caza";
}
