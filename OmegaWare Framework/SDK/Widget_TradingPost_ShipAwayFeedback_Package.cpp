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
	 * 		Name   -> Function Widget_TradingPost_ShipAwayFeedback.Widget_TradingPost_ShipAwayFeedback_C.GetSchematicTitle
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UWidget_TradingPost_ShipAwayFeedback_C::GetSchematicTitle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TradingPost_ShipAwayFeedback.Widget_TradingPost_ShipAwayFeedback_C.GetSchematicTitle");
		
		UWidget_TradingPost_ShipAwayFeedback_C_GetSchematicTitle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TradingPost_ShipAwayFeedback.Widget_TradingPost_ShipAwayFeedback_C.GetScematicIcon
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FSlateBrush UWidget_TradingPost_ShipAwayFeedback_C::GetScematicIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TradingPost_ShipAwayFeedback.Widget_TradingPost_ShipAwayFeedback_C.GetScematicIcon");
		
		UWidget_TradingPost_ShipAwayFeedback_C_GetScematicIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TradingPost_ShipAwayFeedback.Widget_TradingPost_ShipAwayFeedback_C.GetShipTimerText
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UWidget_TradingPost_ShipAwayFeedback_C::GetShipTimerText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TradingPost_ShipAwayFeedback.Widget_TradingPost_ShipAwayFeedback_C.GetShipTimerText");
		
		UWidget_TradingPost_ShipAwayFeedback_C_GetShipTimerText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TradingPost_ShipAwayFeedback.Widget_TradingPost_ShipAwayFeedback_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_TradingPost_ShipAwayFeedback_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TradingPost_ShipAwayFeedback.Widget_TradingPost_ShipAwayFeedback_C.Construct");
		
		UWidget_TradingPost_ShipAwayFeedback_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TradingPost_ShipAwayFeedback.Widget_TradingPost_ShipAwayFeedback_C.ExecuteUbergraph_Widget_TradingPost_ShipAwayFeedback
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_TradingPost_ShipAwayFeedback_C::ExecuteUbergraph_Widget_TradingPost_ShipAwayFeedback(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TradingPost_ShipAwayFeedback.Widget_TradingPost_ShipAwayFeedback_C.ExecuteUbergraph_Widget_TradingPost_ShipAwayFeedback");
		
		UWidget_TradingPost_ShipAwayFeedback_C_ExecuteUbergraph_Widget_TradingPost_ShipAwayFeedback_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_TradingPost_ShipAwayFeedback_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_TradingPost_ShipAwayFeedback_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_TradingPost_ShipAwayFeedback.Widget_TradingPost_ShipAwayFeedback_C");
		return ptr;
	}

}


