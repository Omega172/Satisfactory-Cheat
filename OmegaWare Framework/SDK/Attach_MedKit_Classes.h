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
	 * BlueprintGeneratedClass Attach_MedKit.Attach_MedKit_C
	 * Size -> 0x0018 (FullSize[0x0350] - InheritedSize[0x0338])
	 */
	class AAttach_MedKit_C : public AFGEquipmentAttachment
	{
	public:
		unsigned char                                              UnknownData_Q3G9[0x8];                                   // 0x0338(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0340(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                SM_Medkit_01;                                            // 0x0348(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void PlayUseEffect(const struct FVector& UseLocation);
		void PlayAttachEffects3P();
		void ExecuteUbergraph_Attach_MedKit(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
