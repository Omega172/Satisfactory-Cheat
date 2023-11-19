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
	 * 		Name   -> Function Widget_TradingPost_RecipeInfoBox.Widget_TradingPost_RecipeInfoBox_C.SetCategoryIcon
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_TradingPost_RecipeInfoBox_C::SetCategoryIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TradingPost_RecipeInfoBox.Widget_TradingPost_RecipeInfoBox_C.SetCategoryIcon");
		
		UWidget_TradingPost_RecipeInfoBox_C_SetCategoryIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TradingPost_RecipeInfoBox.Widget_TradingPost_RecipeInfoBox_C.SetItemTitle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Title                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWidget_TradingPost_RecipeInfoBox_C::SetItemTitle(const class FText& Title)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TradingPost_RecipeInfoBox.Widget_TradingPost_RecipeInfoBox_C.SetItemTitle");
		
		UWidget_TradingPost_RecipeInfoBox_C_SetItemTitle_Params params {};
		params.Title = Title;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TradingPost_RecipeInfoBox.Widget_TradingPost_RecipeInfoBox_C.SetItemDescriptionText
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Description                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWidget_TradingPost_RecipeInfoBox_C::SetItemDescriptionText(const class FText& Description)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TradingPost_RecipeInfoBox.Widget_TradingPost_RecipeInfoBox_C.SetItemDescriptionText");
		
		UWidget_TradingPost_RecipeInfoBox_C_SetItemDescriptionText_Params params {};
		params.Description = Description;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TradingPost_RecipeInfoBox.Widget_TradingPost_RecipeInfoBox_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_TradingPost_RecipeInfoBox_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TradingPost_RecipeInfoBox.Widget_TradingPost_RecipeInfoBox_C.Construct");
		
		UWidget_TradingPost_RecipeInfoBox_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TradingPost_RecipeInfoBox.Widget_TradingPost_RecipeInfoBox_C.Event Autoscroll Hub Text
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_TradingPost_RecipeInfoBox_C::EventAutoscrollHubText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TradingPost_RecipeInfoBox.Widget_TradingPost_RecipeInfoBox_C.Event Autoscroll Hub Text");
		
		UWidget_TradingPost_RecipeInfoBox_C_EventAutoscrollHubText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TradingPost_RecipeInfoBox.Widget_TradingPost_RecipeInfoBox_C.ExecuteUbergraph_Widget_TradingPost_RecipeInfoBox
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_TradingPost_RecipeInfoBox_C::ExecuteUbergraph_Widget_TradingPost_RecipeInfoBox(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TradingPost_RecipeInfoBox.Widget_TradingPost_RecipeInfoBox_C.ExecuteUbergraph_Widget_TradingPost_RecipeInfoBox");
		
		UWidget_TradingPost_RecipeInfoBox_C_ExecuteUbergraph_Widget_TradingPost_RecipeInfoBox_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_TradingPost_RecipeInfoBox_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_TradingPost_RecipeInfoBox_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_TradingPost_RecipeInfoBox.Widget_TradingPost_RecipeInfoBox_C");
		return ptr;
	}

}


