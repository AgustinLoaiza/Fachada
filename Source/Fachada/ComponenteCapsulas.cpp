// Fill out your copyright notice in the Description page of Project Settings.


#include "ComponenteCapsulas.h"

// Sets default values for this component's properties
UComponenteCapsulas::UComponenteCapsulas()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UComponenteCapsulas::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UComponenteCapsulas::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

int32 UComponenteCapsulas::AddToInventory(ACapsulas* ActorToAdd)
{
	return CurrentInventory.Add(ActorToAdd);
}

void UComponenteCapsulas::RemoveFromInventory(ACapsulas* ActorToRemove)
{
	CurrentInventory.Remove(ActorToRemove);
}

