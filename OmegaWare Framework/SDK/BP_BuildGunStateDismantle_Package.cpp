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
	 * 		Name   -> Function BP_BuildGunStateDismantle.BP_BuildGunStateDismantle_C.TickState
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_BuildGunStateDismantle_C::TickState(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BuildGunStateDismantle.BP_BuildGunStateDismantle_C.TickState");
		
		UBP_BuildGunStateDismantle_C_TickState_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_BuildGunStateDismantle.BP_BuildGunStateDismantle_C.SecondaryFire
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBP_BuildGunStateDismantle_C::SecondaryFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BuildGunStateDismantle.BP_BuildGunStateDismantle_C.SecondaryFire");
		
		UBP_BuildGunStateDismantle_C_SecondaryFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_BuildGunStateDismantle.BP_BuildGunStateDismantle_C.BeginState
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBP_BuildGunStateDismantle_C::BeginState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BuildGunStateDismantle.BP_BuildGunStateDismantle_C.BeginState");
		
		UBP_BuildGunStateDismantle_C_BeginState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_BuildGunStateDismantle.BP_BuildGunStateDismantle_C.EndState
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBP_BuildGunStateDismantle_C::EndState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BuildGunStateDismantle.BP_BuildGunStateDismantle_C.EndState");
		
		UBP_BuildGunStateDismantle_C_EndState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_BuildGunStateDismantle.BP_BuildGunStateDismantle_C.OnStartDismantle
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBP_BuildGunStateDismantle_C::OnStartDismantle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BuildGunStateDismantle.BP_BuildGunStateDismantle_C.OnStartDismantle");
		
		UBP_BuildGunStateDismantle_C_OnStartDismantle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_BuildGunStateDismantle.BP_BuildGunStateDismantle_C.OnStopDismantle
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBP_BuildGunStateDismantle_C::OnStopDismantle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BuildGunStateDismantle.BP_BuildGunStateDismantle_C.OnStopDismantle");
		
		UBP_BuildGunStateDismantle_C_OnStopDismantle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_BuildGunStateDismantle.BP_BuildGunStateDismantle_C.OnRecipeSampled
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      recipe                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void UBP_BuildGunStateDismantle_C::OnRecipeSampled(class UClass* recipe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BuildGunStateDismantle.BP_BuildGunStateDismantle_C.OnRecipeSampled");
		
		UBP_BuildGunStateDismantle_C_OnRecipeSampled_Params params {};
		params.recipe = recipe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_BuildGunStateDismantle.BP_BuildGunStateDismantle_C.ExecuteUbergraph_BP_BuildGunStateDismantle
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_BuildGunStateDismantle_C::ExecuteUbergraph_BP_BuildGunStateDismantle(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BuildGunStateDismantle.BP_BuildGunStateDismantle_C.ExecuteUbergraph_BP_BuildGunStateDismantle");
		
		UBP_BuildGunStateDismantle_C_ExecuteUbergraph_BP_BuildGunStateDismantle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_BuildGunStateDismantle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_BuildGunStateDismantle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_BuildGunStateDismantle.BP_BuildGunStateDismantle_C");
		return ptr;
	}

}


