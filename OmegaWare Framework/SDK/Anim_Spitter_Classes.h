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
	 * AnimBlueprintGeneratedClass Anim_Spitter.Anim_Spitter_C
	 * Size -> 0x2A90 (FullSize[0x2FA0] - InheritedSize[0x0510])
	 */
	class UAnim_Spitter_C : public UFGCreatureAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct UAnim_Spitter_C_FAnimBlueprintGeneratedMutableData  __AnimBlueprintMutables;                                 // 0x0518(0x0014) HasGetValueTypeHash
		unsigned char                                              UnknownData_AYZF[0x4];                                   // 0x052C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_PropertyAccess;                   // 0x0530(0x0008)
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_Base;                             // 0x0538(0x0008)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_20;                       // 0x0540(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_19;                       // 0x0568(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_18;                       // 0x0590(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_13;                         // 0x05B8(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_18;                            // 0x0600(0x0020)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_12;                         // 0x0620(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_17;                            // 0x0668(0x0020)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_5;                           // 0x0688(0x0028)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_16;                            // 0x06B0(0x0020)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_6;                            // 0x06D0(0x00C8)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_4;                          // 0x0798(0x0108)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x08A0(0x0048)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_3;                   // 0x08E8(0x0020)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_3;                          // 0x0908(0x0108)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_2;                   // 0x0A10(0x0020)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_4;                         // 0x0A30(0x0048)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_5;                              // 0x0A78(0x0128)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_4;                              // 0x0BA0(0x0128)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_4;                           // 0x0CC8(0x0028)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_3;                   // 0x0CF0(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_2;                   // 0x0D10(0x0020)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0D30(0x0020)
		struct FAnimNode_RotateRootBone                            AnimGraphNode_RotateRootBone_3;                          // 0x0D50(0x00A8)
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace;                  // 0x0DF8(0x0118)
		struct FAnimNode_RotateRootBone                            AnimGraphNode_RotateRootBone_2;                          // 0x0F10(0x00A8)
		struct FAnimNode_RotateRootBone                            AnimGraphNode_RotateRootBone;                            // 0x0FB8(0x00A8)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x1060(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x1080(0x0020)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_3;                           // 0x10A0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_17;                       // 0x10C8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_16;                       // 0x10F0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_15;                       // 0x1118(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_14;                       // 0x1140(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_11;                         // 0x1168(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_15;                            // 0x11B0(0x0020)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer;                          // 0x11D0(0x0070)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_14;                            // 0x1240(0x0020)
		struct FAnimNode_RefPose                                   AnimGraphNode_IdentityPose;                              // 0x1260(0x0010)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_13;                            // 0x1270(0x0020)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_5;                            // 0x1290(0x00C8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x1358(0x0028)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive;                             // 0x1380(0x00C8)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_2;                          // 0x1448(0x0108)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x1550(0x0028)
		unsigned char                                              UnknownData_88I6[0x8];                                   // 0x1578(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_RigidBody                                 AnimGraphNode_RigidBody;                                 // 0x1580(0x09B0)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_13;                       // 0x1F30(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_12;                       // 0x1F58(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_11;                       // 0x1F80(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_10;                       // 0x1FA8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_9;                        // 0x1FD0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_8;                        // 0x1FF8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7;                        // 0x2020(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x2048(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_10;                         // 0x2070(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_12;                            // 0x20B8(0x0020)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_9;                          // 0x20D8(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_11;                            // 0x2120(0x0020)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_8;                          // 0x2140(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_10;                            // 0x2188(0x0020)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x21A8(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_7;                          // 0x21D0(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_3;                         // 0x2218(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0x2260(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_9;                             // 0x22A8(0x0020)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x22C8(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_8;                             // 0x2310(0x0020)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_4;                            // 0x2330(0x00C8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_7;                             // 0x23F8(0x0020)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x2418(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x2440(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x2468(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_6;                             // 0x24B0(0x0020)
		struct FAnimNode_RandomPlayer                              AnimGraphNode_RandomPlayer_2;                            // 0x24D0(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0x2548(0x0020)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_3;                            // 0x2568(0x00C8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x2630(0x0020)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x2650(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x2678(0x0028)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0x26A0(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x26E8(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x2730(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x2778(0x0020)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x2798(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x27E0(0x0048)
		struct FAnimNode_RandomPlayer                              AnimGraphNode_RandomPlayer;                              // 0x2828(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x28A0(0x0020)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_2;                            // 0x28C0(0x00C8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x2988(0x0020)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x29A8(0x00C8)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x2A70(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_3;                              // 0x2B78(0x0128)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_2;                              // 0x2CA0(0x0128)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x2DC8(0x0128)
		TArray<struct FEnemyFootstepStruct>                        SoundMap;                                                // 0x2EF0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    ArrayIndex;                                              // 0x2F00(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_AIBL[0x4];                                   // 0x2F04(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     mHitDirection;                                           // 0x2F08(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mPointDmgTaken;                                          // 0x2F10(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mRadialDmgTaken;                                         // 0x2F11(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mAG_IsFalling;                                           // 0x2F12(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		bool                                                       mAG_IsWalking;                                           // 0x2F13(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mAG_WalkToIdleTransition;                                // 0x2F14(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mAG_IdleToWalkTransition;                                // 0x2F15(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mAG_WalkToRunTransition;                                 // 0x2F16(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mAG_RunToWalkTransition;                                 // 0x2F17(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mAG_InvertedAimPitch;                                    // 0x2F18(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            mAG_SurfaceRotation;                                     // 0x2F20(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     mAG_InvertedAimYaw;                                      // 0x2F38(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            mAG_RunLeanRotationPelvis;                               // 0x2F40(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            WalkLeanRotationHead;                                    // 0x2F58(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            mAG_WalkLeanRotationSpine;                               // 0x2F70(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            mAG_WalkLeanRotationPelvis;                              // 0x2F88(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void CalculateAnimGraphVariables();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_Spitter_AnimGraphNode_TransitionResult_E5A14AC943454B0D928B91923D852F46();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_Spitter_AnimGraphNode_TransitionResult_F59AB4D046321D1D1D4ED6BFFA4CE266();
		void AnimNotify_SpitterWalkToRunNotify();
		void OnRadialDamageTaken();
		void OnPointDamageTaken(const struct FVector& shootDirection);
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void AnimNotify_SniperVFX_ChargeUp();
		void ExecuteUbergraph_Anim_Spitter(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
