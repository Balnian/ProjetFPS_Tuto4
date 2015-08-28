// Fill out your copyright notice in the Description page of Project Settings.

#include "ProjetFPS.h"
#include "FPSGameMode.h"
#include "FPSCharacter.h"

AFPSGameMode::AFPSGameMode() : Super()
{
   DefaultPawnClass = AFPSCharacter::StaticClass();
}

void AFPSGameMode::StartPlay()
{
   Super::StartPlay();
   StartMatch();
   if (GEngine)
   {
      GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("HELLO WORLD"));
   }
}


