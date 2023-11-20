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
	 * 		Name   -> Function BPW_PhotoModeSequencerTimeLine.BPW_PhotoModeSequencerTimeLine_C.UpdatePositionMarkerAndText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_PhotoModeSequencerTimeLine_C::UpdatePositionMarkerAndText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PhotoModeSequencerTimeLine.BPW_PhotoModeSequencerTimeLine_C.UpdatePositionMarkerAndText");
		
		UBPW_PhotoModeSequencerTimeLine_C_UpdatePositionMarkerAndText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PhotoModeSequencerTimeLine.BPW_PhotoModeSequencerTimeLine_C.SetCurrentSelectedFrame
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FFrameTime                                  FrameTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_PhotoModeSequencerTimeLine_C::SetCurrentSelectedFrame(const struct FFrameTime& FrameTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PhotoModeSequencerTimeLine.BPW_PhotoModeSequencerTimeLine_C.SetCurrentSelectedFrame");
		
		UBPW_PhotoModeSequencerTimeLine_C_SetCurrentSelectedFrame_Params params {};
		params.FrameTime = FrameTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PhotoModeSequencerTimeLine.BPW_PhotoModeSequencerTimeLine_C.GetMarkerText
	 * 		Flags  -> (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            FrameCount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FText UBPW_PhotoModeSequencerTimeLine_C::GetMarkerText(int32_t FrameCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PhotoModeSequencerTimeLine.BPW_PhotoModeSequencerTimeLine_C.GetMarkerText");
		
		UBPW_PhotoModeSequencerTimeLine_C_GetMarkerText_Params params {};
		params.FrameCount = FrameCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PhotoModeSequencerTimeLine.BPW_PhotoModeSequencerTimeLine_C.UpdateMarkers
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_PhotoModeSequencerTimeLine_C::UpdateMarkers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PhotoModeSequencerTimeLine.BPW_PhotoModeSequencerTimeLine_C.UpdateMarkers");
		
		UBPW_PhotoModeSequencerTimeLine_C_UpdateMarkers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PhotoModeSequencerTimeLine.BPW_PhotoModeSequencerTimeLine_C.UpdateSlider
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_PhotoModeSequencerTimeLine_C::UpdateSlider()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PhotoModeSequencerTimeLine.BPW_PhotoModeSequencerTimeLine_C.UpdateSlider");
		
		UBPW_PhotoModeSequencerTimeLine_C_UpdateSlider_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PhotoModeSequencerTimeLine.BPW_PhotoModeSequencerTimeLine_C.UpdateTimeline
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NumFrames                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ShowTimeInFrames                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_PhotoModeSequencerTimeLine_C::UpdateTimeline(int32_t NumFrames, bool ShowTimeInFrames)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PhotoModeSequencerTimeLine.BPW_PhotoModeSequencerTimeLine_C.UpdateTimeline");
		
		UBPW_PhotoModeSequencerTimeLine_C_UpdateTimeline_Params params {};
		params.NumFrames = NumFrames;
		params.ShowTimeInFrames = ShowTimeInFrames;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PhotoModeSequencerTimeLine.BPW_PhotoModeSequencerTimeLine_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_PhotoModeSequencerTimeLine_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PhotoModeSequencerTimeLine.BPW_PhotoModeSequencerTimeLine_C.PreConstruct");
		
		UBPW_PhotoModeSequencerTimeLine_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PhotoModeSequencerTimeLine.BPW_PhotoModeSequencerTimeLine_C.BndEvt__Slider_68_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_PhotoModeSequencerTimeLine_C::BndEvt__Slider_68_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PhotoModeSequencerTimeLine.BPW_PhotoModeSequencerTimeLine_C.BndEvt__Slider_68_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature");
		
		UBPW_PhotoModeSequencerTimeLine_C_BndEvt__Slider_68_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PhotoModeSequencerTimeLine.BPW_PhotoModeSequencerTimeLine_C.BndEvt__mSlider_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_PhotoModeSequencerTimeLine_C::BndEvt__mSlider_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PhotoModeSequencerTimeLine.BPW_PhotoModeSequencerTimeLine_C.BndEvt__mSlider_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature");
		
		UBPW_PhotoModeSequencerTimeLine_C_BndEvt__mSlider_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PhotoModeSequencerTimeLine.BPW_PhotoModeSequencerTimeLine_C.ExecuteUbergraph_BPW_PhotoModeSequencerTimeLine
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_PhotoModeSequencerTimeLine_C::ExecuteUbergraph_BPW_PhotoModeSequencerTimeLine(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PhotoModeSequencerTimeLine.BPW_PhotoModeSequencerTimeLine_C.ExecuteUbergraph_BPW_PhotoModeSequencerTimeLine");
		
		UBPW_PhotoModeSequencerTimeLine_C_ExecuteUbergraph_BPW_PhotoModeSequencerTimeLine_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PhotoModeSequencerTimeLine.BPW_PhotoModeSequencerTimeLine_C.CurrentFrameUpdated__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            newCurrentFrame                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_PhotoModeSequencerTimeLine_C::CurrentFrameUpdated__DelegateSignature(int32_t newCurrentFrame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PhotoModeSequencerTimeLine.BPW_PhotoModeSequencerTimeLine_C.CurrentFrameUpdated__DelegateSignature");
		
		UBPW_PhotoModeSequencerTimeLine_C_CurrentFrameUpdated__DelegateSignature_Params params {};
		params.newCurrentFrame = newCurrentFrame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_PhotoModeSequencerTimeLine_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_PhotoModeSequencerTimeLine_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_PhotoModeSequencerTimeLine.BPW_PhotoModeSequencerTimeLine_C");
		return ptr;
	}

}


