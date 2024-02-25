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
	 * 		Name   -> Function BPW_UploadingSave_Popup.BPW_UploadingSave_Popup_C.OnCompleted
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Success                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        ErrorMessage                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBPW_UploadingSave_Popup_C::OnCompleted(bool Success, const class FText& ErrorMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_UploadingSave_Popup.BPW_UploadingSave_Popup_C.OnCompleted");
		
		UBPW_UploadingSave_Popup_C_OnCompleted_Params params {};
		params.Success = Success;
		params.ErrorMessage = ErrorMessage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_UploadingSave_Popup.BPW_UploadingSave_Popup_C.UpdateProgress
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            mCurrent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            mMax                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_UploadingSave_Popup_C::UpdateProgress(int32_t mCurrent, int32_t mMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_UploadingSave_Popup.BPW_UploadingSave_Popup_C.UpdateProgress");
		
		UBPW_UploadingSave_Popup_C_UpdateProgress_Params params {};
		params.mCurrent = mCurrent;
		params.mMax = mMax;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_UploadingSave_Popup.BPW_UploadingSave_Popup_C.SetSaveHeader
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FSaveHeader                                 mSaveGame                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_UploadingSave_Popup_C::SetSaveHeader(const struct FSaveHeader& mSaveGame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_UploadingSave_Popup.BPW_UploadingSave_Popup_C.SetSaveHeader");
		
		UBPW_UploadingSave_Popup_C_SetSaveHeader_Params params {};
		params.mSaveGame = mSaveGame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_UploadingSave_Popup.BPW_UploadingSave_Popup_C.GetShouldOkayBeEnabled
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool UBPW_UploadingSave_Popup_C::GetShouldOkayBeEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_UploadingSave_Popup.BPW_UploadingSave_Popup_C.GetShouldOkayBeEnabled");
		
		UBPW_UploadingSave_Popup_C_GetShouldOkayBeEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_UploadingSave_Popup.BPW_UploadingSave_Popup_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_UploadingSave_Popup_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_UploadingSave_Popup.BPW_UploadingSave_Popup_C.PreConstruct");
		
		UBPW_UploadingSave_Popup_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_UploadingSave_Popup.BPW_UploadingSave_Popup_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_UploadingSave_Popup_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_UploadingSave_Popup.BPW_UploadingSave_Popup_C.Construct");
		
		UBPW_UploadingSave_Popup_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_UploadingSave_Popup.BPW_UploadingSave_Popup_C.ExecuteUbergraph_BPW_UploadingSave_Popup
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_UploadingSave_Popup_C::ExecuteUbergraph_BPW_UploadingSave_Popup(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_UploadingSave_Popup.BPW_UploadingSave_Popup_C.ExecuteUbergraph_BPW_UploadingSave_Popup");
		
		UBPW_UploadingSave_Popup_C_ExecuteUbergraph_BPW_UploadingSave_Popup_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_UploadingSave_Popup.BPW_UploadingSave_Popup_C.OnPopupCanceled__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_UploadingSave_Popup_C::OnPopupCanceled__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_UploadingSave_Popup.BPW_UploadingSave_Popup_C.OnPopupCanceled__DelegateSignature");
		
		UBPW_UploadingSave_Popup_C_OnPopupCanceled__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_UploadingSave_Popup.BPW_UploadingSave_Popup_C.OnServerAdded__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      IP                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            Port                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_UploadingSave_Popup_C::OnServerAdded__DelegateSignature(const class FString& IP, int32_t Port)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_UploadingSave_Popup.BPW_UploadingSave_Popup_C.OnServerAdded__DelegateSignature");
		
		UBPW_UploadingSave_Popup_C_OnServerAdded__DelegateSignature_Params params {};
		params.IP = IP;
		params.Port = Port;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_UploadingSave_Popup_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_UploadingSave_Popup_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_UploadingSave_Popup.BPW_UploadingSave_Popup_C");
		return ptr;
	}

}


