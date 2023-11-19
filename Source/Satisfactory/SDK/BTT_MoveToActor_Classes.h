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
	 * BlueprintGeneratedClass BTT_MoveToActor.BTT_MoveToActor_C
	 * Size -> 0x0060 (FullSize[0x0108] - InheritedSize[0x00A8])
	 */
	class UBTT_MoveToActor_C : public UBTTask_BlueprintBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FBlackboardKeySelector                              mTargetActorBBKey;                                       // 0x00B0(0x0028) Edit, BlueprintVisible
		double                                                     mAcceptanceRadius;                                       // 0x00D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FBlackboardKeySelector                              mAcceptanceRadiusBBkey;                                  // 0x00E0(0x0028) Edit, BlueprintVisible

	public:
		void OnFail_A86C15A64D326131272CCA93E74F5421(EPathFollowingResult MovementResult);
		void OnSuccess_A86C15A64D326131272CCA93E74F5421(EPathFollowingResult MovementResult);
		void OnFail_26979FE84DCE69E498AA0F9809F726F8(EPathFollowingResult MovementResult);
		void OnSuccess_26979FE84DCE69E498AA0F9809F726F8(EPathFollowingResult MovementResult);
		void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		void ExecuteUbergraph_BTT_MoveToActor(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
