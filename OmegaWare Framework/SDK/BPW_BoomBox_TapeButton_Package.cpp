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
	 * 		Name   -> Function BPW_BoomBox_TapeButton.BPW_BoomBox_TapeButton_C.IconLoaded
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BoomBox_TapeButton_C::IconLoaded(class UTexture2D* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox_TapeButton.BPW_BoomBox_TapeButton_C.IconLoaded");
		
		UBPW_BoomBox_TapeButton_C_IconLoaded_Params params {};
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_BoomBox_TapeButton.BPW_BoomBox_TapeButton_C.SetTape
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      mTape                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BoomBox_TapeButton_C::SetTape(class UClass* mTape)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox_TapeButton.BPW_BoomBox_TapeButton_C.SetTape");
		
		UBPW_BoomBox_TapeButton_C_SetTape_Params params {};
		params.mTape = mTape;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_BoomBox_TapeButton.BPW_BoomBox_TapeButton_C.SetIsSelected
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               mIsSelected                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BoomBox_TapeButton_C::SetIsSelected(bool mIsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox_TapeButton.BPW_BoomBox_TapeButton_C.SetIsSelected");
		
		UBPW_BoomBox_TapeButton_C_SetIsSelected_Params params {};
		params.mIsSelected = mIsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_BoomBox_TapeButton.BPW_BoomBox_TapeButton_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BoomBox_TapeButton_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox_TapeButton.BPW_BoomBox_TapeButton_C.PreConstruct");
		
		UBPW_BoomBox_TapeButton_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_BoomBox_TapeButton.BPW_BoomBox_TapeButton_C.BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_BoomBox_TapeButton_C::BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox_TapeButton.BPW_BoomBox_TapeButton_C.BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UBPW_BoomBox_TapeButton_C_BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_BoomBox_TapeButton.BPW_BoomBox_TapeButton_C.BndEvt__BPW_BoomBox_TapeButton_mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_BoomBox_TapeButton_C::BndEvt__BPW_BoomBox_TapeButton_mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox_TapeButton.BPW_BoomBox_TapeButton_C.BndEvt__BPW_BoomBox_TapeButton_mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UBPW_BoomBox_TapeButton_C_BndEvt__BPW_BoomBox_TapeButton_mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_BoomBox_TapeButton.BPW_BoomBox_TapeButton_C.BndEvt__BPW_BoomBox_TapeButton_mButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_BoomBox_TapeButton_C::BndEvt__BPW_BoomBox_TapeButton_mButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox_TapeButton.BPW_BoomBox_TapeButton_C.BndEvt__BPW_BoomBox_TapeButton_mButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UBPW_BoomBox_TapeButton_C_BndEvt__BPW_BoomBox_TapeButton_mButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_BoomBox_TapeButton.BPW_BoomBox_TapeButton_C.ExecuteUbergraph_BPW_BoomBox_TapeButton
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BoomBox_TapeButton_C::ExecuteUbergraph_BPW_BoomBox_TapeButton(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox_TapeButton.BPW_BoomBox_TapeButton_C.ExecuteUbergraph_BPW_BoomBox_TapeButton");
		
		UBPW_BoomBox_TapeButton_C_ExecuteUbergraph_BPW_BoomBox_TapeButton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_BoomBox_TapeButton.BPW_BoomBox_TapeButton_C.OnSongsUnhovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Tape                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BoomBox_TapeButton_C::OnSongsUnhovered__DelegateSignature(class UClass* Tape)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox_TapeButton.BPW_BoomBox_TapeButton_C.OnSongsUnhovered__DelegateSignature");
		
		UBPW_BoomBox_TapeButton_C_OnSongsUnhovered__DelegateSignature_Params params {};
		params.Tape = Tape;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_BoomBox_TapeButton.BPW_BoomBox_TapeButton_C.OnSongsHovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Tape                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BoomBox_TapeButton_C::OnSongsHovered__DelegateSignature(class UClass* Tape)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox_TapeButton.BPW_BoomBox_TapeButton_C.OnSongsHovered__DelegateSignature");
		
		UBPW_BoomBox_TapeButton_C_OnSongsHovered__DelegateSignature_Params params {};
		params.Tape = Tape;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_BoomBox_TapeButton.BPW_BoomBox_TapeButton_C.OnClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Descriptor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BoomBox_TapeButton_C::OnClicked__DelegateSignature(class UClass* Descriptor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BoomBox_TapeButton.BPW_BoomBox_TapeButton_C.OnClicked__DelegateSignature");
		
		UBPW_BoomBox_TapeButton_C_OnClicked__DelegateSignature_Params params {};
		params.Descriptor = Descriptor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_BoomBox_TapeButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_BoomBox_TapeButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_BoomBox_TapeButton.BPW_BoomBox_TapeButton_C");
		return ptr;
	}

}


