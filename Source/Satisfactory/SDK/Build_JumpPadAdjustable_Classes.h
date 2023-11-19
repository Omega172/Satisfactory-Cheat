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
	 * BlueprintGeneratedClass Build_JumpPadAdjustable.Build_JumpPadAdjustable_C
	 * Size -> 0x0028 (FullSize[0x0848] - InheritedSize[0x0820])
	 */
	class ABuild_JumpPadAdjustable_C : public AFGBuildableJumppad
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0820(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UFGPowerConnectionComponent*                         FGPowerConnection;                                       // 0x0828(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFGColoredInstanceMeshProxy*                         FGColoredInstanceMeshProxy;                              // 0x0830(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_ProductionIndicatorInstanced_C*                  BP_ProductionIndicatorInstanced;                         // 0x0838(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAkAudioEvent*                                       mAkEvent;                                                // 0x0840(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash

	public:
		void PlayChristmasJingle(int32_t JingleCounter);
		void PlayVFX();
		void PlayLaunchSound(double LaunchSpeed);
		void OnHasPowerChanged(bool newHasPower);
		void OnLaunch(float HighestLaunchSpeed);
		void OnPlayerLaunched(class AFGCharacterPlayer* pPlayer, int32_t NumChainedBounces);
		void ExecuteUbergraph_Build_JumpPadAdjustable(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
