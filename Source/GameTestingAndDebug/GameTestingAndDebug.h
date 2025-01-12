// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

//get draw debug sphere
#define Draw_Sphere(location) if (GetWorld())DrawDebugSphere(GetWorld(),location,25.f,24.f,FColor::Blue,false,60.f)
