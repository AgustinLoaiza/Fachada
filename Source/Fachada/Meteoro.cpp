// Fill out your copyright notice in the Description page of Project Settings.


#include "Meteoro.h"

AMeteoro::AMeteoro()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
	mallaObstaculo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	mallaObstaculo->SetStaticMesh(ShipMesh.Object);
	GetActorRelativeScale3D();
	SetActorScale3D(FVector(1.0f, 1.0f, 1.0f));

	limiteY = 1700.0f;
	velocidad = 3;
}

void AMeteoro::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	mover(DeltaTime);
}

void AMeteoro::mover(float DeltaTime)
{
	FVector Posicion = GetActorLocation();
	float movimientoY = velocidad * DeltaTime;
	FVector NewLocation = FVector(Posicion.X, Posicion.Y + velocidad, Posicion.Z);
	SetActorLocation(NewLocation);
	if (NewLocation.Y > limiteY)
	{
		SetActorLocation(FVector(Posicion.X, -1700, Posicion.Z));
	}
}
