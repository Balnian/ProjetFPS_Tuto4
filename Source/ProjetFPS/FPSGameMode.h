// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/GameMode.h"
#include "FPSGameMode.generated.h"

/**
 * 
 */
UCLASS()
class PROJETFPS_API AFPSGameMode : public AGameMode
{
	GENERATED_BODY()
   virtual void StartPlay() override;
   AFPSGameMode();
	
	
	
};
