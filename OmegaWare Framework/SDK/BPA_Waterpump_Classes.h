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
	 * AnimBlueprintGeneratedClass BPA_Waterpump.BPA_Waterpump_C
	 * Size -> 0x0308 (FullSize[0x0FA8] - InheritedSize[0x0CA0])
	 */
	class UBPA_Waterpump_C : public UFGFAnimInstanceFactory
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0CA0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct UBPA_Waterpump_C_FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                                 // 0x0CA8(0x0014) HasGetValueTypeHash
		unsigned char                                              UnknownData_R5JR[0x4];                                   // 0x0CBC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_PropertyAccess;                   // 0x0CC0(0x0008)
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_Base;                             // 0x0CC8(0x0008)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0CD0(0x0020)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x0CF0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x0D18(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x0D40(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x0D88(0x0048)
		struct FAnimNode_BlendListByInt                            AnimGraphNode_BlendListByInt;                            // 0x0DD0(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0E18(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x0E60(0x0020)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator;                         // 0x0E80(0x0040)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x0EC0(0x0020)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x0EE0(0x00C8)

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void AnimNotify_StopWaterPumpAnim();
		void ExecuteUbergraph_BPA_Waterpump(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
