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
	 * AnimBlueprintGeneratedClass BPA_NobeliskDetonator.BPA_NobeliskDetonator_C
	 * Size -> 0x0BA8 (FullSize[0x0EF0] - InheritedSize[0x0348])
	 */
	class UBPA_NobeliskDetonator_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_74QO[0x8];                                   // 0x0348(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0350(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_PropertyAccess;                   // 0x0358(0x0008)
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_Base;                             // 0x0360(0x0008)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0368(0x0020)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator;                         // 0x0388(0x0040)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x03C8(0x0020)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x03E8(0x00C8)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x04B0(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x04D0(0x0020)
		struct FAnimNode_RigidBody                                 AnimGraphNode_RigidBody;                                 // 0x04F0(0x09B0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x0EA0(0x0048)
		class AFGChargedWeapon*                                    mChargedWeapon;                                          // 0x0EE8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void AnimNotify_NobeliskDetonate();
		void AnimNotify_NobeliskThrowRelease();
		void BlueprintInitializeAnimation();
		void AnimNotify_HideCurrentMagazine();
		void AnimNotify_ShowCurrentMagazine();
		void AnimNotify_HideEjectMagazine();
		void ExecuteUbergraph_BPA_NobeliskDetonator(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
