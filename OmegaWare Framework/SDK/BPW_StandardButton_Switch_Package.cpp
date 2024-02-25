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
	 * 		Name   -> Function BPW_StandardButton_Switch.BPW_StandardButton_Switch_C.UpdateButtons
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_StandardButton_Switch_C::UpdateButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_StandardButton_Switch.BPW_StandardButton_Switch_C.UpdateButtons");
		
		UBPW_StandardButton_Switch_C_UpdateButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_StandardButton_Switch.BPW_StandardButton_Switch_C.SetIsSelected
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               mIsSelected                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_StandardButton_Switch_C::SetIsSelected(bool mIsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_StandardButton_Switch.BPW_StandardButton_Switch_C.SetIsSelected");
		
		UBPW_StandardButton_Switch_C_SetIsSelected_Params params {};
		params.mIsSelected = mIsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_StandardButton_Switch.BPW_StandardButton_Switch_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_StandardButton_Switch_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_StandardButton_Switch.BPW_StandardButton_Switch_C.PreConstruct");
		
		UBPW_StandardButton_Switch_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_StandardButton_Switch.BPW_StandardButton_Switch_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_StandardButton_Switch_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_StandardButton_Switch.BPW_StandardButton_Switch_C.Construct");
		
		UBPW_StandardButton_Switch_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_StandardButton_Switch.BPW_StandardButton_Switch_C.ButtonPressed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_StandardButton_Switch_C::ButtonPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_StandardButton_Switch.BPW_StandardButton_Switch_C.ButtonPressed");
		
		UBPW_StandardButton_Switch_C_ButtonPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_StandardButton_Switch.BPW_StandardButton_Switch_C.ExecuteUbergraph_BPW_StandardButton_Switch
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_StandardButton_Switch_C::ExecuteUbergraph_BPW_StandardButton_Switch(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_StandardButton_Switch.BPW_StandardButton_Switch_C.ExecuteUbergraph_BPW_StandardButton_Switch");
		
		UBPW_StandardButton_Switch_C_ExecuteUbergraph_BPW_StandardButton_Switch_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_StandardButton_Switch_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_StandardButton_Switch_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_StandardButton_Switch.BPW_StandardButton_Switch_C");
		return ptr;
	}

}


