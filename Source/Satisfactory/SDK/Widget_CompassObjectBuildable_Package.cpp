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
	 * 		Name   -> Function Widget_CompassObjectBuildable.Widget_CompassObjectBuildable_C.UpdateVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_CompassObjectBuildable_C::UpdateVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_CompassObjectBuildable.Widget_CompassObjectBuildable_C.UpdateVisibility");
		
		UWidget_CompassObjectBuildable_C_UpdateVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_CompassObjectBuildable.Widget_CompassObjectBuildable_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_CompassObjectBuildable_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_CompassObjectBuildable.Widget_CompassObjectBuildable_C.Construct");
		
		UWidget_CompassObjectBuildable_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_CompassObjectBuildable.Widget_CompassObjectBuildable_C.OnCompassObjectUpdated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UWidget_CompassObjectBuildable_C::OnCompassObjectUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_CompassObjectBuildable.Widget_CompassObjectBuildable_C.OnCompassObjectUpdated");
		
		UWidget_CompassObjectBuildable_C_OnCompassObjectUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_CompassObjectBuildable.Widget_CompassObjectBuildable_C.OnObjectCentered
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               centered                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_CompassObjectBuildable_C::OnObjectCentered(bool centered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_CompassObjectBuildable.Widget_CompassObjectBuildable_C.OnObjectCentered");
		
		UWidget_CompassObjectBuildable_C_OnObjectCentered_Params params {};
		params.centered = centered;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_CompassObjectBuildable.Widget_CompassObjectBuildable_C.ExecuteUbergraph_Widget_CompassObjectBuildable
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_CompassObjectBuildable_C::ExecuteUbergraph_Widget_CompassObjectBuildable(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_CompassObjectBuildable.Widget_CompassObjectBuildable_C.ExecuteUbergraph_Widget_CompassObjectBuildable");
		
		UWidget_CompassObjectBuildable_C_ExecuteUbergraph_Widget_CompassObjectBuildable_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_CompassObjectBuildable_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_CompassObjectBuildable_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_CompassObjectBuildable.Widget_CompassObjectBuildable_C");
		return ptr;
	}

}


