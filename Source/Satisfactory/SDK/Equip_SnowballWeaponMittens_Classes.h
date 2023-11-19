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
	 * BlueprintGeneratedClass Equip_SnowballWeaponMittens.Equip_SnowballWeaponMittens_C
	 * Size -> 0x0010 (FullSize[0x05E8] - InheritedSize[0x05D8])
	 */
	class AEquip_SnowballWeaponMittens_C : public ABP_ChargedWeapon_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x05D8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USkeletalMeshComponent*                              Snowball_Skl_01;                                         // 0x05E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void PlayReloadEffects(bool hadAmmoLeft);
		void OnSecondaryFirePressed();
		void PlayFireReleasedEffects();
		void PlayFireEffect(class UFGAmmoType* AmmoTypeObject);
		void WasUnEquipped();
		void WasEquipped();
		void OnPrimaryFireEnded();
		void Multicast_ThrowRelease(double ChargePercent);
		void ExecuteUbergraph_Equip_SnowballWeaponMittens(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
