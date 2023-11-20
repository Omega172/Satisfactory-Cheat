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
	 * BlueprintGeneratedClass BP_ResourceNode.BP_ResourceNode_C
	 * Size -> 0x0018 (FullSize[0x0400] - InheritedSize[0x03E8])
	 */
	class ABP_ResourceNode_C : public AFGResourceNode
	{
	public:
		unsigned char                                              UnknownData_86FP[0x8];                                   // 0x03E8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x03F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void GainedSignificance();
		void LostSignificance();
		void ExecuteUbergraph_BP_ResourceNode(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
