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
	 * BlueprintGeneratedClass Desc_CartridgeChaos.Desc_CartridgeChaos_C
	 * Size -> 0x0028 (FullSize[0x0418] - InheritedSize[0x03F0])
	 */
	class UDesc_CartridgeChaos_C : public UFGAmmoTypeInstantHit
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FVector                                             Location;                                                // 0x03F8(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     Trail_Velocity;                                          // 0x0410(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void FireAmmunition();
		void ProcessHit(const struct FHitResult& HitResult);
		void PlayEffects(const struct FHitResult& HitResult);
		void ExecuteUbergraph_Desc_CartridgeChaos(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
