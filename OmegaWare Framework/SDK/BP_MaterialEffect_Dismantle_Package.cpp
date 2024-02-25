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
	 * 		Name   -> Function BP_MaterialEffect_Dismantle.BP_MaterialEffect_Dismantle_C.OnStarted
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UBP_MaterialEffect_Dismantle_C::OnStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MaterialEffect_Dismantle.BP_MaterialEffect_Dismantle_C.OnStarted");
		
		UBP_MaterialEffect_Dismantle_C_OnStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_MaterialEffect_Dismantle.BP_MaterialEffect_Dismantle_C.OnUpdate
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MaterialEffect_Dismantle_C::OnUpdate(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MaterialEffect_Dismantle.BP_MaterialEffect_Dismantle_C.OnUpdate");
		
		UBP_MaterialEffect_Dismantle_C_OnUpdate_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_MaterialEffect_Dismantle.BP_MaterialEffect_Dismantle_C.PreStarted
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UBP_MaterialEffect_Dismantle_C::PreStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MaterialEffect_Dismantle.BP_MaterialEffect_Dismantle_C.PreStarted");
		
		UBP_MaterialEffect_Dismantle_C_PreStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_MaterialEffect_Dismantle.BP_MaterialEffect_Dismantle_C.ExecuteUbergraph_BP_MaterialEffect_Dismantle
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MaterialEffect_Dismantle_C::ExecuteUbergraph_BP_MaterialEffect_Dismantle(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MaterialEffect_Dismantle.BP_MaterialEffect_Dismantle_C.ExecuteUbergraph_BP_MaterialEffect_Dismantle");
		
		UBP_MaterialEffect_Dismantle_C_ExecuteUbergraph_BP_MaterialEffect_Dismantle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_MaterialEffect_Dismantle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_MaterialEffect_Dismantle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MaterialEffect_Dismantle.BP_MaterialEffect_Dismantle_C");
		return ptr;
	}

}


