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
	 * AnimBlueprintGeneratedClass BPA_BuildGun.BPA_BuildGun_C
	 * Size -> 0x11A1 (FullSize[0x14E9] - InheritedSize[0x0348])
	 */
	class UBPA_BuildGun_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_QFW9[0x8];                                   // 0x0348(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0350(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_PropertyAccess;                   // 0x0358(0x0008)
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_Base;                             // 0x0360(0x0008)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0368(0x0020)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x0388(0x0048)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x03D0(0x0020)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_13;                       // 0x03F0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_12;                       // 0x0418(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_11;                       // 0x0440(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_10;                       // 0x0468(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_9;                        // 0x0490(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_8;                        // 0x04B8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7;                        // 0x04E0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x0508(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x0530(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_9;                             // 0x0578(0x0020)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x0598(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x05C0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x05E8(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x0610(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_8;                             // 0x0658(0x0020)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x0678(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_7;                             // 0x06C0(0x0020)
		struct FAnimNode_RefPose                                   AnimGraphNode_IdentityPose;                              // 0x06E0(0x0010)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_6;                             // 0x06F0(0x0020)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_3;                            // 0x0710(0x00C8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0x07D8(0x0020)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x07F8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x0820(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x0848(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x0890(0x0020)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x08B0(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x08F8(0x0020)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_2;                            // 0x0918(0x00C8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x09E0(0x0020)
		struct FAnimNode_RefPose                                   AnimGraphNode_LocalRefPose;                              // 0x0A00(0x0010)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x0A10(0x0020)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x0A30(0x00C8)
		unsigned char                                              UnknownData_QDLG[0x8];                                   // 0x0AF8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_RigidBody                                 AnimGraphNode_RigidBody;                                 // 0x0B00(0x09B0)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x14B0(0x0020)
		double                                                     mSpeed;                                                  // 0x14D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mSpeedZ;                                                 // 0x14D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCharacterMovementComponent*                         mCharacterMovementComponent;                             // 0x14E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		EMovementMode                                              mMovementMode;                                           // 0x14E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BuildGun_AnimGraphNode_TransitionResult_6E10AEDC4275071A5897C2B8BFEEA6BC();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BuildGun_AnimGraphNode_TransitionResult_635119E3427A6642C282D19403150CCA();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BuildGun_AnimGraphNode_TransitionResult_8AA4F3F64391B86EB0D464AB7AE3FADF();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BuildGun_AnimGraphNode_TransitionResult_076323A44360DE0318EB6B80860DBD48();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BuildGun_AnimGraphNode_TransitionResult_D02C86DC4EADAFD535326680C1CD92A5();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BuildGun_AnimGraphNode_TransitionResult_8D480CDF42EFADCDA8E138B901070936();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BuildGun_AnimGraphNode_TransitionResult_710D4DDF45E7674C33B9E9A7F64583D4();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BuildGun_AnimGraphNode_TransitionResult_1A8FBAA5478660891E702DB1E46D70C6();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BuildGun_AnimGraphNode_TransitionResult_1ADC795A44EE7AE21FC3A5AB8591C014();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BuildGun_AnimGraphNode_TransitionResult_E6CBA6484572B696717E77BB62CC23CE();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BuildGun_AnimGraphNode_TransitionResult_9A3C27E6475A9A732CFF6B9FCCC3465E();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BuildGun_AnimGraphNode_TransitionResult_2D8C67E14104C016A6B4978083119097();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_BPA_BuildGun(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
