﻿#pragma once

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
	 * BlueprintGeneratedClass BP_Rebar_Aluminum.BP_Rebar_Aluminum_C
	 * Size -> 0x0048 (FullSize[0x0620] - InheritedSize[0x05D8])
	 */
	class ABP_Rebar_Aluminum_C : public AFGProjectile
	{
	public:
		unsigned char                                              UnknownData_ZXJ6[0x8];                                   // 0x05D8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x05E0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UParticleSystemComponent*                            Sparks_01;                                               // 0x05E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Rebar;                                                   // 0x05F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		double                                                     mGravityScale;                                           // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mGravityDelay;                                           // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             mTargetRelativeTranslation;                              // 0x0608(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveBeginPlay();
		void PlayAttachEffect();
		void ReceiveTick(float DeltaSeconds);
		void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		void ShotPlayer(class AFGCharacterPlayer* Player, const struct FVector& HitNormal);
		void ExecuteUbergraph_BP_Rebar_Aluminum(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
