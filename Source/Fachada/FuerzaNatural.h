// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FuerzaNatural.generated.h"

UCLASS()
class FACHADA_API AFuerzaNatural : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFuerzaNatural();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	

	virtual void GenerarMeteoros() PURE_VIRTUAL(AFuerzaNatural::GenerarMeteoros;);
	virtual void GenerarCometas() PURE_VIRTUAL(AFuerzaNatural::GenerarCometas;); 
	virtual void GenerarCapsulas() PURE_VIRTUAL(AFuerzaNatural::GenerarCapsulas;); 

	virtual void Obligacion() PURE_VIRTUAL(AFuerzaNatural::Obligacion;);
	virtual FString TituloAstros() PURE_VIRTUAL(AFuerzaNatural::TituloAstros, return "";); 

public:
	void RecibirOrden(const TArray<FString>& _Orden);
	void CrearOrden(const FString& _Orden);
};
