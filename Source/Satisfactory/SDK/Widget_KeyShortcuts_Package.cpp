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
	 * 		Name   -> Function Widget_KeyShortcuts.Widget_KeyShortcuts_C.UpdateShortcutVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Condition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UImage*                                      Icon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		class UImage*                                      divider                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		class UImage*                                      Background                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		class UTextBlock*                                  Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void UWidget_KeyShortcuts_C::UpdateShortcutVisibility(bool Condition, class UImage* Icon, class UImage* divider, class UImage* Background, class UTextBlock* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_KeyShortcuts.Widget_KeyShortcuts_C.UpdateShortcutVisibility");
		
		UWidget_KeyShortcuts_C_UpdateShortcutVisibility_Params params {};
		params.Condition = Condition;
		params.Icon = Icon;
		params.divider = divider;
		params.Background = Background;
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_KeyShortcuts.Widget_KeyShortcuts_C.Try Show Map
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_KeyShortcuts_C::TryShowMap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_KeyShortcuts.Widget_KeyShortcuts_C.Try Show Map");
		
		UWidget_KeyShortcuts_C_TryShowMap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_KeyShortcuts.Widget_KeyShortcuts_C.TryShowCustomizer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_KeyShortcuts_C::TryShowCustomizer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_KeyShortcuts.Widget_KeyShortcuts_C.TryShowCustomizer");
		
		UWidget_KeyShortcuts_C_TryShowCustomizer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_KeyShortcuts.Widget_KeyShortcuts_C.UpdateShortcutText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_KeyShortcuts_C::UpdateShortcutText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_KeyShortcuts.Widget_KeyShortcuts_C.UpdateShortcutText");
		
		UWidget_KeyShortcuts_C_UpdateShortcutText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_KeyShortcuts.Widget_KeyShortcuts_C.GetKeyForAction
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FText                                        ActionName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        keyText                                                    (Parm, OutParm)
	 */
	void UWidget_KeyShortcuts_C::GetKeyForAction(const class FText& ActionName, class FText* keyText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_KeyShortcuts.Widget_KeyShortcuts_C.GetKeyForAction");
		
		UWidget_KeyShortcuts_C_GetKeyForAction_Params params {};
		params.ActionName = ActionName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (keyText != nullptr)
			*keyText = params.keyText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_KeyShortcuts.Widget_KeyShortcuts_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_KeyShortcuts_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_KeyShortcuts.Widget_KeyShortcuts_C.Construct");
		
		UWidget_KeyShortcuts_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_KeyShortcuts.Widget_KeyShortcuts_C.UpdateShortcutAvilability
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Unused                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_KeyShortcuts_C::UpdateShortcutAvilability(class UClass* Unused)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_KeyShortcuts.Widget_KeyShortcuts_C.UpdateShortcutAvilability");
		
		UWidget_KeyShortcuts_C_UpdateShortcutAvilability_Params params {};
		params.Unused = Unused;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_KeyShortcuts.Widget_KeyShortcuts_C.On Hide KeyShortcuts Updated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      updatedCvar                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWidget_KeyShortcuts_C::OnHideKeyShortcutsUpdated(const class FString& updatedCvar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_KeyShortcuts.Widget_KeyShortcuts_C.On Hide KeyShortcuts Updated");
		
		UWidget_KeyShortcuts_C_OnHideKeyShortcutsUpdated_Params params {};
		params.updatedCvar = updatedCvar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_KeyShortcuts.Widget_KeyShortcuts_C.ExecuteUbergraph_Widget_KeyShortcuts
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_KeyShortcuts_C::ExecuteUbergraph_Widget_KeyShortcuts(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_KeyShortcuts.Widget_KeyShortcuts_C.ExecuteUbergraph_Widget_KeyShortcuts");
		
		UWidget_KeyShortcuts_C_ExecuteUbergraph_Widget_KeyShortcuts_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_KeyShortcuts_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_KeyShortcuts_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_KeyShortcuts.Widget_KeyShortcuts_C");
		return ptr;
	}

}


