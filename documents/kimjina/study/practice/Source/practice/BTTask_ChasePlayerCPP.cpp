// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_ChasePlayerCPP.h"
#include "AIController.h"
#include "Kismet/GameplayStatics.h"
//블루프린트의 getplayercharacter=플레이어 character 함수 찾음, 이것을 c++에서 사용하기 위한 헤더
#include "GameFramework/Character.h"//Acharacter 의 클래스 정의와 상속 관계를 사용하기 위한 헤더
#include "Navigation/PathFollowingComponent.h"//AI 이동 요청 결과를 사용하기 위한 헤더

UBTTask_ChasePlayerCPP::UBTTask_ChasePlayerCPP() {
	bNotifyTick = true;
}

EBTNodeResult::Type UBTTask_ChasePlayerCPP::ExecuteTask(UBehaviorTreeComponent& OwnerComp,uint8* NodeMemory)
{
	AAIController* AIController = OwnerComp.GetAIOwner();//ownercomp가 가지고 있는 AIcontroller 주소를 AIcontroller 포인터에 저장
	
	if (AIController == nullptr)
	{
		return EBTNodeResult::Failed;
	
	}
	ACharacter* PlayerCharacter = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
	//world에서 0번 플레이어의 character를 가져와서 주소를 playercharacter포인터에 저장
	
	if (PlayerCharacter == nullptr)
	{
		return EBTNodeResult::Failed;
	}
	//AIController->MoveToActor(PlayerCharacter, 100.0f); 플레이어에게 이동하라는 명령, 도착했다는 뜻이 아님 
	//이동 중에는 task를 inprogress 상태로 두고 실제 이동 끝나면 succeeded 처리
	
	EPathFollowingRequestResult::Type MoveResult = AIController->MoveToActor(PlayerCharacter, 100.0f);
	//플레이어 향해 이동 요청 후 이동 요청 결과를 moveresult에 저장

	UE_LOG(LogTemp, Warning, TEXT("MoveToActor Result: %d"), (int32)MoveResult);

	if (MoveResult == EPathFollowingRequestResult::Failed)
	{
		return EBTNodeResult::Failed;
	}

	if (MoveResult == EPathFollowingRequestResult::AlreadyAtGoal)
	{
		return EBTNodeResult::Succeeded;
	}

	// Failed도 아니고 AlreadyAtGoal도 아니면
	// 이동 요청이 성공하여 현재 목표를 향해 이동 중
	return EBTNodeResult::InProgress;
}

void UBTTask_ChasePlayerCPP::TickTask(UBehaviorTreeComponent& OwnerComp,uint8* NodeMemory,float DeltaSeconds)
{
	AAIController* AIController = OwnerComp.GetAIOwner();
	if (AIController == nullptr)
	{
		FinishLatentTask(OwnerComp, EBTNodeResult::Failed);
		return;
	}

	APawn* ControlledPawn = AIController->GetPawn();

	if (ControlledPawn == nullptr)
	{
		FinishLatentTask(OwnerComp, EBTNodeResult::Failed);
		return;
	}

	ACharacter* PlayerCharacter =UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);

	if (PlayerCharacter == nullptr)
	{
		FinishLatentTask(OwnerComp, EBTNodeResult::Failed);
		return;
	}

	float Distance = FVector::Dist(ControlledPawn->GetActorLocation(),PlayerCharacter->GetActorLocation());

	if (Distance <= 100.0f)//거리가 100 이하면 task succeded로 종료
	{
		FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
	}
}

