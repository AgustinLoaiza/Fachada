// Copyright Epic Games, Inc. All Rights Reserved.

#include "FachadaPawn.h"
#include "FachadaProjectile.h"
#include "TimerManager.h"
#include "UObject/ConstructorHelpers.h"
#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Engine/CollisionProfile.h"
#include "Engine/StaticMesh.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundBase.h"
#include "Capsulas.h"
#include "CapsulaVida.h"
#include "CapsulaArma.h"
#include "CapsulaVelocidad.h" 

const FName AFachadaPawn::MoveForwardBinding("MoveForward");
const FName AFachadaPawn::MoveRightBinding("MoveRight");
const FName AFachadaPawn::FireForwardBinding("FireForward");
const FName AFachadaPawn::FireRightBinding("FireRight");

AFachadaPawn::AFachadaPawn()
{	
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("/Game/TwinStick/Meshes/TwinStickUFO.TwinStickUFO"));
	// Create the mesh component
	ShipMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	RootComponent = ShipMeshComponent;
	ShipMeshComponent->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);
	ShipMeshComponent->SetStaticMesh(ShipMesh.Object);
	
	// Cache our sound effect
	static ConstructorHelpers::FObjectFinder<USoundBase> FireAudio(TEXT("/Game/TwinStick/Audio/TwinStickFire.TwinStickFire"));
	FireSound = FireAudio.Object;

	// Create a camera boom...
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->SetUsingAbsoluteRotation(true); // Don't want arm to rotate when ship does
	CameraBoom->TargetArmLength = 1200.f; 
	CameraBoom->SetRelativeRotation(FRotator(-80.f, 0.f, 0.f));
	CameraBoom->bDoCollisionTest = false; // Don't want to pull camera in when it collides with level

	// Create a camera...
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("TopDownCamera"));
	CameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	CameraComponent->bUsePawnControlRotation = false;	// Camera does not rotate relative to arm

	// Movement
	MoveSpeed = 1000.0f;
	// Weapon
	GunOffset = FVector(90.f, 0.f, 0.f);
	FireRate = 0.1f;
	bCanFire = true;

	//Inicializamos el componente de actor
	Capsulas= CreateDefaultSubobject<UComponenteCapsulas>(TEXT("Capsulas"));
}

void AFachadaPawn::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	check(PlayerInputComponent);

	// set up gameplay key bindings
	PlayerInputComponent->BindAxis(MoveForwardBinding);
	PlayerInputComponent->BindAxis(MoveRightBinding);
	PlayerInputComponent->BindAxis(FireForwardBinding);
	PlayerInputComponent->BindAxis(FireRightBinding);
}

void AFachadaPawn::Tick(float DeltaSeconds)
{
	// Find movement direction
	const float ForwardValue = GetInputAxisValue(MoveForwardBinding);
	const float RightValue = GetInputAxisValue(MoveRightBinding);

	// Clamp max size so that (X=1, Y=1) doesn't cause faster movement in diagonal directions
	const FVector MoveDirection = FVector(ForwardValue, RightValue, 0.f).GetClampedToMaxSize(1.0f);

	// Calculate  movement
	const FVector Movement = MoveDirection * MoveSpeed * DeltaSeconds;

	// If non-zero size, move this actor
	if (Movement.SizeSquared() > 0.0f)
	{
		const FRotator NewRotation = Movement.Rotation();
		FHitResult Hit(1.f);
		RootComponent->MoveComponent(Movement, NewRotation, true, &Hit);
		
		if (Hit.IsValidBlockingHit())
		{
			const FVector Normal2D = Hit.Normal.GetSafeNormal2D();
			const FVector Deflection = FVector::VectorPlaneProject(Movement, Normal2D) * (1.f - Hit.Time);
			RootComponent->MoveComponent(Deflection, NewRotation, true);
		}
	}
	
	// Create fire direction vector
	const float FireForwardValue = GetInputAxisValue(FireForwardBinding);
	const float FireRightValue = GetInputAxisValue(FireRightBinding);
	const FVector FireDirection = FVector(FireForwardValue, FireRightValue, 0.f);

	// Try and fire a shot
	FireShot(FireDirection);

	//Logica de administracion de vida y energia

	if (energia <= 0)
	{
		vida--;
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("Vida: " + FString::FromInt(vida)));
		SetActorLocation(FVector(0.0f, 0.0f, 215.0f));
		energia = 100;
		cargador = 50;
		MoveSpeed = 1000.0f;
		DisparoMultiple = false;
	}
	if (vida <= 0)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Has muerto, Tengo que viajar al CHACO"));
		Destroy();
	}
}

void AFachadaPawn::FireShot(FVector FireDirection)
{
	if (cargador>0)
	{
		// If it's ok to fire again
		if (bCanFire == true)
		{
			// If we are pressing fire stick in a direction
			if (FireDirection.SizeSquared() > 0.0f)
			{
				const FRotator FireRotation = FireDirection.Rotation();
				// Spawn projectile at an offset from this pawn
				const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);

				UWorld* const World = GetWorld();
				if (World != nullptr)
				{
					// spawn the projectile
					World->SpawnActor<AFachadaProjectile>(SpawnLocation, FireRotation);
					//Disparo multiple
					if (DisparoMultiple)
					{
						const FRotator FireRotation2 = FireDirection.Rotation() + FRotator(10.0f, 30.0f, 0.0f);
						const FRotator FireRotation3 = FireDirection.Rotation() + FRotator(10.0f, -30.0f, 0.0f);
						const FVector SpawnLocation2 = GetActorLocation() + FVector(10.0f, 30.0f, 0.0f) + FireRotation2.RotateVector(GunOffset);
						const FVector SpawnLocation3 = GetActorLocation() + FVector(10.0f, -30.0f, 0.0f) + FireRotation3.RotateVector(GunOffset);
						World->SpawnActor<AFachadaProjectile>(SpawnLocation2, FireRotation2); 
						World->SpawnActor<AFachadaProjectile>(SpawnLocation3, FireRotation3); 
					}
				}
				//Reducimos las balas del cargador
				cargador--;

				bCanFire = false;
				World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &AFachadaPawn::ShotTimerExpired, FireRate);

				// try and play the sound if specified
				if (FireSound != nullptr)
				{
					UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
				}

				bCanFire = false;
			}
		}
	}
}

void AFachadaPawn::ShotTimerExpired()
{
	bCanFire = true;
}

void AFachadaPawn::TakeItem(ACapsulas* InventoryItem)
{
	InventoryItem->PickUp();
	Capsulas->AddToInventory(InventoryItem);
	if (InventoryItem->IsA(ACapsulaVida::StaticClass()))
	{
		vida++;
	}
	else if (InventoryItem->IsA(ACapsulaArma::StaticClass()))
	{
		DisparoMultiple=true;
	}
	else if (InventoryItem->IsA(ACapsulaVelocidad::StaticClass()))
	{
		MoveSpeed = 2000.0f;
	}
}

void AFachadaPawn::NotifyHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
{
	AMeteoro* Meteoro = Cast<AMeteoro>(Other);
	if (Meteoro)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Energia: " + FString::FromInt(energia)));
		energia -= 10;
		
	}
	ACometa* Cometa = Cast<ACometa>(Other);
	if (Cometa)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Energia: " + FString::FromInt(energia))); 
		energia -= 20;
	}
	if (Other->IsA(ACapsulas::StaticClass()))
	{
		ACapsulas* Capsula = Cast<ACapsulas>(Other);
		TakeItem(Capsula);
	}
}

