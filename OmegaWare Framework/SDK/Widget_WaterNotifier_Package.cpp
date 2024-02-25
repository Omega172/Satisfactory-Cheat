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
	 * 		Name   -> Function Widget_WaterNotifier.Widget_WaterNotifier_C.SetTitleText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        messageText                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWidget_WaterNotifier_C::SetTitleText(const class FText& messageText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_WaterNotifier.Widget_WaterNotifier_C.SetTitleText");
		
		UWidget_WaterNotifier_C_SetTitleText_Params params {};
		params.messageText = messageText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_WaterNotifier.Widget_WaterNotifier_C.SetMessageText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        messageText                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWidget_WaterNotifier_C::SetMessageText(const class FText& messageText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_WaterNotifier.Widget_WaterNotifier_C.SetMessageText");
		
		UWidget_WaterNotifier_C_SetMessageText_Params params {};
		params.messageText = messageText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_WaterNotifier.Widget_WaterNotifier_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_WaterNotifier_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_WaterNotifier.Widget_WaterNotifier_C.Construct");
		
		UWidget_WaterNotifier_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_WaterNotifier.Widget_WaterNotifier_C.RemoveNotifier
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_WaterNotifier_C::RemoveNotifier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_WaterNotifier.Widget_WaterNotifier_C.RemoveNotifier");
		
		UWidget_WaterNotifier_C_RemoveNotifier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_WaterNotifier.Widget_WaterNotifier_C.ExecuteUbergraph_Widget_WaterNotifier
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_WaterNotifier_C::ExecuteUbergraph_Widget_WaterNotifier(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_WaterNotifier.Widget_WaterNotifier_C.ExecuteUbergraph_Widget_WaterNotifier");
		
		UWidget_WaterNotifier_C_ExecuteUbergraph_Widget_WaterNotifier_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_WaterNotifier_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_WaterNotifier_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_WaterNotifier.Widget_WaterNotifier_C");
		return ptr;
	}

}


