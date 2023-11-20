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
	 * AnimBlueprintGeneratedClass BPA_Jetpack.BPA_Jetpack_C
	 * Size -> 0x027A (FullSize[0x05C2] - InheritedSize[0x0348])
	 */
	class UBPA_Jetpack_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_C0Y1[0x8];                                   // 0x0348(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0350(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct UBPA_Jetpack_C_FAnimBlueprintGeneratedMutableData   __AnimBlueprintMutables;                                 // 0x0358(0x000C) HasGetValueTypeHash
		unsigned char                                              UnknownData_E5JH[0x4];                                   // 0x0364(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_PropertyAccess;                   // 0x0368(0x0008)
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_Base;                             // 0x0370(0x0008)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0378(0x0020)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x0398(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x03C0(0x0028)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer;                          // 0x03E8(0x0070)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x0458(0x0020)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0478(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x04C0(0x0020)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x04E0(0x00C8)
		struct FVector                                             mVelocityLocalNormalized;                                // 0x05A8(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EMovementMode                                              mCharacterMovementMode;                                  // 0x05C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mIsFalling;                                              // 0x05C1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_BPA_Jetpack(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
