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
	 * AnimBlueprintGeneratedClass BPA_Rebargun.BPA_Rebargun_C
	 * Size -> 0x04D8 (FullSize[0x0820] - InheritedSize[0x0348])
	 */
	class UBPA_Rebargun_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_HVO3[0x8];                                   // 0x0348(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0350(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct UBPA_Rebargun_C_FAnimBlueprintGeneratedMutableData  __AnimBlueprintMutables;                                 // 0x0358(0x0002) HasGetValueTypeHash
		unsigned char                                              UnknownData_0SWX[0x6];                                   // 0x035A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_PropertyAccess;                   // 0x0360(0x0008)
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_Base;                             // 0x0368(0x0008)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0370(0x0020)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_2;                                    // 0x0390(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x03D8(0x0048)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator;                         // 0x0420(0x0040)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x0460(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x04A8(0x0020)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x04C8(0x00C8)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x0590(0x00E0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x0670(0x0108)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x0778(0x0028)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x07A0(0x0048)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x07E8(0x0028)
		bool                                                       mHasAmmunition;                                          // 0x0810(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8YHH[0x7];                                   // 0x0811(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AFGWeapon*                                           mWeaponRef;                                              // 0x0818(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void BlueprintInitializeAnimation();
		void AnimNotify_HideEjectMag();
		void AnimNotify_HideCurrentMag();
		void AnimNotify_ShowCurrentMag();
		void ExecuteUbergraph_BPA_Rebargun(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
