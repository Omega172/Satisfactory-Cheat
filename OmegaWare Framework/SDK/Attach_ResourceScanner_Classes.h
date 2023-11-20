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
	 * BlueprintGeneratedClass Attach_ResourceScanner.Attach_ResourceScanner_C
	 * Size -> 0x0020 (FullSize[0x0358] - InheritedSize[0x0338])
	 */
	class AAttach_ResourceScanner_C : public AFGEquipmentAttachment
	{
	public:
		unsigned char                                              UnknownData_IZXF[0x8];                                   // 0x0338(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0340(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USkeletalMeshComponent*                              Buildgun_skl;                                            // 0x0348(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0350(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void PlayUseEffect(const struct FVector& UseLocation);
		void EventBuildgunVisibility();
		void EventScannerIKTimer();
		void ExecuteUbergraph_Attach_ResourceScanner(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
