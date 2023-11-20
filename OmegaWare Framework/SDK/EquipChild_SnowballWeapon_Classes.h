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
	 * BlueprintGeneratedClass EquipChild_SnowballWeapon.EquipChild_SnowballWeapon_C
	 * Size -> 0x0018 (FullSize[0x03C8] - InheritedSize[0x03B0])
	 */
	class AEquipChild_SnowballWeapon_C : public AFGWeaponChild
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USkeletalMeshComponent*                              Snowball_Skel;                                           // 0x03B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x03C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void OnEquip(class AFGCharacterPlayer* Character);
		void NotifyReloading(bool hadAmmoLeft);
		void NotifyBeginPrimaryFire();
		void NotifyPrimaryFireExecuted();
		void NotifySetIsLoaded(bool IsLoaded);
		void ExecuteUbergraph_EquipChild_SnowballWeapon(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
