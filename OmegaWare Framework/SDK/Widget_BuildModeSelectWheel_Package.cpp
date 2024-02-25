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
	 * 		Name   -> Function Widget_BuildModeSelectWheel.Widget_BuildModeSelectWheel_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_BuildModeSelectWheel_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildModeSelectWheel.Widget_BuildModeSelectWheel_C.Construct");
		
		UWidget_BuildModeSelectWheel_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildModeSelectWheel.Widget_BuildModeSelectWheel_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_BuildModeSelectWheel_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildModeSelectWheel.Widget_BuildModeSelectWheel_C.Destruct");
		
		UWidget_BuildModeSelectWheel_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildModeSelectWheel.Widget_BuildModeSelectWheel_C.ExecuteUbergraph_Widget_BuildModeSelectWheel
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildModeSelectWheel_C::ExecuteUbergraph_Widget_BuildModeSelectWheel(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildModeSelectWheel.Widget_BuildModeSelectWheel_C.ExecuteUbergraph_Widget_BuildModeSelectWheel");
		
		UWidget_BuildModeSelectWheel_C_ExecuteUbergraph_Widget_BuildModeSelectWheel_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_BuildModeSelectWheel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_BuildModeSelectWheel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_BuildModeSelectWheel.Widget_BuildModeSelectWheel_C");
		return ptr;
	}

}


