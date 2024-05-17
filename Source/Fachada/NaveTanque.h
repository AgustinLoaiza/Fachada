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
	void Mover(float DeltaTime) override;
	void Disparar() override;
	void RecibirDanio() override;

	void Obligacion() override;
	FString TituloAstros() override;
};
