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
	 * BlueprintGeneratedClass BP_ItemPickup_Spawnable.BP_ItemPickup_Spawnable_C
	 * Size -> 0x0010 (FullSize[0x03B0] - InheritedSize[0x03A0])
	 */
	class ABP_ItemPickup_Spawnable_C : public AFGItemPickup_Spawnable
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAkAudioEvent*                                       mPickupEvent;                                            // 0x03A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void PlayPickupEffect();
		void PlaySpawnEffect();
		void ExecuteUbergraph_BP_ItemPickup_Spawnable(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
