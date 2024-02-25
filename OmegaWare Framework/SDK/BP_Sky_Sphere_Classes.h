#pragma once

/**
 * Name: Satisfactory
 * Version: Early_Access_CL#273254
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_Sky_Sphere.BP_Sky_Sphere_C
	 * Size -> 0x0028 (FullSize[0x0EB8] - InheritedSize[0x0E90])
	 */
	class ABP_Sky_Sphere_C : public AFGSkySphere
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0E90(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                CloudMeshLowSpec;                                        // 0x0E98(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            mSkyMaterial;                                            // 0x0EA0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UMaterialInterface*                                  Material;                                                // 0x0EA8(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		double                                                     mLowSpecCloudSizeMultiplier;                             // 0x0EB0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void EnableLowSpecClouds(bool bNewVisibility);
		void SetLightAsDominant(class ADirectionalLight* Light, bool newDominant);
		void NewDominantLight(class ADirectionalLight* oldDominantLight, class ADirectionalLight* NewDominantLight);
		void LEGACYCalculateDominantLight();
		void CalculateDiscBrightness(class ALight* Light, const struct FFBrightnessAdjustment& brightnessAdjustment, double* discBrightness);
		void CalculateBrightness(double* Brightness);
		void LEGACYCalculateLightRotation(const struct FRotator& OriginalRotation, const struct FRotator& RotationAxis, const struct FRuntimeFloatCurve& LightRotationCurve, struct FRotator* NewRotation);
		void UpdateGlobalParameters();
		void LEGACYUpdateCurvesFromTime();
		void LEGACYUpdateLightRotation();
		void UpdateMaterialParameters();
		void UserConstructionScript();
		void weather();
		void ReceiveBeginPlay();
		void OnSwitched(const class FString& updatedCvar);
		void ForceRecapture(const class FString& updatedCvar);
		void ExecuteUbergraph_BP_Sky_Sphere(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
