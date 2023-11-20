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
	 * 		Name   -> Function Build_XmassTree.Build_XmassTree_C.OnRep_Tier
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuild_XmassTree_C::OnRep_Tier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_XmassTree.Build_XmassTree_C.OnRep_Tier");
		
		ABuild_XmassTree_C_OnRep_Tier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_XmassTree.Build_XmassTree_C.EventPurchasedSchematic
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      purchasedSchematic                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuild_XmassTree_C::EventPurchasedSchematic(class UClass* purchasedSchematic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_XmassTree.Build_XmassTree_C.EventPurchasedSchematic");
		
		ABuild_XmassTree_C_EventPurchasedSchematic_Params params {};
		params.purchasedSchematic = purchasedSchematic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_XmassTree.Build_XmassTree_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABuild_XmassTree_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_XmassTree.Build_XmassTree_C.ReceiveBeginPlay");
		
		ABuild_XmassTree_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_XmassTree.Build_XmassTree_C.UpgradeTier
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            newTier                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuild_XmassTree_C::UpgradeTier(int32_t newTier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_XmassTree.Build_XmassTree_C.UpgradeTier");
		
		ABuild_XmassTree_C_UpgradeTier_Params params {};
		params.newTier = newTier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_XmassTree.Build_XmassTree_C.SetTier
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuild_XmassTree_C::SetTier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_XmassTree.Build_XmassTree_C.SetTier");
		
		ABuild_XmassTree_C_SetTier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_XmassTree.Build_XmassTree_C.Tier1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuild_XmassTree_C::Tier1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_XmassTree.Build_XmassTree_C.Tier1");
		
		ABuild_XmassTree_C_Tier1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_XmassTree.Build_XmassTree_C.Tier2
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuild_XmassTree_C::Tier2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_XmassTree.Build_XmassTree_C.Tier2");
		
		ABuild_XmassTree_C_Tier2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_XmassTree.Build_XmassTree_C.Tier3
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuild_XmassTree_C::Tier3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_XmassTree.Build_XmassTree_C.Tier3");
		
		ABuild_XmassTree_C_Tier3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_XmassTree.Build_XmassTree_C.Tier4
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuild_XmassTree_C::Tier4()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_XmassTree.Build_XmassTree_C.Tier4");
		
		ABuild_XmassTree_C_Tier4_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_XmassTree.Build_XmassTree_C.ExecuteUbergraph_Build_XmassTree
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuild_XmassTree_C::ExecuteUbergraph_Build_XmassTree(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_XmassTree.Build_XmassTree_C.ExecuteUbergraph_Build_XmassTree");
		
		ABuild_XmassTree_C_ExecuteUbergraph_Build_XmassTree_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuild_XmassTree_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuild_XmassTree_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Build_XmassTree.Build_XmassTree_C");
		return ptr;
	}

}


