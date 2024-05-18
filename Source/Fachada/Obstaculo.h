// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
//#include "AccionesFacade.h"
#include "Obstaculo.generated.h"

UCLASS()
class FACHADA_API AObstaculo : public AActor //public AAccionesFacade 
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AObstaculo();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* mallaObstaculo;

protected:
	float velocidad;

	float limiteCaida;

	FVector posicion;

public:
	void mover(float DeltaTime) PURE_VIRTUAL(AObstaculo::mover,);

public:
	
};
