// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBlueprintFunctionLibrary.h"

#include "Components/CapsuleComponent.h"
#include "GameFramework/Character.h"
#include "Kismet/KismetMathLibrary.h"

FVector UMyBlueprintFunctionLibrary::GetDirectionBetweenCharAndPoint(ACharacter* Char, FVector Point) {
	UCapsuleComponent* Capsule = Char->FindComponentByClass<UCapsuleComponent>();
	FVector CapsLocation = Capsule->GetComponentLocation();
	return UKismetMathLibrary::GetDirectionUnitVector(CapsLocation, Point);
}
