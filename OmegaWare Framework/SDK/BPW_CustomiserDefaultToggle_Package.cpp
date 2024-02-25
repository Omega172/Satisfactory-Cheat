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
	 * 		Name   -> Function BPW_CustomiserDefaultToggle.BPW_CustomiserDefaultToggle_C.SetName
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_CustomiserDefaultToggle_C::SetName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_CustomiserDefaultToggle.BPW_CustomiserDefaultToggle_C.SetName");
		
		UBPW_CustomiserDefaultToggle_C_SetName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_CustomiserDefaultToggle.BPW_CustomiserDefaultToggle_C.SetIsCurrentSwatch
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               mIsCurrentSwatch                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_CustomiserDefaultToggle_C::SetIsCurrentSwatch(bool mIsCurrentSwatch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_CustomiserDefaultToggle.BPW_CustomiserDefaultToggle_C.SetIsCurrentSwatch");
		
		UBPW_CustomiserDefaultToggle_C_SetIsCurrentSwatch_Params params {};
		params.mIsCurrentSwatch = mIsCurrentSwatch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_CustomiserDefaultToggle.BPW_CustomiserDefaultToggle_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_CustomiserDefaultToggle_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_CustomiserDefaultToggle.BPW_CustomiserDefaultToggle_C.PreConstruct");
		
		UBPW_CustomiserDefaultToggle_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_CustomiserDefaultToggle.BPW_CustomiserDefaultToggle_C.BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_CustomiserDefaultToggle_C::BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_CustomiserDefaultToggle.BPW_CustomiserDefaultToggle_C.BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UBPW_CustomiserDefaultToggle_C_BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_CustomiserDefaultToggle.BPW_CustomiserDefaultToggle_C.ExecuteUbergraph_BPW_CustomiserDefaultToggle
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_CustomiserDefaultToggle_C::ExecuteUbergraph_BPW_CustomiserDefaultToggle(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_CustomiserDefaultToggle.BPW_CustomiserDefaultToggle_C.ExecuteUbergraph_BPW_CustomiserDefaultToggle");
		
		UBPW_CustomiserDefaultToggle_C_ExecuteUbergraph_BPW_CustomiserDefaultToggle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_CustomiserDefaultToggle.BPW_CustomiserDefaultToggle_C.OnClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      SwatchGroup                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_CustomiserDefaultToggle_C::OnClicked__DelegateSignature(class UClass* SwatchGroup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_CustomiserDefaultToggle.BPW_CustomiserDefaultToggle_C.OnClicked__DelegateSignature");
		
		UBPW_CustomiserDefaultToggle_C_OnClicked__DelegateSignature_Params params {};
		params.SwatchGroup = SwatchGroup;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_CustomiserDefaultToggle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_CustomiserDefaultToggle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_CustomiserDefaultToggle.BPW_CustomiserDefaultToggle_C");
		return ptr;
	}

}


