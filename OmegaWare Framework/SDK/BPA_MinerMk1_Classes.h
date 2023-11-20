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
	 * AnimBlueprintGeneratedClass BPA_MinerMk1.BPA_MinerMk1_C
	 * Size -> 0x063B (FullSize[0x12DB] - InheritedSize[0x0CA0])
	 */
	class UBPA_MinerMk1_C : public UFGFAnimInstanceFactory
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0CA0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct UBPA_MinerMk1_C_FAnimBlueprintGeneratedMutableData  __AnimBlueprintMutables;                                 // 0x0CA8(0x0010) HasGetValueTypeHash
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_PropertyAccess;                   // 0x0CB8(0x0008)
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_Base;                             // 0x0CC0(0x0008)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0CC8(0x0020)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x0CE8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x0D10(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x0D38(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x0D60(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x0D88(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_6;                             // 0x0DD0(0x0020)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x0DF0(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0x0E38(0x0020)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x0E58(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x0EA0(0x0020)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_2;                       // 0x0EC0(0x0040)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x0F00(0x0020)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_2;                            // 0x0F20(0x00C8)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x0FE8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x1010(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x1038(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x1080(0x0020)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator;                         // 0x10A0(0x0040)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x10E0(0x0020)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x1100(0x00C8)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x11C8(0x00E0)
		struct FTimerHandle                                        mTimer;                                                  // 0x12A8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       mReadyForReload;                                         // 0x12B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZO20[0x7];                                   // 0x12B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     mReloadTimer;                                            // 0x12B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            mDrillingVfx_01;                                         // 0x12C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            mVentVfx_01;                                             // 0x12C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            mVentVfx_02;                                             // 0x12D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		bool                                                       mAG_StartupToStartupOfflineTransition;                   // 0x12D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mAG_ProducingToSuspendedTransition;                      // 0x12D9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mAG_ToProducingTransition;                               // 0x12DA(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void SetupReloadTimer();
		void ReloadTimer();
		void AnimNotify_MinerEnteredReloadState();
		void BlueprintInitializeAnimation();
		void AnimNotify_OnResumeProducing();
		void AnimNotify_OnStopProducing();
		void AnimNotify_StartEngineLoop();
		void AnimNotify_StartDrillVFX();
		void AnimNotify_AnimStop();
		void ExecuteUbergraph_BPA_MinerMk1(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
