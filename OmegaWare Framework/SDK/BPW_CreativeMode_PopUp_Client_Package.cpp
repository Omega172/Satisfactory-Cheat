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
	 * 		Name   -> Function BPW_CreativeMode_PopUp_Client.BPW_CreativeMode_PopUp_Client_C.GetShouldOkayBeEnabled
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool UBPW_CreativeMode_PopUp_Client_C::GetShouldOkayBeEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_CreativeMode_PopUp_Client.BPW_CreativeMode_PopUp_Client_C.GetShouldOkayBeEnabled");
		
		UBPW_CreativeMode_PopUp_Client_C_GetShouldOkayBeEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_CreativeMode_PopUp_Client_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_CreativeMode_PopUp_Client_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_CreativeMode_PopUp_Client.BPW_CreativeMode_PopUp_Client_C");
		return ptr;
	}

}


