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
	 * 		Name   -> Function BPW_MarkerEditor.BPW_MarkerEditor_C.OnCompassViewDistanceUnhovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_MarkerEditor_C::OnCompassViewDistanceUnhovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MarkerEditor.BPW_MarkerEditor_C.OnCompassViewDistanceUnhovered__DelegateSignature");
		
		UBPW_MarkerEditor_C_OnCompassViewDistanceUnhovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_MarkerEditor.BPW_MarkerEditor_C.OnCompassViewDistanceHovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ECompassViewDistance                               Distance                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_MarkerEditor_C::OnCompassViewDistanceHovered__DelegateSignature(ECompassViewDistance Distance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MarkerEditor.BPW_MarkerEditor_C.OnCompassViewDistanceHovered__DelegateSignature");
		
		UBPW_MarkerEditor_C_OnCompassViewDistanceHovered__DelegateSignature_Params params {};
		params.Distance = Distance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_MarkerEditor.BPW_MarkerEditor_C.OnClose__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_MarkerEditor_C::OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MarkerEditor.BPW_MarkerEditor_C.OnClose__DelegateSignature");
		
		UBPW_MarkerEditor_C_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_MarkerEditor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_MarkerEditor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_MarkerEditor.BPW_MarkerEditor_C");
		return ptr;
	}

}


