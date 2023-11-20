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
	 * 		Name   -> Function BP_FrontEnd.BP_FrontEnd_C.CreatePopupWidget
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPopupData                                  PopupData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	 */
	class UFGPopupWidget* UBP_FrontEnd_C::CreatePopupWidget(const struct FPopupData& PopupData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FrontEnd.BP_FrontEnd_C.CreatePopupWidget");
		
		UBP_FrontEnd_C_CreatePopupWidget_Params params {};
		params.PopupData = PopupData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_FrontEnd.BP_FrontEnd_C.ShouldShutdown
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Shutdown                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_FrontEnd_C::ShouldShutdown(bool* Shutdown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FrontEnd.BP_FrontEnd_C.ShouldShutdown");
		
		UBP_FrontEnd_C_ShouldShutdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Shutdown != nullptr)
			*Shutdown = params.Shutdown;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_FrontEnd.BP_FrontEnd_C.GetErrorButtonText
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FText                                        ButtonText                                                 (Parm, OutParm)
	 */
	void UBP_FrontEnd_C::GetErrorButtonText(class FText* ButtonText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FrontEnd.BP_FrontEnd_C.GetErrorButtonText");
		
		UBP_FrontEnd_C_GetErrorButtonText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ButtonText != nullptr)
			*ButtonText = params.ButtonText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_FrontEnd.BP_FrontEnd_C.HasMoreErrors
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               moreErrors                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_FrontEnd_C::HasMoreErrors(bool* moreErrors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FrontEnd.BP_FrontEnd_C.HasMoreErrors");
		
		UBP_FrontEnd_C_HasMoreErrors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (moreErrors != nullptr)
			*moreErrors = params.moreErrors;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_FrontEnd.BP_FrontEnd_C.ShouldShutdownAfterThisError
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Shutdown                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_FrontEnd_C::ShouldShutdownAfterThisError(bool* Shutdown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FrontEnd.BP_FrontEnd_C.ShouldShutdownAfterThisError");
		
		UBP_FrontEnd_C_ShouldShutdownAfterThisError_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Shutdown != nullptr)
			*Shutdown = params.Shutdown;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_FrontEnd.BP_FrontEnd_C.Internal_ShouldShowLogin
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               shouldShow                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_FrontEnd_C::Internal_ShouldShowLogin(bool* shouldShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FrontEnd.BP_FrontEnd_C.Internal_ShouldShowLogin");
		
		UBP_FrontEnd_C_Internal_ShouldShowLogin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (shouldShow != nullptr)
			*shouldShow = params.shouldShow;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_FrontEnd.BP_FrontEnd_C.ShouldShowLogin
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_FrontEnd_C::ShouldShowLogin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FrontEnd.BP_FrontEnd_C.ShouldShowLogin");
		
		UBP_FrontEnd_C_ShouldShowLogin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_FrontEnd.BP_FrontEnd_C.SetNextErrorMessage
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGErrorMessage*                             newError                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_FrontEnd_C::SetNextErrorMessage(class UFGErrorMessage* newError)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FrontEnd.BP_FrontEnd_C.SetNextErrorMessage");
		
		UBP_FrontEnd_C_SetNextErrorMessage_Params params {};
		params.newError = newError;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_FrontEnd.BP_FrontEnd_C.GetNextErrorMessage
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGErrorMessage*                             ErrorMessage                                               (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_FrontEnd_C::GetNextErrorMessage(class UFGErrorMessage** ErrorMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FrontEnd.BP_FrontEnd_C.GetNextErrorMessage");
		
		UBP_FrontEnd_C_GetNextErrorMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_FrontEnd.BP_FrontEnd_C.Internal_ShowErrorMessage
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               shouldShow                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_FrontEnd_C::Internal_ShowErrorMessage(bool* shouldShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FrontEnd.BP_FrontEnd_C.Internal_ShowErrorMessage");
		
		UBP_FrontEnd_C_Internal_ShowErrorMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (shouldShow != nullptr)
			*shouldShow = params.shouldShow;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_FrontEnd.BP_FrontEnd_C.Internal_ShouldShowMainMenu
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               shouldShow                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_FrontEnd_C::Internal_ShouldShowMainMenu(bool* shouldShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FrontEnd.BP_FrontEnd_C.Internal_ShouldShowMainMenu");
		
		UBP_FrontEnd_C_Internal_ShouldShowMainMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (shouldShow != nullptr)
			*shouldShow = params.shouldShow;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_FrontEnd.BP_FrontEnd_C.Internal_ShouldShowAlphaInfo
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               shouldShow                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_FrontEnd_C::Internal_ShouldShowAlphaInfo(bool* shouldShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FrontEnd.BP_FrontEnd_C.Internal_ShouldShowAlphaInfo");
		
		UBP_FrontEnd_C_Internal_ShouldShowAlphaInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (shouldShow != nullptr)
			*shouldShow = params.shouldShow;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_FrontEnd.BP_FrontEnd_C.ShouldShowErrorPopup
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_FrontEnd_C::ShouldShowErrorPopup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FrontEnd.BP_FrontEnd_C.ShouldShowErrorPopup");
		
		UBP_FrontEnd_C_ShouldShowErrorPopup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_FrontEnd.BP_FrontEnd_C.ShouldShowMainMenu
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_FrontEnd_C::ShouldShowMainMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FrontEnd.BP_FrontEnd_C.ShouldShowMainMenu");
		
		UBP_FrontEnd_C_ShouldShowMainMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_FrontEnd.BP_FrontEnd_C.ShouldShowAlphaInfo
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_FrontEnd_C::ShouldShowAlphaInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FrontEnd.BP_FrontEnd_C.ShouldShowAlphaInfo");
		
		UBP_FrontEnd_C_ShouldShowAlphaInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_FrontEnd.BP_FrontEnd_C.SetupMainMenu
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_FrontEnd_C::SetupMainMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FrontEnd.BP_FrontEnd_C.SetupMainMenu");
		
		UBP_FrontEnd_C_SetupMainMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_FrontEnd.BP_FrontEnd_C.BndEvt__Widget_ErrorMessage_K2Node_ComponentBoundEvent_0_mOnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_FrontEnd_C::BndEvt__Widget_ErrorMessage_K2Node_ComponentBoundEvent_0_mOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FrontEnd.BP_FrontEnd_C.BndEvt__Widget_ErrorMessage_K2Node_ComponentBoundEvent_0_mOnClicked__DelegateSignature");
		
		UBP_FrontEnd_C_BndEvt__Widget_ErrorMessage_K2Node_ComponentBoundEvent_0_mOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_FrontEnd.BP_FrontEnd_C.GetAndSetNewError
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_FrontEnd_C::GetAndSetNewError()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FrontEnd.BP_FrontEnd_C.GetAndSetNewError");
		
		UBP_FrontEnd_C_GetAndSetNewError_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_FrontEnd.BP_FrontEnd_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_FrontEnd_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FrontEnd.BP_FrontEnd_C.Construct");
		
		UBP_FrontEnd_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_FrontEnd.BP_FrontEnd_C.ConditionallySetNewError
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_FrontEnd_C::ConditionallySetNewError()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FrontEnd.BP_FrontEnd_C.ConditionallySetNewError");
		
		UBP_FrontEnd_C_ConditionallySetNewError_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_FrontEnd.BP_FrontEnd_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_FrontEnd_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FrontEnd.BP_FrontEnd_C.Destruct");
		
		UBP_FrontEnd_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_FrontEnd.BP_FrontEnd_C.ClosePopup
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_FrontEnd_C::ClosePopup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FrontEnd.BP_FrontEnd_C.ClosePopup");
		
		UBP_FrontEnd_C_ClosePopup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_FrontEnd.BP_FrontEnd_C.ExecuteUbergraph_BP_FrontEnd
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_FrontEnd_C::ExecuteUbergraph_BP_FrontEnd(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FrontEnd.BP_FrontEnd_C.ExecuteUbergraph_BP_FrontEnd");
		
		UBP_FrontEnd_C_ExecuteUbergraph_BP_FrontEnd_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_FrontEnd_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_FrontEnd_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_FrontEnd.BP_FrontEnd_C");
		return ptr;
	}

}


