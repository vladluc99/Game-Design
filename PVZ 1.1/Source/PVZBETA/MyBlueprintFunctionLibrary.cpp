// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBlueprintFunctionLibrary.h"

FVector UMyBlueprintFunctionLibrary::getSpawnLocation(FVector playerLocation)
{
	FVector spawnLocation;
	int x = int(playerLocation.X) % 200;
	int y = int(playerLocation.Y) % 200;
	spawnLocation.X = float(int(playerLocation.X) - x + 100);
	spawnLocation.Y = float(int(playerLocation.Y) - y + 100);
	spawnLocation.Z = float(0);
	return spawnLocation;
}
