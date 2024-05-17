// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "Capsulas.generated.h"

/**
 * 
 */
UCLASS()
class FACHADA_API ACapsulas : public AStaticMeshActor
{
	GENERATED_BODY()
	
public:
	UStaticMeshComponent* MeshCapsula;
	ACapsulas();

	virtual void PickUp();
	virtual void PutDown(FTransform TargetLocation);
};
