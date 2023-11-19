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
	 * BlueprintGeneratedClass BPCA_HogPlowCharge.BPCA_HogPlowCharge_C
	 * Size -> 0x0018 (FullSize[0x02E8] - InheritedSize[0x02D0])
	 */
	class UBPCA_HogPlowCharge_C : public UFGCreatureActionCharge
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UNiagaraComponent*                                   Charge_Vfx;                                              // 0x02D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class UAkComponent*                                        mPlowChargeSFXLoop;                                      // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash

	public:
		void PlayPlowChargeHitSFX();
		void StopPlowChargeSFX();
		void PlayPlowChargeSFX();
		void DestroyChargeEffect();
		void SpawnChargeEffect();
		void BeginCharge();
		void EndCharge();
		void CleanupAction(bool actionSuccess);
		void ProcessHit(class AFGCharacterBase* hitCharacter, const struct FHitResult& HitResult);
		void ActionTick(float DeltaTime);
		void ExecuteUbergraph_BPCA_HogPlowCharge(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
