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
	 * 		Name   -> Function BPW_BlueprintSelector.BPW_BlueprintSelector_C.OnOpen
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_BlueprintSelector_C::OnOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintSelector.BPW_BlueprintSelector_C.OnOpen");
		
		UBPW_BlueprintSelector_C_OnOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_BlueprintSelector.BPW_BlueprintSelector_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_BlueprintSelector_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintSelector.BPW_BlueprintSelector_C.Construct");
		
		UBPW_BlueprintSelector_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_BlueprintSelector.BPW_BlueprintSelector_C.OnBlueprintClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGBlueprintDescriptor*                      blueprintDescriptor                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BlueprintSelector_C::OnBlueprintClicked(class UFGBlueprintDescriptor* blueprintDescriptor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintSelector.BPW_BlueprintSelector_C.OnBlueprintClicked");
		
		UBPW_BlueprintSelector_C_OnBlueprintClicked_Params params {};
		params.blueprintDescriptor = blueprintDescriptor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_BlueprintSelector.BPW_BlueprintSelector_C.BndEvt__BPW_BlueprintSelector_Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_BlueprintSelector_C::BndEvt__BPW_BlueprintSelector_Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintSelector.BPW_BlueprintSelector_C.BndEvt__BPW_BlueprintSelector_Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature");
		
		UBPW_BlueprintSelector_C_BndEvt__BPW_BlueprintSelector_Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_BlueprintSelector.BPW_BlueprintSelector_C.ExecuteUbergraph_BPW_BlueprintSelector
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BlueprintSelector_C::ExecuteUbergraph_BPW_BlueprintSelector(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintSelector.BPW_BlueprintSelector_C.ExecuteUbergraph_BPW_BlueprintSelector");
		
		UBPW_BlueprintSelector_C_ExecuteUbergraph_BPW_BlueprintSelector_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_BlueprintSelector.BPW_BlueprintSelector_C.OnBlueprintSelected__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGBlueprintDescriptor*                      blueprintDescriptor                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BlueprintSelector_C::OnBlueprintSelected__DelegateSignature(class UFGBlueprintDescriptor* blueprintDescriptor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintSelector.BPW_BlueprintSelector_C.OnBlueprintSelected__DelegateSignature");
		
		UBPW_BlueprintSelector_C_OnBlueprintSelected__DelegateSignature_Params params {};
		params.blueprintDescriptor = blueprintDescriptor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_BlueprintSelector.BPW_BlueprintSelector_C.OnClose__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_BlueprintSelector_C::OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintSelector.BPW_BlueprintSelector_C.OnClose__DelegateSignature");
		
		UBPW_BlueprintSelector_C_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_BlueprintSelector_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_BlueprintSelector_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_BlueprintSelector.BPW_BlueprintSelector_C");
		return ptr;
	}

}


