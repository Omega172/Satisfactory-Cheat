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
	 * 		Name   -> Function BPW_Combobox_Entry_WithIcon.BPW_Combobox_Entry_WithIcon_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Combobox_Entry_WithIcon_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Combobox_Entry_WithIcon.BPW_Combobox_Entry_WithIcon_C.PreConstruct");
		
		UBPW_Combobox_Entry_WithIcon_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Combobox_Entry_WithIcon.BPW_Combobox_Entry_WithIcon_C.OnSelected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Combobox_Entry_WithIcon_C::OnSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Combobox_Entry_WithIcon.BPW_Combobox_Entry_WithIcon_C.OnSelected");
		
		UBPW_Combobox_Entry_WithIcon_C_OnSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Combobox_Entry_WithIcon.BPW_Combobox_Entry_WithIcon_C.OnUnselected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Combobox_Entry_WithIcon_C::OnUnselected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Combobox_Entry_WithIcon.BPW_Combobox_Entry_WithIcon_C.OnUnselected");
		
		UBPW_Combobox_Entry_WithIcon_C_OnUnselected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Combobox_Entry_WithIcon.BPW_Combobox_Entry_WithIcon_C.ExecuteUbergraph_BPW_Combobox_Entry_WithIcon
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Combobox_Entry_WithIcon_C::ExecuteUbergraph_BPW_Combobox_Entry_WithIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Combobox_Entry_WithIcon.BPW_Combobox_Entry_WithIcon_C.ExecuteUbergraph_BPW_Combobox_Entry_WithIcon");
		
		UBPW_Combobox_Entry_WithIcon_C_ExecuteUbergraph_BPW_Combobox_Entry_WithIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_Combobox_Entry_WithIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_Combobox_Entry_WithIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_Combobox_Entry_WithIcon.BPW_Combobox_Entry_WithIcon_C");
		return ptr;
	}

}


