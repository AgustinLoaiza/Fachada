// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
//#include "GameFramework/Actor.h"
#include "AccionesFacade.h"
#include "NaveEnemiga.generated.h"

UCLASS()
class FACHADA_API ANaveEnemiga : public AAccionesFacade //public AActor
{
	GENERATED_BODY()

public:	
	// Sets default values for this actor's properties
	ANaveEnemiga();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* mallaNaveEnemiga;

protected:
	int cantidadBalas;
	float Energia;
	float velocidad;
	float tiempoDisparo;

public:

	void Mover();
	void Disparar();
	void RecibirDanio();

public:
	/*void Obligacion() override;
	FString TituloAstros() override;*/

};
