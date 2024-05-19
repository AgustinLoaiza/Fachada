// Copyright Epic Games, Inc. All Rights Reserve

#include "FachadaProjectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Engine/StaticMesh.h"
#include "FachadaPawn.h"
#include "Escudo.h"
#include "NaveEnemiga.h"
#include "NaveCaza.h"
#include "NaveFugaz.h"
#include "NaveTanque.h"

AFachadaProjectile::AFachadaProjectile() 
{
	// Static reference to the mesh to use for the projectile
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ProjectileMeshAsset(TEXT("/Game/TwinStick/Meshes/TwinStickProjectile.TwinStickProjectile"));

	// Create mesh component for the projectile sphere
	ProjectileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMesh0"));
	ProjectileMesh->SetStaticMesh(ProjectileMeshAsset.Object);
	ProjectileMesh->SetupAttachment(RootComponent);
	ProjectileMesh->BodyInstance.SetCollisionProfileName("Projectile");
	ProjectileMesh->OnComponentHit.AddDynamic(this, &AFachadaProjectile::OnHit);		// set up a notification for when this component hits something
	RootComponent = ProjectileMesh;

	// Use a ProjectileMovementComponent to govern this projectile's movement
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement0"));
	ProjectileMovement->UpdatedComponent = ProjectileMesh;
	ProjectileMovement->InitialSpeed = 3000.f;
	ProjectileMovement->MaxSpeed = 3000.f;
	ProjectileMovement->bRotationFollowsVelocity = true;
	ProjectileMovement->bShouldBounce = false;
	ProjectileMovement->ProjectileGravityScale = 0.f; // No gravity

	// Die after 3 seconds by default
	InitialLifeSpan = 3.0f;
}

void AFachadaProjectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	// Only add impulse and destroy projectile if we hit a physics
	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr) && OtherComp->IsSimulatingPhysics())
	{
		OtherComp->AddImpulseAtLocation(GetVelocity() * 20.0f, GetActorLocation());
	}

	AFachadaPawn* Pawn = Cast<AFachadaPawn>(OtherActor);
	if (Pawn != nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Energia: " + FString::FromInt(Pawn->energia)));
		Pawn->energia -= 10;
	}

	AEscudo* Escudo = Cast<AEscudo>(OtherActor);
	if (Escudo != nullptr)
	{
		Escudo->Durabilidad();
	}

	ANaveCaza* NaveCaza = Cast<ANaveCaza>(OtherActor);
	if (NaveCaza != nullptr)
	{
		NaveCaza->RecibirDanio();
	}

	ANaveFugaz* NaveFugaz = Cast<ANaveFugaz>(OtherActor);
	if (NaveFugaz != nullptr)
	{
		NaveFugaz->RecibirDanio();
	}

	ANaveTanque* NaveTanque = Cast<ANaveTanque>(OtherActor);
	if (NaveTanque != nullptr)
	{
		NaveTanque->RecibirDanio();
	}

	Destroy();
}