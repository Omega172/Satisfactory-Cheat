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
	 * 		Name   -> Function BPW_MarkerEditor_Stamp.BPW_MarkerEditor_Stamp_C.GetSmartIcon
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            IconID                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_MarkerEditor_Stamp_C::GetSmartIcon(class AActor* Actor, int32_t* IconID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MarkerEditor_Stamp.BPW_MarkerEditor_Stamp_C.GetSmartIcon");
		
		UBPW_MarkerEditor_Stamp_C_GetSmartIcon_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IconID != nullptr)
			*IconID = params.IconID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MarkerEditor_Stamp.BPW_MarkerEditor_Stamp_C.SetMarkerAmount
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_MarkerEditor_Stamp_C::SetMarkerAmount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MarkerEditor_Stamp.BPW_MarkerEditor_Stamp_C.SetMarkerAmount");
		
		UBPW_MarkerEditor_Stamp_C_SetMarkerAmount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MarkerEditor_Stamp.BPW_MarkerEditor_Stamp_C.OnIconUnhovered
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            IconID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_MarkerEditor_Stamp_C::OnIconUnhovered(int32_t IconID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MarkerEditor_Stamp.BPW_MarkerEditor_Stamp_C.OnIconUnhovered");
		
		UBPW_MarkerEditor_Stamp_C_OnIconUnhovered_Params params {};
		params.IconID = IconID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MarkerEditor_Stamp.BPW_MarkerEditor_Stamp_C.OnIconHovered
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            IconID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_MarkerEditor_Stamp_C::OnIconHovered(int32_t IconID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MarkerEditor_Stamp.BPW_MarkerEditor_Stamp_C.OnIconHovered");
		
		UBPW_MarkerEditor_Stamp_C_OnIconHovered_Params params {};
		params.IconID = IconID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MarkerEditor_Stamp.BPW_MarkerEditor_Stamp_C.GenerateIcons
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_MarkerEditor_Stamp_C::GenerateIcons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MarkerEditor_Stamp.BPW_MarkerEditor_Stamp_C.GenerateIcons");
		
		UBPW_MarkerEditor_Stamp_C_GenerateIcons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MarkerEditor_Stamp.BPW_MarkerEditor_Stamp_C.OnIconClicked
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            IconID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_MarkerEditor_Stamp_C::OnIconClicked(int32_t IconID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MarkerEditor_Stamp.BPW_MarkerEditor_Stamp_C.OnIconClicked");
		
		UBPW_MarkerEditor_Stamp_C_OnIconClicked_Params params {};
		params.IconID = IconID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MarkerEditor_Stamp.BPW_MarkerEditor_Stamp_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_MarkerEditor_Stamp_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MarkerEditor_Stamp.BPW_MarkerEditor_Stamp_C.Construct");
		
		UBPW_MarkerEditor_Stamp_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MarkerEditor_Stamp.BPW_MarkerEditor_Stamp_C.BndEvt__BPW_MarkerEditor_Environment_Widget_StandardButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_MarkerEditor_Stamp_C::BndEvt__BPW_MarkerEditor_Environment_Widget_StandardButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MarkerEditor_Stamp.BPW_MarkerEditor_Stamp_C.BndEvt__BPW_MarkerEditor_Environment_Widget_StandardButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UBPW_MarkerEditor_Stamp_C_BndEvt__BPW_MarkerEditor_Environment_Widget_StandardButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MarkerEditor_Stamp.BPW_MarkerEditor_Stamp_C.BndEvt__BPW_MarkerEditor_Environment_mCloseArea_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_MarkerEditor_Stamp_C::BndEvt__BPW_MarkerEditor_Environment_mCloseArea_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MarkerEditor_Stamp.BPW_MarkerEditor_Stamp_C.BndEvt__BPW_MarkerEditor_Environment_mCloseArea_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UBPW_MarkerEditor_Stamp_C_BndEvt__BPW_MarkerEditor_Environment_mCloseArea_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MarkerEditor_Stamp.BPW_MarkerEditor_Stamp_C.BndEvt__BPW_MarkerEditor_Environment_mHighlightMarker_K2Node_ComponentBoundEvent_2_OnStateChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsTrue                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_MarkerEditor_Stamp_C::BndEvt__BPW_MarkerEditor_Environment_mHighlightMarker_K2Node_ComponentBoundEvent_2_OnStateChanged__DelegateSignature(bool IsTrue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MarkerEditor_Stamp.BPW_MarkerEditor_Stamp_C.BndEvt__BPW_MarkerEditor_Environment_mHighlightMarker_K2Node_ComponentBoundEvent_2_OnStateChanged__DelegateSignature");
		
		UBPW_MarkerEditor_Stamp_C_BndEvt__BPW_MarkerEditor_Environment_mHighlightMarker_K2Node_ComponentBoundEvent_2_OnStateChanged__DelegateSignature_Params params {};
		params.IsTrue = IsTrue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MarkerEditor_Stamp.BPW_MarkerEditor_Stamp_C.OnEscapePressed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_MarkerEditor_Stamp_C::OnEscapePressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MarkerEditor_Stamp.BPW_MarkerEditor_Stamp_C.OnEscapePressed");
		
		UBPW_MarkerEditor_Stamp_C_OnEscapePressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MarkerEditor_Stamp.BPW_MarkerEditor_Stamp_C.ExecuteUbergraph_BPW_MarkerEditor_Stamp
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_MarkerEditor_Stamp_C::ExecuteUbergraph_BPW_MarkerEditor_Stamp(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MarkerEditor_Stamp.BPW_MarkerEditor_Stamp_C.ExecuteUbergraph_BPW_MarkerEditor_Stamp");
		
		UBPW_MarkerEditor_Stamp_C_ExecuteUbergraph_BPW_MarkerEditor_Stamp_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_MarkerEditor_Stamp_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_MarkerEditor_Stamp_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_MarkerEditor_Stamp.BPW_MarkerEditor_Stamp_C");
		return ptr;
	}

}


