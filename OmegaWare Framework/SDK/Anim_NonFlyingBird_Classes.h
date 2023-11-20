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
	 * AnimBlueprintGeneratedClass Anim_NonFlyingBird.Anim_NonFlyingBird_C
	 * Size -> 0x21B8 (FullSize[0x26C8] - InheritedSize[0x0510])
	 */
	class UAnim_NonFlyingBird_C : public UFGCreatureAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct UAnim_NonFlyingBird_C_FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                                 // 0x0518(0x0008) HasGetValueTypeHash
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_PropertyAccess;                   // 0x0520(0x0008)
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_Base;                             // 0x0528(0x0008)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0530(0x0020)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_20;                       // 0x0550(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_19;                       // 0x0578(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_18;                       // 0x05A0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_17;                       // 0x05C8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_16;                       // 0x05F0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_15;                       // 0x0618(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_14;                       // 0x0640(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_13;                       // 0x0668(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_12;                       // 0x0690(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_11;                       // 0x06B8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_10;                       // 0x06E0(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x0708(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_15;                            // 0x0750(0x0020)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_9;                        // 0x0770(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_8;                        // 0x0798(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7;                        // 0x07C0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x07E8(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x0810(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_14;                            // 0x0858(0x0020)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x0878(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_13;                            // 0x08C0(0x0020)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x08E0(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_12;                            // 0x0928(0x0020)
		struct FAnimNode_RefPose                                   AnimGraphNode_IdentityPose_2;                            // 0x0948(0x0010)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_11;                            // 0x0958(0x0020)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_5;                            // 0x0978(0x00C8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_10;                            // 0x0A40(0x0020)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x0A60(0x0028)
		struct FAnimNode_RandomPlayer                              AnimGraphNode_RandomPlayer_4;                            // 0x0A88(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_9;                             // 0x0B00(0x0020)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0B20(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_8;                             // 0x0B68(0x0020)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_4;                            // 0x0B88(0x00C8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_7;                             // 0x0C50(0x0020)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x0C70(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x0C98(0x0028)
		struct FAnimNode_RandomPlayer                              AnimGraphNode_RandomPlayer_3;                            // 0x0CC0(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_6;                             // 0x0D38(0x0020)
		struct FAnimNode_RandomPlayer                              AnimGraphNode_RandomPlayer_2;                            // 0x0D58(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0x0DD0(0x0020)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_3;                            // 0x0DF0(0x00C8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x0EB8(0x0020)
		struct FAnimNode_RandomPlayer                              AnimGraphNode_RandomPlayer;                              // 0x0ED8(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x0F50(0x0020)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_2;                            // 0x0F70(0x00C8)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_4;                   // 0x1038(0x0020)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_4;                          // 0x1058(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_6;                              // 0x1160(0x0128)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_3;                   // 0x1288(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_4;                   // 0x12A8(0x0020)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_3;                          // 0x12C8(0x0108)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_7;                           // 0x13D0(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_6;                           // 0x13F8(0x0028)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_5;                              // 0x1420(0x0128)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_4;                              // 0x1548(0x0128)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_2;                   // 0x1670(0x0020)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_3;                         // 0x1690(0x0048)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_3;                   // 0x16D8(0x0020)
		unsigned char                                              UnknownData_G4CJ[0x8];                                   // 0x16F8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics;                              // 0x1700(0x0520)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_2;                   // 0x1C20(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_3;                              // 0x1C40(0x0128)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_2;                              // 0x1D68(0x0128)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0x1E90(0x0048)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x1ED8(0x0020)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_2;                          // 0x1EF8(0x0108)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_5;                           // 0x2000(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_4;                           // 0x2028(0x0028)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x2050(0x0128)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x2178(0x0048)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x21C0(0x0108)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_3;                           // 0x22C8(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x22F0(0x0028)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x2318(0x0020)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x2338(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x2360(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x2388(0x0028)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer;                          // 0x23B0(0x0070)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x2420(0x0020)
		struct FAnimNode_RefPose                                   AnimGraphNode_IdentityPose;                              // 0x2440(0x0010)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x2450(0x0020)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x2470(0x00C8)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive;                             // 0x2538(0x00C8)
		class USkeletalMeshComponent*                              mSkeletalmeshComponent;                                  // 0x2600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		bool                                                       mRadialDmgTaken;                                         // 0x2608(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_B54Z[0x7];                                   // 0x2609(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     mHitDirection;                                           // 0x2610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mPointDmgTaken;                                          // 0x2618(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mIsLuring;                                               // 0x2619(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JOUG[0x6];                                   // 0x261A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            mLuringVfx;                                              // 0x2620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		bool                                                       mAg_WalkToRunTranstition;                                // 0x2628(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mAG_RunToWalk;                                           // 0x2629(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mAG_IsFalling;                                           // 0x262A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mAG_IsJumping;                                           // 0x262B(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mAG_IdleToWalkTransition;                                // 0x262C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mAG_WalkToIdleTransition;                                // 0x262D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mAG_LuringToMovingTransition;                            // 0x262E(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mAG_IsWalking;                                           // 0x262F(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            mAG_SurfaceRotationClamp;                                // 0x2630(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       mAG_IsRunning;                                           // 0x2648(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_59D7[0x7];                                   // 0x2649(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            mAG_RunLeanRotationSpine;                                // 0x2650(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            mAG_RunLeanRotationPelvis;                               // 0x2668(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            mAG_WalkLeanRotationSpine;                               // 0x2680(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            mAG_WalkLeanRotationTail;                                // 0x2698(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            mAG_WalkLeanRotationHead;                                // 0x26B0(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void CalculateAnimGraphVariables();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_NonFlyingBird_AnimGraphNode_TransitionResult_93F56C3644CD506A5E44A9B89733CE4D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_NonFlyingBird_AnimGraphNode_TransitionResult_60BE805E4E0C482A65AABD803219B2BD();
		void OnRadialDamageTaken();
		void OnPointDamageTaken(const struct FVector& shootDirection);
		void AnimNotify_NFBEnteredIdleLuringState();
		void AnimNotify_AnimNotify_NFB_Jump();
		void AnimNotify_AnimNotify_NFB_Land();
		void AnimNotify_NFB_EnteredMoving();
		void AnimNotify_NFBLeftLuringState();
		void AnimNotify_NFB_LeftMoving();
		void AnimNotify_AnimNotify_NFB_VO_Long();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void AnimNotify_AnimNotify_NFB_JumpLoop();
		void ExecuteUbergraph_Anim_NonFlyingBird(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
