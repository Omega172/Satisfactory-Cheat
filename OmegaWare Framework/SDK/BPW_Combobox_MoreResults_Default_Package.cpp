﻿/**
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
	 * 		Name   -> Function BPW_Combobox_MoreResults_Default.BPW_Combobox_MoreResults_Default_C.SetText
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_Combobox_MoreResults_Default_C::SetText(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Combobox_MoreResults_Default.BPW_Combobox_MoreResults_Default_C.SetText");
		
		UBPW_Combobox_MoreResults_Default_C_SetText_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_Combobox_MoreResults_Default_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_Combobox_MoreResults_Default_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_Combobox_MoreResults_Default.BPW_Combobox_MoreResults_Default_C");
		return ptr;
	}

}


