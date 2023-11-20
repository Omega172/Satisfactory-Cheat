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
	 * AnimBlueprintGeneratedClass BPA_OilPump.BPA_OilPump_C
	 * Size -> 0x02E8 (FullSize[0x0F88] - InheritedSize[0x0CA0])
	 */
	class UBPA_OilPump_C : public UFGFAnimInstanceFactory
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0CA0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct UBPA_OilPump_C_FAnimBlueprintGeneratedMutableData   __AnimBlueprintMutables;                                 // 0x0CA8(0x0010) HasGetValueTypeHash
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_PropertyAccess;                   // 0x0CB8(0x0008)
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_Base;                             // 0x0CC0(0x0008)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0CC8(0x0020)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x0CE8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x0D10(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x0D38(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x0D60(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x0D88(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x0DD0(0x0020)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x0DF0(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x0E38(0x0020)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0E58(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x0EA0(0x0020)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x0EC0(0x00C8)

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void AnimNotify_BurnerFlareNotify();
		void AnimNotify_OilpumpEnteredProducingState();
		void AnimNotify_OilpumpLeftProducingState();
		void AnimNotify_OilpumpEnteredOfflineState();
		void AnimNotify_OilpumpLeftOfflineState();
		void ExecuteUbergraph_BPA_OilPump(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
