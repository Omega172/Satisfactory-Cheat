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
	 * BlueprintGeneratedClass Build_FloodlightWall.Build_FloodlightWall_C
	 * Size -> 0x0018 (FullSize[0x0648] - InheritedSize[0x0630])
	 */
	class ABuild_FloodlightWall_C : public AFGBuildableFloodlight
	{
	public:
		class UFGColoredInstanceMeshProxy*                         LightFixture;                                            // 0x0630(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFGPowerConnectionComponent*                         PowerConnection;                                         // 0x0638(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFGColoredInstanceMeshProxy*                         pole;                                                    // 0x0640(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		bool DoesNeedCustomTransform();
		struct FTransform GetCustomTransform();
		struct FLinearColor GetLightColor();
		float GetLightIntensity();
		class UMaterialInterface* GetLightMaterialFunction();
		struct FPoolLightSettings GetLightSettings();
		struct FLinearColor GetMeshColor();
		struct FPoolMeshSettings GetMeshSettings();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
