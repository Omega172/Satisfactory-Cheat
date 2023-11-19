﻿#pragma once

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
	 * BlueprintGeneratedClass Attach_Machinegun.Attach_Machinegun_C
	 * Size -> 0x0018 (FullSize[0x0358] - InheritedSize[0x0340])
	 */
	class AAttach_Machinegun_C : public AFGWeaponAttachment
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0340(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USkeletalMeshComponent*                              Machinegun;                                              // 0x0348(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0350(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void PlayFireEffect(class UFGAmmoType* ammoType);
		void ClientPlayReloadEffect();
		void ExecuteUbergraph_Attach_Machinegun(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
