/**
 * Name: Satisfactory
 * Version: Early_Access_CL#273254
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_BoomBox_TapeSelect.BPW_BoomBox_TapeSelect_C.HideSongList
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Tape                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BoomBox_TapeSelect_C::HideSongList(class UClass* Tape)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox_TapeSelect.BPW_BoomBox_TapeSelect_C.HideSongList");
		
		UBPW_BoomBox_TapeSelect_C_HideSongList_Params params {};
		params.Tape = Tape;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_BoomBox_TapeSelect.BPW_BoomBox_TapeSelect_C.ShowSongList
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Tape                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BoomBox_TapeSelect_C::ShowSongList(class UClass* Tape)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox_TapeSelect.BPW_BoomBox_TapeSelect_C.ShowSongList");
		
		UBPW_BoomBox_TapeSelect_C_ShowSongList_Params params {};
		params.Tape = Tape;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_BoomBox_TapeSelect.BPW_BoomBox_TapeSelect_C.SetupTapeBindings
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBPW_BoomBox_TapeButton_C*                   BoomBoxTapeButton                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BoomBox_TapeSelect_C::SetupTapeBindings(class UBPW_BoomBox_TapeButton_C* BoomBoxTapeButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox_TapeSelect.BPW_BoomBox_TapeSelect_C.SetupTapeBindings");
		
		UBPW_BoomBox_TapeSelect_C_SetupTapeBindings_Params params {};
		params.BoomBoxTapeButton = BoomBoxTapeButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_BoomBox_TapeSelect.BPW_BoomBox_TapeSelect_C.SetCurrentTape
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Descriptor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BoomBox_TapeSelect_C::SetCurrentTape(class UClass* Descriptor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox_TapeSelect.BPW_BoomBox_TapeSelect_C.SetCurrentTape");
		
		UBPW_BoomBox_TapeSelect_C_SetCurrentTape_Params params {};
		params.Descriptor = Descriptor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_BoomBox_TapeSelect.BPW_BoomBox_TapeSelect_C.OnTapeClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Tape                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BoomBox_TapeSelect_C::OnTapeClicked(class UClass* Tape)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox_TapeSelect.BPW_BoomBox_TapeSelect_C.OnTapeClicked");
		
		UBPW_BoomBox_TapeSelect_C_OnTapeClicked_Params params {};
		params.Tape = Tape;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_BoomBox_TapeSelect.BPW_BoomBox_TapeSelect_C.SetupTapeList
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_BoomBox_TapeSelect_C::SetupTapeList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox_TapeSelect.BPW_BoomBox_TapeSelect_C.SetupTapeList");
		
		UBPW_BoomBox_TapeSelect_C_SetupTapeList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_BoomBox_TapeSelect.BPW_BoomBox_TapeSelect_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_BoomBox_TapeSelect_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox_TapeSelect.BPW_BoomBox_TapeSelect_C.Construct");
		
		UBPW_BoomBox_TapeSelect_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_BoomBox_TapeSelect.BPW_BoomBox_TapeSelect_C.BndEvt__BPW_BoomBox_TapeSelect_Widget_StandardButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_BoomBox_TapeSelect_C::BndEvt__BPW_BoomBox_TapeSelect_Widget_StandardButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox_TapeSelect.BPW_BoomBox_TapeSelect_C.BndEvt__BPW_BoomBox_TapeSelect_Widget_StandardButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UBPW_BoomBox_TapeSelect_C_BndEvt__BPW_BoomBox_TapeSelect_Widget_StandardButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_BoomBox_TapeSelect.BPW_BoomBox_TapeSelect_C.mOnNewTapeUnlocked_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      newTape                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void UBPW_BoomBox_TapeSelect_C::mOnNewTapeUnlocked_Event_1(class UClass* newTape)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox_TapeSelect.BPW_BoomBox_TapeSelect_C.mOnNewTapeUnlocked_Event_1");
		
		UBPW_BoomBox_TapeSelect_C_mOnNewTapeUnlocked_Event_1_Params params {};
		params.newTape = newTape;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_BoomBox_TapeSelect.BPW_BoomBox_TapeSelect_C.ExecuteUbergraph_BPW_BoomBox_TapeSelect
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BoomBox_TapeSelect_C::ExecuteUbergraph_BPW_BoomBox_TapeSelect(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox_TapeSelect.BPW_BoomBox_TapeSelect_C.ExecuteUbergraph_BPW_BoomBox_TapeSelect");
		
		UBPW_BoomBox_TapeSelect_C_ExecuteUbergraph_BPW_BoomBox_TapeSelect_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_BoomBox_TapeSelect.BPW_BoomBox_TapeSelect_C.OnBackToPlayerClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_BoomBox_TapeSelect_C::OnBackToPlayerClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox_TapeSelect.BPW_BoomBox_TapeSelect_C.OnBackToPlayerClicked__DelegateSignature");
		
		UBPW_BoomBox_TapeSelect_C_OnBackToPlayerClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_BoomBox_TapeSelect.BPW_BoomBox_TapeSelect_C.OnTapeSelected__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      tapeData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BoomBox_TapeSelect_C::OnTapeSelected__DelegateSignature(class UClass* tapeData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox_TapeSelect.BPW_BoomBox_TapeSelect_C.OnTapeSelected__DelegateSignature");
		
		UBPW_BoomBox_TapeSelect_C_OnTapeSelected__DelegateSignature_Params params {};
		params.tapeData = tapeData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_BoomBox_TapeSelect_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_BoomBox_TapeSelect_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_BoomBox_TapeSelect.BPW_BoomBox_TapeSelect_C");
		return ptr;
	}

}


