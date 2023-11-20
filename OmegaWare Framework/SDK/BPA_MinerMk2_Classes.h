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
	 * AnimBlueprintGeneratedClass BPA_MinerMk2.BPA_MinerMk2_C
	 * Size -> 0x0690 (FullSize[0x1330] - InheritedSize[0x0CA0])
	 */
	class UBPA_MinerMk2_C : public UFGFAnimInstanceFactory
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0CA0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct UBPA_MinerMk2_C_FAnimBlueprintGeneratedMutableData  __AnimBlueprintMutables;                                 // 0x0CA8(0x0014) HasGetValueTypeHash
		unsigned char                                              UnknownData_PDW3[0x4];                                   // 0x0CBC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_PropertyAccess;                   // 0x0CC0(0x0008)
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_Base;                             // 0x0CC8(0x0008)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0CD0(0x0020)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x0CF0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x0D18(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x0D40(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x0D68(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x0D90(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_7;                             // 0x0DD8(0x0020)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x0DF8(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_6;                             // 0x0E40(0x0020)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x0E60(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0x0EA8(0x0020)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x0EC8(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x0F10(0x0020)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_2;                       // 0x0F30(0x0040)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x0F70(0x0020)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_2;                            // 0x0F90(0x00C8)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x1058(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x1080(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x10A8(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x10F0(0x0020)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator;                         // 0x1110(0x0040)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x1150(0x0020)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x1170(0x00C8)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x1238(0x00E0)
		struct FTimerHandle                                        mTimer;                                                  // 0x1318(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       mReadyForReload;                                         // 0x1320(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_C9J9[0x7];                                   // 0x1321(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     mReloadTimer;                                            // 0x1328(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void SetupReloadTimer();
		void ReloadTimer();
		void AnimNotify_MinerEnteredReloadState();
		void AnimNotify_StartDrillVFX();
		void BlueprintInitializeAnimation();
		void AnimNotify_OnResumeProducing();
		void AnimNotify_OnStopProducing();
		void AnimNotify_StartEngineLoop();
		void ExecuteUbergraph_BPA_MinerMk2(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
