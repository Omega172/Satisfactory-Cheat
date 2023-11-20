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
	 * BlueprintGeneratedClass Equip_RebarGun_Projectile.Equip_RebarGun_Projectile_C
	 * Size -> 0x003C (FullSize[0x05DC] - InheritedSize[0x05A0])
	 */
	class AEquip_RebarGun_Projectile_C : public ABP_Weapon_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x05A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USkeletalMeshComponent*                              RebarGun_skl;                                            // 0x05A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       mMuteDryFire;                                            // 0x05B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_F234[0x3];                                   // 0x05B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    mRandomReloadAnim;                                       // 0x05B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    mRandomStingerAnim;                                      // 0x05B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_TFYC[0x4];                                   // 0x05BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkComponent*                                        mRebarGunStinger;                                        // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		int32_t                                                    mRebarGunStingerID;                                      // 0x05C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9FDL[0x4];                                   // 0x05CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkComponent*                                        mRebarGunEquip;                                          // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		int32_t                                                    mRebarGunEquipID;                                        // 0x05D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Play3pEquipEffects();
		void Play1pEquipEffects();
		void PlayGlobalEquipEffects();
		void Play3pReloadEffects(bool HasAmmoLeft);
		void Play1pReloadEffects(bool HasAmmoLeft);
		void PlayGlobalReloadEffects(bool HasAmmoLeft);
		void Play3pFireEffects();
		void Play1pFireEffects();
		void PlayGlobalFireEffects();
		void PlayGlobalUnequipEffects();
		void PlayGlobalFailedToFireEffects();
		void StopEquipSFX();
		void UserConstructionScript();
		void WasEquipped();
		void WasUnEquipped();
		void PlayFailedToFireEffects();
		void PlayReloadEffects(bool hadAmmoLeft);
		void PlayFireEffect(class UFGAmmoType* AmmoTypeObject);
		void ExecuteUbergraph_Equip_RebarGun_Projectile(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
