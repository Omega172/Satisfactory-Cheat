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
	 * 		Name   -> Function BPW_CreatureIndicator_Object.BPW_CreatureIndicator_Object_C.SetAggroLevel
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             AggroLevel                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_CreatureIndicator_Object_C::SetAggroLevel(double AggroLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_CreatureIndicator_Object.BPW_CreatureIndicator_Object_C.SetAggroLevel");
		
		UBPW_CreatureIndicator_Object_C_SetAggroLevel_Params params {};
		params.AggroLevel = AggroLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_CreatureIndicator_Object.BPW_CreatureIndicator_Object_C.SetCreatureState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ECreatureState                                     State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_CreatureIndicator_Object_C::SetCreatureState(ECreatureState State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_CreatureIndicator_Object.BPW_CreatureIndicator_Object_C.SetCreatureState");
		
		UBPW_CreatureIndicator_Object_C_SetCreatureState_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_CreatureIndicator_Object.BPW_CreatureIndicator_Object_C.RemoveObject
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_CreatureIndicator_Object_C::RemoveObject()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_CreatureIndicator_Object.BPW_CreatureIndicator_Object_C.RemoveObject");
		
		UBPW_CreatureIndicator_Object_C_RemoveObject_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_CreatureIndicator_Object.BPW_CreatureIndicator_Object_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_CreatureIndicator_Object_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_CreatureIndicator_Object.BPW_CreatureIndicator_Object_C.Construct");
		
		UBPW_CreatureIndicator_Object_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_CreatureIndicator_Object.BPW_CreatureIndicator_Object_C.OnObjectOffScreenDetected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_CreatureIndicator_Object_C::OnObjectOffScreenDetected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_CreatureIndicator_Object.BPW_CreatureIndicator_Object_C.OnObjectOffScreenDetected");
		
		UBPW_CreatureIndicator_Object_C_OnObjectOffScreenDetected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_CreatureIndicator_Object.BPW_CreatureIndicator_Object_C.OnObjectOnScreenDetected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_CreatureIndicator_Object_C::OnObjectOnScreenDetected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_CreatureIndicator_Object.BPW_CreatureIndicator_Object_C.OnObjectOnScreenDetected");
		
		UBPW_CreatureIndicator_Object_C_OnObjectOnScreenDetected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_CreatureIndicator_Object.BPW_CreatureIndicator_Object_C.ExecuteUbergraph_BPW_CreatureIndicator_Object
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_CreatureIndicator_Object_C::ExecuteUbergraph_BPW_CreatureIndicator_Object(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_CreatureIndicator_Object.BPW_CreatureIndicator_Object_C.ExecuteUbergraph_BPW_CreatureIndicator_Object");
		
		UBPW_CreatureIndicator_Object_C_ExecuteUbergraph_BPW_CreatureIndicator_Object_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_CreatureIndicator_Object_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_CreatureIndicator_Object_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_CreatureIndicator_Object.BPW_CreatureIndicator_Object_C");
		return ptr;
	}

}


