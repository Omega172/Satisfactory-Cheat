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
	 * BlueprintGeneratedClass BPCA_HogDefaultCharge.BPCA_HogDefaultCharge_C
	 * Size -> 0x0010 (FullSize[0x02E0] - InheritedSize[0x02D0])
	 */
	class UBPCA_HogDefaultCharge_C : public UFGCreatureActionCharge
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UParticleSystemComponent*                            ChargeVfx;                                               // 0x02D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash

	public:
		void PlayChargeHitSFX();
		void StopChargeSFX();
		void PlayChargeSFX();
		void DestroyChargeEffect();
		void SpawnChargeEffect();
		void CleanupAction(bool actionSuccess);
		void EndCharge();
		void ProcessHit(class AFGCharacterBase* hitCharacter, const struct FHitResult& HitResult);
		void BeginCharge();
		void ActionTick(float DeltaTime);
		void ExecuteUbergraph_BPCA_HogDefaultCharge(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
