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
	 * 		Name   -> Function Widget_NetworkErrorPopup.Widget_NetworkErrorPopup_C.CreatePopup
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FFGGameNetworkErrorMsg                      FGGameNetworkErrorMsg                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWidget_NetworkErrorPopup_C::CreatePopup(const struct FFGGameNetworkErrorMsg& FGGameNetworkErrorMsg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_NetworkErrorPopup.Widget_NetworkErrorPopup_C.CreatePopup");
		
		UWidget_NetworkErrorPopup_C_CreatePopup_Params params {};
		params.FGGameNetworkErrorMsg = FGGameNetworkErrorMsg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_NetworkErrorPopup.Widget_NetworkErrorPopup_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_NetworkErrorPopup_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_NetworkErrorPopup.Widget_NetworkErrorPopup_C.Construct");
		
		UWidget_NetworkErrorPopup_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_NetworkErrorPopup.Widget_NetworkErrorPopup_C.mOnNetworkErrorRecieved_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ENetworkFailure                                    ErrorType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      ErrorMsg                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWidget_NetworkErrorPopup_C::mOnNetworkErrorRecieved_Event_1(ENetworkFailure ErrorType, const class FString& ErrorMsg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_NetworkErrorPopup.Widget_NetworkErrorPopup_C.mOnNetworkErrorRecieved_Event_1");
		
		UWidget_NetworkErrorPopup_C_mOnNetworkErrorRecieved_Event_1_Params params {};
		params.ErrorType = ErrorType;
		params.ErrorMsg = ErrorMsg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_NetworkErrorPopup.Widget_NetworkErrorPopup_C.CheckErrors
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_NetworkErrorPopup_C::CheckErrors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_NetworkErrorPopup.Widget_NetworkErrorPopup_C.CheckErrors");
		
		UWidget_NetworkErrorPopup_C_CheckErrors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_NetworkErrorPopup.Widget_NetworkErrorPopup_C.OnPopupClosed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_NetworkErrorPopup_C::OnPopupClosed(bool NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_NetworkErrorPopup.Widget_NetworkErrorPopup_C.OnPopupClosed");
		
		UWidget_NetworkErrorPopup_C_OnPopupClosed_Params params {};
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_NetworkErrorPopup.Widget_NetworkErrorPopup_C.ExecuteUbergraph_Widget_NetworkErrorPopup
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_NetworkErrorPopup_C::ExecuteUbergraph_Widget_NetworkErrorPopup(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_NetworkErrorPopup.Widget_NetworkErrorPopup_C.ExecuteUbergraph_Widget_NetworkErrorPopup");
		
		UWidget_NetworkErrorPopup_C_ExecuteUbergraph_Widget_NetworkErrorPopup_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_NetworkErrorPopup_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_NetworkErrorPopup_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_NetworkErrorPopup.Widget_NetworkErrorPopup_C");
		return ptr;
	}

}


