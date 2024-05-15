// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AccionesFacade.generated.h"

UCLASS()
class FACHADA_API AAccionesFacade : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAccionesFacade();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	void Disparar();
	void Moverse();
	void Energia();

	void AccionesAprobadas(const TArray<FString>& _Acciones);

	/*virtual void Obligacion() PURE_VIRTUAL(AAccionesFacade::Obligacion;);
	virtual FString TituloAstros() PURE_VIRTUAL(AAccionesFacade::TituloAstros;);*/

private:
	void ValidarAcciones(const FString& _Accion);
};
