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
	 * BlueprintGeneratedClass Attach_HoverPack.Attach_HoverPack_C
	 * Size -> 0x0048 (FullSize[0x03A8] - InheritedSize[0x0360])
	 */
	class AAttach_HoverPack_C : public AFGHoverPackAttachment
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0360(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USkeletalMeshComponent*                              sk_Hoverpack;                                            // 0x0368(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        m_HoverPackActiveTimer;                                  // 0x0370(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UAkComponent*                                        m_HoverPackActiveSFX;                                    // 0x0378(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		double                                                     mCurrentPlayerVelocity;                                  // 0x0380(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAkComponent*                                        m_SlowFallingSFX;                                        // 0x0388(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		EHoverPackMode                                             m_PreviousHoverMode;                                     // 0x0390(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Z7CC[0x7];                                   // 0x0391(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            mHoverVFX_01;                                            // 0x0398(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            mHoverVFX_02;                                            // 0x03A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash

	public:
		void RemoveHoverPackVFX();
		void SpawnHoverPackVFX();
		void AnimationHoverDeActive();
		void AnimationHoverActive();
		void PlayHoverSound();
		void StopEngineSound();
		void PlayFallingSound();
		void StopSlowFallingSound();
		void PlaySlowFallingSound();
		void UpdateHover();
		void UpdatePlayerSpeedRTPC();
		void OnAttach();
		void OnDetach();
		void OnConnectionStatusUpdated(bool HasConnection);
		void OnHoverModeChanged(EHoverPackMode NewMode);
		void HoverPackSFXInactive();
		void HoverPackSFXHover();
		void HoverPackSFXSlowFalling();
		void HoverPackSFXRailSurfing();
		void ExecuteUbergraph_Attach_HoverPack(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
