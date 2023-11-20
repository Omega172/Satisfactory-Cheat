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
	 * 		Name   -> Function Widget_SmallManufacturingScreen.Widget_SmallManufacturingScreen_C.SetCraftAmountSize
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsSmall                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_SmallManufacturingScreen_C::SetCraftAmountSize(bool IsSmall)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SmallManufacturingScreen.Widget_SmallManufacturingScreen_C.SetCraftAmountSize");
		
		UWidget_SmallManufacturingScreen_C_SetCraftAmountSize_Params params {};
		params.IsSmall = IsSmall;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SmallManufacturingScreen.Widget_SmallManufacturingScreen_C.UpdateCraftAmountText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Percent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_SmallManufacturingScreen_C::UpdateCraftAmountText(double Percent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SmallManufacturingScreen.Widget_SmallManufacturingScreen_C.UpdateCraftAmountText");
		
		UWidget_SmallManufacturingScreen_C_UpdateCraftAmountText_Params params {};
		params.Percent = Percent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SmallManufacturingScreen.Widget_SmallManufacturingScreen_C.SetCraftAmount
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            mCraftAmount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_SmallManufacturingScreen_C::SetCraftAmount(int32_t mCraftAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SmallManufacturingScreen.Widget_SmallManufacturingScreen_C.SetCraftAmount");
		
		UWidget_SmallManufacturingScreen_C_SetCraftAmount_Params params {};
		params.mCraftAmount = mCraftAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SmallManufacturingScreen.Widget_SmallManufacturingScreen_C.SetIsWorkshop
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               mIsWorkshop                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_SmallManufacturingScreen_C::SetIsWorkshop(bool mIsWorkshop)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SmallManufacturingScreen.Widget_SmallManufacturingScreen_C.SetIsWorkshop");
		
		UWidget_SmallManufacturingScreen_C_SetIsWorkshop_Params params {};
		params.mIsWorkshop = mIsWorkshop;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SmallManufacturingScreen.Widget_SmallManufacturingScreen_C.SetHasSelectedRecipe
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               HasRecipeSelected                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_SmallManufacturingScreen_C::SetHasSelectedRecipe(bool HasRecipeSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SmallManufacturingScreen.Widget_SmallManufacturingScreen_C.SetHasSelectedRecipe");
		
		UWidget_SmallManufacturingScreen_C_SetHasSelectedRecipe_Params params {};
		params.HasRecipeSelected = HasRecipeSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SmallManufacturingScreen.Widget_SmallManufacturingScreen_C.HideWarning
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_SmallManufacturingScreen_C::HideWarning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SmallManufacturingScreen.Widget_SmallManufacturingScreen_C.HideWarning");
		
		UWidget_SmallManufacturingScreen_C_HideWarning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SmallManufacturingScreen.Widget_SmallManufacturingScreen_C.ShowWarning
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWidget_SmallManufacturingScreen_C::ShowWarning(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SmallManufacturingScreen.Widget_SmallManufacturingScreen_C.ShowWarning");
		
		UWidget_SmallManufacturingScreen_C_ShowWarning_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SmallManufacturingScreen.Widget_SmallManufacturingScreen_C.OnCraft
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_SmallManufacturingScreen_C::OnCraft()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SmallManufacturingScreen.Widget_SmallManufacturingScreen_C.OnCraft");
		
		UWidget_SmallManufacturingScreen_C_OnCraft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SmallManufacturingScreen.Widget_SmallManufacturingScreen_C.OnCraftCompleted
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_SmallManufacturingScreen_C::OnCraftCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SmallManufacturingScreen.Widget_SmallManufacturingScreen_C.OnCraftCompleted");
		
		UWidget_SmallManufacturingScreen_C_OnCraftCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SmallManufacturingScreen.Widget_SmallManufacturingScreen_C.GetProgressbarPercent
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             Percent                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_SmallManufacturingScreen_C::GetProgressbarPercent(double* Percent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SmallManufacturingScreen.Widget_SmallManufacturingScreen_C.GetProgressbarPercent");
		
		UWidget_SmallManufacturingScreen_C_GetProgressbarPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Percent != nullptr)
			*Percent = params.Percent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SmallManufacturingScreen.Widget_SmallManufacturingScreen_C.SetProgressBarPercent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             InPercent                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_SmallManufacturingScreen_C::SetProgressBarPercent(double InPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SmallManufacturingScreen.Widget_SmallManufacturingScreen_C.SetProgressBarPercent");
		
		UWidget_SmallManufacturingScreen_C_SetProgressBarPercent_Params params {};
		params.InPercent = InPercent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SmallManufacturingScreen.Widget_SmallManufacturingScreen_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_SmallManufacturingScreen_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SmallManufacturingScreen.Widget_SmallManufacturingScreen_C.PreConstruct");
		
		UWidget_SmallManufacturingScreen_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SmallManufacturingScreen.Widget_SmallManufacturingScreen_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_SmallManufacturingScreen_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SmallManufacturingScreen.Widget_SmallManufacturingScreen_C.Construct");
		
		UWidget_SmallManufacturingScreen_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SmallManufacturingScreen.Widget_SmallManufacturingScreen_C.ExecuteUbergraph_Widget_SmallManufacturingScreen
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_SmallManufacturingScreen_C::ExecuteUbergraph_Widget_SmallManufacturingScreen(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SmallManufacturingScreen.Widget_SmallManufacturingScreen_C.ExecuteUbergraph_Widget_SmallManufacturingScreen");
		
		UWidget_SmallManufacturingScreen_C_ExecuteUbergraph_Widget_SmallManufacturingScreen_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_SmallManufacturingScreen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_SmallManufacturingScreen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_SmallManufacturingScreen.Widget_SmallManufacturingScreen_C");
		return ptr;
	}

}


