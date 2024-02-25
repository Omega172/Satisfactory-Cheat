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
	 * 		Name   -> Function Widget_LoggingIn.Widget_LoggingIn_C.ExecuteUbergraph_Widget_LoggingIn
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_LoggingIn_C::ExecuteUbergraph_Widget_LoggingIn(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_LoggingIn.Widget_LoggingIn_C.ExecuteUbergraph_Widget_LoggingIn");
		
		UWidget_LoggingIn_C_ExecuteUbergraph_Widget_LoggingIn_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_LoggingIn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_LoggingIn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_LoggingIn.Widget_LoggingIn_C");
		return ptr;
	}

}


