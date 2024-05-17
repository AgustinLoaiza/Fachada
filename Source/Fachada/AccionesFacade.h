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
	void EstrategiaOfensiva();
	void EstrategiaDefensiva();
	void EstrategiaAgresiva();

	void RealizarAcciones(TArray<FString>_Acciones, TArray<class ANaveEnemiga*>_Naves);

	TArray<FString> Acciones;
	TArray<class ANaveEnemiga*> Naves;

	class ANaveCaza* NaveCaza;
	class ANaveTanque* NaveTanque;
	class ANaveFugaz* NaveFugaz;
};
