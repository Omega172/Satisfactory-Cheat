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
	 * 		Name   -> Function Widget_AmmoRadialSelector.Widget_AmmoRadialSelector_C.AddAvailableAmmoTypes
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_AmmoRadialSelector_C::AddAvailableAmmoTypes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_AmmoRadialSelector.Widget_AmmoRadialSelector_C.AddAvailableAmmoTypes");
		
		UWidget_AmmoRadialSelector_C_AddAvailableAmmoTypes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_AmmoRadialSelector.Widget_AmmoRadialSelector_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_AmmoRadialSelector_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_AmmoRadialSelector.Widget_AmmoRadialSelector_C.Construct");
		
		UWidget_AmmoRadialSelector_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_AmmoRadialSelector.Widget_AmmoRadialSelector_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_AmmoRadialSelector_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_AmmoRadialSelector.Widget_AmmoRadialSelector_C.Destruct");
		
		UWidget_AmmoRadialSelector_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_AmmoRadialSelector.Widget_AmmoRadialSelector_C.ExecuteUbergraph_Widget_AmmoRadialSelector
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_AmmoRadialSelector_C::ExecuteUbergraph_Widget_AmmoRadialSelector(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_AmmoRadialSelector.Widget_AmmoRadialSelector_C.ExecuteUbergraph_Widget_AmmoRadialSelector");
		
		UWidget_AmmoRadialSelector_C_ExecuteUbergraph_Widget_AmmoRadialSelector_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_AmmoRadialSelector_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_AmmoRadialSelector_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_AmmoRadialSelector.Widget_AmmoRadialSelector_C");
		return ptr;
	}

}


