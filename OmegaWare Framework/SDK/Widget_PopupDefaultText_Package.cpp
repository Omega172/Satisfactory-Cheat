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
	 * 		Name   -> Function Widget_PopupDefaultText.Widget_PopupDefaultText_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_PopupDefaultText_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PopupDefaultText.Widget_PopupDefaultText_C.Construct");
		
		UWidget_PopupDefaultText_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_PopupDefaultText.Widget_PopupDefaultText_C.ExecuteUbergraph_Widget_PopupDefaultText
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_PopupDefaultText_C::ExecuteUbergraph_Widget_PopupDefaultText(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PopupDefaultText.Widget_PopupDefaultText_C.ExecuteUbergraph_Widget_PopupDefaultText");
		
		UWidget_PopupDefaultText_C_ExecuteUbergraph_Widget_PopupDefaultText_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_PopupDefaultText_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_PopupDefaultText_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_PopupDefaultText.Widget_PopupDefaultText_C");
		return ptr;
	}

}


