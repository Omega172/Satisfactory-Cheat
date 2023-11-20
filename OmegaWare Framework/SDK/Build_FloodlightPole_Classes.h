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
	 * BlueprintGeneratedClass Build_FloodlightPole.Build_FloodlightPole_C
	 * Size -> 0x0028 (FullSize[0x0658] - InheritedSize[0x0630])
	 */
	class ABuild_FloodlightPole_C : public AFGBuildableFloodlight
	{
	public:
		class UFGClearanceComponent*                               FGClearance;                                             // 0x0630(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFGColoredInstanceMeshProxy*                         LightFixture;                                            // 0x0638(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFGFactoryLegsComponent*                             FGFactoryLegs;                                           // 0x0640(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFGPowerConnectionComponent*                         PowerConnection;                                         // 0x0648(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFGColoredInstanceMeshProxy*                         FGColoredInstanceMeshProxy;                              // 0x0650(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash

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
