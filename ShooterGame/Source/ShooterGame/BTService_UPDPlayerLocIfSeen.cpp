// Fill out your copyright notice in the Description page of Project Settings.


#include "BTService_UPDPlayerLocIfSeen.h"
#include "AIController.h"
#include "ShooterCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "BehaviorTree/BlackboardComponent.h"


UBTService_UPDPlayerLocIfSeen::UBTService_UPDPlayerLocIfSeen()
{
    NodeName = TEXT("UPDPlayerLocIfSeen");
}


void UBTService_UPDPlayerLocIfSeen::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
    Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

    APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
    AAIController* AIController = OwnerComp.GetAIOwner();
    APawn* ControllerPawn = AIController->GetPawn();

    bool HasLineOfSight = AIController->LineOfSightTo(PlayerPawn);

    if (HasLineOfSight) {
        OwnerComp.GetBlackboardComponent()->SetValueAsVector(GetSelectedBlackboardKey(), PlayerPawn->GetActorLocation());
    } else {
        OwnerComp.GetBlackboardComponent()->ClearValue(GetSelectedBlackboardKey());
    }

    
    
}

