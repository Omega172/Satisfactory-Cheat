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
	 * 		Name   -> Function BPW_SignSettingContainer.BPW_SignSettingContainer_C.SetButtonText
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        mButtonText                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_SignSettingContainer_C::SetButtonText(const class FText& mButtonText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignSettingContainer.BPW_SignSettingContainer_C.SetButtonText");
		
		UBPW_SignSettingContainer_C_SetButtonText_Params params {};
		params.mButtonText = mButtonText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SignSettingContainer.BPW_SignSettingContainer_C.SetShowDescription
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               mShowDescription                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_SignSettingContainer_C::SetShowDescription(bool mShowDescription)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignSettingContainer.BPW_SignSettingContainer_C.SetShowDescription");
		
		UBPW_SignSettingContainer_C_SetShowDescription_Params params {};
		params.mShowDescription = mShowDescription;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SignSettingContainer.BPW_SignSettingContainer_C.SetDescription
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        mDescription                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_SignSettingContainer_C::SetDescription(const class FText& mDescription)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignSettingContainer.BPW_SignSettingContainer_C.SetDescription");
		
		UBPW_SignSettingContainer_C_SetDescription_Params params {};
		params.mDescription = mDescription;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SignSettingContainer.BPW_SignSettingContainer_C.SetTitle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        mTitle                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_SignSettingContainer_C::SetTitle(const class FText& mTitle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignSettingContainer.BPW_SignSettingContainer_C.SetTitle");
		
		UBPW_SignSettingContainer_C_SetTitle_Params params {};
		params.mTitle = mTitle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SignSettingContainer.BPW_SignSettingContainer_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_SignSettingContainer_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignSettingContainer.BPW_SignSettingContainer_C.PreConstruct");
		
		UBPW_SignSettingContainer_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SignSettingContainer.BPW_SignSettingContainer_C.BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_SignSettingContainer_C::BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignSettingContainer.BPW_SignSettingContainer_C.BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UBPW_SignSettingContainer_C_BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SignSettingContainer.BPW_SignSettingContainer_C.ExecuteUbergraph_BPW_SignSettingContainer
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_SignSettingContainer_C::ExecuteUbergraph_BPW_SignSettingContainer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignSettingContainer.BPW_SignSettingContainer_C.ExecuteUbergraph_BPW_SignSettingContainer");
		
		UBPW_SignSettingContainer_C_ExecuteUbergraph_BPW_SignSettingContainer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SignSettingContainer.BPW_SignSettingContainer_C.OnButtonClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_SignSettingContainer_C::OnButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignSettingContainer.BPW_SignSettingContainer_C.OnButtonClicked__DelegateSignature");
		
		UBPW_SignSettingContainer_C_OnButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_SignSettingContainer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_SignSettingContainer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_SignSettingContainer.BPW_SignSettingContainer_C");
		return ptr;
	}

}


