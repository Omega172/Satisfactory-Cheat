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
	 * BlueprintGeneratedClass BP_SpitterSnipeShotProjectile.BP_SpitterSnipeShotProjectile_C
	 * Size -> 0x0028 (FullSize[0x0600] - InheritedSize[0x05D8])
	 */
	class ABP_SpitterSnipeShotProjectile_C : public AFGProjectile
	{
	public:
		unsigned char                                              UnknownData_PXSG[0x8];                                   // 0x05D8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x05E0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UNiagaraComponent*                                   NS_Spitter_SnipeShot_01;                                 // 0x05E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Sphere;                                                  // 0x05F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAkComponent*                                        mProjectileSFXLoop;                                      // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash

	public:
		void PlaySFXImpact();
		void StopSFXLoop();
		void PlaySFXLoop();
		void ReceiveBeginPlay();
		void PlayExplosionEffects();
		void ExecuteUbergraph_BP_SpitterSnipeShotProjectile(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
