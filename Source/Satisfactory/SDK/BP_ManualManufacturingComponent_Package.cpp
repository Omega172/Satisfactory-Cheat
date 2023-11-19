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
	 * 		Name   -> Function BP_ManualManufacturingComponent.BP_ManualManufacturingComponent_C.AwardRewards
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ManualManufacturingComponent_C::AwardRewards()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ManualManufacturingComponent.BP_ManualManufacturingComponent_C.AwardRewards");
		
		UBP_ManualManufacturingComponent_C_AwardRewards_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ManualManufacturingComponent.BP_ManualManufacturingComponent_C.CraftComplete
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBP_ManualManufacturingComponent_C::CraftComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ManualManufacturingComponent.BP_ManualManufacturingComponent_C.CraftComplete");
		
		UBP_ManualManufacturingComponent_C_CraftComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ManualManufacturingComponent.BP_ManualManufacturingComponent_C.ExecuteUbergraph_BP_ManualManufacturingComponent
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ManualManufacturingComponent_C::ExecuteUbergraph_BP_ManualManufacturingComponent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ManualManufacturingComponent.BP_ManualManufacturingComponent_C.ExecuteUbergraph_BP_ManualManufacturingComponent");
		
		UBP_ManualManufacturingComponent_C_ExecuteUbergraph_BP_ManualManufacturingComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ManualManufacturingComponent.BP_ManualManufacturingComponent_C.OnCraftCompleted__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ManualManufacturingComponent_C::OnCraftCompleted__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ManualManufacturingComponent.BP_ManualManufacturingComponent_C.OnCraftCompleted__DelegateSignature");
		
		UBP_ManualManufacturingComponent_C_OnCraftCompleted__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_ManualManufacturingComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_ManualManufacturingComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ManualManufacturingComponent.BP_ManualManufacturingComponent_C");
		return ptr;
	}

}


