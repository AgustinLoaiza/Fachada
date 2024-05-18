// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveTanque.generated.h"

/**
 * 
 */
UCLASS()
class FACHADA_API ANaveTanque : public ANaveEnemiga
{
	GENERATED_BODY()

public:
	ANaveTanque();

public:
	uint32 bCanFire : 1;

	FVector GunOffset;

	float FireRate;

	int vida = 150;

	FTimerHandle TimerHandle_ShotTimerExpired;

	class AEscudo* Escudo;

	void ShotTimerExpired();

public: 
	void Mover(float DeltaTime) override;
	void Disparar(FVector FireDirection) override;
	void RecibirDanio() override;
	void Curarse() override;

	void Obligacion() override;
	FString TituloNaves() override;
};
