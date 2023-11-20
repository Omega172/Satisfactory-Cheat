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
	 * AnimBlueprintGeneratedClass BPA_DroneTransport.BPA_DroneTransport_C
	 * Size -> 0x1289 (FullSize[0x15D1] - InheritedSize[0x0348])
	 */
	class UBPA_DroneTransport_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_NUM9[0x8];                                   // 0x0348(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0350(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct UBPA_DroneTransport_C_FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                                 // 0x0358(0x0024) HasGetValueTypeHash
		unsigned char                                              UnknownData_8ZFO[0x4];                                   // 0x037C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_PropertyAccess;                   // 0x0380(0x0008)
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_Base;                             // 0x0388(0x0008)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0390(0x0020)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x03B0(0x0048)
		unsigned char                                              UnknownData_08MP[0x8];                                   // 0x03F8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_RigidBody                                 AnimGraphNode_RigidBody;                                 // 0x0400(0x09B0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x0DB0(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x0DD0(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x0DF0(0x0128)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum;                           // 0x0F18(0x0048)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_2;                       // 0x0F60(0x0040)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x0FA0(0x0020)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_3;                            // 0x0FC0(0x00C8)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend;                               // 0x1088(0x00C8)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_3;                        // 0x1150(0x0070)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x11C0(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0x1208(0x0048)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_2;                        // 0x1250(0x0070)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x12C0(0x0020)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_2;                            // 0x12E0(0x00C8)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer;                          // 0x13A8(0x0070)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x1418(0x0020)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x1438(0x00C8)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x1500(0x0048)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator;                         // 0x1548(0x0040)
		EDroneFlyingMode                                           mFlyingMode;                                             // 0x1588(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5NZQ[0x7];                                   // 0x1589(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     mSpeed;                                                  // 0x1590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             mVelocityLocal;                                          // 0x1598(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mIsBraking;                                              // 0x15B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XK5B[0x7];                                   // 0x15B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            mTurnRoll;                                               // 0x15B8(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       mIsDocking;                                              // 0x15D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void OnFlyingModeChange(EDroneFlyingMode NewFlyingMode);
		void StartDocking();
		void StartTakeOff();
		void AnimNotify_PropellerStart();
		void AnimNotify_Deactivate();
		void ExecuteUbergraph_BPA_DroneTransport(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
