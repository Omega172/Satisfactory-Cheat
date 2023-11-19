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
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.DeleteSelectedNodesInternal
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_PhotoModeSequencer_C::DeleteSelectedNodesInternal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.DeleteSelectedNodesInternal");
		
		UBPW_PhotoModeSequencer_C_DeleteSelectedNodesInternal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.UpdateCurrentFrame
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_PhotoModeSequencer_C::UpdateCurrentFrame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.UpdateCurrentFrame");
		
		UBPW_PhotoModeSequencer_C_UpdateCurrentFrame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.MoveToFrame
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FFrameTime                                  FrameTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_PhotoModeSequencer_C::MoveToFrame(const struct FFrameTime& FrameTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.MoveToFrame");
		
		UBPW_PhotoModeSequencer_C_MoveToFrame_Params params {};
		params.FrameTime = FrameTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.SequencerTicked
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              sequenceTimer                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_PhotoModeSequencer_C::SequencerTicked(float sequenceTimer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.SequencerTicked");
		
		UBPW_PhotoModeSequencer_C_SequencerTicked_Params params {};
		params.sequenceTimer = sequenceTimer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.MoveCurrentFrame
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            FramesToMove                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_PhotoModeSequencer_C::MoveCurrentFrame(int32_t FramesToMove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.MoveCurrentFrame");
		
		UBPW_PhotoModeSequencer_C_MoveCurrentFrame_Params params {};
		params.FramesToMove = FramesToMove;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.UpdateInternalValues
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_PhotoModeSequencer_C::UpdateInternalValues()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.UpdateInternalValues");
		
		UBPW_PhotoModeSequencer_C_UpdateInternalValues_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.AddCurrentPosRotFOVSection
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_PhotoModeSequencer_C::AddCurrentPosRotFOVSection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.AddCurrentPosRotFOVSection");
		
		UBPW_PhotoModeSequencer_C_AddCurrentPosRotFOVSection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.AddCurrentRotationSection
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_PhotoModeSequencer_C::AddCurrentRotationSection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.AddCurrentRotationSection");
		
		UBPW_PhotoModeSequencer_C_AddCurrentRotationSection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.AddCurrentLocationSection
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_PhotoModeSequencer_C::AddCurrentLocationSection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.AddCurrentLocationSection");
		
		UBPW_PhotoModeSequencer_C_AddCurrentLocationSection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.AddCurrentFOVSection
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_PhotoModeSequencer_C::AddCurrentFOVSection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.AddCurrentFOVSection");
		
		UBPW_PhotoModeSequencer_C_AddCurrentFOVSection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.EvaluateSingleFrame
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FFrameTime                                  Frame                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_PhotoModeSequencer_C::EvaluateSingleFrame(const struct FFrameTime& Frame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.EvaluateSingleFrame");
		
		UBPW_PhotoModeSequencer_C_EvaluateSingleFrame_Params params {};
		params.Frame = Frame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.UpdateTimeline
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_PhotoModeSequencer_C::UpdateTimeline()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.UpdateTimeline");
		
		UBPW_PhotoModeSequencer_C_UpdateTimeline_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.GetTimelineLength
	 * 		Flags  -> (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Length                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_PhotoModeSequencer_C::GetTimelineLength(int32_t* Length)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.GetTimelineLength");
		
		UBPW_PhotoModeSequencer_C_GetTimelineLength_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Length != nullptr)
			*Length = params.Length;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.UpdateTracks
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_PhotoModeSequencer_C::UpdateTracks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.UpdateTracks");
		
		UBPW_PhotoModeSequencer_C_UpdateTracks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.BndEvt__BPW_PhotoModeSequencerTimeLine_K2Node_ComponentBoundEvent_1_CurrentFrameUpdated__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            newCurrentFrame                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_PhotoModeSequencer_C::BndEvt__BPW_PhotoModeSequencerTimeLine_K2Node_ComponentBoundEvent_1_CurrentFrameUpdated__DelegateSignature(int32_t newCurrentFrame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.BndEvt__BPW_PhotoModeSequencerTimeLine_K2Node_ComponentBoundEvent_1_CurrentFrameUpdated__DelegateSignature");
		
		UBPW_PhotoModeSequencer_C_BndEvt__BPW_PhotoModeSequencerTimeLine_K2Node_ComponentBoundEvent_1_CurrentFrameUpdated__DelegateSignature_Params params {};
		params.newCurrentFrame = newCurrentFrame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.BndEvt__BPW_NumericEntry_CurrentFrame_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		double                                             NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_PhotoModeSequencer_C::BndEvt__BPW_NumericEntry_CurrentFrame_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature(double NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.BndEvt__BPW_NumericEntry_CurrentFrame_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature");
		
		UBPW_PhotoModeSequencer_C_BndEvt__BPW_NumericEntry_CurrentFrame_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.BndEvt__BPW_NumericEntry_SequenceEnd_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		double                                             NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_PhotoModeSequencer_C::BndEvt__BPW_NumericEntry_SequenceEnd_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature(double NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.BndEvt__BPW_NumericEntry_SequenceEnd_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature");
		
		UBPW_PhotoModeSequencer_C_BndEvt__BPW_NumericEntry_SequenceEnd_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.BndEvt__BPW_NumericEntry_SequenceStart_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		double                                             NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_PhotoModeSequencer_C::BndEvt__BPW_NumericEntry_SequenceStart_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature(double NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.BndEvt__BPW_NumericEntry_SequenceStart_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature");
		
		UBPW_PhotoModeSequencer_C_BndEvt__BPW_NumericEntry_SequenceStart_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.BndEvt__Button_SwitchTimeDisplay_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_PhotoModeSequencer_C::BndEvt__Button_SwitchTimeDisplay_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.BndEvt__Button_SwitchTimeDisplay_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UBPW_PhotoModeSequencer_C_BndEvt__Button_SwitchTimeDisplay_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_PhotoModeSequencer_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.Construct");
		
		UBPW_PhotoModeSequencer_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.BndEvt__Button_AddCurrentLocation_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_PhotoModeSequencer_C::BndEvt__Button_AddCurrentLocation_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.BndEvt__Button_AddCurrentLocation_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");
		
		UBPW_PhotoModeSequencer_C_BndEvt__Button_AddCurrentLocation_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.BndEvt__Button_AddCurrentRotation_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_PhotoModeSequencer_C::BndEvt__Button_AddCurrentRotation_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.BndEvt__Button_AddCurrentRotation_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");
		
		UBPW_PhotoModeSequencer_C_BndEvt__Button_AddCurrentRotation_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.BndEvt__Button_AddCurrentFOV_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_PhotoModeSequencer_C::BndEvt__Button_AddCurrentFOV_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.BndEvt__Button_AddCurrentFOV_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");
		
		UBPW_PhotoModeSequencer_C_BndEvt__Button_AddCurrentFOV_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.BndEvt__Button_PlaySequence_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_PhotoModeSequencer_C::BndEvt__Button_PlaySequence_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.BndEvt__Button_PlaySequence_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");
		
		UBPW_PhotoModeSequencer_C_BndEvt__Button_PlaySequence_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.BndEvt__Button_ClearSequence_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_PhotoModeSequencer_C::BndEvt__Button_ClearSequence_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.BndEvt__Button_ClearSequence_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature");
		
		UBPW_PhotoModeSequencer_C_BndEvt__Button_ClearSequence_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_PhotoModeSequencer_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.Destruct");
		
		UBPW_PhotoModeSequencer_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.OnCursorMoved
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UBPW_PhotoModeSequencer_C::OnCursorMoved()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.OnCursorMoved");
		
		UBPW_PhotoModeSequencer_C_OnCursorMoved_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.OnSequencerUpdated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UBPW_PhotoModeSequencer_C::OnSequencerUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.OnSequencerUpdated");
		
		UBPW_PhotoModeSequencer_C_OnSequencerUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.DeleteSelectedNodes
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UBPW_PhotoModeSequencer_C::DeleteSelectedNodes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.DeleteSelectedNodes");
		
		UBPW_PhotoModeSequencer_C_DeleteSelectedNodes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.ExecuteUbergraph_BPW_PhotoModeSequencer
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_PhotoModeSequencer_C::ExecuteUbergraph_BPW_PhotoModeSequencer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.ExecuteUbergraph_BPW_PhotoModeSequencer");
		
		UBPW_PhotoModeSequencer_C_ExecuteUbergraph_BPW_PhotoModeSequencer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_PhotoModeSequencer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_PhotoModeSequencer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C");
		return ptr;
	}

}


