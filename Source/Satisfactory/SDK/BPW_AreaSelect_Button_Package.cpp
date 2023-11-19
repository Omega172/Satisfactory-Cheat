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
	 * 		Name   -> Function BPW_AreaSelect_Button.BPW_AreaSelect_Button_C.SetIsSelected
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               mIsSelected                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_AreaSelect_Button_C::SetIsSelected(bool mIsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_AreaSelect_Button.BPW_AreaSelect_Button_C.SetIsSelected");
		
		UBPW_AreaSelect_Button_C_SetIsSelected_Params params {};
		params.mIsSelected = mIsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_AreaSelect_Button.BPW_AreaSelect_Button_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_AreaSelect_Button_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_AreaSelect_Button.BPW_AreaSelect_Button_C.Construct");
		
		UBPW_AreaSelect_Button_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_AreaSelect_Button.BPW_AreaSelect_Button_C.BndEvt__BPW_AreaSelect_Button_Button_28_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_AreaSelect_Button_C::BndEvt__BPW_AreaSelect_Button_Button_28_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_AreaSelect_Button.BPW_AreaSelect_Button_C.BndEvt__BPW_AreaSelect_Button_Button_28_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UBPW_AreaSelect_Button_C_BndEvt__BPW_AreaSelect_Button_Button_28_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_AreaSelect_Button.BPW_AreaSelect_Button_C.BndEvt__BPW_AreaSelect_Button_Button_28_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_AreaSelect_Button_C::BndEvt__BPW_AreaSelect_Button_Button_28_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_AreaSelect_Button.BPW_AreaSelect_Button_C.BndEvt__BPW_AreaSelect_Button_Button_28_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UBPW_AreaSelect_Button_C_BndEvt__BPW_AreaSelect_Button_Button_28_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_AreaSelect_Button.BPW_AreaSelect_Button_C.Unhovered
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_AreaSelect_Button_C::Unhovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_AreaSelect_Button.BPW_AreaSelect_Button_C.Unhovered");
		
		UBPW_AreaSelect_Button_C_Unhovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_AreaSelect_Button.BPW_AreaSelect_Button_C.OnNoButtonHovered
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_AreaSelect_Button_C::OnNoButtonHovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_AreaSelect_Button.BPW_AreaSelect_Button_C.OnNoButtonHovered");
		
		UBPW_AreaSelect_Button_C_OnNoButtonHovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_AreaSelect_Button.BPW_AreaSelect_Button_C.OnOtherButtonHovered
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_AreaSelect_Button_C::OnOtherButtonHovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_AreaSelect_Button.BPW_AreaSelect_Button_C.OnOtherButtonHovered");
		
		UBPW_AreaSelect_Button_C_OnOtherButtonHovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_AreaSelect_Button.BPW_AreaSelect_Button_C.Hovered
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_AreaSelect_Button_C::Hovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_AreaSelect_Button.BPW_AreaSelect_Button_C.Hovered");
		
		UBPW_AreaSelect_Button_C_Hovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_AreaSelect_Button.BPW_AreaSelect_Button_C.BndEvt__BPW_AreaSelect_Button_Button_28_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_AreaSelect_Button_C::BndEvt__BPW_AreaSelect_Button_Button_28_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_AreaSelect_Button.BPW_AreaSelect_Button_C.BndEvt__BPW_AreaSelect_Button_Button_28_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
		UBPW_AreaSelect_Button_C_BndEvt__BPW_AreaSelect_Button_Button_28_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_AreaSelect_Button.BPW_AreaSelect_Button_C.ExecuteUbergraph_BPW_AreaSelect_Button
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_AreaSelect_Button_C::ExecuteUbergraph_BPW_AreaSelect_Button(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_AreaSelect_Button.BPW_AreaSelect_Button_C.ExecuteUbergraph_BPW_AreaSelect_Button");
		
		UBPW_AreaSelect_Button_C_ExecuteUbergraph_BPW_AreaSelect_Button_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_AreaSelect_Button.BPW_AreaSelect_Button_C.OnUnhovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_AreaSelect_Button_C::OnUnhovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_AreaSelect_Button.BPW_AreaSelect_Button_C.OnUnhovered__DelegateSignature");
		
		UBPW_AreaSelect_Button_C_OnUnhovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_AreaSelect_Button.BPW_AreaSelect_Button_C.OnHovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_AreaSelect_Button_C::OnHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_AreaSelect_Button.BPW_AreaSelect_Button_C.OnHovered__DelegateSignature");
		
		UBPW_AreaSelect_Button_C_OnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_AreaSelect_Button.BPW_AreaSelect_Button_C.OnClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FStartingLocationsDataStruct                StartingLoc                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UBPW_AreaSelect_Button_C::OnClicked__DelegateSignature(const struct FStartingLocationsDataStruct& StartingLoc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_AreaSelect_Button.BPW_AreaSelect_Button_C.OnClicked__DelegateSignature");
		
		UBPW_AreaSelect_Button_C_OnClicked__DelegateSignature_Params params {};
		params.StartingLoc = StartingLoc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_AreaSelect_Button_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_AreaSelect_Button_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_AreaSelect_Button.BPW_AreaSelect_Button_C");
		return ptr;
	}

}


