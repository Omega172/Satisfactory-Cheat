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
	 * 		Name   -> Function BP_ResourceNodeGeyser.BP_ResourceNodeGeyser_C.OnIsOccupiedChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               newIsOccupied                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ResourceNodeGeyser_C::OnIsOccupiedChanged(bool newIsOccupied)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ResourceNodeGeyser.BP_ResourceNodeGeyser_C.OnIsOccupiedChanged");
		
		ABP_ResourceNodeGeyser_C_OnIsOccupiedChanged_Params params {};
		params.newIsOccupied = newIsOccupied;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ResourceNodeGeyser.BP_ResourceNodeGeyser_C.GainedSignificance
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_ResourceNodeGeyser_C::GainedSignificance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ResourceNodeGeyser.BP_ResourceNodeGeyser_C.GainedSignificance");
		
		ABP_ResourceNodeGeyser_C_GainedSignificance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ResourceNodeGeyser.BP_ResourceNodeGeyser_C.LostSignificance
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_ResourceNodeGeyser_C::LostSignificance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ResourceNodeGeyser.BP_ResourceNodeGeyser_C.LostSignificance");
		
		ABP_ResourceNodeGeyser_C_LostSignificance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ResourceNodeGeyser.BP_ResourceNodeGeyser_C.EruptLoop
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ResourceNodeGeyser_C::EruptLoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ResourceNodeGeyser.BP_ResourceNodeGeyser_C.EruptLoop");
		
		ABP_ResourceNodeGeyser_C_EruptLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ResourceNodeGeyser.BP_ResourceNodeGeyser_C.LaunchCharacters
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ResourceNodeGeyser_C::LaunchCharacters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ResourceNodeGeyser.BP_ResourceNodeGeyser_C.LaunchCharacters");
		
		ABP_ResourceNodeGeyser_C_LaunchCharacters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ResourceNodeGeyser.BP_ResourceNodeGeyser_C.ExecuteUbergraph_BP_ResourceNodeGeyser
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ResourceNodeGeyser_C::ExecuteUbergraph_BP_ResourceNodeGeyser(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ResourceNodeGeyser.BP_ResourceNodeGeyser_C.ExecuteUbergraph_BP_ResourceNodeGeyser");
		
		ABP_ResourceNodeGeyser_C_ExecuteUbergraph_BP_ResourceNodeGeyser_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_ResourceNodeGeyser_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ResourceNodeGeyser_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ResourceNodeGeyser.BP_ResourceNodeGeyser_C");
		return ptr;
	}

}


