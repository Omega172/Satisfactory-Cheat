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
	 * BlueprintGeneratedClass Attach_PortableMinerDispenser.Attach_PortableMinerDispenser_C
	 * Size -> 0x0020 (FullSize[0x0358] - InheritedSize[0x0338])
	 */
	class AAttach_PortableMinerDispenser_C : public AFGEquipmentAttachment
	{
	public:
		unsigned char                                              UnknownData_4KSE[0x8];                                   // 0x0338(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0340(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USkeletalMeshComponent*                              _1P_PortableMiner;                                       // 0x0348(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0350(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void PlayAttachEffects3P();
		void PlayDetachEffects3P();
		void ExecuteUbergraph_Attach_PortableMinerDispenser(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
