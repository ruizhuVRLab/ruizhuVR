// Fill out your copyright notice in the Description page of Project Settings.

#include "ruizhuVR.h"
#include "MyFirstCppActor.h"


// Sets default values
AMyFirstCppActor::AMyFirstCppActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyFirstCppActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyFirstCppActor::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

