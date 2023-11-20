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
	 * 		Name   -> Function BPCA_Spitter_Melee.BPCA_Spitter_Melee_C.OnAnimNotify
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UFGAnimNotify*                               Notify                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPCA_Spitter_Melee_C::OnAnimNotify(class UFGAnimNotify* Notify)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPCA_Spitter_Melee.BPCA_Spitter_Melee_C.OnAnimNotify");
		
		UBPCA_Spitter_Melee_C_OnAnimNotify_Params params {};
		params.Notify = Notify;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPCA_Spitter_Melee.BPCA_Spitter_Melee_C.ExecuteUbergraph_BPCA_Spitter_Melee
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPCA_Spitter_Melee_C::ExecuteUbergraph_BPCA_Spitter_Melee(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPCA_Spitter_Melee.BPCA_Spitter_Melee_C.ExecuteUbergraph_BPCA_Spitter_Melee");
		
		UBPCA_Spitter_Melee_C_ExecuteUbergraph_BPCA_Spitter_Melee_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPCA_Spitter_Melee_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPCA_Spitter_Melee_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPCA_Spitter_Melee.BPCA_Spitter_Melee_C");
		return ptr;
	}

}


