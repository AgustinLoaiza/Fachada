// Fill out your copyright notice in the Description page of Project Settings.


#include "SpawnFacade.h"
#include "Obstaculo.h"
#include "Meteoro.h"
#include "Cometa.h"
#include "Capsulas.h"
#include "CapsulaVida.h"
#include "CapsulaVelocidad.h"
#include "CapsulaArma.h"
#include "FuerzaNatural.h"
#include "AgujeroNegro.h"
#include "AgujeroBlanco.h"


// Sets default values
ASpawnFacade::ASpawnFacade()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASpawnFacade::BeginPlay()
{
	Super::BeginPlay();
	
	Fenomeno=TArray<AFuerzaNatural*>();
	Tormenta=TArray<FString>();

	AgujeroNegro = GetWorld()->SpawnActor<AAgujeroNegro>(AAgujeroNegro::StaticClass());
	AgujeroBlanco = GetWorld()->SpawnActor<AAgujeroBlanco>(AAgujeroBlanco::StaticClass());

	Fenomeno.Add(AgujeroNegro);
	Fenomeno.Add(AgujeroBlanco); 
}

// Called every frame
void ASpawnFacade::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASpawnFacade::lluviadeMeteoritos()
{
	Tormenta.Empty();
	Tormenta.Add("Meteoro");
	PermitirTormenta(Tormenta,Fenomeno);
}

void ASpawnFacade::lluviadeCometas()
{
	Tormenta.Empty();
	Tormenta.Add("Cometa");
	PermitirTormenta(Tormenta,Fenomeno);
}

void ASpawnFacade::dropsCapsulas()
{
	Tormenta.Empty(); 
	Tormenta.Add("Capsula"); 
	PermitirTormenta(Tormenta,Fenomeno); 
}

void ASpawnFacade::PermitirTormenta(TArray<FString> _Tormenta, TArray<class AFuerzaNatural*> _Fenomeno)
{
	for(AFuerzaNatural* Desastre : _Fenomeno)
	{
		Desastre->RecibirOrden(_Tormenta);
	}
}





