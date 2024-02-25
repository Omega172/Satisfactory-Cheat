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
	 * 		Name   -> Function BTT_SetCreatureSubtree.BTT_SetCreatureSubtree_C.ReceiveExecute
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_SetCreatureSubtree_C::ReceiveExecute(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_SetCreatureSubtree.BTT_SetCreatureSubtree_C.ReceiveExecute");
		
		UBTT_SetCreatureSubtree_C_ReceiveExecute_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BTT_SetCreatureSubtree.BTT_SetCreatureSubtree_C.ExecuteUbergraph_BTT_SetCreatureSubtree
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_SetCreatureSubtree_C::ExecuteUbergraph_BTT_SetCreatureSubtree(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_SetCreatureSubtree.BTT_SetCreatureSubtree_C.ExecuteUbergraph_BTT_SetCreatureSubtree");
		
		UBTT_SetCreatureSubtree_C_ExecuteUbergraph_BTT_SetCreatureSubtree_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTT_SetCreatureSubtree_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTT_SetCreatureSubtree_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BTT_SetCreatureSubtree.BTT_SetCreatureSubtree_C");
		return ptr;
	}

}


