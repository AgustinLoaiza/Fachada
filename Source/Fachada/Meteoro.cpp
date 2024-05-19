// Fill out your copyright notice in the Description page of Project Settings.


#include "Meteoro.h"

AMeteoro::AMeteoro()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
	mallaObstaculo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	mallaObstaculo->SetStaticMesh(ShipMesh.Object);
	GetActorRelativeScale3D();
	SetActorScale3D(FVector(1.0f, 1.0f, 1.0f));
}
