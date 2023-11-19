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
	 * 		Name   -> Function Widget_ActiveSchematicCost.Widget_ActiveSchematicCost_C.GetNumIngredientsPaidOff
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            NumItems                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_ActiveSchematicCost_C::GetNumIngredientsPaidOff(int32_t* NumItems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ActiveSchematicCost.Widget_ActiveSchematicCost_C.GetNumIngredientsPaidOff");
		
		UWidget_ActiveSchematicCost_C_GetNumIngredientsPaidOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NumItems != nullptr)
			*NumItems = params.NumItems;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ActiveSchematicCost.Widget_ActiveSchematicCost_C.GetIngredient
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FItemAmount                                 ingredient                                                 (Parm, OutParm, NoDestructor)
	 */
	void UWidget_ActiveSchematicCost_C::GetIngredient(struct FItemAmount* ingredient)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ActiveSchematicCost.Widget_ActiveSchematicCost_C.GetIngredient");
		
		UWidget_ActiveSchematicCost_C_GetIngredient_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ingredient != nullptr)
			*ingredient = params.ingredient;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ActiveSchematicCost.Widget_ActiveSchematicCost_C.UpdateTimer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ActiveSchematicCost_C::UpdateTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ActiveSchematicCost.Widget_ActiveSchematicCost_C.UpdateTimer");
		
		UWidget_ActiveSchematicCost_C_UpdateTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ActiveSchematicCost.Widget_ActiveSchematicCost_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_ActiveSchematicCost_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ActiveSchematicCost.Widget_ActiveSchematicCost_C.Construct");
		
		UWidget_ActiveSchematicCost_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ActiveSchematicCost.Widget_ActiveSchematicCost_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_ActiveSchematicCost_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ActiveSchematicCost.Widget_ActiveSchematicCost_C.Destruct");
		
		UWidget_ActiveSchematicCost_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ActiveSchematicCost.Widget_ActiveSchematicCost_C.OnUpdateSlotSize
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      updatedCvar                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWidget_ActiveSchematicCost_C::OnUpdateSlotSize(const class FString& updatedCvar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ActiveSchematicCost.Widget_ActiveSchematicCost_C.OnUpdateSlotSize");
		
		UWidget_ActiveSchematicCost_C_OnUpdateSlotSize_Params params {};
		params.updatedCvar = updatedCvar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ActiveSchematicCost.Widget_ActiveSchematicCost_C.ExecuteUbergraph_Widget_ActiveSchematicCost
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_ActiveSchematicCost_C::ExecuteUbergraph_Widget_ActiveSchematicCost(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ActiveSchematicCost.Widget_ActiveSchematicCost_C.ExecuteUbergraph_Widget_ActiveSchematicCost");
		
		UWidget_ActiveSchematicCost_C_ExecuteUbergraph_Widget_ActiveSchematicCost_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_ActiveSchematicCost_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_ActiveSchematicCost_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_ActiveSchematicCost.Widget_ActiveSchematicCost_C");
		return ptr;
	}

}


