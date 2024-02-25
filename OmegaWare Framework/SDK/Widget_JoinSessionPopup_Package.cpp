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
	 * 		Name   -> Function Widget_JoinSessionPopup.Widget_JoinSessionPopup_C.GetShouldOkayBeEnabled
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool UWidget_JoinSessionPopup_C::GetShouldOkayBeEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_JoinSessionPopup.Widget_JoinSessionPopup_C.GetShouldOkayBeEnabled");
		
		UWidget_JoinSessionPopup_C_GetShouldOkayBeEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_JoinSessionPopup.Widget_JoinSessionPopup_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_JoinSessionPopup_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_JoinSessionPopup.Widget_JoinSessionPopup_C.Construct");
		
		UWidget_JoinSessionPopup_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_JoinSessionPopup.Widget_JoinSessionPopup_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_JoinSessionPopup_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_JoinSessionPopup.Widget_JoinSessionPopup_C.Destruct");
		
		UWidget_JoinSessionPopup_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_JoinSessionPopup.Widget_JoinSessionPopup_C.OnJoinSessionStateUpdated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EJoinSessionState                                  NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_JoinSessionPopup_C::OnJoinSessionStateUpdated(EJoinSessionState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_JoinSessionPopup.Widget_JoinSessionPopup_C.OnJoinSessionStateUpdated");
		
		UWidget_JoinSessionPopup_C_OnJoinSessionStateUpdated_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_JoinSessionPopup.Widget_JoinSessionPopup_C.ExecuteUbergraph_Widget_JoinSessionPopup
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_JoinSessionPopup_C::ExecuteUbergraph_Widget_JoinSessionPopup(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_JoinSessionPopup.Widget_JoinSessionPopup_C.ExecuteUbergraph_Widget_JoinSessionPopup");
		
		UWidget_JoinSessionPopup_C_ExecuteUbergraph_Widget_JoinSessionPopup_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_JoinSessionPopup_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_JoinSessionPopup_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_JoinSessionPopup.Widget_JoinSessionPopup_C");
		return ptr;
	}

}


