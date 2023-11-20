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
	 * AnimBlueprintGeneratedClass BPA_AssemblerMk1.BPA_AssemblerMk1_C
	 * Size -> 0x0170 (FullSize[0x0E10] - InheritedSize[0x0CA0])
	 */
	class UBPA_AssemblerMk1_C : public UFGFAnimInstanceFactory
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0CA0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct UBPA_AssemblerMk1_C_FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                                 // 0x0CA8(0x0008) HasGetValueTypeHash
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_PropertyAccess;                   // 0x0CB0(0x0008)
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_Base;                             // 0x0CB8(0x0008)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0CC0(0x0020)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0CE0(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x0D28(0x0020)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x0D48(0x00C8)

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void ExecuteUbergraph_BPA_AssemblerMk1(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
