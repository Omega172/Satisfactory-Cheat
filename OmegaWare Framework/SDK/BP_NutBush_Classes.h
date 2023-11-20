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
	 * BlueprintGeneratedClass BP_NutBush.BP_NutBush_C
	 * Size -> 0x0008 (FullSize[0x03D8] - InheritedSize[0x03D0])
	 */
	class ABP_NutBush_C : public ABP_Edible_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03D0(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		class UAkAudioEvent* GetDestroyAudioEvent();
		class UParticleSystem* GetDestroyEffect();
		float GetForceThreshold();
		struct FInventoryStack GetActorChainsawReturn();
		class UStaticMeshComponent* GetMeshComponent();
		bool IsChainsawable();
		void ReceiveBeginPlay();
		void UpdateVisiblityState();
		void SetupItem();
		void ExecuteUbergraph_BP_NutBush(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
