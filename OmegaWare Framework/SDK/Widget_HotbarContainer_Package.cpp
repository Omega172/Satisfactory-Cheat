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
	 * 		Name   -> Function Widget_HotbarContainer.Widget_HotbarContainer_C.SequenceEvent__ENTRYPOINTWidget_HotbarContainer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_HotbarContainer_C::SequenceEvent__ENTRYPOINTWidget_HotbarContainer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_HotbarContainer.Widget_HotbarContainer_C.SequenceEvent__ENTRYPOINTWidget_HotbarContainer");
		
		UWidget_HotbarContainer_C_SequenceEvent__ENTRYPOINTWidget_HotbarContainer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_HotbarContainer.Widget_HotbarContainer_C.UpdateHotbarCountIndicator
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_HotbarContainer_C::UpdateHotbarCountIndicator()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_HotbarContainer.Widget_HotbarContainer_C.UpdateHotbarCountIndicator");
		
		UWidget_HotbarContainer_C_UpdateHotbarCountIndicator_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_HotbarContainer.Widget_HotbarContainer_C.UpdateHotbarIndexIndicator
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_HotbarContainer_C::UpdateHotbarIndexIndicator()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_HotbarContainer.Widget_HotbarContainer_C.UpdateHotbarIndexIndicator");
		
		UWidget_HotbarContainer_C_UpdateHotbarIndexIndicator_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_HotbarContainer.Widget_HotbarContainer_C.OnHotbarLayoutUpdated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_HotbarContainer_C::OnHotbarLayoutUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_HotbarContainer.Widget_HotbarContainer_C.OnHotbarLayoutUpdated");
		
		UWidget_HotbarContainer_C_OnHotbarLayoutUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_HotbarContainer.Widget_HotbarContainer_C.ShowNotification
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Unbound                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_HotbarContainer_C::ShowNotification(int32_t Index, bool Unbound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_HotbarContainer.Widget_HotbarContainer_C.ShowNotification");
		
		UWidget_HotbarContainer_C_ShowNotification_Params params {};
		params.Index = Index;
		params.Unbound = Unbound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_HotbarContainer.Widget_HotbarContainer_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_HotbarContainer_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_HotbarContainer.Widget_HotbarContainer_C.Destruct");
		
		UWidget_HotbarContainer_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_HotbarContainer.Widget_HotbarContainer_C.OnHotbarIndexChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGPlayerHotbar*                             NewHotbar                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            newHotbarIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_HotbarContainer_C::OnHotbarIndexChanged(class UFGPlayerHotbar* NewHotbar, int32_t newHotbarIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_HotbarContainer.Widget_HotbarContainer_C.OnHotbarIndexChanged");
		
		UWidget_HotbarContainer_C_OnHotbarIndexChanged_Params params {};
		params.NewHotbar = NewHotbar;
		params.newHotbarIndex = newHotbarIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_HotbarContainer.Widget_HotbarContainer_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_HotbarContainer_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_HotbarContainer.Widget_HotbarContainer_C.Construct");
		
		UWidget_HotbarContainer_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_HotbarContainer.Widget_HotbarContainer_C.OnHotbarsAvailable
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_HotbarContainer_C::OnHotbarsAvailable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_HotbarContainer.Widget_HotbarContainer_C.OnHotbarsAvailable");
		
		UWidget_HotbarContainer_C_OnHotbarsAvailable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_HotbarContainer.Widget_HotbarContainer_C.OnShortcutUnbound
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            SlotIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_HotbarContainer_C::OnShortcutUnbound(int32_t SlotIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_HotbarContainer.Widget_HotbarContainer_C.OnShortcutUnbound");
		
		UWidget_HotbarContainer_C_OnShortcutUnbound_Params params {};
		params.SlotIndex = SlotIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_HotbarContainer.Widget_HotbarContainer_C.ExecuteUbergraph_Widget_HotbarContainer
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_HotbarContainer_C::ExecuteUbergraph_Widget_HotbarContainer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_HotbarContainer.Widget_HotbarContainer_C.ExecuteUbergraph_Widget_HotbarContainer");
		
		UWidget_HotbarContainer_C_ExecuteUbergraph_Widget_HotbarContainer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_HotbarContainer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_HotbarContainer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_HotbarContainer.Widget_HotbarContainer_C");
		return ptr;
	}

}


