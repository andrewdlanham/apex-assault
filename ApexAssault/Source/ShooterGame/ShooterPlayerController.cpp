// Fill out your copyright notice in the Description page of Project Settings.


#include "ShooterPlayerController.h"
#include "TimerManager.h"
#include "Blueprint/UserWidget.h"


void AShooterPlayerController::GameHasEnded(class AActor* EndGameFocus, bool bIsWinner)
{
    Super::GameHasEnded(EndGameFocus, bIsWinner);
    UE_LOG(LogTemp, Warning, TEXT("GameHasEnded()"));

    // Remove HUD
    HUD->RemoveFromViewport();


    //
    if (bIsWinner) { 
        UUserWidget* WinScreen = CreateWidget(this, WinScreenClass);
        if (WinScreen != nullptr) {
            WinScreen->AddToViewport();
        }
    } else {
        UUserWidget* LoseScreen = CreateWidget(this, LoseScreenClass);
        if (LoseScreen != nullptr) {
            LoseScreen->AddToViewport();
        }
    }
    
    GetWorldTimerManager().SetTimer(RestartTimer, this, &APlayerController::RestartLevel, RestartDelay);

}

void AShooterPlayerController::BeginPlay()
{
    // Spawn crosshair
	HUD = CreateWidget(this, HUDClass);
	if (HUD != nullptr) {
		HUD->AddToViewport();
	}
}



