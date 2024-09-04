#include "ImageResult.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "Factories/MaterialInstanceConstantFactoryNew.h"
#include "kAIrosEditor/Public/Utils.h"
#include "Materials/MaterialInstanceConstant.h"
#include "UObject/SavePackage.h"

/**
 * Create a material with the result obtained, save and show it
 */
void AImageResult::BeginPlay()
{
	Super::BeginPlay();
}

void AImageResult::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AImageResult::Setup(const FString& ImagePath, const FString& NewTexturePath , const FString& NewMaterialPath, const FString& Filename)
{
	if(ImagePath == TEXT(""))
	{
		return;
	}
	
	const FString TextureFilename = FString::Printf(TEXT("T_%s"),*Filename);
	const FString MaterialFilename = FString::Printf(TEXT("MI_%s"),*Filename);
	
	UUtils::ImportTextureHelper(FPaths::ConvertRelativePathToFull(ImagePath), NewTexturePath,TextureFilename);

	const FString ObjectPath = NewTexturePath + TEXT("/") + TextureFilename + TEXT(".") + FPaths::GetBaseFilename(TextureFilename);
	UTexture2D* MaterialTexture = Cast<UTexture2D>(StaticLoadObject(UTexture2D::StaticClass(),nullptr,*ObjectPath));

	PlaceImageInViewport(MaterialTexture, NewMaterialPath, MaterialFilename);
}

void  AImageResult::PlaceImageInViewport(UTexture2D* Texture,const FString& NewMaterialPath, const FString& Filename)
{
	if (!Texture)
	{
		return;
	}

	UStaticMeshComponent* MeshComponent = Cast<UStaticMeshComponent>( GetComponentByClass(UStaticMeshComponent::StaticClass()));
	MeshComponent->SetMaterial(0, CreateMaterialInstance(Texture, NewMaterialPath, Filename));
	
	SetFolderPath(TEXT("/kAIrosImg"));
}

UMaterialInstanceConstant*  AImageResult::CreateMaterialInstance(UTexture2D* Texture, const FString& NewMaterialPath, const FString& MaterialInstanceName) const
{
	if(!BaseMaterial)
	{
		UE_LOG(LogTemp, Display, TEXT("Base material not found"));
	} 
	const FString PackageName = NewMaterialPath + TEXT("/") + MaterialInstanceName;
	UPackage* Package = CreatePackage(*PackageName);

	UMaterialInstanceConstantFactoryNew* Factory = NewObject<UMaterialInstanceConstantFactoryNew>();
	Factory->InitialParent = Cast<UMaterial>(BaseMaterial);

	UMaterialInstanceConstant* MaterialInstanceConstant = Cast<UMaterialInstanceConstant>(Factory->FactoryCreateNew(UMaterialInstanceConstant::StaticClass(), Package, *MaterialInstanceName, RF_Standalone | RF_Public, nullptr, GWarn));
	
	if (Package->IsFullyLoaded() && MaterialInstanceConstant && Texture)
	{
		MaterialInstanceConstant->SetTextureParameterValueEditorOnly(FMaterialParameterInfo("TextureParam"), Texture);
		FAssetRegistryModule::AssetCreated(MaterialInstanceConstant);
		Package->SetDirtyFlag(true);

		FSavePackageArgs SaveArgs;
		SaveArgs.TopLevelFlags = RF_Standalone;
		SaveArgs.SaveFlags = SAVE_NoError;
		
		const FString PackageFilename = FPackageName::LongPackageNameToFilename(PackageName, FPackageName::GetAssetPackageExtension());

		if(!UPackage::SavePackage(Package, nullptr,  *PackageFilename, SaveArgs))
		{
			UE_LOG(LogTemp, Display, TEXT("Failed to save package %s "), *PackageName);
		}
	}else
	{
		UE_LOG(LogTemp, Display, TEXT("Failed to create material instance"));
	}
	return MaterialInstanceConstant;
}


