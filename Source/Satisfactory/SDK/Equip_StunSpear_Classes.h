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
	 * BlueprintGeneratedClass Equip_StunSpear.Equip_StunSpear_C
	 * Size -> 0x0058 (FullSize[0x0518] - InheritedSize[0x04C0])
	 */
	class AEquip_StunSpear_C : public AFGEquipmentStunSpear
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USkeletalMeshComponent*                              StunSpear_skl;                                           // 0x04C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     HitSparkLocation;                                        // 0x04D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            StunSpearTrail_01;                                       // 0x04D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		int32_t                                                    mRandomAttackAnim;                                       // 0x04E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    mRandomEquipAnim;                                        // 0x04E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAkAudioEvent*                                       SwingAudio;                                              // 0x04E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UAkAudioEvent*                                       UnequipAudio;                                            // 0x04F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UAkAudioEvent*                                       EquipAudio1;                                             // 0x04F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UAkAudioEvent*                                       EquipAudio2;                                             // 0x0500(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UAkAudioEvent*                                       EquipAudio3;                                             // 0x0508(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UAkAudioEvent*                                       EquipAudioStinger;                                       // 0x0510(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void PlayStingerAnim(class USkeletalMeshComponent* PlayerMesh, class AFGCharacterPlayer* Character);
		void PlayEquipAnim(class USkeletalMeshComponent* PlayerMesh, class AFGCharacterPlayer* Character, ECameraMode CameraMode);
		void PlayUneqipAnim(class USkeletalMeshComponent* PlayerMesh);
		void WasUnEquipped();
		void WasEquipped();
		void PlaySwingAnimation(class USkeletalMeshComponent* PlayerMesh, bool PlaySecondSwing, ECameraMode CameraMode, class AFGCharacterPlayer* Character);
		void PlayHitEffects(TArray<struct FHitResult> hitResults);
		void PlayStunEffects(bool secondSwing);
		void ExecuteUbergraph_Equip_StunSpear(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
