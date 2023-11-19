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
	 * 		Name   -> Function BPW_AttentionPing.BPW_AttentionPing_C.SetOffScreen
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsOffScreen                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_AttentionPing_C::SetOffScreen(bool IsOffScreen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_AttentionPing.BPW_AttentionPing_C.SetOffScreen");
		
		UBPW_AttentionPing_C_SetOffScreen_Params params {};
		params.IsOffScreen = IsOffScreen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_AttentionPing.BPW_AttentionPing_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_AttentionPing_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_AttentionPing.BPW_AttentionPing_C.Construct");
		
		UBPW_AttentionPing_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_AttentionPing.BPW_AttentionPing_C.OnRemoveFromParent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_AttentionPing_C::OnRemoveFromParent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_AttentionPing.BPW_AttentionPing_C.OnRemoveFromParent");
		
		UBPW_AttentionPing_C_OnRemoveFromParent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_AttentionPing.BPW_AttentionPing_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_AttentionPing_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_AttentionPing.BPW_AttentionPing_C.Tick");
		
		UBPW_AttentionPing_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_AttentionPing.BPW_AttentionPing_C.OnObjectOnScreenDetected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_AttentionPing_C::OnObjectOnScreenDetected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_AttentionPing.BPW_AttentionPing_C.OnObjectOnScreenDetected");
		
		UBPW_AttentionPing_C_OnObjectOnScreenDetected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_AttentionPing.BPW_AttentionPing_C.OnObjectOffScreenDetected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_AttentionPing_C::OnObjectOffScreenDetected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_AttentionPing.BPW_AttentionPing_C.OnObjectOffScreenDetected");
		
		UBPW_AttentionPing_C_OnObjectOffScreenDetected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_AttentionPing.BPW_AttentionPing_C.OnObjectInCenterAreaDetected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_AttentionPing_C::OnObjectInCenterAreaDetected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_AttentionPing.BPW_AttentionPing_C.OnObjectInCenterAreaDetected");
		
		UBPW_AttentionPing_C_OnObjectInCenterAreaDetected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_AttentionPing.BPW_AttentionPing_C.OnObjectInCenterAreaNotDetected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_AttentionPing_C::OnObjectInCenterAreaNotDetected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_AttentionPing.BPW_AttentionPing_C.OnObjectInCenterAreaNotDetected");
		
		UBPW_AttentionPing_C_OnObjectInCenterAreaNotDetected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_AttentionPing.BPW_AttentionPing_C.ExecuteUbergraph_BPW_AttentionPing
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_AttentionPing_C::ExecuteUbergraph_BPW_AttentionPing(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_AttentionPing.BPW_AttentionPing_C.ExecuteUbergraph_BPW_AttentionPing");
		
		UBPW_AttentionPing_C_ExecuteUbergraph_BPW_AttentionPing_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_AttentionPing_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_AttentionPing_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_AttentionPing.BPW_AttentionPing_C");
		return ptr;
	}

}


