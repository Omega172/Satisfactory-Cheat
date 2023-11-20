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
	 * BlueprintGeneratedClass BP_FireWorksProjectile_01.BP_FireWorksProjectile_01_C
	 * Size -> 0x0048 (FullSize[0x0668] - InheritedSize[0x0620])
	 */
	class ABP_FireWorksProjectile_01_C : public AFGStickyExplosive
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0620(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                Rocket;                                                  // 0x0628(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URadialForceComponent*                               RadialForce;                                             // 0x0630(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Base;                                                    // 0x0638(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class FString                                              mPhysicalMaterialExplosion;                              // 0x0640(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class UNiagaraSystem*                                      ParticleToPlay;                                          // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class UAkAudioEvent*                                       EventLaunch;                                             // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UAkAudioEvent*                                       EventFireworksExplosion;                                 // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		bool ShouldSave();
		void GatherDependencies(TArray<class UObject*>* out_dependentObjects);
		bool NeedTransform();
		void ReceiveBeginPlay();
		void PlayExplosionEffects();
		void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		void Multicast_PlayExplosionEffects();
		void ExecuteUbergraph_BP_FireWorksProjectile_01(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
