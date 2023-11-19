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
	 * 		Name   -> Function Widget_ManufacturingIOSlot.Widget_ManufacturingIOSlot_C.SetRecipeAmount
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FItemAmount                                 ItemAmount                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UWidget_ManufacturingIOSlot_C::SetRecipeAmount(const struct FItemAmount& ItemAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ManufacturingIOSlot.Widget_ManufacturingIOSlot_C.SetRecipeAmount");
		
		UWidget_ManufacturingIOSlot_C_SetRecipeAmount_Params params {};
		params.ItemAmount = ItemAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ManufacturingIOSlot.Widget_ManufacturingIOSlot_C.SetupInventory
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ManufacturingIOSlot_C::SetupInventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ManufacturingIOSlot.Widget_ManufacturingIOSlot_C.SetupInventory");
		
		UWidget_ManufacturingIOSlot_C_SetupInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ManufacturingIOSlot.Widget_ManufacturingIOSlot_C.UpdateNumPerSecond
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ManufacturingIOSlot_C::UpdateNumPerSecond()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ManufacturingIOSlot.Widget_ManufacturingIOSlot_C.UpdateNumPerSecond");
		
		UWidget_ManufacturingIOSlot_C_UpdateNumPerSecond_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ManufacturingIOSlot.Widget_ManufacturingIOSlot_C.GetItemAmount
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FItemAmount                                 ItemAmount                                                 (Parm, OutParm, NoDestructor)
	 */
	void UWidget_ManufacturingIOSlot_C::GetItemAmount(struct FItemAmount* ItemAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ManufacturingIOSlot.Widget_ManufacturingIOSlot_C.GetItemAmount");
		
		UWidget_ManufacturingIOSlot_C_GetItemAmount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemAmount != nullptr)
			*ItemAmount = params.ItemAmount;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ManufacturingIOSlot.Widget_ManufacturingIOSlot_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_ManufacturingIOSlot_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ManufacturingIOSlot.Widget_ManufacturingIOSlot_C.Construct");
		
		UWidget_ManufacturingIOSlot_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ManufacturingIOSlot.Widget_ManufacturingIOSlot_C.UpdateCostSlot
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ManufacturingIOSlot_C::UpdateCostSlot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ManufacturingIOSlot.Widget_ManufacturingIOSlot_C.UpdateCostSlot");
		
		UWidget_ManufacturingIOSlot_C_UpdateCostSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ManufacturingIOSlot.Widget_ManufacturingIOSlot_C.UpdateInfo
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ManufacturingIOSlot_C::UpdateInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ManufacturingIOSlot.Widget_ManufacturingIOSlot_C.UpdateInfo");
		
		UWidget_ManufacturingIOSlot_C_UpdateInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ManufacturingIOSlot.Widget_ManufacturingIOSlot_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_ManufacturingIOSlot_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ManufacturingIOSlot.Widget_ManufacturingIOSlot_C.Destruct");
		
		UWidget_ManufacturingIOSlot_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ManufacturingIOSlot.Widget_ManufacturingIOSlot_C.ExecuteUbergraph_Widget_ManufacturingIOSlot
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_ManufacturingIOSlot_C::ExecuteUbergraph_Widget_ManufacturingIOSlot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ManufacturingIOSlot.Widget_ManufacturingIOSlot_C.ExecuteUbergraph_Widget_ManufacturingIOSlot");
		
		UWidget_ManufacturingIOSlot_C_ExecuteUbergraph_Widget_ManufacturingIOSlot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_ManufacturingIOSlot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_ManufacturingIOSlot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_ManufacturingIOSlot.Widget_ManufacturingIOSlot_C");
		return ptr;
	}

}


