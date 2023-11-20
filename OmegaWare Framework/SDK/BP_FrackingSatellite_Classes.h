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
	 * BlueprintGeneratedClass BP_FrackingSatellite.BP_FrackingSatellite_C
	 * Size -> 0x0080 (FullSize[0x0480] - InheritedSize[0x0400])
	 */
	class ABP_FrackingSatellite_C : public AFGResourceNodeFrackingSatellite
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0400(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0408(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                mStaticMeshComponent;                                    // 0x0410(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class UNiagaraComponent*                                   mIdleEffect;                                             // 0x0418(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		TMap<class FString, class FString>                         mResourceNameConverter;                                  // 0x0420(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		double                                                     mRandomDelay;                                            // 0x0470(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAkComponent*                                        m_SFX_Nodes;                                             // 0x0478(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash

	public:
		void KillSFX();
		void SpawnSFX();
		void SwitchOnResource();
		void RandomStartOfVFX();
		void RandomStartOfSFX();
		void SpawnFirstUseSFX();
		void SpawnFirstUseFX();
		void KillVFX();
		void SpawnVFX();
		void EffectsOccupiedState();
		void ResetOccupiedEffects();
		void UpdateAudioState(EFrackingSatelliteState State, bool isFirstTimeActivated);
		void UpdateVisualState(EFrackingSatelliteState State, bool isFirstTimeActivated);
		void GainedSignificance();
		void LostSignificance();
		void OnIsOccupiedChanged(bool newIsOccupied);
		void OnStateChanged(EFrackingSatelliteState State, bool isFirstTimeActivated);
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_FrackingSatellite(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
