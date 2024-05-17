// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveTanque.h"

void ANaveTanque::Mover(float DeltaTime)
{
    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("NaveTanque::Mover"));
}

void ANaveTanque::Disparar()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("NaveTanque::Disparar"));
}

void ANaveTanque::RecibirDanio()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("NaveTanque:: Danio"));
}

void ANaveTanque::Obligacion()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("NaveTanque::Obligacion"));
}

FString ANaveTanque::TituloAstros()
{
    return "Nave Tanque";
}
