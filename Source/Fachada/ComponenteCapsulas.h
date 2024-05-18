// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ComponenteCapsulas.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FACHADA_API UComponenteCapsulas : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UComponenteCapsulas();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

public:
	UPROPERTY()
	TArray<class ACapsulas*> CurrentInventory;
	UFUNCTION()
	int32 AddToInventory(ACapsulas* ActorToAdd);
	UFUNCTION()
	void RemoveFromInventory(ACapsulas* ActorToRemove);
		
};
