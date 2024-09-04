﻿#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ImageResult.generated.h"

class UMaterialInstanceConstant;

UCLASS()
class KAIROSEDITOR_API AImageResult : public AActor
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditDefaultsOnly,Category = "Setup")
	UMaterial* BaseMaterial;
	
protected:
	virtual void BeginPlay() override;

public:
	AImageResult() = default;
	virtual void Tick(float DeltaTime) override;
	
	void Setup(const FString& ImagePath, const FString& NewTexturePath , const FString& NewMaterialPath, const FString& Filename);
	void PlaceImageInViewport(UTexture2D* Texture, const FString& NewMaterialPath, const FString& Filename);
	UMaterialInstanceConstant* CreateMaterialInstance(UTexture2D* Texture, const FString& NewMaterialPath, const FString& MaterialInstanceName) const;
};