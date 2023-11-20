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
	 * AnimBlueprintGeneratedClass WalkerAnimBP.WalkerAnimBP_C
	 * Size -> 0x01F9 (FullSize[0x0541] - InheritedSize[0x0348])
	 */
	class UWalkerAnimBP_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_UOQ5[0x8];                                   // 0x0348(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0350(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct UWalkerAnimBP_C_FAnimBlueprintGeneratedMutableData  __AnimBlueprintMutables;                                 // 0x0358(0x0008) HasGetValueTypeHash
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_PropertyAccess;                   // 0x0360(0x0008)
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_Base;                             // 0x0368(0x0008)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0370(0x0020)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer;                          // 0x0390(0x0070)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x0400(0x0020)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x0420(0x00C8)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x04E8(0x0048)
		double                                                     Speed;                                                   // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       Animattack;                                              // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       Attacking;                                               // 0x0540(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_WalkerAnimBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
