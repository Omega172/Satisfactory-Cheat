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
	 * AnimBlueprintGeneratedClass BPA_Blender.BPA_Blender_C
	 * Size -> 0x0990 (FullSize[0x1630] - InheritedSize[0x0CA0])
	 */
	class UBPA_Blender_C : public UFGFAnimInstanceFactory
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0CA0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct UBPA_Blender_C_FAnimBlueprintGeneratedMutableData   __AnimBlueprintMutables;                                 // 0x0CA8(0x0024) HasGetValueTypeHash
		unsigned char                                              UnknownData_FRHY[0x4];                                   // 0x0CCC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_PropertyAccess;                   // 0x0CD0(0x0008)
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_Base;                             // 0x0CD8(0x0008)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0CE0(0x0020)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x0D00(0x0028)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator;                         // 0x0D28(0x0040)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x0D68(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x0DB0(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_7;                          // 0x0DD8(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_9;                             // 0x0E20(0x0020)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0x0E40(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_8;                             // 0x0E88(0x0020)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_5;                            // 0x0EA8(0x00C8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_7;                             // 0x0F70(0x0020)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x0F90(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_6;                             // 0x0FD8(0x0020)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_4;                            // 0x0FF8(0x00C8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x10C0(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0x1108(0x0020)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_3;                            // 0x1128(0x00C8)
		struct FAnimNode_BlendListByInt                            AnimGraphNode_BlendListByInt;                            // 0x11F0(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x1238(0x0020)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x1258(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x12A0(0x0020)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_2;                            // 0x12C0(0x00C8)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x1388(0x00E0)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x1468(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x1490(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x14D8(0x0020)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x14F8(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x1540(0x0020)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x1560(0x00C8)
		bool                                                       mProducingSolids;                                        // 0x1628(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KKLW[0x3];                                   // 0x1629(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    mRandomAnim;                                             // 0x162C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void AnimNotify_RandomAnimNotify();
		void ExecuteUbergraph_BPA_Blender(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
