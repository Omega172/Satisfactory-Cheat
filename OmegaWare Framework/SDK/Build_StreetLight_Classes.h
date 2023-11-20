#pragma once

/**
 * Name: Satisfactory
 * Version: Early_Access_CL#264901
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
	 * BlueprintGeneratedClass Build_StreetLight.Build_StreetLight_C
	 * Size -> 0x0098 (FullSize[0x06B8] - InheritedSize[0x0620])
	 */
	class ABuild_StreetLight_C : public AFGBuildableLightSource
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0620(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UFGColoredInstanceMeshProxy*                         MainMeshProxy;                                           // 0x0628(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFGClearanceComponent*                               FGClearance;                                             // 0x0630(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFGPowerConnectionComponent*                         FGPowerConnection;                                       // 0x0638(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FFactoryCustomizationData                           newCustomizationData;                                    // 0x0640(0x0078) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		struct FLinearColor GetMeshColor();
		struct FPoolMeshSettings GetMeshSettings();
		bool DoesNeedCustomTransform();
		struct FTransform GetCustomTransform();
		struct FPoolLightSettings GetLightSettings();
		struct FLinearColor GetLightColor();
		float GetLightIntensity();
		class UMaterialInterface* GetLightMaterialFunction();
		void GetBuildEffectTemplate();
		void OnUpdateMeshInfo(bool IsEnabled);
		void ExecuteUbergraph_Build_StreetLight(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
