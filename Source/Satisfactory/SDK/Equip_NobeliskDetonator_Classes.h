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
	 * BlueprintGeneratedClass Equip_NobeliskDetonator.Equip_NobeliskDetonator_C
	 * Size -> 0x0018 (FullSize[0x05F0] - InheritedSize[0x05D8])
	 */
	class AEquip_NobeliskDetonator_C : public ABP_ChargedWeapon_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x05D8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USkeletalMeshComponent*                              NobeliskDetonator_Skl_01;                                // 0x05E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidget_AmmoRadialSelector_C*                        WidgetAmmoRadialMenu;                                    // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash

	public:
		void Play3pEquipEffects();
		void Play1pEquipEffects();
		void PlayGlobalEquipEffects();
		void Play3pReloadEffects();
		void Play1pReloadEffects();
		void PlayGlobalReloadEffects();
		void Play3pSecondaryFirePressedEffects();
		void Play1pSecondaryFirePressedEffects();
		void PlayGlobalSecondaryFirePressedEffects();
		void Play3pPrimaryFireEndedEffects();
		void Play1pPrimaryFireEndedEffects();
		void PlayGlobalPrimaryFireEndedEffects();
		void Play3pPrimaryFireStartedEffects();
		void Play1pPrimaryFireStartedEffects();
		void PlayGlobalPrimaryFireStartedEffects();
		void PlayReloadEffects(bool hadAmmoLeft);
		void WasEquipped();
		void OnSecondaryFirePressed();
		void OnPrimaryFireEnded();
		void OnPrimaryFireStarted();
		void ExecuteUbergraph_Equip_NobeliskDetonator(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
