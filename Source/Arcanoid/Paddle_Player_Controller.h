// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Ball.h"
#include "Paddle_Player_Controller.generated.h"


UCLASS()
class ARCANOID_API APaddle_Player_Controller : public APlayerController
{
	GENERATED_BODY()

public:
	
	APaddle_Player_Controller();

	UFUNCTION()
	virtual void SetupInputComponent() override;

protected:

	virtual void BeginPlay() override;

	void MoveHorizontal(float AxisValue);

	void Launch();

	UPROPERTY(EditAnywhere)
	TSubclassOf<ABall> BallObj;

	UPROPERTY()
	ABall* MyBall;

	FVector SpawnLocation = FVector(10.0f, 0.0f, 40.0f);
	FRotator SpawnRotation = FRotator(0.0f, 0.0f, 0.0f);
	FActorSpawnParameters SpawnInfo;

public:

	void SpawnNewBall();
	
};
