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
	 * 		Name   -> Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.GetLoopTooltip
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class UWidget* UBPW_BoomBox_Player_C::GetLoopTooltip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.GetLoopTooltip");
		
		UBPW_BoomBox_Player_C_GetLoopTooltip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.SetIsLooping
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               mIsLooping                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               mTriggerDelegate                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BoomBox_Player_C::SetIsLooping(bool mIsLooping, bool mTriggerDelegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.SetIsLooping");
		
		UBPW_BoomBox_Player_C_SetIsLooping_Params params {};
		params.mIsLooping = mIsLooping;
		params.mTriggerDelegate = mTriggerDelegate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.SetLoopButtonStyle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsHovered                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BoomBox_Player_C::SetLoopButtonStyle(bool IsHovered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.SetLoopButtonStyle");
		
		UBPW_BoomBox_Player_C_SetLoopButtonStyle_Params params {};
		params.IsHovered = IsHovered;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.IconLoaded
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BoomBox_Player_C::IconLoaded(class UTexture2D* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.IconLoaded");
		
		UBPW_BoomBox_Player_C_IconLoaded_Params params {};
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.SetPickupButtonState
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EBoomBoxPickupButtonState                          mPickupButtonState                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BoomBox_Player_C::SetPickupButtonState(EBoomBoxPickupButtonState mPickupButtonState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.SetPickupButtonState");
		
		UBPW_BoomBox_Player_C_SetPickupButtonState_Params params {};
		params.mPickupButtonState = mPickupButtonState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.SetVolume
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Volume                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BoomBox_Player_C::SetVolume(double Volume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.SetVolume");
		
		UBPW_BoomBox_Player_C_SetVolume_Params params {};
		params.Volume = Volume;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.FormatTime
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Result                                                     (Parm, OutParm)
	 */
	void UBPW_BoomBox_Player_C::FormatTime(double Time, class FText* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.FormatTime");
		
		UBPW_BoomBox_Player_C_FormatTime_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.SetPlaybackPosition
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             CurrentPosition                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             maxDuration                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BoomBox_Player_C::SetPlaybackPosition(double CurrentPosition, double maxDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.SetPlaybackPosition");
		
		UBPW_BoomBox_Player_C_SetPlaybackPosition_Params params {};
		params.CurrentPosition = CurrentPosition;
		params.maxDuration = maxDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.SetCurrentSong
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FSongData                                   currentSong                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BoomBox_Player_C::SetCurrentSong(const struct FSongData& currentSong, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.SetCurrentSong");
		
		UBPW_BoomBox_Player_C_SetCurrentSong_Params params {};
		params.currentSong = currentSong;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.SetPlayButtonStatus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsPlaying                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BoomBox_Player_C::SetPlayButtonStatus(bool IsPlaying)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.SetPlayButtonStatus");
		
		UBPW_BoomBox_Player_C_SetPlayButtonStatus_Params params {};
		params.IsPlaying = IsPlaying;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.SetCurrentTape
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      mCurrentTape                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BoomBox_Player_C::SetCurrentTape(class UClass* mCurrentTape)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.SetCurrentTape");
		
		UBPW_BoomBox_Player_C_SetCurrentTape_Params params {};
		params.mCurrentTape = mCurrentTape;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BoomBox_Player_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.PreConstruct");
		
		UBPW_BoomBox_Player_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.BndEvt__mChangeTape_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_BoomBox_Player_C::BndEvt__mChangeTape_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.BndEvt__mChangeTape_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		UBPW_BoomBox_Player_C_BndEvt__mChangeTape_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.BndEvt__mPlay_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_BoomBox_Player_C::BndEvt__mPlay_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.BndEvt__mPlay_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");
		
		UBPW_BoomBox_Player_C_BndEvt__mPlay_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.BndEvt__mNext_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_BoomBox_Player_C::BndEvt__mNext_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.BndEvt__mNext_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");
		
		UBPW_BoomBox_Player_C_BndEvt__mNext_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.BndEvt__mBack_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_BoomBox_Player_C::BndEvt__mBack_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.BndEvt__mBack_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");
		
		UBPW_BoomBox_Player_C_BndEvt__mBack_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.BndEvt__mClose_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_BoomBox_Player_C::BndEvt__mClose_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.BndEvt__mClose_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UBPW_BoomBox_Player_C_BndEvt__mClose_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.BndEvt__BPW_BoomBox_Player_Slider_219_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BoomBox_Player_C::BndEvt__BPW_BoomBox_Player_Slider_219_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.BndEvt__BPW_BoomBox_Player_Slider_219_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature");
		
		UBPW_BoomBox_Player_C_BndEvt__BPW_BoomBox_Player_Slider_219_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.BndEvt__BPW_BoomBox_Player_mGrab_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_BoomBox_Player_C::BndEvt__BPW_BoomBox_Player_mGrab_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.BndEvt__BPW_BoomBox_Player_mGrab_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature");
		
		UBPW_BoomBox_Player_C_BndEvt__BPW_BoomBox_Player_mGrab_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.BndEvt__BPW_BoomBox_Player_mVolumeSlider_K2Node_ComponentBoundEvent_7_OnMouseCaptureEndEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_BoomBox_Player_C::BndEvt__BPW_BoomBox_Player_mVolumeSlider_K2Node_ComponentBoundEvent_7_OnMouseCaptureEndEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.BndEvt__BPW_BoomBox_Player_mVolumeSlider_K2Node_ComponentBoundEvent_7_OnMouseCaptureEndEvent__DelegateSignature");
		
		UBPW_BoomBox_Player_C_BndEvt__BPW_BoomBox_Player_mVolumeSlider_K2Node_ComponentBoundEvent_7_OnMouseCaptureEndEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.BndEvt__BPW_BoomBox_Player_mVolumeSlider_K2Node_ComponentBoundEvent_8_OnControllerCaptureEndEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_BoomBox_Player_C::BndEvt__BPW_BoomBox_Player_mVolumeSlider_K2Node_ComponentBoundEvent_8_OnControllerCaptureEndEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.BndEvt__BPW_BoomBox_Player_mVolumeSlider_K2Node_ComponentBoundEvent_8_OnControllerCaptureEndEvent__DelegateSignature");
		
		UBPW_BoomBox_Player_C_BndEvt__BPW_BoomBox_Player_mVolumeSlider_K2Node_ComponentBoundEvent_8_OnControllerCaptureEndEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.BndEvt__BPW_BoomBox_Player_mVolumeSlider_K2Node_ComponentBoundEvent_9_OnMouseCaptureBeginEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_BoomBox_Player_C::BndEvt__BPW_BoomBox_Player_mVolumeSlider_K2Node_ComponentBoundEvent_9_OnMouseCaptureBeginEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.BndEvt__BPW_BoomBox_Player_mVolumeSlider_K2Node_ComponentBoundEvent_9_OnMouseCaptureBeginEvent__DelegateSignature");
		
		UBPW_BoomBox_Player_C_BndEvt__BPW_BoomBox_Player_mVolumeSlider_K2Node_ComponentBoundEvent_9_OnMouseCaptureBeginEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.BndEvt__BPW_BoomBox_Player_mVolumeSlider_K2Node_ComponentBoundEvent_10_OnControllerCaptureBeginEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_BoomBox_Player_C::BndEvt__BPW_BoomBox_Player_mVolumeSlider_K2Node_ComponentBoundEvent_10_OnControllerCaptureBeginEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.BndEvt__BPW_BoomBox_Player_mVolumeSlider_K2Node_ComponentBoundEvent_10_OnControllerCaptureBeginEvent__DelegateSignature");
		
		UBPW_BoomBox_Player_C_BndEvt__BPW_BoomBox_Player_mVolumeSlider_K2Node_ComponentBoundEvent_10_OnControllerCaptureBeginEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.BndEvt__BPW_BoomBox_Player_mLoopButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_BoomBox_Player_C::BndEvt__BPW_BoomBox_Player_mLoopButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.BndEvt__BPW_BoomBox_Player_mLoopButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature");
		
		UBPW_BoomBox_Player_C_BndEvt__BPW_BoomBox_Player_mLoopButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.BndEvt__BPW_BoomBox_Player_mLoopButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_BoomBox_Player_C::BndEvt__BPW_BoomBox_Player_mLoopButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.BndEvt__BPW_BoomBox_Player_mLoopButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature");
		
		UBPW_BoomBox_Player_C_BndEvt__BPW_BoomBox_Player_mLoopButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.BndEvt__BPW_BoomBox_Player_mLoopButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_BoomBox_Player_C::BndEvt__BPW_BoomBox_Player_mLoopButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.BndEvt__BPW_BoomBox_Player_mLoopButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature");
		
		UBPW_BoomBox_Player_C_BndEvt__BPW_BoomBox_Player_mLoopButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.ExecuteUbergraph_BPW_BoomBox_Player
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BoomBox_Player_C::ExecuteUbergraph_BPW_BoomBox_Player(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.ExecuteUbergraph_BPW_BoomBox_Player");
		
		UBPW_BoomBox_Player_C_ExecuteUbergraph_BPW_BoomBox_Player_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.OnLoopingChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsLooping                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BoomBox_Player_C::OnLoopingChanged__DelegateSignature(bool IsLooping)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.OnLoopingChanged__DelegateSignature");
		
		UBPW_BoomBox_Player_C_OnLoopingChanged__DelegateSignature_Params params {};
		params.IsLooping = IsLooping;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.OnPickupClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_BoomBox_Player_C::OnPickupClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.OnPickupClicked__DelegateSignature");
		
		UBPW_BoomBox_Player_C_OnPickupClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.OnVolumeChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Volume                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BoomBox_Player_C::OnVolumeChanged__DelegateSignature(double Volume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.OnVolumeChanged__DelegateSignature");
		
		UBPW_BoomBox_Player_C_OnVolumeChanged__DelegateSignature_Params params {};
		params.Volume = Volume;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.OnCloseClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_BoomBox_Player_C::OnCloseClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.OnCloseClicked__DelegateSignature");
		
		UBPW_BoomBox_Player_C_OnCloseClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.OnPreviousClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_BoomBox_Player_C::OnPreviousClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.OnPreviousClicked__DelegateSignature");
		
		UBPW_BoomBox_Player_C_OnPreviousClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.OnNextClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_BoomBox_Player_C::OnNextClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.OnNextClicked__DelegateSignature");
		
		UBPW_BoomBox_Player_C_OnNextClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.OnPlayClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_BoomBox_Player_C::OnPlayClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.OnPlayClicked__DelegateSignature");
		
		UBPW_BoomBox_Player_C_OnPlayClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.OnChangeTapeClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_BoomBox_Player_C::OnChangeTapeClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.OnChangeTapeClicked__DelegateSignature");
		
		UBPW_BoomBox_Player_C_OnChangeTapeClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_BoomBox_Player_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_BoomBox_Player_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_BoomBox_Player.BPW_BoomBox_Player_C");
		return ptr;
	}

}


