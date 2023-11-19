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
	 * 		Name   -> Function BPW_BoomBox.BPW_BoomBox_C.SetPlayButtonStatus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               mIsPlaying                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BoomBox_C::SetPlayButtonStatus(bool mIsPlaying)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox.BPW_BoomBox_C.SetPlayButtonStatus");
		
		UBPW_BoomBox_C_SetPlayButtonStatus_Params params {};
		params.mIsPlaying = mIsPlaying;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BoomBox.BPW_BoomBox_C.TogglePlay
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_BoomBox_C::TogglePlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox.BPW_BoomBox_C.TogglePlay");
		
		UBPW_BoomBox_C_TogglePlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BoomBox.BPW_BoomBox_C.SetCurrentTape
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      mCurrentTape                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BoomBox_C::SetCurrentTape(class UClass* mCurrentTape)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox.BPW_BoomBox_C.SetCurrentTape");
		
		UBPW_BoomBox_C_SetCurrentTape_Params params {};
		params.mCurrentTape = mCurrentTape;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BoomBox.BPW_BoomBox_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_BoomBox_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox.BPW_BoomBox_C.Construct");
		
		UBPW_BoomBox_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BoomBox.BPW_BoomBox_C.BndEvt__BPW_BoomBox_TapeSelect_K2Node_ComponentBoundEvent_0_OnTapeSelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      tapeData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BoomBox_C::BndEvt__BPW_BoomBox_TapeSelect_K2Node_ComponentBoundEvent_0_OnTapeSelected__DelegateSignature(class UClass* tapeData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox.BPW_BoomBox_C.BndEvt__BPW_BoomBox_TapeSelect_K2Node_ComponentBoundEvent_0_OnTapeSelected__DelegateSignature");
		
		UBPW_BoomBox_C_BndEvt__BPW_BoomBox_TapeSelect_K2Node_ComponentBoundEvent_0_OnTapeSelected__DelegateSignature_Params params {};
		params.tapeData = tapeData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BoomBox.BPW_BoomBox_C.BndEvt__BPW_BoomBox_Player_K2Node_ComponentBoundEvent_1_OnChangeTapeClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_BoomBox_C::BndEvt__BPW_BoomBox_Player_K2Node_ComponentBoundEvent_1_OnChangeTapeClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox.BPW_BoomBox_C.BndEvt__BPW_BoomBox_Player_K2Node_ComponentBoundEvent_1_OnChangeTapeClicked__DelegateSignature");
		
		UBPW_BoomBox_C_BndEvt__BPW_BoomBox_Player_K2Node_ComponentBoundEvent_1_OnChangeTapeClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BoomBox.BPW_BoomBox_C.BndEvt__BPW_BoomBox_Player_K2Node_ComponentBoundEvent_2_OnPlayClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_BoomBox_C::BndEvt__BPW_BoomBox_Player_K2Node_ComponentBoundEvent_2_OnPlayClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox.BPW_BoomBox_C.BndEvt__BPW_BoomBox_Player_K2Node_ComponentBoundEvent_2_OnPlayClicked__DelegateSignature");
		
		UBPW_BoomBox_C_BndEvt__BPW_BoomBox_Player_K2Node_ComponentBoundEvent_2_OnPlayClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BoomBox.BPW_BoomBox_C.BndEvt__BPW_BoomBox_Player_K2Node_ComponentBoundEvent_3_OnNextClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_BoomBox_C::BndEvt__BPW_BoomBox_Player_K2Node_ComponentBoundEvent_3_OnNextClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox.BPW_BoomBox_C.BndEvt__BPW_BoomBox_Player_K2Node_ComponentBoundEvent_3_OnNextClicked__DelegateSignature");
		
		UBPW_BoomBox_C_BndEvt__BPW_BoomBox_Player_K2Node_ComponentBoundEvent_3_OnNextClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BoomBox.BPW_BoomBox_C.BndEvt__BPW_BoomBox_Player_K2Node_ComponentBoundEvent_4_OnPreviousClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_BoomBox_C::BndEvt__BPW_BoomBox_Player_K2Node_ComponentBoundEvent_4_OnPreviousClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox.BPW_BoomBox_C.BndEvt__BPW_BoomBox_Player_K2Node_ComponentBoundEvent_4_OnPreviousClicked__DelegateSignature");
		
		UBPW_BoomBox_C_BndEvt__BPW_BoomBox_Player_K2Node_ComponentBoundEvent_4_OnPreviousClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BoomBox.BPW_BoomBox_C.BndEvt__BPW_BoomBox_Player_K2Node_ComponentBoundEvent_5_OnCloseClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_BoomBox_C::BndEvt__BPW_BoomBox_Player_K2Node_ComponentBoundEvent_5_OnCloseClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox.BPW_BoomBox_C.BndEvt__BPW_BoomBox_Player_K2Node_ComponentBoundEvent_5_OnCloseClicked__DelegateSignature");
		
		UBPW_BoomBox_C_BndEvt__BPW_BoomBox_Player_K2Node_ComponentBoundEvent_5_OnCloseClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BoomBox.BPW_BoomBox_C.CurrentSongChanged
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FSongData                                   currentSong                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BoomBox_C::CurrentSongChanged(const struct FSongData& currentSong, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox.BPW_BoomBox_C.CurrentSongChanged");
		
		UBPW_BoomBox_C_CurrentSongChanged_Params params {};
		params.currentSong = currentSong;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BoomBox.BPW_BoomBox_C.CurrentTapeChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      currentTape                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void UBPW_BoomBox_C::CurrentTapeChanged(class UClass* currentTape)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox.BPW_BoomBox_C.CurrentTapeChanged");
		
		UBPW_BoomBox_C_CurrentTapeChanged_Params params {};
		params.currentTape = currentTape;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BoomBox.BPW_BoomBox_C.PlaybackPositionUpdate
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              CurrentPosition                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TotalDuration                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BoomBox_C::PlaybackPositionUpdate(float CurrentPosition, float TotalDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox.BPW_BoomBox_C.PlaybackPositionUpdate");
		
		UBPW_BoomBox_C_PlaybackPositionUpdate_Params params {};
		params.CurrentPosition = CurrentPosition;
		params.TotalDuration = TotalDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BoomBox.BPW_BoomBox_C.PlaybackStateChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BoomBox_C::PlaybackStateChanged(int32_t NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox.BPW_BoomBox_C.PlaybackStateChanged");
		
		UBPW_BoomBox_C_PlaybackStateChanged_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BoomBox.BPW_BoomBox_C.BndEvt__BPW_BoomBox_BPW_BoomBox_TapeSelect_K2Node_ComponentBoundEvent_6_OnBackToPlayerClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_BoomBox_C::BndEvt__BPW_BoomBox_BPW_BoomBox_TapeSelect_K2Node_ComponentBoundEvent_6_OnBackToPlayerClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox.BPW_BoomBox_C.BndEvt__BPW_BoomBox_BPW_BoomBox_TapeSelect_K2Node_ComponentBoundEvent_6_OnBackToPlayerClicked__DelegateSignature");
		
		UBPW_BoomBox_C_BndEvt__BPW_BoomBox_BPW_BoomBox_TapeSelect_K2Node_ComponentBoundEvent_6_OnBackToPlayerClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BoomBox.BPW_BoomBox_C.AudioVolumeChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Volume                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BoomBox_C::AudioVolumeChanged(float Volume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox.BPW_BoomBox_C.AudioVolumeChanged");
		
		UBPW_BoomBox_C_AudioVolumeChanged_Params params {};
		params.Volume = Volume;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BoomBox.BPW_BoomBox_C.BndEvt__BPW_BoomBox_BPW_BoomBox_Player_K2Node_ComponentBoundEvent_7_OnVolumeChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		double                                             Volume                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BoomBox_C::BndEvt__BPW_BoomBox_BPW_BoomBox_Player_K2Node_ComponentBoundEvent_7_OnVolumeChanged__DelegateSignature(double Volume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox.BPW_BoomBox_C.BndEvt__BPW_BoomBox_BPW_BoomBox_Player_K2Node_ComponentBoundEvent_7_OnVolumeChanged__DelegateSignature");
		
		UBPW_BoomBox_C_BndEvt__BPW_BoomBox_BPW_BoomBox_Player_K2Node_ComponentBoundEvent_7_OnVolumeChanged__DelegateSignature_Params params {};
		params.Volume = Volume;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BoomBox.BPW_BoomBox_C.BndEvt__BPW_BoomBox_BPW_BoomBox_Player_K2Node_ComponentBoundEvent_8_OnPickupClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_BoomBox_C::BndEvt__BPW_BoomBox_BPW_BoomBox_Player_K2Node_ComponentBoundEvent_8_OnPickupClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox.BPW_BoomBox_C.BndEvt__BPW_BoomBox_BPW_BoomBox_Player_K2Node_ComponentBoundEvent_8_OnPickupClicked__DelegateSignature");
		
		UBPW_BoomBox_C_BndEvt__BPW_BoomBox_BPW_BoomBox_Player_K2Node_ComponentBoundEvent_8_OnPickupClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BoomBox.BPW_BoomBox_C.RepeatModeChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EBoomBoxRepeatMode                                 NewMode                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BoomBox_C::RepeatModeChanged(EBoomBoxRepeatMode NewMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox.BPW_BoomBox_C.RepeatModeChanged");
		
		UBPW_BoomBox_C_RepeatModeChanged_Params params {};
		params.NewMode = NewMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BoomBox.BPW_BoomBox_C.BndEvt__BPW_BoomBox_BPW_BoomBox_Player_K2Node_ComponentBoundEvent_9_OnLoopingChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsLooping                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BoomBox_C::BndEvt__BPW_BoomBox_BPW_BoomBox_Player_K2Node_ComponentBoundEvent_9_OnLoopingChanged__DelegateSignature(bool IsLooping)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox.BPW_BoomBox_C.BndEvt__BPW_BoomBox_BPW_BoomBox_Player_K2Node_ComponentBoundEvent_9_OnLoopingChanged__DelegateSignature");
		
		UBPW_BoomBox_C_BndEvt__BPW_BoomBox_BPW_BoomBox_Player_K2Node_ComponentBoundEvent_9_OnLoopingChanged__DelegateSignature_Params params {};
		params.IsLooping = IsLooping;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BoomBox.BPW_BoomBox_C.BoomBoxModeChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EBoomBoxMode                                       NewMode                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BoomBox_C::BoomBoxModeChanged(EBoomBoxMode NewMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox.BPW_BoomBox_C.BoomBoxModeChanged");
		
		UBPW_BoomBox_C_BoomBoxModeChanged_Params params {};
		params.NewMode = NewMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BoomBox.BPW_BoomBox_C.ExecuteUbergraph_BPW_BoomBox
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BoomBox_C::ExecuteUbergraph_BPW_BoomBox(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox.BPW_BoomBox_C.ExecuteUbergraph_BPW_BoomBox");
		
		UBPW_BoomBox_C_ExecuteUbergraph_BPW_BoomBox_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_BoomBox_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_BoomBox_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_BoomBox.BPW_BoomBox_C");
		return ptr;
	}

}


