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
	 * 		Name   -> Function Widget_TradingPostPayOffSlot.Widget_TradingPostPayOffSlot_C.DropOntoInventorySlot
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget_InventorySlot_C*                     InventorySlot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_TradingPostPayOffSlot_C::DropOntoInventorySlot(class UWidget_InventorySlot_C* InventorySlot, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TradingPostPayOffSlot.Widget_TradingPostPayOffSlot_C.DropOntoInventorySlot");
		
		UWidget_TradingPostPayOffSlot_C_DropOntoInventorySlot_Params params {};
		params.InventorySlot = InventorySlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TradingPostPayOffSlot.Widget_TradingPostPayOffSlot_C.SetPayOffBackground
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_TradingPostPayOffSlot_C::SetPayOffBackground()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TradingPostPayOffSlot.Widget_TradingPostPayOffSlot_C.SetPayOffBackground");
		
		UWidget_TradingPostPayOffSlot_C_SetPayOffBackground_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TradingPostPayOffSlot.Widget_TradingPostPayOffSlot_C.GetProgressbarPercent
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	float UWidget_TradingPostPayOffSlot_C::GetProgressbarPercent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TradingPostPayOffSlot.Widget_TradingPostPayOffSlot_C.GetProgressbarPercent");
		
		UWidget_TradingPostPayOffSlot_C_GetProgressbarPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TradingPostPayOffSlot.Widget_TradingPostPayOffSlot_C.SetTextboxFormating
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_TradingPostPayOffSlot_C::SetTextboxFormating()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TradingPostPayOffSlot.Widget_TradingPostPayOffSlot_C.SetTextboxFormating");
		
		UWidget_TradingPostPayOffSlot_C_SetTextboxFormating_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TradingPostPayOffSlot.Widget_TradingPostPayOffSlot_C.GetCustomTooltip
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class UWidget* UWidget_TradingPostPayOffSlot_C::GetCustomTooltip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TradingPostPayOffSlot.Widget_TradingPostPayOffSlot_C.GetCustomTooltip");
		
		UWidget_TradingPostPayOffSlot_C_GetCustomTooltip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TradingPostPayOffSlot.Widget_TradingPostPayOffSlot_C.OnDrop
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               PointerEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UDragDropOperation*                          Operation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	bool UWidget_TradingPostPayOffSlot_C::OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TradingPostPayOffSlot.Widget_TradingPostPayOffSlot_C.OnDrop");
		
		UWidget_TradingPostPayOffSlot_C_OnDrop_Params params {};
		params.MyGeometry = MyGeometry;
		params.PointerEvent = PointerEvent;
		params.Operation = Operation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TradingPostPayOffSlot.Widget_TradingPostPayOffSlot_C.SetItemAmountText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_TradingPostPayOffSlot_C::SetItemAmountText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TradingPostPayOffSlot.Widget_TradingPostPayOffSlot_C.SetItemAmountText");
		
		UWidget_TradingPostPayOffSlot_C_SetItemAmountText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TradingPostPayOffSlot.Widget_TradingPostPayOffSlot_C.SetSchematicIcon
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_TradingPostPayOffSlot_C::SetSchematicIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TradingPostPayOffSlot.Widget_TradingPostPayOffSlot_C.SetSchematicIcon");
		
		UWidget_TradingPostPayOffSlot_C_SetSchematicIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TradingPostPayOffSlot.Widget_TradingPostPayOffSlot_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_TradingPostPayOffSlot_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TradingPostPayOffSlot.Widget_TradingPostPayOffSlot_C.Construct");
		
		UWidget_TradingPostPayOffSlot_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TradingPostPayOffSlot.Widget_TradingPostPayOffSlot_C.OnSchematicPaidOff
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGSchematicManager*                         schematicManager                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_TradingPostPayOffSlot_C::OnSchematicPaidOff(class AFGSchematicManager* schematicManager)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TradingPostPayOffSlot.Widget_TradingPostPayOffSlot_C.OnSchematicPaidOff");
		
		UWidget_TradingPostPayOffSlot_C_OnSchematicPaidOff_Params params {};
		params.schematicManager = schematicManager;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TradingPostPayOffSlot.Widget_TradingPostPayOffSlot_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_TradingPostPayOffSlot_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TradingPostPayOffSlot.Widget_TradingPostPayOffSlot_C.Destruct");
		
		UWidget_TradingPostPayOffSlot_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TradingPostPayOffSlot.Widget_TradingPostPayOffSlot_C.OnMouseEnter
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWidget_TradingPostPayOffSlot_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TradingPostPayOffSlot.Widget_TradingPostPayOffSlot_C.OnMouseEnter");
		
		UWidget_TradingPostPayOffSlot_C_OnMouseEnter_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TradingPostPayOffSlot.Widget_TradingPostPayOffSlot_C.Update Slot
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_TradingPostPayOffSlot_C::UpdateSlot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TradingPostPayOffSlot.Widget_TradingPostPayOffSlot_C.Update Slot");
		
		UWidget_TradingPostPayOffSlot_C_UpdateSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TradingPostPayOffSlot.Widget_TradingPostPayOffSlot_C.UpdateEmptyState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_TradingPostPayOffSlot_C::UpdateEmptyState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TradingPostPayOffSlot.Widget_TradingPostPayOffSlot_C.UpdateEmptyState");
		
		UWidget_TradingPostPayOffSlot_C_UpdateEmptyState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TradingPostPayOffSlot.Widget_TradingPostPayOffSlot_C.ExecuteUbergraph_Widget_TradingPostPayOffSlot
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_TradingPostPayOffSlot_C::ExecuteUbergraph_Widget_TradingPostPayOffSlot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TradingPostPayOffSlot.Widget_TradingPostPayOffSlot_C.ExecuteUbergraph_Widget_TradingPostPayOffSlot");
		
		UWidget_TradingPostPayOffSlot_C_ExecuteUbergraph_Widget_TradingPostPayOffSlot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_TradingPostPayOffSlot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_TradingPostPayOffSlot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_TradingPostPayOffSlot.Widget_TradingPostPayOffSlot_C");
		return ptr;
	}

}


