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
	 * BlueprintGeneratedClass Desc_CartridgePlasma.Desc_CartridgePlasma_C
	 * Size -> 0x0010 (FullSize[0x0410] - InheritedSize[0x0400])
	 */
	class UDesc_CartridgePlasma_C : public UFGAmmoTypeLaser
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0400(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UNiagaraComponent*                                   mWeaponEffect;                                           // 0x0408(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash

	public:
		void UpdateBeamEndPoint();
		void StopWeaponEffect();
		void StartWeaponEffect();
		void OnBeginFire();
		void OnEndFire();
		void AmmoTick(float DeltaSeconds);
		void ExecuteUbergraph_Desc_CartridgePlasma(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
