// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FuerzaNatural.h"
#include "AgujeroBlanco.generated.h"

/**
 * 
 */
UCLASS()
class FACHADA_API AAgujeroBlanco : public AFuerzaNatural
{
	GENERATED_BODY()
	
public:
	void GenerarMeteoros() override;
	void GenerarCometas() override;
	void GenerarCapsulas() override;
};
