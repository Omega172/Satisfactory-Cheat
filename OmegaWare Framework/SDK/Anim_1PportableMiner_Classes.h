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
	 * AnimBlueprintGeneratedClass Anim_1PportableMiner.Anim_1PportableMiner_C
	 * Size -> 0x05A9 (FullSize[0x08F1] - InheritedSize[0x0348])
	 */
	class UAnim_1PportableMiner_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_OB2Y[0x8];                                   // 0x0348(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0350(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_PropertyAccess;                   // 0x0358(0x0008)
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_Base;                             // 0x0360(0x0008)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0368(0x0020)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_9;                        // 0x0388(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_8;                        // 0x03B0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7;                        // 0x03D8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x0400(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x0428(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x0450(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x0478(0x0028)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_2;                       // 0x04A0(0x0040)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_6;                             // 0x04E0(0x0020)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x0500(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0x0548(0x0020)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x0568(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x0590(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x05B8(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x0600(0x0020)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0620(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x0668(0x0020)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_2;                            // 0x0688(0x00C8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x0750(0x0020)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator;                         // 0x0770(0x0040)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x07B0(0x0020)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x07D0(0x00C8)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x0898(0x0048)
		double                                                     mSpeed;                                                  // 0x08E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mSpeedZ;                                                 // 0x08E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EMovementMode                                              mMovementMode;                                           // 0x08F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1PportableMiner_AnimGraphNode_TransitionResult_1009A665402C5052A95F3981BFF70542();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1PportableMiner_AnimGraphNode_TransitionResult_784E3D5E4E2850538D163BA309393C4F();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1PportableMiner_AnimGraphNode_TransitionResult_18B9D1964A9FB7AF5749B89C511DA245();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1PportableMiner_AnimGraphNode_TransitionResult_88075AD545F4ED1673A522BFA69A3FCF();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1PportableMiner_AnimGraphNode_TransitionResult_FEB68251477AF8323B3C37B67C6B8035();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1PportableMiner_AnimGraphNode_TransitionResult_DE80A22C462AAD6D4AF0FAA2C35116D6();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1PportableMiner_AnimGraphNode_TransitionResult_2D899F194CC5AB60994BBBB3656A69C1();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1PportableMiner_AnimGraphNode_TransitionResult_9303EDE44A5AAF546D17639FD5DB9340();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1PportableMiner_AnimGraphNode_TransitionResult_B392C0124773DC7F9E6D158EE884C586();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_Anim_1PportableMiner(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
