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
	 * 		Name   -> Function Widget_MessageNotifier.Widget_MessageNotifier_C.GetKeyForAction
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        keyText                                                    (Parm, OutParm)
	 */
	void UWidget_MessageNotifier_C::GetKeyForAction(class FText* keyText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MessageNotifier.Widget_MessageNotifier_C.GetKeyForAction");
		
		UWidget_MessageNotifier_C_GetKeyForAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (keyText != nullptr)
			*keyText = params.keyText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_MessageNotifier.Widget_MessageNotifier_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_MessageNotifier_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MessageNotifier.Widget_MessageNotifier_C.PreConstruct");
		
		UWidget_MessageNotifier_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_MessageNotifier.Widget_MessageNotifier_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_MessageNotifier_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MessageNotifier.Widget_MessageNotifier_C.Construct");
		
		UWidget_MessageNotifier_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_MessageNotifier.Widget_MessageNotifier_C.RemoveNotifier
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_MessageNotifier_C::RemoveNotifier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MessageNotifier.Widget_MessageNotifier_C.RemoveNotifier");
		
		UWidget_MessageNotifier_C_RemoveNotifier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_MessageNotifier.Widget_MessageNotifier_C.ExecuteUbergraph_Widget_MessageNotifier
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_MessageNotifier_C::ExecuteUbergraph_Widget_MessageNotifier(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MessageNotifier.Widget_MessageNotifier_C.ExecuteUbergraph_Widget_MessageNotifier");
		
		UWidget_MessageNotifier_C_ExecuteUbergraph_Widget_MessageNotifier_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_MessageNotifier_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_MessageNotifier_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_MessageNotifier.Widget_MessageNotifier_C");
		return ptr;
	}

}


