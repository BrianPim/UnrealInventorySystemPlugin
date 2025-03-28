﻿// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InventoryItemData.h"
#include "UObject/Object.h"
#include "InventoryItem.generated.h"

UCLASS()
class INVENTORYSYSTEM_API UInventoryItem : public UObject
{
public:
	void InstantiateItemData(FInventoryItemData NewItemData);
	
	UFUNCTION(BlueprintCallable, Category="Inventory System|Inventory Item")
	FInventoryItemData GetItemData();
	
	UFUNCTION(BlueprintCallable, Category="Inventory System|Inventory Item")
	int GetQuantity();

	UFUNCTION(BlueprintCallable, Category="Inventory System|Inventory Item")
	void SetQuantity(int NewQuantity);
	
protected:
	
private:
	FInventoryItemData ItemData;
	int Quantity = 0;
	
	GENERATED_BODY()
};
