// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FachadaGameMode.generated.h"

UCLASS(MinimalAPI)
class AFachadaGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AFachadaGameMode();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

public:
	class AAccionesFacade* AccionesFacade;

	float Temporizador;
};



