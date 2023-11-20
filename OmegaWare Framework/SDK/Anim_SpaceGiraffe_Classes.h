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
	 * AnimBlueprintGeneratedClass Anim_SpaceGiraffe.Anim_SpaceGiraffe_C
	 * Size -> 0x16D9 (FullSize[0x1BE9] - InheritedSize[0x0510])
	 */
	class UAnim_SpaceGiraffe_C : public UFGCreatureAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct UAnim_SpaceGiraffe_C_FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                                 // 0x0518(0x0010) HasGetValueTypeHash
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_PropertyAccess;                   // 0x0528(0x0008)
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_Base;                             // 0x0530(0x0008)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0538(0x0020)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_16;                       // 0x0558(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_15;                       // 0x0580(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_14;                       // 0x05A8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_13;                       // 0x05D0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_12;                       // 0x05F8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_11;                       // 0x0620(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_10;                       // 0x0648(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_9;                        // 0x0670(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_9;                          // 0x0698(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_16;                            // 0x06E0(0x0020)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_8;                        // 0x0700(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7;                        // 0x0728(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_8;                          // 0x0750(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_15;                            // 0x0798(0x0020)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_7;                          // 0x07B8(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_14;                            // 0x0800(0x0020)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_5;                            // 0x0820(0x00C8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_13;                            // 0x08E8(0x0020)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x0908(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x0930(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0x0958(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_12;                            // 0x09A0(0x0020)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x09C0(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_11;                            // 0x0A08(0x0020)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x0A28(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_10;                            // 0x0A70(0x0020)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_4;                            // 0x0A90(0x00C8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_9;                             // 0x0B58(0x0020)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x0B78(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x0BA0(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x0BC8(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_8;                             // 0x0C10(0x0020)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x0C30(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_7;                             // 0x0C78(0x0020)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_2;                        // 0x0C98(0x0070)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_6;                             // 0x0D08(0x0020)
		struct FAnimNode_RandomPlayer                              AnimGraphNode_RandomPlayer;                              // 0x0D28(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0x0DA0(0x0020)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_3;                            // 0x0DC0(0x00C8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x0E88(0x0020)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0EA8(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x0EF0(0x0020)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_2;                            // 0x0F10(0x00C8)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_2;                   // 0x0FD8(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_3;                              // 0x0FF8(0x0128)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_2;                   // 0x1120(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x1140(0x0020)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x1160(0x0048)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_2;                              // 0x11A8(0x0128)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x12D0(0x0128)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_3;                          // 0x13F8(0x0108)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_5;                           // 0x1500(0x0028)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_2;                          // 0x1528(0x0108)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_4;                           // 0x1630(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_3;                           // 0x1658(0x0028)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x1680(0x0020)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x16A0(0x0108)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x17A8(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x17D0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x17F8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x1820(0x0028)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer;                          // 0x1848(0x0070)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x18B8(0x0020)
		struct FAnimNode_RefPose                                   AnimGraphNode_IdentityPose;                              // 0x18D8(0x0010)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x18E8(0x0020)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x1908(0x00C8)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive;                             // 0x19D0(0x00C8)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x1A98(0x00E0)
		class USkeletalMeshComponent*                              mSkeletalmeshComponent;                                  // 0x1B78(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		bool                                                       mRadialDmgTaken;                                         // 0x1B80(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mPointDmgTaken;                                          // 0x1B81(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BVTV[0x6];                                   // 0x1B82(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     mHitDirection;                                           // 0x1B88(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mRotationDirection;                                      // 0x1B90(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mIsRotating;                                             // 0x1B98(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mIsPanic;                                                // 0x1B99(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mAG_IdleToWalkTransition;                                // 0x1B9A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mAG_WalkToIdleTransition;                                // 0x1B9B(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mAG_WalkToRunTransition;                                 // 0x1B9C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_G72B[0x3];                                   // 0x1B9D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            mAG_SurfaceRotation;                                     // 0x1BA0(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            mAG_RunLeanRotationChest;                                // 0x1BB8(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            mAG_RunLeanRotationPelvis;                               // 0x1BD0(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       mAG_RunToWalkTransition;                                 // 0x1BE8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void CalculateAnimGraphValues();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_SpaceGiraffe_AnimGraphNode_TransitionResult_5BBF92D944CF08F557873D8B5513CC19();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_SpaceGiraffe_AnimGraphNode_TransitionResult_120EBA2A4C99D3C03736878049EF1F10();
		void OnPointDamageTaken(const struct FVector& shootDirection);
		void OnRadialDamageTaken();
		void StartRotation(const struct FRotator& TargetRotation);
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_Anim_SpaceGiraffe(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
