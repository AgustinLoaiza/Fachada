// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
//#include "AccionesFacade.h"
#include "NaveEnemiga.generated.h"

UCLASS()
class FACHADA_API ANaveEnemiga : public AActor //public AAccionesFacade 
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

	virtual void Mover(float DeltaTime) PURE_VIRTUAL(ANaveEnemiga::Mover,); 
	virtual void Disparar(FVector FireDiretion) PURE_VIRTUAL(ANaveEnemiga::Disparar,);
	virtual void RecibirDanio() PURE_VIRTUAL(ANaveEnemiga::RecibirDanio,); 
	virtual void Curarse() PURE_VIRTUAL(ANaveEnemiga::Curarse,);

public:
	virtual void Obligacion() PURE_VIRTUAL(AAccionesFacade::Obligacion;);
	virtual FString TituloAstros() PURE_VIRTUAL(AAccionesFacade::TituloAstros, return "";);


	bool bcanMove = false;

public:
	void ValidarAcciones(const FString& _Accion);
	void Acciones(const TArray<FString>& _Acciones);


};
