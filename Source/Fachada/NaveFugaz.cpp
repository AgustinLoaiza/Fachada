// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveFugaz.h"

void ANaveFugaz::Mover(float DeltaTime)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("NaveFugaz::Mover"));
}

void ANaveFugaz::Disparar()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("NaveFugaz::Disparar"));
}

void ANaveFugaz::RecibirDanio()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("NaveFugaz::RecibirDanio"));
}

void ANaveFugaz::Obligacion()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("NaveFugaz::Obligacion"));
}

FString ANaveFugaz::TituloAstros()
{
	return "NaveFugaz";
}
