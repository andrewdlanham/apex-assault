// Fill out your copyright notice in the Description page of Project Settings.


#include "Gun.h"

#include "Components/SkeletalMeshComponent.h"

#include "Kismet/GameplayStatics.h"

#include "DrawDebugHelpers.h"

#include "Engine/DamageEvents.h"

// Sets default values
AGun::AGun()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	SetRootComponent(Root);
	Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(Root);
}

void AGun::PullTrigger()
{
	
	UGameplayStatics::SpawnEmitterAttached(MuzzleFlash, Mesh, TEXT("MuzzleFlashSocket"));
	UGameplayStatics::SpawnSoundAttached(MuzzleSound, Mesh, TEXT("MuzzleFlashSocket"));
	
	FHitResult HitOut;
	FVector ShotDirection;
	GunTrace(HitOut, ShotDirection);

	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ImpactEffect, HitOut.Location, ShotDirection.Rotation());
	UGameplayStatics::SpawnSoundAtLocation(GetWorld(), ImpactSound, HitOut.Location, ShotDirection.Rotation());

	// Deal Damage
	FPointDamageEvent DamageEvent(Damage, HitOut, ShotDirection, nullptr);
	AActor* HitActor = HitOut.GetActor();
	if (HitActor == nullptr) return;
	HitActor->TakeDamage(Damage, DamageEvent, GetOwnerController(), this);

}

// Called when the game starts or when spawned
void AGun::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGun::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

bool AGun::GunTrace(FHitResult& Hit, FVector& ShotDirection)
{
	

	FVector CameraLocation;
	FRotator CameraRotation;
	AController* OwnerController = GetOwnerController();
	if (OwnerController == nullptr) return false;
	OwnerController->GetPlayerViewPoint(CameraLocation, CameraRotation);
	ShotDirection = -CameraRotation.Vector();

	FVector EndLocation = CameraLocation + CameraRotation.Vector() * MaxRange;
	
	
	FCollisionQueryParams Params;
	Params.AddIgnoredActor(this);
	Params.AddIgnoredActor(GetOwner());

	return GetWorld()->LineTraceSingleByChannel(Hit, CameraLocation, EndLocation, ECC_GameTraceChannel1, Params);

	
}

AController* AGun::GetOwnerController() const
{
	APawn* OwnerPawn = Cast<APawn>(GetOwner());
	if (OwnerPawn == nullptr) return nullptr;
	AController* OwnerController = OwnerPawn->GetController();
	if (OwnerController == nullptr) return nullptr;
	return OwnerController;
}

