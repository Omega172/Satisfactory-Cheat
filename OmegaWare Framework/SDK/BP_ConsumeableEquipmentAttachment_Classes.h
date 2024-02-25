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
	 * BlueprintGeneratedClass BP_ConsumeableEquipmentAttachment.BP_ConsumeableEquipmentAttachment_C
	 * Size -> 0x0018 (FullSize[0x0350] - InheritedSize[0x0338])
	 */
	class ABP_ConsumeableEquipmentAttachment_C : public AFGEquipmentAttachment
	{
	public:
		unsigned char                                              UnknownData_YVYM[0x8];                                   // 0x0338(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0340(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x0348(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void GetHandsItem(class UClass** Item);
		void ReceiveTick(float DeltaSeconds);
		void PlayUseEffect(const struct FVector& UseLocation);
		void OnAttach();
		void ExecuteUbergraph_BP_ConsumeableEquipmentAttachment(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
