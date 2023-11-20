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
	 * AnimBlueprintGeneratedClass BPA_ResourceMiner.BPA_ResourceMiner_C
	 * Size -> 0x0100 (FullSize[0x0448] - InheritedSize[0x0348])
	 */
	class UBPA_ResourceMiner_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_Z963[0x8];                                   // 0x0348(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0350(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_PropertyAccess;                   // 0x0358(0x0008)
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_Base;                             // 0x0360(0x0008)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0368(0x0020)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x0388(0x0048)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator;                         // 0x03D0(0x0040)
		TArray<int32_t>                                            mAK_RTPC_Randomizer;                                     // 0x0410(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    RTPC_Selection;                                          // 0x0420(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    RTPC_Memory_01;                                          // 0x0424(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    RTPC_Memory_02;                                          // 0x0428(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_K3YZ[0x4];                                   // 0x042C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            mListOfPlayedSounds;                                     // 0x0430(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    mSoundToPlay;                                            // 0x0440(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    mNumSounds;                                              // 0x0444(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void AnimNotify_MineComplete();
		void AnimNotify_StopMining();
		void AnimNotify_MineVfx();
		void AnimNotify_StartCameraShake();
		void AnimNotify_PickRingSound();
		void AnimNotify_SecondMineVfx();
		void ExecuteUbergraph_BPA_ResourceMiner(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
