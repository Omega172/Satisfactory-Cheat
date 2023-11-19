/**
 * Name: Satisfactory
 * Version: Early_Access_CL#264901
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x489A5B0B0
	 * 		Name   -> Function AnimGraphRuntime.BlendSpaceLibrary.SnapToPosition
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FBlendSpaceReference                        BlendSpace                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NewPosition                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBlendSpaceLibrary::STATIC_SnapToPosition(const struct FBlendSpaceReference& BlendSpace, const struct FVector& NewPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.BlendSpaceLibrary.SnapToPosition");
		
		UBlendSpaceLibrary_SnapToPosition_Params params {};
		params.BlendSpace = BlendSpace;
		params.NewPosition = NewPosition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A56FA0
	 * 		Name   -> Function AnimGraphRuntime.BlendSpaceLibrary.GetPosition
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FBlendSpaceReference                        BlendSpace                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FVector UBlendSpaceLibrary::STATIC_GetPosition(const struct FBlendSpaceReference& BlendSpace)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.BlendSpaceLibrary.GetPosition");
		
		UBlendSpaceLibrary_GetPosition_Params params {};
		params.BlendSpace = BlendSpace;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A56A40
	 * 		Name   -> Function AnimGraphRuntime.BlendSpaceLibrary.GetFilteredPosition
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FBlendSpaceReference                        BlendSpace                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FVector UBlendSpaceLibrary::STATIC_GetFilteredPosition(const struct FBlendSpaceReference& BlendSpace)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.BlendSpaceLibrary.GetFilteredPosition");
		
		UBlendSpaceLibrary_GetFilteredPosition_Params params {};
		params.BlendSpace = BlendSpace;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A54B90
	 * 		Name   -> Function AnimGraphRuntime.BlendSpaceLibrary.ConvertToBlendSpacePure
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FAnimNodeReference                          Node                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FBlendSpaceReference                        BlendSpace                                                 (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBlendSpaceLibrary::STATIC_ConvertToBlendSpacePure(const struct FAnimNodeReference& Node, struct FBlendSpaceReference* BlendSpace, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.BlendSpaceLibrary.ConvertToBlendSpacePure");
		
		UBlendSpaceLibrary_ConvertToBlendSpacePure_Params params {};
		params.Node = Node;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BlendSpace != nullptr)
			*BlendSpace = params.BlendSpace;
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A54780
	 * 		Name   -> Function AnimGraphRuntime.BlendSpaceLibrary.ConvertToBlendSpace
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FAnimNodeReference                          Node                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EAnimNodeReferenceConversionResult                 Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FBlendSpaceReference UBlendSpaceLibrary::STATIC_ConvertToBlendSpace(const struct FAnimNodeReference& Node, EAnimNodeReferenceConversionResult* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.BlendSpaceLibrary.ConvertToBlendSpace");
		
		UBlendSpaceLibrary_ConvertToBlendSpace_Params params {};
		params.Node = Node;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBlendSpaceLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlendSpaceLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AnimGraphRuntime.BlendSpaceLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A5AD30
	 * 		Name   -> Function AnimGraphRuntime.AnimationStateMachineLibrary.SetState
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FAnimUpdateContext                          UpdateContext                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FAnimationStateMachineReference             Node                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FName                                        TargetState                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ETransitionLogicType                               BlendType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UBlendProfile*                               BlendProfile                                               (Parm, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EAlphaBlendOption                                  AlphaBlendOption                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UCurveFloat*                                 CustomBlendCurve                                           (Parm, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnimationStateMachineLibrary::STATIC_SetState(const struct FAnimUpdateContext& UpdateContext, const struct FAnimationStateMachineReference& Node, const class FName& TargetState, float Duration, ETransitionLogicType BlendType, class UBlendProfile* BlendProfile, EAlphaBlendOption AlphaBlendOption, class UCurveFloat* CustomBlendCurve)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.AnimationStateMachineLibrary.SetState");
		
		UAnimationStateMachineLibrary_SetState_Params params {};
		params.UpdateContext = UpdateContext;
		params.Node = Node;
		params.TargetState = TargetState;
		params.Duration = Duration;
		params.BlendType = BlendType;
		params.BlendProfile = BlendProfile;
		params.AlphaBlendOption = AlphaBlendOption;
		params.CustomBlendCurve = CustomBlendCurve;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A57BB0
	 * 		Name   -> Function AnimGraphRuntime.AnimationStateMachineLibrary.IsStateBlendingOut
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FAnimUpdateContext                          UpdateContext                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FAnimationStateResultReference              Node                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UAnimationStateMachineLibrary::STATIC_IsStateBlendingOut(const struct FAnimUpdateContext& UpdateContext, const struct FAnimationStateResultReference& Node)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.AnimationStateMachineLibrary.IsStateBlendingOut");
		
		UAnimationStateMachineLibrary_IsStateBlendingOut_Params params {};
		params.UpdateContext = UpdateContext;
		params.Node = Node;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A57A60
	 * 		Name   -> Function AnimGraphRuntime.AnimationStateMachineLibrary.IsStateBlendingIn
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FAnimUpdateContext                          UpdateContext                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FAnimationStateResultReference              Node                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UAnimationStateMachineLibrary::STATIC_IsStateBlendingIn(const struct FAnimUpdateContext& UpdateContext, const struct FAnimationStateResultReference& Node)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.AnimationStateMachineLibrary.IsStateBlendingIn");
		
		UAnimationStateMachineLibrary_IsStateBlendingIn_Params params {};
		params.UpdateContext = UpdateContext;
		params.Node = Node;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A578A0
	 * 		Name   -> Function AnimGraphRuntime.AnimationStateMachineLibrary.GetState
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FAnimUpdateContext                          UpdateContext                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FAnimationStateMachineReference             Node                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class FName UAnimationStateMachineLibrary::STATIC_GetState(const struct FAnimUpdateContext& UpdateContext, const struct FAnimationStateMachineReference& Node)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.AnimationStateMachineLibrary.GetState");
		
		UAnimationStateMachineLibrary_GetState_Params params {};
		params.UpdateContext = UpdateContext;
		params.Node = Node;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A572F0
	 * 		Name   -> Function AnimGraphRuntime.AnimationStateMachineLibrary.GetRelevantAnimTimeRemainingFraction
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FAnimUpdateContext                          UpdateContext                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FAnimationStateResultReference              Node                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	float UAnimationStateMachineLibrary::STATIC_GetRelevantAnimTimeRemainingFraction(const struct FAnimUpdateContext& UpdateContext, const struct FAnimationStateResultReference& Node)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.AnimationStateMachineLibrary.GetRelevantAnimTimeRemainingFraction");
		
		UAnimationStateMachineLibrary_GetRelevantAnimTimeRemainingFraction_Params params {};
		params.UpdateContext = UpdateContext;
		params.Node = Node;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A571A0
	 * 		Name   -> Function AnimGraphRuntime.AnimationStateMachineLibrary.GetRelevantAnimTimeRemaining
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FAnimUpdateContext                          UpdateContext                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FAnimationStateResultReference              Node                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	float UAnimationStateMachineLibrary::STATIC_GetRelevantAnimTimeRemaining(const struct FAnimUpdateContext& UpdateContext, const struct FAnimationStateResultReference& Node)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.AnimationStateMachineLibrary.GetRelevantAnimTimeRemaining");
		
		UAnimationStateMachineLibrary_GetRelevantAnimTimeRemaining_Params params {};
		params.UpdateContext = UpdateContext;
		params.Node = Node;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A54630
	 * 		Name   -> Function AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateResultPure
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FAnimNodeReference                          Node                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FAnimationStateResultReference              AnimationState                                             (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnimationStateMachineLibrary::STATIC_ConvertToAnimationStateResultPure(const struct FAnimNodeReference& Node, struct FAnimationStateResultReference* AnimationState, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateResultPure");
		
		UAnimationStateMachineLibrary_ConvertToAnimationStateResultPure_Params params {};
		params.Node = Node;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimationState != nullptr)
			*AnimationState = params.AnimationState;
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A544E0
	 * 		Name   -> Function AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateResult
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FAnimNodeReference                          Node                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FAnimationStateResultReference              AnimationState                                             (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EAnimNodeReferenceConversionResult                 Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnimationStateMachineLibrary::STATIC_ConvertToAnimationStateResult(const struct FAnimNodeReference& Node, struct FAnimationStateResultReference* AnimationState, EAnimNodeReferenceConversionResult* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateResult");
		
		UAnimationStateMachineLibrary_ConvertToAnimationStateResult_Params params {};
		params.Node = Node;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimationState != nullptr)
			*AnimationState = params.AnimationState;
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A54390
	 * 		Name   -> Function AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateMachinePure
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FAnimNodeReference                          Node                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FAnimationStateMachineReference             AnimationState                                             (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnimationStateMachineLibrary::STATIC_ConvertToAnimationStateMachinePure(const struct FAnimNodeReference& Node, struct FAnimationStateMachineReference* AnimationState, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateMachinePure");
		
		UAnimationStateMachineLibrary_ConvertToAnimationStateMachinePure_Params params {};
		params.Node = Node;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimationState != nullptr)
			*AnimationState = params.AnimationState;
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A54240
	 * 		Name   -> Function AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateMachine
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FAnimNodeReference                          Node                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FAnimationStateMachineReference             AnimationState                                             (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EAnimNodeReferenceConversionResult                 Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnimationStateMachineLibrary::STATIC_ConvertToAnimationStateMachine(const struct FAnimNodeReference& Node, struct FAnimationStateMachineReference* AnimationState, EAnimNodeReferenceConversionResult* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateMachine");
		
		UAnimationStateMachineLibrary_ConvertToAnimationStateMachine_Params params {};
		params.Node = Node;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimationState != nullptr)
			*AnimationState = params.AnimationState;
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimationStateMachineLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimationStateMachineLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AnimGraphRuntime.AnimationStateMachineLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A56980
	 * 		Name   -> Function AnimGraphRuntime.AnimExecutionContextLibrary.GetDeltaTime
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FAnimUpdateContext                          Context                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	float UAnimExecutionContextLibrary::STATIC_GetDeltaTime(const struct FAnimUpdateContext& Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.AnimExecutionContextLibrary.GetDeltaTime");
		
		UAnimExecutionContextLibrary_GetDeltaTime_Params params {};
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A568C0
	 * 		Name   -> Function AnimGraphRuntime.AnimExecutionContextLibrary.GetCurrentWeight
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FAnimUpdateContext                          Context                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	float UAnimExecutionContextLibrary::STATIC_GetCurrentWeight(const struct FAnimUpdateContext& Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.AnimExecutionContextLibrary.GetCurrentWeight");
		
		UAnimExecutionContextLibrary_GetCurrentWeight_Params params {};
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A566E0
	 * 		Name   -> Function AnimGraphRuntime.AnimExecutionContextLibrary.GetAnimNodeReference
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UAnimInstance*                               Instance                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FAnimNodeReference UAnimExecutionContextLibrary::STATIC_GetAnimNodeReference(class UAnimInstance* Instance, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.AnimExecutionContextLibrary.GetAnimNodeReference");
		
		UAnimExecutionContextLibrary_GetAnimNodeReference_Params params {};
		params.Instance = Instance;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A56630
	 * 		Name   -> Function AnimGraphRuntime.AnimExecutionContextLibrary.GetAnimInstance
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FAnimExecutionContext                       Context                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UAnimInstance* UAnimExecutionContextLibrary::STATIC_GetAnimInstance(const struct FAnimExecutionContext& Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.AnimExecutionContextLibrary.GetAnimInstance");
		
		UAnimExecutionContextLibrary_GetAnimInstance_Params params {};
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A55D80
	 * 		Name   -> Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToUpdateContext
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FAnimExecutionContext                       Context                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		EAnimExecutionContextConversionResult              Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FAnimUpdateContext UAnimExecutionContextLibrary::STATIC_ConvertToUpdateContext(const struct FAnimExecutionContext& Context, EAnimExecutionContextConversionResult* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToUpdateContext");
		
		UAnimExecutionContextLibrary_ConvertToUpdateContext_Params params {};
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A55470
	 * 		Name   -> Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToPoseContext
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FAnimExecutionContext                       Context                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		EAnimExecutionContextConversionResult              Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FAnimPoseContext UAnimExecutionContextLibrary::STATIC_ConvertToPoseContext(const struct FAnimExecutionContext& Context, EAnimExecutionContextConversionResult* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToPoseContext");
		
		UAnimExecutionContextLibrary_ConvertToPoseContext_Params params {};
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A54E10
	 * 		Name   -> Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToInitializationContext
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FAnimExecutionContext                       Context                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		EAnimExecutionContextConversionResult              Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FAnimInitializationContext UAnimExecutionContextLibrary::STATIC_ConvertToInitializationContext(const struct FAnimExecutionContext& Context, EAnimExecutionContextConversionResult* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToInitializationContext");
		
		UAnimExecutionContextLibrary_ConvertToInitializationContext_Params params {};
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A54CE0
	 * 		Name   -> Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToComponentSpacePoseContext
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FAnimExecutionContext                       Context                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		EAnimExecutionContextConversionResult              Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FAnimComponentSpacePoseContext UAnimExecutionContextLibrary::STATIC_ConvertToComponentSpacePoseContext(const struct FAnimExecutionContext& Context, EAnimExecutionContextConversionResult* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToComponentSpacePoseContext");
		
		UAnimExecutionContextLibrary_ConvertToComponentSpacePoseContext_Params params {};
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimExecutionContextLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimExecutionContextLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AnimGraphRuntime.AnimExecutionContextLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotify_PlayMontageNotify.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotify_PlayMontageNotify::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AnimGraphRuntime.AnimNotify_PlayMontageNotify");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotify_PlayMontageNotifyWindow.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotify_PlayMontageNotifyWindow::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimSequencerInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimSequencerInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AnimGraphRuntime.AnimSequencerInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A5B1E0
	 * 		Name   -> Function AnimGraphRuntime.BlendSpacePlayerLibrary.SnapToPosition
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FBlendSpacePlayerReference                  BlendSpacePlayer                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NewPosition                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBlendSpacePlayerLibrary::STATIC_SnapToPosition(const struct FBlendSpacePlayerReference& BlendSpacePlayer, const struct FVector& NewPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.BlendSpacePlayerLibrary.SnapToPosition");
		
		UBlendSpacePlayerLibrary_SnapToPosition_Params params {};
		params.BlendSpacePlayer = BlendSpacePlayer;
		params.NewPosition = NewPosition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A5AFE0
	 * 		Name   -> Function AnimGraphRuntime.BlendSpacePlayerLibrary.ShouldResetPlayTimeWhenBlendSpaceChanges
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FBlendSpacePlayerReference                  BlendSpacePlayer                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UBlendSpacePlayerLibrary::STATIC_ShouldResetPlayTimeWhenBlendSpaceChanges(const struct FBlendSpacePlayerReference& BlendSpacePlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.BlendSpacePlayerLibrary.ShouldResetPlayTimeWhenBlendSpaceChanges");
		
		UBlendSpacePlayerLibrary_ShouldResetPlayTimeWhenBlendSpaceChanges_Params params {};
		params.BlendSpacePlayer = BlendSpacePlayer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A5A540
	 * 		Name   -> Function AnimGraphRuntime.BlendSpacePlayerLibrary.SetResetPlayTimeWhenBlendSpaceChanges
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FBlendSpacePlayerReference                  BlendSpacePlayer                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bReset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FBlendSpacePlayerReference UBlendSpacePlayerLibrary::STATIC_SetResetPlayTimeWhenBlendSpaceChanges(const struct FBlendSpacePlayerReference& BlendSpacePlayer, bool bReset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.BlendSpacePlayerLibrary.SetResetPlayTimeWhenBlendSpaceChanges");
		
		UBlendSpacePlayerLibrary_SetResetPlayTimeWhenBlendSpaceChanges_Params params {};
		params.BlendSpacePlayer = BlendSpacePlayer;
		params.bReset = bReset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A5A330
	 * 		Name   -> Function AnimGraphRuntime.BlendSpacePlayerLibrary.SetPlayRate
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FBlendSpacePlayerReference                  BlendSpacePlayer                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              PlayRate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FBlendSpacePlayerReference UBlendSpacePlayerLibrary::STATIC_SetPlayRate(const struct FBlendSpacePlayerReference& BlendSpacePlayer, float PlayRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.BlendSpacePlayerLibrary.SetPlayRate");
		
		UBlendSpacePlayerLibrary_SetPlayRate_Params params {};
		params.BlendSpacePlayer = BlendSpacePlayer;
		params.PlayRate = PlayRate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A5A220
	 * 		Name   -> Function AnimGraphRuntime.BlendSpacePlayerLibrary.SetLoop
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FBlendSpacePlayerReference                  BlendSpacePlayer                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bLoop                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FBlendSpacePlayerReference UBlendSpacePlayerLibrary::STATIC_SetLoop(const struct FBlendSpacePlayerReference& BlendSpacePlayer, bool bLoop)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.BlendSpacePlayerLibrary.SetLoop");
		
		UBlendSpacePlayerLibrary_SetLoop_Params params {};
		params.BlendSpacePlayer = BlendSpacePlayer;
		params.bLoop = bLoop;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A59F50
	 * 		Name   -> Function AnimGraphRuntime.BlendSpacePlayerLibrary.SetBlendSpaceWithInertialBlending
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FAnimUpdateContext                          UpdateContext                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FBlendSpacePlayerReference                  BlendSpacePlayer                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UBlendSpace*                                 BlendSpace                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              BlendTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FBlendSpacePlayerReference UBlendSpacePlayerLibrary::STATIC_SetBlendSpaceWithInertialBlending(const struct FAnimUpdateContext& UpdateContext, const struct FBlendSpacePlayerReference& BlendSpacePlayer, class UBlendSpace* BlendSpace, float BlendTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.BlendSpacePlayerLibrary.SetBlendSpaceWithInertialBlending");
		
		UBlendSpacePlayerLibrary_SetBlendSpaceWithInertialBlending_Params params {};
		params.UpdateContext = UpdateContext;
		params.BlendSpacePlayer = BlendSpacePlayer;
		params.BlendSpace = BlendSpace;
		params.BlendTime = BlendTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A59E40
	 * 		Name   -> Function AnimGraphRuntime.BlendSpacePlayerLibrary.SetBlendSpace
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FBlendSpacePlayerReference                  BlendSpacePlayer                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UBlendSpace*                                 BlendSpace                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FBlendSpacePlayerReference UBlendSpacePlayerLibrary::STATIC_SetBlendSpace(const struct FBlendSpacePlayerReference& BlendSpacePlayer, class UBlendSpace* BlendSpace)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.BlendSpacePlayerLibrary.SetBlendSpace");
		
		UBlendSpacePlayerLibrary_SetBlendSpace_Params params {};
		params.BlendSpacePlayer = BlendSpacePlayer;
		params.BlendSpace = BlendSpace;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A57720
	 * 		Name   -> Function AnimGraphRuntime.BlendSpacePlayerLibrary.GetStartPosition
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FBlendSpacePlayerReference                  BlendSpacePlayer                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	float UBlendSpacePlayerLibrary::STATIC_GetStartPosition(const struct FBlendSpacePlayerReference& BlendSpacePlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.BlendSpacePlayerLibrary.GetStartPosition");
		
		UBlendSpacePlayerLibrary_GetStartPosition_Params params {};
		params.BlendSpacePlayer = BlendSpacePlayer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A570A0
	 * 		Name   -> Function AnimGraphRuntime.BlendSpacePlayerLibrary.GetPosition
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FBlendSpacePlayerReference                  BlendSpacePlayer                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FVector UBlendSpacePlayerLibrary::STATIC_GetPosition(const struct FBlendSpacePlayerReference& BlendSpacePlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.BlendSpacePlayerLibrary.GetPosition");
		
		UBlendSpacePlayerLibrary_GetPosition_Params params {};
		params.BlendSpacePlayer = BlendSpacePlayer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A56E20
	 * 		Name   -> Function AnimGraphRuntime.BlendSpacePlayerLibrary.GetPlayRate
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FBlendSpacePlayerReference                  BlendSpacePlayer                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	float UBlendSpacePlayerLibrary::STATIC_GetPlayRate(const struct FBlendSpacePlayerReference& BlendSpacePlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.BlendSpacePlayerLibrary.GetPlayRate");
		
		UBlendSpacePlayerLibrary_GetPlayRate_Params params {};
		params.BlendSpacePlayer = BlendSpacePlayer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A56BE0
	 * 		Name   -> Function AnimGraphRuntime.BlendSpacePlayerLibrary.GetLoop
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FBlendSpacePlayerReference                  BlendSpacePlayer                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UBlendSpacePlayerLibrary::STATIC_GetLoop(const struct FBlendSpacePlayerReference& BlendSpacePlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.BlendSpacePlayerLibrary.GetLoop");
		
		UBlendSpacePlayerLibrary_GetLoop_Params params {};
		params.BlendSpacePlayer = BlendSpacePlayer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A567E0
	 * 		Name   -> Function AnimGraphRuntime.BlendSpacePlayerLibrary.GetBlendSpace
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FBlendSpacePlayerReference                  BlendSpacePlayer                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UBlendSpace* UBlendSpacePlayerLibrary::STATIC_GetBlendSpace(const struct FBlendSpacePlayerReference& BlendSpacePlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.BlendSpacePlayerLibrary.GetBlendSpace");
		
		UBlendSpacePlayerLibrary_GetBlendSpace_Params params {};
		params.BlendSpacePlayer = BlendSpacePlayer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A54A40
	 * 		Name   -> Function AnimGraphRuntime.BlendSpacePlayerLibrary.ConvertToBlendSpacePlayerPure
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FAnimNodeReference                          Node                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FBlendSpacePlayerReference                  BlendSpacePlayer                                           (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBlendSpacePlayerLibrary::STATIC_ConvertToBlendSpacePlayerPure(const struct FAnimNodeReference& Node, struct FBlendSpacePlayerReference* BlendSpacePlayer, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.BlendSpacePlayerLibrary.ConvertToBlendSpacePlayerPure");
		
		UBlendSpacePlayerLibrary_ConvertToBlendSpacePlayerPure_Params params {};
		params.Node = Node;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BlendSpacePlayer != nullptr)
			*BlendSpacePlayer = params.BlendSpacePlayer;
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A548E0
	 * 		Name   -> Function AnimGraphRuntime.BlendSpacePlayerLibrary.ConvertToBlendSpacePlayer
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FAnimNodeReference                          Node                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EAnimNodeReferenceConversionResult                 Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FBlendSpacePlayerReference UBlendSpacePlayerLibrary::STATIC_ConvertToBlendSpacePlayer(const struct FAnimNodeReference& Node, EAnimNodeReferenceConversionResult* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.BlendSpacePlayerLibrary.ConvertToBlendSpacePlayer");
		
		UBlendSpacePlayerLibrary_ConvertToBlendSpacePlayer_Params params {};
		params.Node = Node;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBlendSpacePlayerLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlendSpacePlayerLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AnimGraphRuntime.BlendSpacePlayerLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A59240
	 * 		Name   -> Function AnimGraphRuntime.KismetAnimationLibrary.K2_TwoBoneIK
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     RootPos                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     JointPos                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     EndPos                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     JointTarget                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Effector                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OutJointPos                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OutEndPos                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAllowStretching                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StartStretchRatio                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxStretchScale                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UKismetAnimationLibrary::STATIC_K2_TwoBoneIK(const struct FVector& RootPos, const struct FVector& JointPos, const struct FVector& EndPos, const struct FVector& JointTarget, const struct FVector& Effector, struct FVector* OutJointPos, struct FVector* OutEndPos, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.KismetAnimationLibrary.K2_TwoBoneIK");
		
		UKismetAnimationLibrary_K2_TwoBoneIK_Params params {};
		params.RootPos = RootPos;
		params.JointPos = JointPos;
		params.EndPos = EndPos;
		params.JointTarget = JointTarget;
		params.Effector = Effector;
		params.bAllowStretching = bAllowStretching;
		params.StartStretchRatio = StartStretchRatio;
		params.MaxStretchScale = MaxStretchScale;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutJointPos != nullptr)
			*OutJointPos = params.OutJointPos;
		if (OutEndPos != nullptr)
			*OutEndPos = params.OutEndPos;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A59220
	 * 		Name   -> Function AnimGraphRuntime.KismetAnimationLibrary.K2_StartProfilingTimer
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UKismetAnimationLibrary::STATIC_K2_StartProfilingTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.KismetAnimationLibrary.K2_StartProfilingTimer");
		
		UKismetAnimationLibrary_K2_StartProfilingTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A58F20
	 * 		Name   -> Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseVectorAndRemap
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              X                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Y                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Z                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              RangeOutMinX                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              RangeOutMaxX                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              RangeOutMinY                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              RangeOutMaxY                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              RangeOutMinZ                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              RangeOutMaxZ                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UKismetAnimationLibrary::STATIC_K2_MakePerlinNoiseVectorAndRemap(float X, float Y, float Z, float RangeOutMinX, float RangeOutMaxX, float RangeOutMinY, float RangeOutMaxY, float RangeOutMinZ, float RangeOutMaxZ)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseVectorAndRemap");
		
		UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Params params {};
		params.X = X;
		params.Y = Y;
		params.Z = Z;
		params.RangeOutMinX = RangeOutMinX;
		params.RangeOutMaxX = RangeOutMaxX;
		params.RangeOutMinY = RangeOutMinY;
		params.RangeOutMaxY = RangeOutMaxY;
		params.RangeOutMinZ = RangeOutMinZ;
		params.RangeOutMaxZ = RangeOutMaxZ;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A58DB0
	 * 		Name   -> Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseAndRemap
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              RangeOutMin                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              RangeOutMax                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UKismetAnimationLibrary::STATIC_K2_MakePerlinNoiseAndRemap(float Value, float RangeOutMin, float RangeOutMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseAndRemap");
		
		UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap_Params params {};
		params.Value = Value;
		params.RangeOutMin = RangeOutMin;
		params.RangeOutMax = RangeOutMax;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A58AB0
	 * 		Name   -> Function AnimGraphRuntime.KismetAnimationLibrary.K2_LookAt
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FTransform                                  CurrentTransform                                           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     TargetPosition                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     LookAtVector                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUseUpVector                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     UpVector                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ClampConeInDegree                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform UKismetAnimationLibrary::STATIC_K2_LookAt(const struct FTransform& CurrentTransform, const struct FVector& TargetPosition, const struct FVector& LookAtVector, bool bUseUpVector, const struct FVector& UpVector, float ClampConeInDegree)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.KismetAnimationLibrary.K2_LookAt");
		
		UKismetAnimationLibrary_K2_LookAt_Params params {};
		params.CurrentTransform = CurrentTransform;
		params.TargetPosition = TargetPosition;
		params.LookAtVector = LookAtVector;
		params.bUseUpVector = bUseUpVector;
		params.UpVector = UpVector;
		params.ClampConeInDegree = ClampConeInDegree;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A589B0
	 * 		Name   -> Function AnimGraphRuntime.KismetAnimationLibrary.K2_EndProfilingTimer
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bLog                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      LogPrefix                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UKismetAnimationLibrary::STATIC_K2_EndProfilingTimer(bool bLog, const class FString& LogPrefix)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.KismetAnimationLibrary.K2_EndProfilingTimer");
		
		UKismetAnimationLibrary_K2_EndProfilingTimer_Params params {};
		params.bLog = bLog;
		params.LogPrefix = LogPrefix;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A58570
	 * 		Name   -> Function AnimGraphRuntime.KismetAnimationLibrary.K2_DistanceBetweenTwoSocketsAndMapRange
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      Component                                                  (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        SocketOrBoneNameA                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ERelativeTransformSpace                            SocketSpaceA                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        SocketOrBoneNameB                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ERelativeTransformSpace                            SocketSpaceB                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRemapRange                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InRangeMin                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InRangeMax                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutRangeMin                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutRangeMax                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UKismetAnimationLibrary::STATIC_K2_DistanceBetweenTwoSocketsAndMapRange(class USkeletalMeshComponent* Component, const class FName& SocketOrBoneNameA, ERelativeTransformSpace SocketSpaceA, const class FName& SocketOrBoneNameB, ERelativeTransformSpace SocketSpaceB, bool bRemapRange, float InRangeMin, float InRangeMax, float OutRangeMin, float OutRangeMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.KismetAnimationLibrary.K2_DistanceBetweenTwoSocketsAndMapRange");
		
		UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Params params {};
		params.Component = Component;
		params.SocketOrBoneNameA = SocketOrBoneNameA;
		params.SocketSpaceA = SocketSpaceA;
		params.SocketOrBoneNameB = SocketOrBoneNameB;
		params.SocketSpaceB = SocketSpaceB;
		params.bRemapRange = bRemapRange;
		params.InRangeMin = InRangeMin;
		params.InRangeMax = InRangeMax;
		params.OutRangeMin = OutRangeMin;
		params.OutRangeMax = OutRangeMax;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A58390
	 * 		Name   -> Function AnimGraphRuntime.KismetAnimationLibrary.K2_DirectionBetweenSockets
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      Component                                                  (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        SocketOrBoneNameFrom                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        SocketOrBoneNameTo                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UKismetAnimationLibrary::STATIC_K2_DirectionBetweenSockets(class USkeletalMeshComponent* Component, const class FName& SocketOrBoneNameFrom, const class FName& SocketOrBoneNameTo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.KismetAnimationLibrary.K2_DirectionBetweenSockets");
		
		UKismetAnimationLibrary_K2_DirectionBetweenSockets_Params params {};
		params.Component = Component;
		params.SocketOrBoneNameFrom = SocketOrBoneNameFrom;
		params.SocketOrBoneNameTo = SocketOrBoneNameTo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A57F40
	 * 		Name   -> Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromSockets
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USkeletalMeshComponent*                      Component                                                  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        SocketOrBoneName                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ReferenceSocketOrBone                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ERelativeTransformSpace                            SocketSpace                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OffsetInBoneSpace                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPositionHistory                            History                                                    (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumberOfSamples                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              VelocityMin                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              VelocityMax                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EEasingFuncType                                    EasingType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRuntimeFloatCurve                          CustomCurve                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	float UKismetAnimationLibrary::STATIC_K2_CalculateVelocityFromSockets(float DeltaSeconds, class USkeletalMeshComponent* Component, const class FName& SocketOrBoneName, const class FName& ReferenceSocketOrBone, ERelativeTransformSpace SocketSpace, const struct FVector& OffsetInBoneSpace, struct FPositionHistory* History, int32_t NumberOfSamples, float VelocityMin, float VelocityMax, EEasingFuncType EasingType, const struct FRuntimeFloatCurve& CustomCurve)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromSockets");
		
		UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		params.Component = Component;
		params.SocketOrBoneName = SocketOrBoneName;
		params.ReferenceSocketOrBone = ReferenceSocketOrBone;
		params.SocketSpace = SocketSpace;
		params.OffsetInBoneSpace = OffsetInBoneSpace;
		params.NumberOfSamples = NumberOfSamples;
		params.VelocityMin = VelocityMin;
		params.VelocityMax = VelocityMax;
		params.EasingType = EasingType;
		params.CustomCurve = CustomCurve;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (History != nullptr)
			*History = params.History;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A57D00
	 * 		Name   -> Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromPositionHistory
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPositionHistory                            History                                                    (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumberOfSamples                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              VelocityMin                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              VelocityMax                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UKismetAnimationLibrary::STATIC_K2_CalculateVelocityFromPositionHistory(float DeltaSeconds, const struct FVector& Position, struct FPositionHistory* History, int32_t NumberOfSamples, float VelocityMin, float VelocityMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromPositionHistory");
		
		UKismetAnimationLibrary_K2_CalculateVelocityFromPositionHistory_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		params.Position = Position;
		params.NumberOfSamples = NumberOfSamples;
		params.VelocityMin = VelocityMin;
		params.VelocityMax = VelocityMax;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (History != nullptr)
			*History = params.History;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A54000
	 * 		Name   -> Function AnimGraphRuntime.KismetAnimationLibrary.CalculateDirection
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     Velocity                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    BaseRotation                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	float UKismetAnimationLibrary::STATIC_CalculateDirection(const struct FVector& Velocity, const struct FRotator& BaseRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.KismetAnimationLibrary.CalculateDirection");
		
		UKismetAnimationLibrary_CalculateDirection_Params params {};
		params.Velocity = Velocity;
		params.BaseRotation = BaseRotation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKismetAnimationLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKismetAnimationLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AnimGraphRuntime.KismetAnimationLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A59C80
	 * 		Name   -> Function AnimGraphRuntime.LayeredBoneBlendLibrary.SetBlendMask
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FAnimUpdateContext                          UpdateContext                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLayeredBoneBlendReference                  LayeredBoneBlend                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PoseIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        BlendMaskName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLayeredBoneBlendReference ULayeredBoneBlendLibrary::STATIC_SetBlendMask(const struct FAnimUpdateContext& UpdateContext, const struct FLayeredBoneBlendReference& LayeredBoneBlend, int32_t PoseIndex, const class FName& BlendMaskName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.LayeredBoneBlendLibrary.SetBlendMask");
		
		ULayeredBoneBlendLibrary_SetBlendMask_Params params {};
		params.UpdateContext = UpdateContext;
		params.LayeredBoneBlend = LayeredBoneBlend;
		params.PoseIndex = PoseIndex;
		params.BlendMaskName = BlendMaskName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A56D50
	 * 		Name   -> Function AnimGraphRuntime.LayeredBoneBlendLibrary.GetNumPoses
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FLayeredBoneBlendReference                  LayeredBoneBlend                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	int32_t ULayeredBoneBlendLibrary::STATIC_GetNumPoses(const struct FLayeredBoneBlendReference& LayeredBoneBlend)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.LayeredBoneBlendLibrary.GetNumPoses");
		
		ULayeredBoneBlendLibrary_GetNumPoses_Params params {};
		params.LayeredBoneBlend = LayeredBoneBlend;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A55090
	 * 		Name   -> Function AnimGraphRuntime.LayeredBoneBlendLibrary.ConvertToLayeredBoneBlend
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FAnimNodeReference                          Node                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EAnimNodeReferenceConversionResult                 Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLayeredBoneBlendReference ULayeredBoneBlendLibrary::STATIC_ConvertToLayeredBoneBlend(const struct FAnimNodeReference& Node, EAnimNodeReferenceConversionResult* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.LayeredBoneBlendLibrary.ConvertToLayeredBoneBlend");
		
		ULayeredBoneBlendLibrary_ConvertToLayeredBoneBlend_Params params {};
		params.Node = Node;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A54F40
	 * 		Name   -> Function AnimGraphRuntime.LayeredBoneBlendLibrary.ConvertToLayeredBlendPerBonePure
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FAnimNodeReference                          Node                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FLayeredBoneBlendReference                  LayeredBoneBlend                                           (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULayeredBoneBlendLibrary::STATIC_ConvertToLayeredBlendPerBonePure(const struct FAnimNodeReference& Node, struct FLayeredBoneBlendReference* LayeredBoneBlend, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.LayeredBoneBlendLibrary.ConvertToLayeredBlendPerBonePure");
		
		ULayeredBoneBlendLibrary_ConvertToLayeredBlendPerBonePure_Params params {};
		params.Node = Node;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LayeredBoneBlend != nullptr)
			*LayeredBoneBlend = params.LayeredBoneBlend;
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULayeredBoneBlendLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULayeredBoneBlendLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AnimGraphRuntime.LayeredBoneBlendLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A579C0
	 * 		Name   -> Function AnimGraphRuntime.LinkedAnimGraphLibrary.HasLinkedAnimInstance
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FLinkedAnimGraphReference                   Node                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool ULinkedAnimGraphLibrary::STATIC_HasLinkedAnimInstance(const struct FLinkedAnimGraphReference& Node)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.LinkedAnimGraphLibrary.HasLinkedAnimInstance");
		
		ULinkedAnimGraphLibrary_HasLinkedAnimInstance_Params params {};
		params.Node = Node;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A56B40
	 * 		Name   -> Function AnimGraphRuntime.LinkedAnimGraphLibrary.GetLinkedAnimInstance
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FLinkedAnimGraphReference                   Node                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UAnimInstance* ULinkedAnimGraphLibrary::STATIC_GetLinkedAnimInstance(const struct FLinkedAnimGraphReference& Node)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.LinkedAnimGraphLibrary.GetLinkedAnimInstance");
		
		ULinkedAnimGraphLibrary_GetLinkedAnimInstance_Params params {};
		params.Node = Node;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A55320
	 * 		Name   -> Function AnimGraphRuntime.LinkedAnimGraphLibrary.ConvertToLinkedAnimGraphPure
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FAnimNodeReference                          Node                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FLinkedAnimGraphReference                   LinkedAnimGraph                                            (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULinkedAnimGraphLibrary::STATIC_ConvertToLinkedAnimGraphPure(const struct FAnimNodeReference& Node, struct FLinkedAnimGraphReference* LinkedAnimGraph, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.LinkedAnimGraphLibrary.ConvertToLinkedAnimGraphPure");
		
		ULinkedAnimGraphLibrary_ConvertToLinkedAnimGraphPure_Params params {};
		params.Node = Node;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LinkedAnimGraph != nullptr)
			*LinkedAnimGraph = params.LinkedAnimGraph;
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A551F0
	 * 		Name   -> Function AnimGraphRuntime.LinkedAnimGraphLibrary.ConvertToLinkedAnimGraph
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FAnimNodeReference                          Node                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EAnimNodeReferenceConversionResult                 Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLinkedAnimGraphReference ULinkedAnimGraphLibrary::STATIC_ConvertToLinkedAnimGraph(const struct FAnimNodeReference& Node, EAnimNodeReferenceConversionResult* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.LinkedAnimGraphLibrary.ConvertToLinkedAnimGraph");
		
		ULinkedAnimGraphLibrary_ConvertToLinkedAnimGraph_Params params {};
		params.Node = Node;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULinkedAnimGraphLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULinkedAnimGraphLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AnimGraphRuntime.LinkedAnimGraphLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A598F0
	 * 		Name   -> Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyEndReceived
	 * 		Flags  -> (Final, Native, Protected, HasOutParms)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBranchingPointNotifyPayload                BranchingPointNotifyPayload                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UPlayMontageCallbackProxy::OnNotifyEndReceived(const class FName& NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyEndReceived");
		
		UPlayMontageCallbackProxy_OnNotifyEndReceived_Params params {};
		params.NotifyName = NotifyName;
		params.BranchingPointNotifyPayload = BranchingPointNotifyPayload;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A597D0
	 * 		Name   -> Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBeginReceived
	 * 		Flags  -> (Final, Native, Protected, HasOutParms)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBranchingPointNotifyPayload                BranchingPointNotifyPayload                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UPlayMontageCallbackProxy::OnNotifyBeginReceived(const class FName& NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBeginReceived");
		
		UPlayMontageCallbackProxy_OnNotifyBeginReceived_Params params {};
		params.NotifyName = NotifyName;
		params.BranchingPointNotifyPayload = BranchingPointNotifyPayload;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A596D0
	 * 		Name   -> Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageEnded
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInterrupted                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayMontageCallbackProxy::OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageEnded");
		
		UPlayMontageCallbackProxy_OnMontageEnded_Params params {};
		params.Montage = Montage;
		params.bInterrupted = bInterrupted;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A595D0
	 * 		Name   -> Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageBlendingOut
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInterrupted                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayMontageCallbackProxy::OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageBlendingOut");
		
		UPlayMontageCallbackProxy_OnMontageBlendingOut_Params params {};
		params.Montage = Montage;
		params.bInterrupted = bInterrupted;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A55EB0
	 * 		Name   -> Function AnimGraphRuntime.PlayMontageCallbackProxy.CreateProxyObjectForPlayMontage
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      InSkeletalMeshComponent                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAnimMontage*                                MontageToPlay                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PlayRate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StartingPosition                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        StartingSection                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UPlayMontageCallbackProxy* UPlayMontageCallbackProxy::STATIC_CreateProxyObjectForPlayMontage(class USkeletalMeshComponent* InSkeletalMeshComponent, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, const class FName& StartingSection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.PlayMontageCallbackProxy.CreateProxyObjectForPlayMontage");
		
		UPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Params params {};
		params.InSkeletalMeshComponent = InSkeletalMeshComponent;
		params.MontageToPlay = MontageToPlay;
		params.PlayRate = PlayRate;
		params.StartingPosition = StartingPosition;
		params.StartingSection = StartingSection;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayMontageCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayMontageCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AnimGraphRuntime.PlayMontageCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A5A860
	 * 		Name   -> Function AnimGraphRuntime.SequenceEvaluatorLibrary.SetSequenceWithInertialBlending
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FAnimUpdateContext                          UpdateContext                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FSequenceEvaluatorReference                 SequenceEvaluator                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UAnimSequenceBase*                           Sequence                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              BlendTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSequenceEvaluatorReference USequenceEvaluatorLibrary::STATIC_SetSequenceWithInertialBlending(const struct FAnimUpdateContext& UpdateContext, const struct FSequenceEvaluatorReference& SequenceEvaluator, class UAnimSequenceBase* Sequence, float BlendTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.SequenceEvaluatorLibrary.SetSequenceWithInertialBlending");
		
		USequenceEvaluatorLibrary_SetSequenceWithInertialBlending_Params params {};
		params.UpdateContext = UpdateContext;
		params.SequenceEvaluator = SequenceEvaluator;
		params.Sequence = Sequence;
		params.BlendTime = BlendTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A5A650
	 * 		Name   -> Function AnimGraphRuntime.SequenceEvaluatorLibrary.SetSequence
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSequenceEvaluatorReference                 SequenceEvaluator                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UAnimSequenceBase*                           Sequence                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSequenceEvaluatorReference USequenceEvaluatorLibrary::STATIC_SetSequence(const struct FSequenceEvaluatorReference& SequenceEvaluator, class UAnimSequenceBase* Sequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.SequenceEvaluatorLibrary.SetSequence");
		
		USequenceEvaluatorLibrary_SetSequence_Params params {};
		params.SequenceEvaluator = SequenceEvaluator;
		params.Sequence = Sequence;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A5A110
	 * 		Name   -> Function AnimGraphRuntime.SequenceEvaluatorLibrary.SetExplicitTime
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSequenceEvaluatorReference                 SequenceEvaluator                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              Time                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSequenceEvaluatorReference USequenceEvaluatorLibrary::STATIC_SetExplicitTime(const struct FSequenceEvaluatorReference& SequenceEvaluator, float Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.SequenceEvaluatorLibrary.SetExplicitTime");
		
		USequenceEvaluatorLibrary_SetExplicitTime_Params params {};
		params.SequenceEvaluator = SequenceEvaluator;
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A57440
	 * 		Name   -> Function AnimGraphRuntime.SequenceEvaluatorLibrary.GetSequence
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FSequenceEvaluatorReference                 SequenceEvaluator                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UAnimSequenceBase* USequenceEvaluatorLibrary::STATIC_GetSequence(const struct FSequenceEvaluatorReference& SequenceEvaluator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.SequenceEvaluatorLibrary.GetSequence");
		
		USequenceEvaluatorLibrary_GetSequence_Params params {};
		params.SequenceEvaluator = SequenceEvaluator;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A563D0
	 * 		Name   -> Function AnimGraphRuntime.SequenceEvaluatorLibrary.GetAccumulatedTime
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FSequenceEvaluatorReference                 SequenceEvaluator                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	float USequenceEvaluatorLibrary::STATIC_GetAccumulatedTime(const struct FSequenceEvaluatorReference& SequenceEvaluator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.SequenceEvaluatorLibrary.GetAccumulatedTime");
		
		USequenceEvaluatorLibrary_GetAccumulatedTime_Params params {};
		params.SequenceEvaluator = SequenceEvaluator;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A55700
	 * 		Name   -> Function AnimGraphRuntime.SequenceEvaluatorLibrary.ConvertToSequenceEvaluatorPure
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FAnimNodeReference                          Node                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FSequenceEvaluatorReference                 SequenceEvaluator                                          (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USequenceEvaluatorLibrary::STATIC_ConvertToSequenceEvaluatorPure(const struct FAnimNodeReference& Node, struct FSequenceEvaluatorReference* SequenceEvaluator, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.SequenceEvaluatorLibrary.ConvertToSequenceEvaluatorPure");
		
		USequenceEvaluatorLibrary_ConvertToSequenceEvaluatorPure_Params params {};
		params.Node = Node;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SequenceEvaluator != nullptr)
			*SequenceEvaluator = params.SequenceEvaluator;
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A555A0
	 * 		Name   -> Function AnimGraphRuntime.SequenceEvaluatorLibrary.ConvertToSequenceEvaluator
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FAnimNodeReference                          Node                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EAnimNodeReferenceConversionResult                 Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSequenceEvaluatorReference USequenceEvaluatorLibrary::STATIC_ConvertToSequenceEvaluator(const struct FAnimNodeReference& Node, EAnimNodeReferenceConversionResult* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.SequenceEvaluatorLibrary.ConvertToSequenceEvaluator");
		
		USequenceEvaluatorLibrary_ConvertToSequenceEvaluator_Params params {};
		params.Node = Node;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A53E60
	 * 		Name   -> Function AnimGraphRuntime.SequenceEvaluatorLibrary.AdvanceTime
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FAnimUpdateContext                          UpdateContext                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FSequenceEvaluatorReference                 SequenceEvaluator                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              PlayRate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSequenceEvaluatorReference USequenceEvaluatorLibrary::STATIC_AdvanceTime(const struct FAnimUpdateContext& UpdateContext, const struct FSequenceEvaluatorReference& SequenceEvaluator, float PlayRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.SequenceEvaluatorLibrary.AdvanceTime");
		
		USequenceEvaluatorLibrary_AdvanceTime_Params params {};
		params.UpdateContext = UpdateContext;
		params.SequenceEvaluator = SequenceEvaluator;
		params.PlayRate = PlayRate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USequenceEvaluatorLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USequenceEvaluatorLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AnimGraphRuntime.SequenceEvaluatorLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A5AC30
	 * 		Name   -> Function AnimGraphRuntime.SequencePlayerLibrary.SetStartPosition
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSequencePlayerReference                    SequencePlayer                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              StartPosition                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSequencePlayerReference USequencePlayerLibrary::STATIC_SetStartPosition(const struct FSequencePlayerReference& SequencePlayer, float StartPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.SequencePlayerLibrary.SetStartPosition");
		
		USequencePlayerLibrary_SetStartPosition_Params params {};
		params.SequencePlayer = SequencePlayer;
		params.StartPosition = StartPosition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A5AA20
	 * 		Name   -> Function AnimGraphRuntime.SequencePlayerLibrary.SetSequenceWithInertialBlending
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FAnimUpdateContext                          UpdateContext                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FSequencePlayerReference                    SequencePlayer                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UAnimSequenceBase*                           Sequence                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              BlendTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSequencePlayerReference USequencePlayerLibrary::STATIC_SetSequenceWithInertialBlending(const struct FAnimUpdateContext& UpdateContext, const struct FSequencePlayerReference& SequencePlayer, class UAnimSequenceBase* Sequence, float BlendTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.SequencePlayerLibrary.SetSequenceWithInertialBlending");
		
		USequencePlayerLibrary_SetSequenceWithInertialBlending_Params params {};
		params.UpdateContext = UpdateContext;
		params.SequencePlayer = SequencePlayer;
		params.Sequence = Sequence;
		params.BlendTime = BlendTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A5A760
	 * 		Name   -> Function AnimGraphRuntime.SequencePlayerLibrary.SetSequence
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSequencePlayerReference                    SequencePlayer                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UAnimSequenceBase*                           Sequence                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSequencePlayerReference USequencePlayerLibrary::STATIC_SetSequence(const struct FSequencePlayerReference& SequencePlayer, class UAnimSequenceBase* Sequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.SequencePlayerLibrary.SetSequence");
		
		USequencePlayerLibrary_SetSequence_Params params {};
		params.SequencePlayer = SequencePlayer;
		params.Sequence = Sequence;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A5A440
	 * 		Name   -> Function AnimGraphRuntime.SequencePlayerLibrary.SetPlayRate
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSequencePlayerReference                    SequencePlayer                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              PlayRate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSequencePlayerReference USequencePlayerLibrary::STATIC_SetPlayRate(const struct FSequencePlayerReference& SequencePlayer, float PlayRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.SequencePlayerLibrary.SetPlayRate");
		
		USequencePlayerLibrary_SetPlayRate_Params params {};
		params.SequencePlayer = SequencePlayer;
		params.PlayRate = PlayRate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A59A10
	 * 		Name   -> Function AnimGraphRuntime.SequencePlayerLibrary.SetAccumulatedTime
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSequencePlayerReference                    SequencePlayer                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              Time                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSequencePlayerReference USequencePlayerLibrary::STATIC_SetAccumulatedTime(const struct FSequencePlayerReference& SequencePlayer, float Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.SequencePlayerLibrary.SetAccumulatedTime");
		
		USequencePlayerLibrary_SetAccumulatedTime_Params params {};
		params.SequencePlayer = SequencePlayer;
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A57800
	 * 		Name   -> Function AnimGraphRuntime.SequencePlayerLibrary.GetStartPosition
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FSequencePlayerReference                    SequencePlayer                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	float USequencePlayerLibrary::STATIC_GetStartPosition(const struct FSequencePlayerReference& SequencePlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.SequencePlayerLibrary.GetStartPosition");
		
		USequencePlayerLibrary_GetStartPosition_Params params {};
		params.SequencePlayer = SequencePlayer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A57680
	 * 		Name   -> Function AnimGraphRuntime.SequencePlayerLibrary.GetSequencePure
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FSequencePlayerReference                    SequencePlayer                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UAnimSequenceBase* USequencePlayerLibrary::STATIC_GetSequencePure(const struct FSequencePlayerReference& SequencePlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.SequencePlayerLibrary.GetSequencePure");
		
		USequencePlayerLibrary_GetSequencePure_Params params {};
		params.SequencePlayer = SequencePlayer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A57520
	 * 		Name   -> Function AnimGraphRuntime.SequencePlayerLibrary.GetSequence
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSequencePlayerReference                    SequencePlayer                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UAnimSequenceBase*                           SequenceBase                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSequencePlayerReference USequencePlayerLibrary::STATIC_GetSequence(const struct FSequencePlayerReference& SequencePlayer, class UAnimSequenceBase** SequenceBase)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.SequencePlayerLibrary.GetSequence");
		
		USequencePlayerLibrary_GetSequence_Params params {};
		params.SequencePlayer = SequencePlayer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SequenceBase != nullptr)
			*SequenceBase = params.SequenceBase;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A56F00
	 * 		Name   -> Function AnimGraphRuntime.SequencePlayerLibrary.GetPlayRate
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FSequencePlayerReference                    SequencePlayer                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	float USequencePlayerLibrary::STATIC_GetPlayRate(const struct FSequencePlayerReference& SequencePlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.SequencePlayerLibrary.GetPlayRate");
		
		USequencePlayerLibrary_GetPlayRate_Params params {};
		params.SequencePlayer = SequencePlayer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A56CB0
	 * 		Name   -> Function AnimGraphRuntime.SequencePlayerLibrary.GetLoopAnimation
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FSequencePlayerReference                    SequencePlayer                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool USequencePlayerLibrary::STATIC_GetLoopAnimation(const struct FSequencePlayerReference& SequencePlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.SequencePlayerLibrary.GetLoopAnimation");
		
		USequencePlayerLibrary_GetLoopAnimation_Params params {};
		params.SequencePlayer = SequencePlayer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A564B0
	 * 		Name   -> Function AnimGraphRuntime.SequencePlayerLibrary.GetAccumulatedTime
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FSequencePlayerReference                    SequencePlayer                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	float USequencePlayerLibrary::STATIC_GetAccumulatedTime(const struct FSequencePlayerReference& SequencePlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.SequencePlayerLibrary.GetAccumulatedTime");
		
		USequencePlayerLibrary_GetAccumulatedTime_Params params {};
		params.SequencePlayer = SequencePlayer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A55980
	 * 		Name   -> Function AnimGraphRuntime.SequencePlayerLibrary.ConvertToSequencePlayerPure
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FAnimNodeReference                          Node                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FSequencePlayerReference                    SequencePlayer                                             (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USequencePlayerLibrary::STATIC_ConvertToSequencePlayerPure(const struct FAnimNodeReference& Node, struct FSequencePlayerReference* SequencePlayer, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.SequencePlayerLibrary.ConvertToSequencePlayerPure");
		
		USequencePlayerLibrary_ConvertToSequencePlayerPure_Params params {};
		params.Node = Node;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SequencePlayer != nullptr)
			*SequencePlayer = params.SequencePlayer;
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A55850
	 * 		Name   -> Function AnimGraphRuntime.SequencePlayerLibrary.ConvertToSequencePlayer
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FAnimNodeReference                          Node                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EAnimNodeReferenceConversionResult                 Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSequencePlayerReference USequencePlayerLibrary::STATIC_ConvertToSequencePlayer(const struct FAnimNodeReference& Node, EAnimNodeReferenceConversionResult* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.SequencePlayerLibrary.ConvertToSequencePlayer");
		
		USequencePlayerLibrary_ConvertToSequencePlayer_Params params {};
		params.Node = Node;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A540F0
	 * 		Name   -> Function AnimGraphRuntime.SequencePlayerLibrary.ComputePlayRateFromDuration
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FSequencePlayerReference                    SequencePlayer                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float USequencePlayerLibrary::STATIC_ComputePlayRateFromDuration(const struct FSequencePlayerReference& SequencePlayer, float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.SequencePlayerLibrary.ComputePlayRateFromDuration");
		
		USequencePlayerLibrary_ComputePlayRateFromDuration_Params params {};
		params.SequencePlayer = SequencePlayer;
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USequencePlayerLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USequencePlayerLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AnimGraphRuntime.SequencePlayerLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USequencerAnimationSupport.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USequencerAnimationSupport::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AnimGraphRuntime.SequencerAnimationSupport");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A59B70
	 * 		Name   -> Function AnimGraphRuntime.SkeletalControlLibrary.SetAlpha
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSkeletalControlReference                   SkeletalControl                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              Alpha                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSkeletalControlReference USkeletalControlLibrary::STATIC_SetAlpha(const struct FSkeletalControlReference& SkeletalControl, float Alpha)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.SkeletalControlLibrary.SetAlpha");
		
		USkeletalControlLibrary_SetAlpha_Params params {};
		params.SkeletalControl = SkeletalControl;
		params.Alpha = Alpha;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A56550
	 * 		Name   -> Function AnimGraphRuntime.SkeletalControlLibrary.GetAlpha
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FSkeletalControlReference                   SkeletalControl                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	float USkeletalControlLibrary::STATIC_GetAlpha(const struct FSkeletalControlReference& SkeletalControl)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.SkeletalControlLibrary.GetAlpha");
		
		USkeletalControlLibrary_GetAlpha_Params params {};
		params.SkeletalControl = SkeletalControl;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A55C30
	 * 		Name   -> Function AnimGraphRuntime.SkeletalControlLibrary.ConvertToSkeletalControlPure
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FAnimNodeReference                          Node                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FSkeletalControlReference                   SkeletalControl                                            (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USkeletalControlLibrary::STATIC_ConvertToSkeletalControlPure(const struct FAnimNodeReference& Node, struct FSkeletalControlReference* SkeletalControl, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.SkeletalControlLibrary.ConvertToSkeletalControlPure");
		
		USkeletalControlLibrary_ConvertToSkeletalControlPure_Params params {};
		params.Node = Node;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SkeletalControl != nullptr)
			*SkeletalControl = params.SkeletalControl;
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x489A55AD0
	 * 		Name   -> Function AnimGraphRuntime.SkeletalControlLibrary.ConvertToSkeletalControl
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FAnimNodeReference                          Node                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EAnimNodeReferenceConversionResult                 Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSkeletalControlReference USkeletalControlLibrary::STATIC_ConvertToSkeletalControl(const struct FAnimNodeReference& Node, EAnimNodeReferenceConversionResult* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.SkeletalControlLibrary.ConvertToSkeletalControl");
		
		USkeletalControlLibrary_ConvertToSkeletalControl_Params params {};
		params.Node = Node;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USkeletalControlLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USkeletalControlLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AnimGraphRuntime.SkeletalControlLibrary");
		return ptr;
	}

}


