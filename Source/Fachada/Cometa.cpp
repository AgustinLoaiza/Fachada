// Fill out your copyright notice in the Description page of Project Settings.


#include "Cometa.h"

ACometa::ACometa()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
	mallaObstaculo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	mallaObstaculo->SetStaticMesh(ShipMesh.Object);
	GetActorRelativeScale3D();
	SetActorScale3D(FVector(1.0f, 1.0f, 1.0f));

	limiteY = -1700.0f;
	velocidad = 3;
}

void ACometa::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime); 
	mover(DeltaTime); 
}

void ACometa::mover(float DeltaTime)
{
	FVector Posicion = GetActorLocation();
	float movimientoY = velocidad * DeltaTime; 
	FVector NewLocation = FVector(Posicion.X, Posicion.Y - velocidad, Posicion.Z);
	SetActorLocation(NewLocation);
	if (NewLocation.Y < limiteY)
	{
		SetActorLocation(FVector(Posicion.X, 1700, Posicion.Z));
	}
}
