// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveCaza.h"

void ANaveCaza::Mover(float DeltaTime)
{
    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("NaveCaza::Mover"));
}

void ANaveCaza::Disparar()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("NaveCaza::Disparar"));
}

void ANaveCaza::RecibirDanio()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("NaveCaza::RecibirDanio"));
}

void ANaveCaza::Obligacion()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("NaveCaza::Obligacion"));
}

FString ANaveCaza::TituloAstros()
{
    return "Nave Caza";
}
