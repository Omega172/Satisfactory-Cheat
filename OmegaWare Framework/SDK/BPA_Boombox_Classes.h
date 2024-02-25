#pragma once

/**
 * Name: Satisfactory
 * Version: Early_Access_CL#273254
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
	 * AnimBlueprintGeneratedClass BPA_Boombox.BPA_Boombox_C
	 * Size -> 0x0290 (FullSize[0x05D8] - InheritedSize[0x0348])
	 */
	class UBPA_Boombox_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_GSYG[0x8];                                   // 0x0348(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0350(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_PropertyAccess;                   // 0x0358(0x0008)
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_Base;                             // 0x0360(0x0008)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0368(0x0020)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x0388(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x03D0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x03F8(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x0420(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x0468(0x0020)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0488(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x04D0(0x0020)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x04F0(0x00C8)
		class AFGBoomBoxPlayer*                                    BoomBoxPlayer;                                           // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		double                                                     DeltaTimeX;                                              // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsTapeLoaded;                                            // 0x05C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_T3XC[0x7];                                   // 0x05C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AFGCharacterPlayer*                                  Instigator;                                              // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void AnimNotify_LoadTape();
		void AnimNotify_UnloadTape();
		void AnimNotify_Play();
		void AnimNotify_Stop();
		void AnimNotify_Next();
		void AnimNotify_Previous();
		void BlueprintBeginPlay();
		void OnAnimationMondageEnded(class UAnimMontage* Montage, bool bInterrupted);
		void AnimNotify_TogglePlayback();
		void AnimNotify_Turbobass();
		void AnimNotify_SwitchTapeTexture();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_BPA_Boombox(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
