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
	 * BlueprintGeneratedClass BP_SpitterBombShotProjectile.BP_SpitterBombShotProjectile_C
	 * Size -> 0x0018 (FullSize[0x05F0] - InheritedSize[0x05D8])
	 */
	class ABP_SpitterBombShotProjectile_C : public AFGProjectile
	{
	public:
		unsigned char                                              UnknownData_YKJE[0x8];                                   // 0x05D8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x05E0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UNiagaraComponent*                                   NS_Spitter_BombShot_Projectile_01;                       // 0x05E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveBeginPlay();
		void PlayExplosionEffects();
		void ExecuteUbergraph_BP_SpitterBombShotProjectile(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
