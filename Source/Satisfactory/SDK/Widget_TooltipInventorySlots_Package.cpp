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
	 * 		Name   -> Function Widget_TooltipInventorySlots.Widget_TooltipInventorySlots_C.GetExtraInventorySlotText
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FText                                        NewParam                                                   (Parm, OutParm)
	 */
	void UWidget_TooltipInventorySlots_C::GetExtraInventorySlotText(class FText* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TooltipInventorySlots.Widget_TooltipInventorySlots_C.GetExtraInventorySlotText");
		
		UWidget_TooltipInventorySlots_C_GetExtraInventorySlotText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TooltipInventorySlots.Widget_TooltipInventorySlots_C.GetExtraArmsSlotText
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FText                                        NewParam                                                   (Parm, OutParm)
	 */
	void UWidget_TooltipInventorySlots_C::GetExtraArmsSlotText(class FText* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TooltipInventorySlots.Widget_TooltipInventorySlots_C.GetExtraArmsSlotText");
		
		UWidget_TooltipInventorySlots_C_GetExtraArmsSlotText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TooltipInventorySlots.Widget_TooltipInventorySlots_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_TooltipInventorySlots_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TooltipInventorySlots.Widget_TooltipInventorySlots_C.Construct");
		
		UWidget_TooltipInventorySlots_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TooltipInventorySlots.Widget_TooltipInventorySlots_C.ExecuteUbergraph_Widget_TooltipInventorySlots
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_TooltipInventorySlots_C::ExecuteUbergraph_Widget_TooltipInventorySlots(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TooltipInventorySlots.Widget_TooltipInventorySlots_C.ExecuteUbergraph_Widget_TooltipInventorySlots");
		
		UWidget_TooltipInventorySlots_C_ExecuteUbergraph_Widget_TooltipInventorySlots_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_TooltipInventorySlots_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_TooltipInventorySlots_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_TooltipInventorySlots.Widget_TooltipInventorySlots_C");
		return ptr;
	}

}


