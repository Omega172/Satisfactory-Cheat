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
	 * 		Name   -> Function Widget_CostSlotWrapper.Widget_CostSlotWrapper_C.LerpCostAmounts
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            cost                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            LastValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            CurrentValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Alpha                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	double UWidget_CostSlotWrapper_C::LerpCostAmounts(int32_t cost, int32_t LastValue, int32_t CurrentValue, double Alpha)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_CostSlotWrapper.Widget_CostSlotWrapper_C.LerpCostAmounts");
		
		UWidget_CostSlotWrapper_C_LerpCostAmounts_Params params {};
		params.cost = cost;
		params.LastValue = LastValue;
		params.CurrentValue = CurrentValue;
		params.Alpha = Alpha;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_CostSlotWrapper.Widget_CostSlotWrapper_C.SetCurrentNumInSlots
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            mCurrentNumInSlot                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_CostSlotWrapper_C::SetCurrentNumInSlots(int32_t mCurrentNumInSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_CostSlotWrapper.Widget_CostSlotWrapper_C.SetCurrentNumInSlots");
		
		UWidget_CostSlotWrapper_C_SetCurrentNumInSlots_Params params {};
		params.mCurrentNumInSlot = mCurrentNumInSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_CostSlotWrapper.Widget_CostSlotWrapper_C.UpdateLerpAlpha
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_CostSlotWrapper_C::UpdateLerpAlpha()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_CostSlotWrapper.Widget_CostSlotWrapper_C.UpdateLerpAlpha");
		
		UWidget_CostSlotWrapper_C_UpdateLerpAlpha_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_CostSlotWrapper.Widget_CostSlotWrapper_C.SetSlotColor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_CostSlotWrapper_C::SetSlotColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_CostSlotWrapper.Widget_CostSlotWrapper_C.SetSlotColor");
		
		UWidget_CostSlotWrapper_C_SetSlotColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_CostSlotWrapper.Widget_CostSlotWrapper_C.SetProgressBarPercent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_CostSlotWrapper_C::SetProgressBarPercent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_CostSlotWrapper.Widget_CostSlotWrapper_C.SetProgressBarPercent");
		
		UWidget_CostSlotWrapper_C_SetProgressBarPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_CostSlotWrapper.Widget_CostSlotWrapper_C.Update Progress
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_CostSlotWrapper_C::UpdateProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_CostSlotWrapper.Widget_CostSlotWrapper_C.Update Progress");
		
		UWidget_CostSlotWrapper_C_UpdateProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_CostSlotWrapper.Widget_CostSlotWrapper_C.FormatNumbers
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            NumItems                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        OutText                                                    (Parm, OutParm)
	 */
	void UWidget_CostSlotWrapper_C::FormatNumbers(int32_t NumItems, class FText* OutText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_CostSlotWrapper.Widget_CostSlotWrapper_C.FormatNumbers");
		
		UWidget_CostSlotWrapper_C_FormatNumbers_Params params {};
		params.NumItems = NumItems;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutText != nullptr)
			*OutText = params.OutText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_CostSlotWrapper.Widget_CostSlotWrapper_C.SetIconBrush
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture*                                    IconTexture                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_CostSlotWrapper_C::SetIconBrush(class UTexture* IconTexture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_CostSlotWrapper.Widget_CostSlotWrapper_C.SetIconBrush");
		
		UWidget_CostSlotWrapper_C_SetIconBrush_Params params {};
		params.IconTexture = IconTexture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_CostSlotWrapper.Widget_CostSlotWrapper_C.GetProgressbarPercent
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	float UWidget_CostSlotWrapper_C::GetProgressbarPercent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_CostSlotWrapper.Widget_CostSlotWrapper_C.GetProgressbarPercent");
		
		UWidget_CostSlotWrapper_C_GetProgressbarPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_CostSlotWrapper.Widget_CostSlotWrapper_C.GetOrange
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FLinearColor UWidget_CostSlotWrapper_C::GetOrange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_CostSlotWrapper.Widget_CostSlotWrapper_C.GetOrange");
		
		UWidget_CostSlotWrapper_C_GetOrange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_CostSlotWrapper.Widget_CostSlotWrapper_C.SetTextboxFormating
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               HasItems                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_CostSlotWrapper_C::SetTextboxFormating(bool HasItems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_CostSlotWrapper.Widget_CostSlotWrapper_C.SetTextboxFormating");
		
		UWidget_CostSlotWrapper_C_SetTextboxFormating_Params params {};
		params.HasItems = HasItems;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_CostSlotWrapper.Widget_CostSlotWrapper_C.GetDarkGray
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FLinearColor UWidget_CostSlotWrapper_C::GetDarkGray()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_CostSlotWrapper.Widget_CostSlotWrapper_C.GetDarkGray");
		
		UWidget_CostSlotWrapper_C_GetDarkGray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_CostSlotWrapper.Widget_CostSlotWrapper_C.GetPartsNumbers
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UWidget_CostSlotWrapper_C::GetPartsNumbers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_CostSlotWrapper.Widget_CostSlotWrapper_C.GetPartsNumbers");
		
		UWidget_CostSlotWrapper_C_GetPartsNumbers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_CostSlotWrapper.Widget_CostSlotWrapper_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_CostSlotWrapper_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_CostSlotWrapper.Widget_CostSlotWrapper_C.Tick");
		
		UWidget_CostSlotWrapper_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_CostSlotWrapper.Widget_CostSlotWrapper_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_CostSlotWrapper_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_CostSlotWrapper.Widget_CostSlotWrapper_C.PreConstruct");
		
		UWidget_CostSlotWrapper_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_CostSlotWrapper.Widget_CostSlotWrapper_C.OnMouseEnter
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWidget_CostSlotWrapper_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_CostSlotWrapper.Widget_CostSlotWrapper_C.OnMouseEnter");
		
		UWidget_CostSlotWrapper_C_OnMouseEnter_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_CostSlotWrapper.Widget_CostSlotWrapper_C.Setup CostIcon
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture*                                    IconTexture                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FItemAmount                                 ItemAmount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class UFGInventoryComponent*                       CachedInventoryComponent                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            slotIdx                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            CurrentNumInSlot                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               SmallSlot                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               BigSlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ForceOrangeTextbox                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               GrabFromStockpile                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OverwriteComponentNumInSlot                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_CostSlotWrapper_C::SetupCostIcon(class UTexture* IconTexture, const struct FItemAmount& ItemAmount, class UFGInventoryComponent* CachedInventoryComponent, int32_t slotIdx, int32_t CurrentNumInSlot, bool SmallSlot, bool BigSlot, bool ForceOrangeTextbox, bool GrabFromStockpile, bool OverwriteComponentNumInSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_CostSlotWrapper.Widget_CostSlotWrapper_C.Setup CostIcon");
		
		UWidget_CostSlotWrapper_C_SetupCostIcon_Params params {};
		params.IconTexture = IconTexture;
		params.ItemAmount = ItemAmount;
		params.CachedInventoryComponent = CachedInventoryComponent;
		params.slotIdx = slotIdx;
		params.CurrentNumInSlot = CurrentNumInSlot;
		params.SmallSlot = SmallSlot;
		params.BigSlot = BigSlot;
		params.ForceOrangeTextbox = ForceOrangeTextbox;
		params.GrabFromStockpile = GrabFromStockpile;
		params.OverwriteComponentNumInSlot = OverwriteComponentNumInSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_CostSlotWrapper.Widget_CostSlotWrapper_C.ExecuteUbergraph_Widget_CostSlotWrapper
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_CostSlotWrapper_C::ExecuteUbergraph_Widget_CostSlotWrapper(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_CostSlotWrapper.Widget_CostSlotWrapper_C.ExecuteUbergraph_Widget_CostSlotWrapper");
		
		UWidget_CostSlotWrapper_C_ExecuteUbergraph_Widget_CostSlotWrapper_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_CostSlotWrapper_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_CostSlotWrapper_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_CostSlotWrapper.Widget_CostSlotWrapper_C");
		return ptr;
	}

}


