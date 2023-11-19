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
	 * 		Name   -> Function Widget_CompassObjectCardinalDirection.Widget_CompassObjectCardinalDirection_C.GetVisibility_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UWidget_CompassObjectCardinalDirection_C::GetVisibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_CompassObjectCardinalDirection.Widget_CompassObjectCardinalDirection_C.GetVisibility_1");
		
		UWidget_CompassObjectCardinalDirection_C_GetVisibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_CompassObjectCardinalDirection.Widget_CompassObjectCardinalDirection_C.OnCompassObjectAddedToPanel
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UCanvasPanelSlot*                            parentSlot                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_CompassObjectCardinalDirection_C::OnCompassObjectAddedToPanel(class UCanvasPanelSlot* parentSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_CompassObjectCardinalDirection.Widget_CompassObjectCardinalDirection_C.OnCompassObjectAddedToPanel");
		
		UWidget_CompassObjectCardinalDirection_C_OnCompassObjectAddedToPanel_Params params {};
		params.parentSlot = parentSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_CompassObjectCardinalDirection.Widget_CompassObjectCardinalDirection_C.ExecuteUbergraph_Widget_CompassObjectCardinalDirection
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_CompassObjectCardinalDirection_C::ExecuteUbergraph_Widget_CompassObjectCardinalDirection(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_CompassObjectCardinalDirection.Widget_CompassObjectCardinalDirection_C.ExecuteUbergraph_Widget_CompassObjectCardinalDirection");
		
		UWidget_CompassObjectCardinalDirection_C_ExecuteUbergraph_Widget_CompassObjectCardinalDirection_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_CompassObjectCardinalDirection_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_CompassObjectCardinalDirection_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_CompassObjectCardinalDirection.Widget_CompassObjectCardinalDirection_C");
		return ptr;
	}

}


