// Fill out your copyright notice in the Description page of Project Settings.


#include "ShooterAIController.h"

#include "Kismet/GameplayStatics.h"


void AShooterAIController::BeginPlay()
{
    Super::BeginPlay();
    
}

void AShooterAIController::Tick(float DeltaSeconds)
{
    Super::Tick(DeltaSeconds);
    APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
    

    bool HasLineOfSight = LineOfSightTo(PlayerPawn);
    if (HasLineOfSight) {
        MoveToActor(PlayerPawn, 400);
        SetFocus(PlayerPawn);
    } else {
        ClearFocus(EAIFocusPriority::Gameplay);
        StopMovement();
    }
}
