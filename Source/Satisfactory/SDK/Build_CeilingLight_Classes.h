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
	 * BlueprintGeneratedClass Build_CeilingLight.Build_CeilingLight_C
	 * Size -> 0x0020 (FullSize[0x0640] - InheritedSize[0x0620])
	 */
	class ABuild_CeilingLight_C : public AFGBuildableLightSource
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0620(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UFGColoredInstanceMeshProxy*                         Fixture;                                                 // 0x0628(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFGClearanceComponent*                               FGClearance;                                             // 0x0630(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFGPowerConnectionComponent*                         PowerConnection;                                         // 0x0638(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		bool DoesNeedCustomTransform();
		struct FTransform GetCustomTransform();
		struct FLinearColor GetMeshColor();
		struct FPoolMeshSettings GetMeshSettings();
		struct FPoolLightSettings GetLightSettings();
		struct FLinearColor GetLightColor();
		float GetLightIntensity();
		class UMaterialInterface* GetLightMaterialFunction();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_Build_CeilingLight(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
