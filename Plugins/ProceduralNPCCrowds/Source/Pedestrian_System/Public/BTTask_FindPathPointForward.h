//  Copyright (c) 2023 KomodoBit Games. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "Kismet/KismetSystemLibrary.h"
#include "BTTask_FindPathPointForward.generated.h"

/**
 * 
 */
UCLASS()
class PEDESTRIAN_SYSTEM_API UBTTask_FindPathPointForward : public UBTTaskNode
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Tracing, meta=(ToolTip="How Far should the AI look to find the next pathpoint."))
	float TraceDistance = 600.0;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Tracing, meta=(ToolTip="How far ahead of the AI character should the pathfinding trace happen, recommended values are between 225-300."))
	float TraceStartLocation;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Tracing, meta=(ToolTip="How wide should the trace used to find the next pathpoint be."))
	float SphereRadius = 300.0;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Tracing, meta=(ToolTip="Whether to show the debug of the traces for pathfinding. Note: Will impact performance when enabled"))
	TEnumAsByte<EDrawDebugTrace::Type> DebugDrawTypes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Tracing, meta=(ToolTip="Object collision channel to filter for, used to find pathpoints and not every object in the world."))
	TEnumAsByte<EObjectTypeQuery> ObjectToUse;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PathFinding, meta=(ToolTip="Blackboard vector value used to send data from this node to something like the MoveTo Node."))
	FBlackboardKeySelector NextWaypointVector;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Tracing, meta=(ToolTip="Radius around AI to search for next pathpoint when lost/stuck."))
	float RefindPathpointRadius;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Tracing, meta=(ToolTip="The variation in location when moving to the next pathpoint, NOTE: Only modify X and Y values, leave Z at 0."))
	FVector PathfindingSeperation;

private:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

	
	
};
