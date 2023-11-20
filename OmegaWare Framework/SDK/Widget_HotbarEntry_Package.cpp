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
	 * 		Name   -> Function Widget_HotbarEntry.Widget_HotbarEntry_C.UpdateSlotStyle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_HotbarEntry_C::UpdateSlotStyle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_HotbarEntry.Widget_HotbarEntry_C.UpdateSlotStyle");
		
		UWidget_HotbarEntry_C_UpdateSlotStyle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_HotbarEntry.Widget_HotbarEntry_C.GetIconVisibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UWidget_HotbarEntry_C::GetIconVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_HotbarEntry.Widget_HotbarEntry_C.GetIconVisibility");
		
		UWidget_HotbarEntry_C_GetIconVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_HotbarEntry.Widget_HotbarEntry_C.GetSlotTextColor
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FSlateColor UWidget_HotbarEntry_C::GetSlotTextColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_HotbarEntry.Widget_HotbarEntry_C.GetSlotTextColor");
		
		UWidget_HotbarEntry_C_GetSlotTextColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_HotbarEntry.Widget_HotbarEntry_C.GetSlotText
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UWidget_HotbarEntry_C::GetSlotText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_HotbarEntry.Widget_HotbarEntry_C.GetSlotText");
		
		UWidget_HotbarEntry_C_GetSlotText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_HotbarEntry.Widget_HotbarEntry_C.GetIcon
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FSlateBrush UWidget_HotbarEntry_C::GetIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_HotbarEntry.Widget_HotbarEntry_C.GetIcon");
		
		UWidget_HotbarEntry_C_GetIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_HotbarEntry.Widget_HotbarEntry_C.Update Hotbar Slot
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_HotbarEntry_C::UpdateHotbarSlot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_HotbarEntry.Widget_HotbarEntry_C.Update Hotbar Slot");
		
		UWidget_HotbarEntry_C_UpdateHotbarSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_HotbarEntry.Widget_HotbarEntry_C.OnHotbarSlotUpdated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGPlayerHotbar*                             Hotbar                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_HotbarEntry_C::OnHotbarSlotUpdated(class UFGPlayerHotbar* Hotbar, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_HotbarEntry.Widget_HotbarEntry_C.OnHotbarSlotUpdated");
		
		UWidget_HotbarEntry_C_OnHotbarSlotUpdated_Params params {};
		params.Hotbar = Hotbar;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_HotbarEntry.Widget_HotbarEntry_C.OhShortcutActiveStatusChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGHotbarShortcut*                           shortcut                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_HotbarEntry_C::OhShortcutActiveStatusChanged(class UFGHotbarShortcut* shortcut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_HotbarEntry.Widget_HotbarEntry_C.OhShortcutActiveStatusChanged");
		
		UWidget_HotbarEntry_C_OhShortcutActiveStatusChanged_Params params {};
		params.shortcut = shortcut;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_HotbarEntry.Widget_HotbarEntry_C.InitializeHotbarSlot
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGPlayerHotbar*                             Hotbar                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            shortcutIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_HotbarEntry_C::InitializeHotbarSlot(class UFGPlayerHotbar* Hotbar, int32_t shortcutIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_HotbarEntry.Widget_HotbarEntry_C.InitializeHotbarSlot");
		
		UWidget_HotbarEntry_C_InitializeHotbarSlot_Params params {};
		params.Hotbar = Hotbar;
		params.shortcutIndex = shortcutIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_HotbarEntry.Widget_HotbarEntry_C.On Shortcut Just Bound
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGHotbarShortcut*                           shortcut                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_HotbarEntry_C::OnShortcutJustBound(class UFGHotbarShortcut* shortcut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_HotbarEntry.Widget_HotbarEntry_C.On Shortcut Just Bound");
		
		UWidget_HotbarEntry_C_OnShortcutJustBound_Params params {};
		params.shortcut = shortcut;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_HotbarEntry.Widget_HotbarEntry_C.ExecuteUbergraph_Widget_HotbarEntry
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_HotbarEntry_C::ExecuteUbergraph_Widget_HotbarEntry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_HotbarEntry.Widget_HotbarEntry_C.ExecuteUbergraph_Widget_HotbarEntry");
		
		UWidget_HotbarEntry_C_ExecuteUbergraph_Widget_HotbarEntry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_HotbarEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_HotbarEntry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_HotbarEntry.Widget_HotbarEntry_C");
		return ptr;
	}

}


