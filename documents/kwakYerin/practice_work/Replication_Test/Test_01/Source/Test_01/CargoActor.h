// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CargoActor.generated.h"

class UBoxComponent;
class UStaticMeshComponent;

UCLASS()
class TEST_01_API ACargoActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACargoActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Cargo")
	UBoxComponent* BoxComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Cargo")
	UStaticMeshComponent* MeshComponent;

	UPROPERTY(ReplicatedUsing = OnRep_IsCarried)
	bool bIsCarried = false;

	UFUNCTION()
	void OnRep_IsCarried();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//서버에서 화물상태 변경
	void SetIsCarried(bool bNewIsCarried);

	//리플리케이션 등록
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps)const override;

};
