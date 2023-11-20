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
	 * 		Name   -> Function Equip_PortableMinerDispenser.Equip_PortableMinerDispenser_C.SpawnPortableMiner
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AFGResourceNode*                             ResourceNode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquip_PortableMinerDispenser_C::SpawnPortableMiner(class AFGResourceNode* ResourceNode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_PortableMinerDispenser.Equip_PortableMinerDispenser_C.SpawnPortableMiner");
		
		AEquip_PortableMinerDispenser_C_SpawnPortableMiner_Params params {};
		params.ResourceNode = ResourceNode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_PortableMinerDispenser.Equip_PortableMinerDispenser_C.PlaySpawnEffects
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_PortableMiner_C*                         PortableMiner                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquip_PortableMinerDispenser_C::PlaySpawnEffects(class ABP_PortableMiner_C* PortableMiner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_PortableMinerDispenser.Equip_PortableMinerDispenser_C.PlaySpawnEffects");
		
		AEquip_PortableMinerDispenser_C_PlaySpawnEffects_Params params {};
		params.PortableMiner = PortableMiner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_PortableMinerDispenser.Equip_PortableMinerDispenser_C.WasEquipped
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AEquip_PortableMinerDispenser_C::WasEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_PortableMinerDispenser.Equip_PortableMinerDispenser_C.WasEquipped");
		
		AEquip_PortableMinerDispenser_C_WasEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_PortableMinerDispenser.Equip_PortableMinerDispenser_C.WasUnEquipped
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AEquip_PortableMinerDispenser_C::WasUnEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_PortableMinerDispenser.Equip_PortableMinerDispenser_C.WasUnEquipped");
		
		AEquip_PortableMinerDispenser_C_WasUnEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_PortableMinerDispenser.Equip_PortableMinerDispenser_C.ExecuteUbergraph_Equip_PortableMinerDispenser
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquip_PortableMinerDispenser_C::ExecuteUbergraph_Equip_PortableMinerDispenser(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_PortableMinerDispenser.Equip_PortableMinerDispenser_C.ExecuteUbergraph_Equip_PortableMinerDispenser");
		
		AEquip_PortableMinerDispenser_C_ExecuteUbergraph_Equip_PortableMinerDispenser_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AEquip_PortableMinerDispenser_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AEquip_PortableMinerDispenser_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Equip_PortableMinerDispenser.Equip_PortableMinerDispenser_C");
		return ptr;
	}

}


