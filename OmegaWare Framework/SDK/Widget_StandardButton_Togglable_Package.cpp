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
	 * 		Name   -> Function Widget_StandardButton_Togglable.Widget_StandardButton_Togglable_C.SetButtonState
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               mIsTrue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_StandardButton_Togglable_C::SetButtonState(bool mIsTrue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_StandardButton_Togglable.Widget_StandardButton_Togglable_C.SetButtonState");
		
		UWidget_StandardButton_Togglable_C_SetButtonState_Params params {};
		params.mIsTrue = mIsTrue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_StandardButton_Togglable.Widget_StandardButton_Togglable_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_StandardButton_Togglable_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_StandardButton_Togglable.Widget_StandardButton_Togglable_C.PreConstruct");
		
		UWidget_StandardButton_Togglable_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_StandardButton_Togglable.Widget_StandardButton_Togglable_C.Init
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               mIsTrue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_StandardButton_Togglable_C::Init(bool mIsTrue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_StandardButton_Togglable.Widget_StandardButton_Togglable_C.Init");
		
		UWidget_StandardButton_Togglable_C_Init_Params params {};
		params.mIsTrue = mIsTrue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_StandardButton_Togglable.Widget_StandardButton_Togglable_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_StandardButton_Togglable_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_StandardButton_Togglable.Widget_StandardButton_Togglable_C.Construct");
		
		UWidget_StandardButton_Togglable_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_StandardButton_Togglable.Widget_StandardButton_Togglable_C.OnButtonClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_StandardButton_Togglable_C::OnButtonClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_StandardButton_Togglable.Widget_StandardButton_Togglable_C.OnButtonClicked");
		
		UWidget_StandardButton_Togglable_C_OnButtonClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_StandardButton_Togglable.Widget_StandardButton_Togglable_C.ExecuteUbergraph_Widget_StandardButton_Togglable
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_StandardButton_Togglable_C::ExecuteUbergraph_Widget_StandardButton_Togglable(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_StandardButton_Togglable.Widget_StandardButton_Togglable_C.ExecuteUbergraph_Widget_StandardButton_Togglable");
		
		UWidget_StandardButton_Togglable_C_ExecuteUbergraph_Widget_StandardButton_Togglable_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_StandardButton_Togglable.Widget_StandardButton_Togglable_C.OnStateChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsTrue                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_StandardButton_Togglable_C::OnStateChanged__DelegateSignature(bool IsTrue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_StandardButton_Togglable.Widget_StandardButton_Togglable_C.OnStateChanged__DelegateSignature");
		
		UWidget_StandardButton_Togglable_C_OnStateChanged__DelegateSignature_Params params {};
		params.IsTrue = IsTrue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_StandardButton_Togglable_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_StandardButton_Togglable_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_StandardButton_Togglable.Widget_StandardButton_Togglable_C");
		return ptr;
	}

}


