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
	 * 		Name   -> Function Widget_ChatMessageRow.Widget_ChatMessageRow_C.SetTextMessage
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ChatMessageRow_C::SetTextMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ChatMessageRow.Widget_ChatMessageRow_C.SetTextMessage");
		
		UWidget_ChatMessageRow_C_SetTextMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_ChatMessageRow.Widget_ChatMessageRow_C.SetPlayerNameColor
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ChatMessageRow_C::SetPlayerNameColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ChatMessageRow.Widget_ChatMessageRow_C.SetPlayerNameColor");
		
		UWidget_ChatMessageRow_C_SetPlayerNameColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_ChatMessageRow.Widget_ChatMessageRow_C.SetPlayerIconColor
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ChatMessageRow_C::SetPlayerIconColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ChatMessageRow.Widget_ChatMessageRow_C.SetPlayerIconColor");
		
		UWidget_ChatMessageRow_C_SetPlayerIconColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_ChatMessageRow.Widget_ChatMessageRow_C.SetPlayerName
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ChatMessageRow_C::SetPlayerName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ChatMessageRow.Widget_ChatMessageRow_C.SetPlayerName");
		
		UWidget_ChatMessageRow_C_SetPlayerName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_ChatMessageRow.Widget_ChatMessageRow_C.GetPlayerNameColor
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FSlateColor UWidget_ChatMessageRow_C::GetPlayerNameColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ChatMessageRow.Widget_ChatMessageRow_C.GetPlayerNameColor");
		
		UWidget_ChatMessageRow_C_GetPlayerNameColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_ChatMessageRow.Widget_ChatMessageRow_C.GetPlayerName
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UWidget_ChatMessageRow_C::GetPlayerName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ChatMessageRow.Widget_ChatMessageRow_C.GetPlayerName");
		
		UWidget_ChatMessageRow_C_GetPlayerName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_ChatMessageRow.Widget_ChatMessageRow_C.GetChatText
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UWidget_ChatMessageRow_C::GetChatText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ChatMessageRow.Widget_ChatMessageRow_C.GetChatText");
		
		UWidget_ChatMessageRow_C_GetChatText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_ChatMessageRow.Widget_ChatMessageRow_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_ChatMessageRow_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ChatMessageRow.Widget_ChatMessageRow_C.Construct");
		
		UWidget_ChatMessageRow_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_ChatMessageRow.Widget_ChatMessageRow_C.RemoveWidgetAfterDelay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_ChatMessageRow_C::RemoveWidgetAfterDelay(double Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ChatMessageRow.Widget_ChatMessageRow_C.RemoveWidgetAfterDelay");
		
		UWidget_ChatMessageRow_C_RemoveWidgetAfterDelay_Params params {};
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_ChatMessageRow.Widget_ChatMessageRow_C.ExecuteUbergraph_Widget_ChatMessageRow
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_ChatMessageRow_C::ExecuteUbergraph_Widget_ChatMessageRow(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ChatMessageRow.Widget_ChatMessageRow_C.ExecuteUbergraph_Widget_ChatMessageRow");
		
		UWidget_ChatMessageRow_C_ExecuteUbergraph_Widget_ChatMessageRow_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_ChatMessageRow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_ChatMessageRow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_ChatMessageRow.Widget_ChatMessageRow_C");
		return ptr;
	}

}


