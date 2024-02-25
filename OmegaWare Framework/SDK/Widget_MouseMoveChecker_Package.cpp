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
	 * 		Name   -> Function Widget_MouseMoveChecker.Widget_MouseMoveChecker_C.CheckIfMouseMove
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_MouseMoveChecker_C::CheckIfMouseMove()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MouseMoveChecker.Widget_MouseMoveChecker_C.CheckIfMouseMove");
		
		UWidget_MouseMoveChecker_C_CheckIfMouseMove_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_MouseMoveChecker.Widget_MouseMoveChecker_C.StopCheckMouse
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_MouseMoveChecker_C::StopCheckMouse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MouseMoveChecker.Widget_MouseMoveChecker_C.StopCheckMouse");
		
		UWidget_MouseMoveChecker_C_StopCheckMouse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_MouseMoveChecker.Widget_MouseMoveChecker_C.StartCheckMouse
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_MouseMoveChecker_C::StartCheckMouse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MouseMoveChecker.Widget_MouseMoveChecker_C.StartCheckMouse");
		
		UWidget_MouseMoveChecker_C_StartCheckMouse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_MouseMoveChecker.Widget_MouseMoveChecker_C.ExecuteUbergraph_Widget_MouseMoveChecker
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_MouseMoveChecker_C::ExecuteUbergraph_Widget_MouseMoveChecker(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MouseMoveChecker.Widget_MouseMoveChecker_C.ExecuteUbergraph_Widget_MouseMoveChecker");
		
		UWidget_MouseMoveChecker_C_ExecuteUbergraph_Widget_MouseMoveChecker_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_MouseMoveChecker.Widget_MouseMoveChecker_C.OnMouseMoved__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_MouseMoveChecker_C::OnMouseMoved__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MouseMoveChecker.Widget_MouseMoveChecker_C.OnMouseMoved__DelegateSignature");
		
		UWidget_MouseMoveChecker_C_OnMouseMoved__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_MouseMoveChecker_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_MouseMoveChecker_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_MouseMoveChecker.Widget_MouseMoveChecker_C");
		return ptr;
	}

}


