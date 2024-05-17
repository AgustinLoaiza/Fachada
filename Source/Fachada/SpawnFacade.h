// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpawnFacade.generated.h"

UCLASS()
class FACHADA_API ASpawnFacade : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpawnFacade();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	////Lista de objetos a spawnear
	//TArray<class AAccionesFacade> Astros;

	UPROPERTY(EditAnywhere, Category = "FachadaSpawn")
	TArray<FString> Acciones;

	TArray<class ANaveEnemiga*> Astros;
protected:
	UPROPERTY(VisibleAnywhere, Category = "FachadaSpawn")
	class ANaveEnemiga* NaveEnemiga;
	UPROPERTY(VisibleAnywhere, Category = "FachadaSpawn")
	class AObstaculo* Obstaculo;
	UPROPERTY(VisibleAnywhere, Category = "FachadaSpawn")
	class ACapsulas* Capsula;

public:
	void SpawnearNaves();
	void SpawnearObstaculos();
	void SpawnearCapsulas();

private:
	void PerformTask(TArray<class AAccionesFacade*>_Astros, TArray<FString>_Acciones);
};
