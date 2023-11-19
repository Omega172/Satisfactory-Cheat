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
	 * BlueprintGeneratedClass Equip_Machinegun.Equip_Machinegun_C
	 * Size -> 0x0038 (FullSize[0x05D8] - InheritedSize[0x05A0])
	 */
	class AEquip_Machinegun_C : public ABP_Weapon_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x05A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                Machinegun_hands;                                        // 0x05A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    mAmmo;                                                   // 0x05B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Machinegun;                                              // 0x05B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             Fire;                                                    // 0x05C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		double                                                     mLockAngle;                                              // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void PlayReloadEffects(bool hadAmmoLeft);
		void ReceiveTick(float DeltaSeconds);
		void SwitchHUD(bool ShowHUD);
		void WasUnEquipped();
		void WasEquipped();
		void PlayFireEffect(class UFGAmmoType* AmmoTypeObject);
		void ExecuteUbergraph_Equip_Machinegun(int32_t EntryPoint);
		void Fire__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
