// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Logging/LogMacros.h"
#include "Test_01Character.generated.h"

class USpringArmComponent;
class UCameraComponent;
class UInputAction;
class ATestProjectile;
struct FInputActionValue;

DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);

/**
 *  A simple player-controllable third person character
 *  Implements a controllable orbiting camera
 */
UCLASS(abstract)
class ATest_01Character : public ACharacter
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Components", meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Components", meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FollowCamera;
	
protected:

	/** Jump Input Action */
	UPROPERTY(EditAnywhere, Category="Input")
	UInputAction* JumpAction;

	/** Move Input Action */
	UPROPERTY(EditAnywhere, Category="Input")
	UInputAction* MoveAction;

	/** Look Input Action */
	UPROPERTY(EditAnywhere, Category="Input")
	UInputAction* LookAction;

	/** Mouse Look Input Action */
	UPROPERTY(EditAnywhere, Category="Input")
	UInputAction* MouseLookAction;

public:

	/** Constructor */
	ATest_01Character();	

protected:

	/** Initialize input action bindings */
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:

	/** Called for movement input */
	void Move(const FInputActionValue& Value);

	/** Called for looking input */
	void Look(const FInputActionValue& Value);

public:

	/** Handles move inputs from either controls or UI interfaces */
	UFUNCTION(BlueprintCallable, Category="Input")
	virtual void DoMove(float Right, float Forward);

	/** Handles look inputs from either controls or UI interfaces */
	UFUNCTION(BlueprintCallable, Category="Input")
	virtual void DoLook(float Yaw, float Pitch);

	/** Handles jump pressed inputs from either controls or UI interfaces */
	UFUNCTION(BlueprintCallable, Category="Input")
	virtual void DoJumpStart();

	/** Handles jump pressed inputs from either controls or UI interfaces */
	UFUNCTION(BlueprintCallable, Category="Input")
	virtual void DoJumpEnd();

public:

	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }

	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }

public:

	// 클라이언트가 서버에게 요청하는 RPC
	UFUNCTION(Server, Reliable)
	void Server_AddNumber();

	// 서버가 모든 클라이언트에게 실행시키는 RPC
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_ShowMessage();

	// F키를 눌렀을 때 실행
	void TestRPC();

	// fps 전용
	void Fire();

	UFUNCTION(Server, Reliable)
	void Server_Fire();

	UFUNCTION(NetMulticast,Unreliable)
	void Multicast_FireFX();

	//Repnotify 현상 확인(함수 관리용)
	// Replication 등록
	virtual void GetLifetimeReplicatedProps(
		TArray<FLifetimeProperty>& OutLifetimeProps
	) const override;

protected:

	//Repnotify 현상 확인(변수 관리용)
	UPROPERTY(ReplicatedUsing = OnRep_RPCNumber)
	int32 RPCNumber = 0;

	UFUNCTION()
	void OnRep_RPCNumber();

	UFUNCTION(BlueprintImplementableEvent, Category = "Fire")
	
	void BP_PlayFireFX();

	// 발사할 Projectile 클래스
	UPROPERTY(EditDefaultsOnly, Category = "Projectile")
	TSubclassOf<ATestProjectile> ProjectileClass;

	//HP 관리
	// 최대 체력
	UPROPERTY(EditDefaultsOnly, Category = "Health")
	float MaxHealth;

	// 현재 체력
	UPROPERTY(ReplicatedUsing = OnRep_CurrentHealth)
	float CurrentHealth;

	// CurrentHealth가 클라이언트에 복제되었을 때 호출
	UFUNCTION()
	void OnRep_CurrentHealth();

	// 체력 변경 후 공통 처리
	void OnHealthUpdate();

public:

	// 최대 체력 가져오기
	UFUNCTION(BlueprintPure, Category = "Health")
	FORCEINLINE float GetMaxHealth() const { return MaxHealth; }

	// 현재 체력 가져오기
	UFUNCTION(BlueprintPure, Category = "Health")
	FORCEINLINE float GetCurrentHealth() const { return CurrentHealth; }

	// 현재 체력 변경
	UFUNCTION(BlueprintCallable, Category = "Health")
	void SetCurrentHealth(float HealthValue);

	// 데미지 처리
	UFUNCTION(BlueprintCallable, Category = "Health")
	float TakeDamage(
		float DamageTaken,
		struct FDamageEvent const& DamageEvent,
		AController* EventInstigator,
		AActor* DamageCauser
	) override;
};

