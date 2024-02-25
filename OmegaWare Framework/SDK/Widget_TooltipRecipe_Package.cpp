/**
 * Name: Satisfactory
 * Version: Early_Access_CL#273254
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_TooltipRecipe.Widget_TooltipRecipe_C.SetTextWrapSize
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             mTextWrapSize                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_TooltipRecipe_C::SetTextWrapSize(double mTextWrapSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TooltipRecipe.Widget_TooltipRecipe_C.SetTextWrapSize");
		
		UWidget_TooltipRecipe_C_SetTextWrapSize_Params params {};
		params.mTextWrapSize = mTextWrapSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_TooltipRecipe.Widget_TooltipRecipe_C.SetProductionTime
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_TooltipRecipe_C::SetProductionTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TooltipRecipe.Widget_TooltipRecipe_C.SetProductionTime");
		
		UWidget_TooltipRecipe_C_SetProductionTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_TooltipRecipe.Widget_TooltipRecipe_C.SetCycleTimeText
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        InText                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWidget_TooltipRecipe_C::SetCycleTimeText(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TooltipRecipe.Widget_TooltipRecipe_C.SetCycleTimeText");
		
		UWidget_TooltipRecipe_C_SetCycleTimeText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_TooltipRecipe.Widget_TooltipRecipe_C.Set Styling
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class URichTextBlock*                              RichText                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		bool                                               mIsHovered                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_TooltipRecipe_C::SetStyling(class URichTextBlock* RichText, bool mIsHovered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TooltipRecipe.Widget_TooltipRecipe_C.Set Styling");
		
		UWidget_TooltipRecipe_C_SetStyling_Params params {};
		params.RichText = RichText;
		params.mIsHovered = mIsHovered;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_TooltipRecipe.Widget_TooltipRecipe_C.SetProductionTimeText
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        InText                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWidget_TooltipRecipe_C::SetProductionTimeText(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TooltipRecipe.Widget_TooltipRecipe_C.SetProductionTimeText");
		
		UWidget_TooltipRecipe_C_SetProductionTimeText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_TooltipRecipe.Widget_TooltipRecipe_C.SetProducedInText
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        InText                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWidget_TooltipRecipe_C::SetProducedInText(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TooltipRecipe.Widget_TooltipRecipe_C.SetProducedInText");
		
		UWidget_TooltipRecipe_C_SetProducedInText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_TooltipRecipe.Widget_TooltipRecipe_C.SetShowExpandPointer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               mShowExpandPointer                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_TooltipRecipe_C::SetShowExpandPointer(bool mShowExpandPointer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TooltipRecipe.Widget_TooltipRecipe_C.SetShowExpandPointer");
		
		UWidget_TooltipRecipe_C_SetShowExpandPointer_Params params {};
		params.mShowExpandPointer = mShowExpandPointer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_TooltipRecipe.Widget_TooltipRecipe_C.SetShowExpandedRecipe
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ShowExpanded                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_TooltipRecipe_C::SetShowExpandedRecipe(bool ShowExpanded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TooltipRecipe.Widget_TooltipRecipe_C.SetShowExpandedRecipe");
		
		UWidget_TooltipRecipe_C_SetShowExpandedRecipe_Params params {};
		params.ShowExpanded = ShowExpanded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_TooltipRecipe.Widget_TooltipRecipe_C.OnUnhovered
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_TooltipRecipe_C::OnUnhovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TooltipRecipe.Widget_TooltipRecipe_C.OnUnhovered");
		
		UWidget_TooltipRecipe_C_OnUnhovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_TooltipRecipe.Widget_TooltipRecipe_C.OnHovered
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_TooltipRecipe_C::OnHovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TooltipRecipe.Widget_TooltipRecipe_C.OnHovered");
		
		UWidget_TooltipRecipe_C_OnHovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_TooltipRecipe.Widget_TooltipRecipe_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_TooltipRecipe_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TooltipRecipe.Widget_TooltipRecipe_C.Construct");
		
		UWidget_TooltipRecipe_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_TooltipRecipe.Widget_TooltipRecipe_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_TooltipRecipe_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TooltipRecipe.Widget_TooltipRecipe_C.PreConstruct");
		
		UWidget_TooltipRecipe_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_TooltipRecipe.Widget_TooltipRecipe_C.BndEvt__Widget_TooltipRecipe_BPW_TooltipRecipe_OverclockSettings_K2Node_ComponentBoundEvent_3_OnOverclockChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		double                                             Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_TooltipRecipe_C::BndEvt__Widget_TooltipRecipe_BPW_TooltipRecipe_OverclockSettings_K2Node_ComponentBoundEvent_3_OnOverclockChanged__DelegateSignature(double Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TooltipRecipe.Widget_TooltipRecipe_C.BndEvt__Widget_TooltipRecipe_BPW_TooltipRecipe_OverclockSettings_K2Node_ComponentBoundEvent_3_OnOverclockChanged__DelegateSignature");
		
		UWidget_TooltipRecipe_C_BndEvt__Widget_TooltipRecipe_BPW_TooltipRecipe_OverclockSettings_K2Node_ComponentBoundEvent_3_OnOverclockChanged__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_TooltipRecipe.Widget_TooltipRecipe_C.ExecuteUbergraph_Widget_TooltipRecipe
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_TooltipRecipe_C::ExecuteUbergraph_Widget_TooltipRecipe(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TooltipRecipe.Widget_TooltipRecipe_C.ExecuteUbergraph_Widget_TooltipRecipe");
		
		UWidget_TooltipRecipe_C_ExecuteUbergraph_Widget_TooltipRecipe_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_TooltipRecipe_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_TooltipRecipe_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_TooltipRecipe.Widget_TooltipRecipe_C");
		return ptr;
	}

}


