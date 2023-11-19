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
	 * 		Name   -> Function Equip_ResourceMiner.Equip_ResourceMiner_C.PlayFinalEffect
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AEquip_ResourceMiner_C::PlayFinalEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_ResourceMiner.Equip_ResourceMiner_C.PlayFinalEffect");
		
		AEquip_ResourceMiner_C_PlayFinalEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_ResourceMiner.Equip_ResourceMiner_C.PlayMiningEffect
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AEquip_ResourceMiner_C::PlayMiningEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_ResourceMiner.Equip_ResourceMiner_C.PlayMiningEffect");
		
		AEquip_ResourceMiner_C_PlayMiningEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_ResourceMiner.Equip_ResourceMiner_C.StartCameraShake
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AEquip_ResourceMiner_C::StartCameraShake()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_ResourceMiner.Equip_ResourceMiner_C.StartCameraShake");
		
		AEquip_ResourceMiner_C_StartCameraShake_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_ResourceMiner.Equip_ResourceMiner_C.PlaySecondEffects
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AEquip_ResourceMiner_C::PlaySecondEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_ResourceMiner.Equip_ResourceMiner_C.PlaySecondEffects");
		
		AEquip_ResourceMiner_C_PlaySecondEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_ResourceMiner.Equip_ResourceMiner_C.K2_OnStartedMining
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AEquip_ResourceMiner_C::K2_OnStartedMining()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_ResourceMiner.Equip_ResourceMiner_C.K2_OnStartedMining");
		
		AEquip_ResourceMiner_C_K2_OnStartedMining_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_ResourceMiner.Equip_ResourceMiner_C.K2_OnStoppedMining
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AFGResourceNode*                             oldResourceNode                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquip_ResourceMiner_C::K2_OnStoppedMining(class AFGResourceNode* oldResourceNode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_ResourceMiner.Equip_ResourceMiner_C.K2_OnStoppedMining");
		
		AEquip_ResourceMiner_C_K2_OnStoppedMining_Params params {};
		params.oldResourceNode = oldResourceNode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_ResourceMiner.Equip_ResourceMiner_C.ExecuteUbergraph_Equip_ResourceMiner
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquip_ResourceMiner_C::ExecuteUbergraph_Equip_ResourceMiner(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_ResourceMiner.Equip_ResourceMiner_C.ExecuteUbergraph_Equip_ResourceMiner");
		
		AEquip_ResourceMiner_C_ExecuteUbergraph_Equip_ResourceMiner_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AEquip_ResourceMiner_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AEquip_ResourceMiner_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Equip_ResourceMiner.Equip_ResourceMiner_C");
		return ptr;
	}

}


