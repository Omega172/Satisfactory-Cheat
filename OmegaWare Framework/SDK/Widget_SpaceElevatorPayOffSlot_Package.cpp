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
	 * 		Name   -> Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.DropOntoInventorySlot
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget_InventorySlot_C*                     InventorySlot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_SpaceElevatorPayOffSlot_C::DropOntoInventorySlot(class UWidget_InventorySlot_C* InventorySlot, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.DropOntoInventorySlot");
		
		UWidget_SpaceElevatorPayOffSlot_C_DropOntoInventorySlot_Params params {};
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
	 * 		Name   -> Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.GetCustomTooltip
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class UWidget* UWidget_SpaceElevatorPayOffSlot_C::GetCustomTooltip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.GetCustomTooltip");
		
		UWidget_SpaceElevatorPayOffSlot_C_GetCustomTooltip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.GetPaidOffSlotVisibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UWidget_SpaceElevatorPayOffSlot_C::GetPaidOffSlotVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.GetPaidOffSlotVisibility");
		
		UWidget_SpaceElevatorPayOffSlot_C_GetPaidOffSlotVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.GetProgressBarVisibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UWidget_SpaceElevatorPayOffSlot_C::GetProgressBarVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.GetProgressBarVisibility");
		
		UWidget_SpaceElevatorPayOffSlot_C_GetProgressBarVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.GetPaidOffColorFeedback
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FSlateColor UWidget_SpaceElevatorPayOffSlot_C::GetPaidOffColorFeedback()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.GetPaidOffColorFeedback");
		
		UWidget_SpaceElevatorPayOffSlot_C_GetPaidOffColorFeedback_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.GetPaidOffFeedbackImage
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UWidget_SpaceElevatorPayOffSlot_C::GetPaidOffFeedbackImage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.GetPaidOffFeedbackImage");
		
		UWidget_SpaceElevatorPayOffSlot_C_GetPaidOffFeedbackImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.GetProgressbarPercent
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	double UWidget_SpaceElevatorPayOffSlot_C::GetProgressbarPercent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.GetProgressbarPercent");
		
		UWidget_SpaceElevatorPayOffSlot_C_GetProgressbarPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.OnDrop
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               PointerEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UDragDropOperation*                          Operation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	bool UWidget_SpaceElevatorPayOffSlot_C::OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.OnDrop");
		
		UWidget_SpaceElevatorPayOffSlot_C_OnDrop_Params params {};
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
	 * 		Name   -> Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.GetItemQuotaText
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UWidget_SpaceElevatorPayOffSlot_C::GetItemQuotaText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.GetItemQuotaText");
		
		UWidget_SpaceElevatorPayOffSlot_C_GetItemQuotaText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.GetItemText
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UWidget_SpaceElevatorPayOffSlot_C::GetItemText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.GetItemText");
		
		UWidget_SpaceElevatorPayOffSlot_C_GetItemText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.GetItemImage
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FSlateBrush UWidget_SpaceElevatorPayOffSlot_C::GetItemImage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.GetItemImage");
		
		UWidget_SpaceElevatorPayOffSlot_C_GetItemImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_SpaceElevatorPayOffSlot_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.Construct");
		
		UWidget_SpaceElevatorPayOffSlot_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_SpaceElevatorPayOffSlot_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.Tick");
		
		UWidget_SpaceElevatorPayOffSlot_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.GlowTimer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_SpaceElevatorPayOffSlot_C::GlowTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.GlowTimer");
		
		UWidget_SpaceElevatorPayOffSlot_C_GlowTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.ExecuteUbergraph_Widget_SpaceElevatorPayOffSlot
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_SpaceElevatorPayOffSlot_C::ExecuteUbergraph_Widget_SpaceElevatorPayOffSlot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.ExecuteUbergraph_Widget_SpaceElevatorPayOffSlot");
		
		UWidget_SpaceElevatorPayOffSlot_C_ExecuteUbergraph_Widget_SpaceElevatorPayOffSlot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_SpaceElevatorPayOffSlot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_SpaceElevatorPayOffSlot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C");
		return ptr;
	}

}


