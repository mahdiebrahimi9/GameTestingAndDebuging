// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/Item.h"
#include "DrawDebugHelpers.h"
#include "GameTestingAndDebug/GameTestingAndDebug.h"

#define Thirty 24.f

// Sets default values
AItem::AItem()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AItem::BeginPlay()
{
	Super::BeginPlay();
	//  log output  message
	UE_LOG(LogTemp, Warning, TEXT("Is This Attention Log !"));

	//  screen input debug message
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(1, 60.f, FColor::Cyan, FString("Is This Attention Screen!"));
	}

	//UWorld* world = GetWorld();
	FVector location = GetActorLocation();
	Draw_Sphere(location);
}

// Called every frame
void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	UE_LOG(LogTemp, Warning, TEXT("DeltaTime: %f"), DeltaTime);

	FString name = GetName();
	FString message = FString::Printf(TEXT("ItemName: %s"), *name);
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(2, 60.f, FColor::Red, message);
	}
}

