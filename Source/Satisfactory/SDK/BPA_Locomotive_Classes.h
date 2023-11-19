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
	 * AnimBlueprintGeneratedClass BPA_Locomotive.BPA_Locomotive_C
	 * Size -> 0x20C0 (FullSize[0x2E90] - InheritedSize[0x0DD0])
	 */
	class UBPA_Locomotive_C : public UFGRailroadVehicleAnim
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0DD0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct UBPA_Locomotive_C_FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                                 // 0x0DD8(0x0020) HasGetValueTypeHash
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_PropertyAccess;                   // 0x0DF8(0x0008)
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_Base;                             // 0x0E00(0x0008)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0E08(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_13;                             // 0x0E28(0x0128)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_12;                             // 0x0F50(0x0128)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x1078(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_11;                             // 0x1098(0x0128)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_10;                             // 0x11C0(0x0128)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x12E8(0x0020)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_2;                           // 0x1308(0x00C8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_13;                         // 0x13D0(0x0048)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_9;                              // 0x1418(0x0128)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_18;                       // 0x1540(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_17;                       // 0x1568(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_16;                       // 0x1590(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_15;                       // 0x15B8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_14;                       // 0x15E0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_13;                       // 0x1608(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_12;                       // 0x1630(0x0028)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_4;                       // 0x1658(0x0040)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_12;                         // 0x1698(0x0048)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_2;                        // 0x16E0(0x00E0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_14;                            // 0x17C0(0x0020)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_11;                         // 0x17E0(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_13;                            // 0x1828(0x0020)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_10;                         // 0x1848(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_9;                          // 0x1890(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_3;                         // 0x18D8(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_12;                            // 0x1920(0x0020)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_8;                          // 0x1940(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_7;                          // 0x1988(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0x19D0(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_11;                            // 0x1A18(0x0020)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_3;                       // 0x1A38(0x0040)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive;                             // 0x1A78(0x00C8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0x1B40(0x0048)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x1B88(0x00E0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_2;                       // 0x1C68(0x0040)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_10;                            // 0x1CA8(0x0020)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_11;                       // 0x1CC8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_10;                       // 0x1CF0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_9;                        // 0x1D18(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_8;                        // 0x1D40(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7;                        // 0x1D68(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x1D90(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x1DB8(0x0028)
		struct FAnimNode_RefPose                                   AnimGraphNode_IdentityPose;                              // 0x1DE0(0x0010)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_9;                             // 0x1DF0(0x0020)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x1E10(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_8;                             // 0x1E58(0x0020)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x1E78(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_7;                             // 0x1EC0(0x0020)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x1EE0(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_6;                             // 0x1F28(0x0020)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_3;                            // 0x1F48(0x00C8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0x2010(0x0020)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_2;                            // 0x2030(0x00C8)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x20F8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x2120(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x2148(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x2170(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x2198(0x0028)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x21C0(0x0020)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x21E0(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x2228(0x0020)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x2248(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x2290(0x0020)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator;                         // 0x22B0(0x0040)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x22F0(0x0020)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x2310(0x00C8)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x23D8(0x0108)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x24E0(0x0048)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x2528(0x0028)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_8;                              // 0x2550(0x0128)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_7;                              // 0x2678(0x0128)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_6;                              // 0x27A0(0x0128)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_5;                              // 0x28C8(0x0128)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_4;                              // 0x29F0(0x0128)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_3;                              // 0x2B18(0x0128)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_2;                              // 0x2C40(0x0128)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x2D68(0x0128)

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void AnimNotify_EnterHandBrake_01();
		void AnimNotify_KillHandBrake_01();
		void AnimNotify_EnterHandBrake_02();
		void AnimNotify_KillHandBrake_02();
		void AnimNotify_TriggerhandbrakeVFX();
		void ExecuteUbergraph_BPA_Locomotive(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
