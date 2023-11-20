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
	 * BlueprintGeneratedClass Build_PowerTower.Build_PowerTower_C
	 * Size -> 0x0020 (FullSize[0x0630] - InheritedSize[0x0610])
	 */
	class ABuild_PowerTower_C : public AFGBuildablePowerPole
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0610(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UFGPowerConnectionComponent*                         PowerTowerConnection;                                    // 0x0618(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFGClearanceComponent*                               FGClearance;                                             // 0x0620(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFGPowerConnectionComponent*                         PowerConnection;                                         // 0x0628(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void OnHasPowerChanged_2(bool newHasPower);
		void PlayConstructSound();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_Build_PowerTower(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
