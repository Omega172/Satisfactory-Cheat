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
	 * BlueprintGeneratedClass BP_SpitterSingleProjectile.BP_SpitterSingleProjectile_C
	 * Size -> 0x0020 (FullSize[0x05F8] - InheritedSize[0x05D8])
	 */
	class ABP_SpitterSingleProjectile_C : public AFGProjectile
	{
	public:
		unsigned char                                              UnknownData_QPCW[0x8];                                   // 0x05D8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x05E0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UNiagaraComponent*                                   NS_Spitter_SingleShot_01;                                // 0x05E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Sphere;                                                  // 0x05F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void PlayExplosionEffects();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_SpitterSingleProjectile(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
