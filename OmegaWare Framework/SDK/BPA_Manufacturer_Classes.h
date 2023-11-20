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
	 * AnimBlueprintGeneratedClass BPA_Manufacturer.BPA_Manufacturer_C
	 * Size -> 0x0288 (FullSize[0x0F28] - InheritedSize[0x0CA0])
	 */
	class UBPA_Manufacturer_C : public UFGFAnimInstanceFactory
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0CA0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct UBPA_Manufacturer_C_FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                                 // 0x0CA8(0x000C) HasGetValueTypeHash
		unsigned char                                              UnknownData_K0K2[0x4];                                   // 0x0CB4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_PropertyAccess;                   // 0x0CB8(0x0008)
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_Base;                             // 0x0CC0(0x0008)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0CC8(0x0020)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x0CE8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x0D10(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x0D38(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x0D80(0x0020)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0DA0(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x0DE8(0x0020)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x0E08(0x00C8)
		double                                                     mStartProductionAnimationTime;                           // 0x0ED0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mLengthOfProductionAnimation;                            // 0x0ED8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mCurrentAnimationPlayTime;                               // 0x0EE0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mProductionTimeFromStartSec;                             // 0x0EE8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mAddedSumOfIntervalAndCurrentTime;                       // 0x0EF0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mTotalTimeFromLastStart;                                 // 0x0EF8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mAnimationRateScale;                                     // 0x0F00(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FName>                                        mActiveSockets;                                          // 0x0F08(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FName>                                        mAllDataNames;                                           // 0x0F18(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void AnimNotify_ManuEnteredProducing();
		void AnimNotify_ManuLeftProducing();
		void StartAnimationSoundFromDuration();
		void StopAnimationSoundFromDuration();
		void StopActiveAnimationAudio();
		void ExecuteUbergraph_BPA_Manufacturer(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
