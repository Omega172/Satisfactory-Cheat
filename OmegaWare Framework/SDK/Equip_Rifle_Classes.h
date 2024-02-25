#pragma once

/**
 * Name: Satisfactory
 * Version: Early_Access_CL#273254
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
	 * BlueprintGeneratedClass Equip_Rifle.Equip_Rifle_C
	 * Size -> 0x0021 (FullSize[0x05C1] - InheritedSize[0x05A0])
	 */
	class AEquip_Rifle_C : public ABP_Weapon_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x05A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USkeletalMeshComponent*                              Rifle;                                                   // 0x05A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             Fire;                                                    // 0x05B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       mHasReloadedOnce;                                        // 0x05C0(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash

	public:
		void Play3pReloadEffects();
		void Play1pReloadEffects();
		void Play3pEquipEffects();
		void Play1pEquipEffects();
		void Play3pFireEffects();
		void Play1pFireEffects();
		struct FVector GetWeaponMeshSocketLocation(const class FName& SocketName);
		void SetReloadOnce();
		void OnRep_mHasReloadedOnce();
		void UserConstructionScript();
		void PlayFireEffect(class UFGAmmoType* AmmoTypeObject);
		void WasEquipped();
		void PlayReloadEffects(bool hadAmmoLeft);
		void PostLoadGame(int32_t saveVersion, int32_t GameVersion);
		void ExecuteUbergraph_Equip_Rifle(int32_t EntryPoint);
		void Fire__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
