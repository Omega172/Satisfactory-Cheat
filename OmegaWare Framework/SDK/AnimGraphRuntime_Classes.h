﻿#pragma once

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
	 * Class AnimGraphRuntime.BlendSpaceLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBlendSpaceLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SnapToPosition(const struct FBlendSpaceReference& BlendSpace, const struct FVector& NewPosition);
		struct FVector STATIC_GetPosition(const struct FBlendSpaceReference& BlendSpace);
		struct FVector STATIC_GetFilteredPosition(const struct FBlendSpaceReference& BlendSpace);
		void STATIC_ConvertToBlendSpacePure(const struct FAnimNodeReference& Node, struct FBlendSpaceReference* BlendSpace, bool* Result);
		struct FBlendSpaceReference STATIC_ConvertToBlendSpace(const struct FAnimNodeReference& Node, EAnimNodeReferenceConversionResult* Result);
		static UClass* StaticClass();
	};

	/**
	 * Class AnimGraphRuntime.AnimationStateMachineLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAnimationStateMachineLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SetState(const struct FAnimUpdateContext& UpdateContext, const struct FAnimationStateMachineReference& Node, const class FName& TargetState, float Duration, ETransitionLogicType BlendType, class UBlendProfile* BlendProfile, EAlphaBlendOption AlphaBlendOption, class UCurveFloat* CustomBlendCurve);
		bool STATIC_IsStateBlendingOut(const struct FAnimUpdateContext& UpdateContext, const struct FAnimationStateResultReference& Node);
		bool STATIC_IsStateBlendingIn(const struct FAnimUpdateContext& UpdateContext, const struct FAnimationStateResultReference& Node);
		class FName STATIC_GetState(const struct FAnimUpdateContext& UpdateContext, const struct FAnimationStateMachineReference& Node);
		float STATIC_GetRelevantAnimTimeRemainingFraction(const struct FAnimUpdateContext& UpdateContext, const struct FAnimationStateResultReference& Node);
		float STATIC_GetRelevantAnimTimeRemaining(const struct FAnimUpdateContext& UpdateContext, const struct FAnimationStateResultReference& Node);
		void STATIC_ConvertToAnimationStateResultPure(const struct FAnimNodeReference& Node, struct FAnimationStateResultReference* AnimationState, bool* Result);
		void STATIC_ConvertToAnimationStateResult(const struct FAnimNodeReference& Node, struct FAnimationStateResultReference* AnimationState, EAnimNodeReferenceConversionResult* Result);
		void STATIC_ConvertToAnimationStateMachinePure(const struct FAnimNodeReference& Node, struct FAnimationStateMachineReference* AnimationState, bool* Result);
		void STATIC_ConvertToAnimationStateMachine(const struct FAnimNodeReference& Node, struct FAnimationStateMachineReference* AnimationState, EAnimNodeReferenceConversionResult* Result);
		static UClass* StaticClass();
	};

	/**
	 * Class AnimGraphRuntime.AnimExecutionContextLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAnimExecutionContextLibrary : public UBlueprintFunctionLibrary
	{
	public:
		float STATIC_GetDeltaTime(const struct FAnimUpdateContext& Context);
		float STATIC_GetCurrentWeight(const struct FAnimUpdateContext& Context);
		struct FAnimNodeReference STATIC_GetAnimNodeReference(class UAnimInstance* Instance, int32_t Index);
		class UAnimInstance* STATIC_GetAnimInstance(const struct FAnimExecutionContext& Context);
		struct FAnimUpdateContext STATIC_ConvertToUpdateContext(const struct FAnimExecutionContext& Context, EAnimExecutionContextConversionResult* Result);
		struct FAnimPoseContext STATIC_ConvertToPoseContext(const struct FAnimExecutionContext& Context, EAnimExecutionContextConversionResult* Result);
		struct FAnimInitializationContext STATIC_ConvertToInitializationContext(const struct FAnimExecutionContext& Context, EAnimExecutionContextConversionResult* Result);
		struct FAnimComponentSpacePoseContext STATIC_ConvertToComponentSpacePoseContext(const struct FAnimExecutionContext& Context, EAnimExecutionContextConversionResult* Result);
		static UClass* StaticClass();
	};

	/**
	 * Class AnimGraphRuntime.AnimNotify_PlayMontageNotify
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UAnimNotify_PlayMontageNotify : public UAnimNotify
	{
	public:
		class FName                                                NotifyName;                                              // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UAnimNotify_PlayMontageNotifyWindow : public UAnimNotifyState
	{
	public:
		class FName                                                NotifyName;                                              // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AnimGraphRuntime.AnimSequencerInstance
	 * Size -> 0x0008 (FullSize[0x0350] - InheritedSize[0x0348])
	 */
	class UAnimSequencerInstance : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_0WTJ[0x8];                                   // 0x0348(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AnimGraphRuntime.BlendSpacePlayerLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBlendSpacePlayerLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SnapToPosition(const struct FBlendSpacePlayerReference& BlendSpacePlayer, const struct FVector& NewPosition);
		bool STATIC_ShouldResetPlayTimeWhenBlendSpaceChanges(const struct FBlendSpacePlayerReference& BlendSpacePlayer);
		struct FBlendSpacePlayerReference STATIC_SetResetPlayTimeWhenBlendSpaceChanges(const struct FBlendSpacePlayerReference& BlendSpacePlayer, bool bReset);
		struct FBlendSpacePlayerReference STATIC_SetPlayRate(const struct FBlendSpacePlayerReference& BlendSpacePlayer, float PlayRate);
		struct FBlendSpacePlayerReference STATIC_SetLoop(const struct FBlendSpacePlayerReference& BlendSpacePlayer, bool bLoop);
		struct FBlendSpacePlayerReference STATIC_SetBlendSpaceWithInertialBlending(const struct FAnimUpdateContext& UpdateContext, const struct FBlendSpacePlayerReference& BlendSpacePlayer, class UBlendSpace* BlendSpace, float BlendTime);
		struct FBlendSpacePlayerReference STATIC_SetBlendSpace(const struct FBlendSpacePlayerReference& BlendSpacePlayer, class UBlendSpace* BlendSpace);
		float STATIC_GetStartPosition(const struct FBlendSpacePlayerReference& BlendSpacePlayer);
		struct FVector STATIC_GetPosition(const struct FBlendSpacePlayerReference& BlendSpacePlayer);
		float STATIC_GetPlayRate(const struct FBlendSpacePlayerReference& BlendSpacePlayer);
		bool STATIC_GetLoop(const struct FBlendSpacePlayerReference& BlendSpacePlayer);
		class UBlendSpace* STATIC_GetBlendSpace(const struct FBlendSpacePlayerReference& BlendSpacePlayer);
		void STATIC_ConvertToBlendSpacePlayerPure(const struct FAnimNodeReference& Node, struct FBlendSpacePlayerReference* BlendSpacePlayer, bool* Result);
		struct FBlendSpacePlayerReference STATIC_ConvertToBlendSpacePlayer(const struct FAnimNodeReference& Node, EAnimNodeReferenceConversionResult* Result);
		static UClass* StaticClass();
	};

	/**
	 * Class AnimGraphRuntime.KismetAnimationLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UKismetAnimationLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_K2_TwoBoneIK(const struct FVector& RootPos, const struct FVector& JointPos, const struct FVector& EndPos, const struct FVector& JointTarget, const struct FVector& Effector, struct FVector* OutJointPos, struct FVector* OutEndPos, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale);
		void STATIC_K2_StartProfilingTimer();
		struct FVector STATIC_K2_MakePerlinNoiseVectorAndRemap(float X, float Y, float Z, float RangeOutMinX, float RangeOutMaxX, float RangeOutMinY, float RangeOutMaxY, float RangeOutMinZ, float RangeOutMaxZ);
		float STATIC_K2_MakePerlinNoiseAndRemap(float Value, float RangeOutMin, float RangeOutMax);
		struct FTransform STATIC_K2_LookAt(const struct FTransform& CurrentTransform, const struct FVector& TargetPosition, const struct FVector& LookAtVector, bool bUseUpVector, const struct FVector& UpVector, float ClampConeInDegree);
		float STATIC_K2_EndProfilingTimer(bool bLog, const class FString& LogPrefix);
		float STATIC_K2_DistanceBetweenTwoSocketsAndMapRange(class USkeletalMeshComponent* Component, const class FName& SocketOrBoneNameA, ERelativeTransformSpace SocketSpaceA, const class FName& SocketOrBoneNameB, ERelativeTransformSpace SocketSpaceB, bool bRemapRange, float InRangeMin, float InRangeMax, float OutRangeMin, float OutRangeMax);
		struct FVector STATIC_K2_DirectionBetweenSockets(class USkeletalMeshComponent* Component, const class FName& SocketOrBoneNameFrom, const class FName& SocketOrBoneNameTo);
		float STATIC_K2_CalculateVelocityFromSockets(float DeltaSeconds, class USkeletalMeshComponent* Component, const class FName& SocketOrBoneName, const class FName& ReferenceSocketOrBone, ERelativeTransformSpace SocketSpace, const struct FVector& OffsetInBoneSpace, struct FPositionHistory* History, int32_t NumberOfSamples, float VelocityMin, float VelocityMax, EEasingFuncType EasingType, const struct FRuntimeFloatCurve& CustomCurve);
		float STATIC_K2_CalculateVelocityFromPositionHistory(float DeltaSeconds, const struct FVector& Position, struct FPositionHistory* History, int32_t NumberOfSamples, float VelocityMin, float VelocityMax);
		float STATIC_CalculateDirection(const struct FVector& Velocity, const struct FRotator& BaseRotation);
		static UClass* StaticClass();
	};

	/**
	 * Class AnimGraphRuntime.LayeredBoneBlendLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULayeredBoneBlendLibrary : public UBlueprintFunctionLibrary
	{
	public:
		struct FLayeredBoneBlendReference STATIC_SetBlendMask(const struct FAnimUpdateContext& UpdateContext, const struct FLayeredBoneBlendReference& LayeredBoneBlend, int32_t PoseIndex, const class FName& BlendMaskName);
		int32_t STATIC_GetNumPoses(const struct FLayeredBoneBlendReference& LayeredBoneBlend);
		struct FLayeredBoneBlendReference STATIC_ConvertToLayeredBoneBlend(const struct FAnimNodeReference& Node, EAnimNodeReferenceConversionResult* Result);
		void STATIC_ConvertToLayeredBlendPerBonePure(const struct FAnimNodeReference& Node, struct FLayeredBoneBlendReference* LayeredBoneBlend, bool* Result);
		static UClass* StaticClass();
	};

	/**
	 * Class AnimGraphRuntime.LinkedAnimGraphLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULinkedAnimGraphLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_HasLinkedAnimInstance(const struct FLinkedAnimGraphReference& Node);
		class UAnimInstance* STATIC_GetLinkedAnimInstance(const struct FLinkedAnimGraphReference& Node);
		void STATIC_ConvertToLinkedAnimGraphPure(const struct FAnimNodeReference& Node, struct FLinkedAnimGraphReference* LinkedAnimGraph, bool* Result);
		struct FLinkedAnimGraphReference STATIC_ConvertToLinkedAnimGraph(const struct FAnimNodeReference& Node, EAnimNodeReferenceConversionResult* Result);
		static UClass* StaticClass();
	};

	/**
	 * Class AnimGraphRuntime.PlayMontageCallbackProxy
	 * Size -> 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
	 */
	class UPlayMontageCallbackProxy : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnCompleted;                                             // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnBlendOut;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnInterrupted;                                           // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnNotifyBegin;                                           // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnNotifyEnd;                                             // 0x0068(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UP15[0x30];                                  // 0x0078(0x0030) MISSED OFFSET (PADDING)

	public:
		void OnNotifyEndReceived(const class FName& NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload);
		void OnNotifyBeginReceived(const class FName& NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload);
		void OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted);
		void OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted);
		class UPlayMontageCallbackProxy* STATIC_CreateProxyObjectForPlayMontage(class USkeletalMeshComponent* InSkeletalMeshComponent, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, const class FName& StartingSection);
		static UClass* StaticClass();
	};

	/**
	 * Class AnimGraphRuntime.SequenceEvaluatorLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USequenceEvaluatorLibrary : public UBlueprintFunctionLibrary
	{
	public:
		struct FSequenceEvaluatorReference STATIC_SetSequenceWithInertialBlending(const struct FAnimUpdateContext& UpdateContext, const struct FSequenceEvaluatorReference& SequenceEvaluator, class UAnimSequenceBase* Sequence, float BlendTime);
		struct FSequenceEvaluatorReference STATIC_SetSequence(const struct FSequenceEvaluatorReference& SequenceEvaluator, class UAnimSequenceBase* Sequence);
		struct FSequenceEvaluatorReference STATIC_SetExplicitTime(const struct FSequenceEvaluatorReference& SequenceEvaluator, float Time);
		class UAnimSequenceBase* STATIC_GetSequence(const struct FSequenceEvaluatorReference& SequenceEvaluator);
		float STATIC_GetAccumulatedTime(const struct FSequenceEvaluatorReference& SequenceEvaluator);
		void STATIC_ConvertToSequenceEvaluatorPure(const struct FAnimNodeReference& Node, struct FSequenceEvaluatorReference* SequenceEvaluator, bool* Result);
		struct FSequenceEvaluatorReference STATIC_ConvertToSequenceEvaluator(const struct FAnimNodeReference& Node, EAnimNodeReferenceConversionResult* Result);
		struct FSequenceEvaluatorReference STATIC_AdvanceTime(const struct FAnimUpdateContext& UpdateContext, const struct FSequenceEvaluatorReference& SequenceEvaluator, float PlayRate);
		static UClass* StaticClass();
	};

	/**
	 * Class AnimGraphRuntime.SequencePlayerLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USequencePlayerLibrary : public UBlueprintFunctionLibrary
	{
	public:
		struct FSequencePlayerReference STATIC_SetStartPosition(const struct FSequencePlayerReference& SequencePlayer, float StartPosition);
		struct FSequencePlayerReference STATIC_SetSequenceWithInertialBlending(const struct FAnimUpdateContext& UpdateContext, const struct FSequencePlayerReference& SequencePlayer, class UAnimSequenceBase* Sequence, float BlendTime);
		struct FSequencePlayerReference STATIC_SetSequence(const struct FSequencePlayerReference& SequencePlayer, class UAnimSequenceBase* Sequence);
		struct FSequencePlayerReference STATIC_SetPlayRate(const struct FSequencePlayerReference& SequencePlayer, float PlayRate);
		struct FSequencePlayerReference STATIC_SetAccumulatedTime(const struct FSequencePlayerReference& SequencePlayer, float Time);
		float STATIC_GetStartPosition(const struct FSequencePlayerReference& SequencePlayer);
		class UAnimSequenceBase* STATIC_GetSequencePure(const struct FSequencePlayerReference& SequencePlayer);
		struct FSequencePlayerReference STATIC_GetSequence(const struct FSequencePlayerReference& SequencePlayer, class UAnimSequenceBase** SequenceBase);
		float STATIC_GetPlayRate(const struct FSequencePlayerReference& SequencePlayer);
		bool STATIC_GetLoopAnimation(const struct FSequencePlayerReference& SequencePlayer);
		float STATIC_GetAccumulatedTime(const struct FSequencePlayerReference& SequencePlayer);
		void STATIC_ConvertToSequencePlayerPure(const struct FAnimNodeReference& Node, struct FSequencePlayerReference* SequencePlayer, bool* Result);
		struct FSequencePlayerReference STATIC_ConvertToSequencePlayer(const struct FAnimNodeReference& Node, EAnimNodeReferenceConversionResult* Result);
		float STATIC_ComputePlayRateFromDuration(const struct FSequencePlayerReference& SequencePlayer, float Duration);
		static UClass* StaticClass();
	};

	/**
	 * Class AnimGraphRuntime.SequencerAnimationSupport
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USequencerAnimationSupport : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AnimGraphRuntime.SkeletalControlLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USkeletalControlLibrary : public UBlueprintFunctionLibrary
	{
	public:
		struct FSkeletalControlReference STATIC_SetAlpha(const struct FSkeletalControlReference& SkeletalControl, float Alpha);
		float STATIC_GetAlpha(const struct FSkeletalControlReference& SkeletalControl);
		void STATIC_ConvertToSkeletalControlPure(const struct FAnimNodeReference& Node, struct FSkeletalControlReference* SkeletalControl, bool* Result);
		struct FSkeletalControlReference STATIC_ConvertToSkeletalControl(const struct FAnimNodeReference& Node, EAnimNodeReferenceConversionResult* Result);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
