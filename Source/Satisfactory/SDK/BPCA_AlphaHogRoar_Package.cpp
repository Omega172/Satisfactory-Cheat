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
	 * 		Name   -> Function BPCA_AlphaHogRoar.BPCA_AlphaHogRoar_C.OnBeginRoar
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPCA_AlphaHogRoar_C::OnBeginRoar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPCA_AlphaHogRoar.BPCA_AlphaHogRoar_C.OnBeginRoar");
		
		UBPCA_AlphaHogRoar_C_OnBeginRoar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPCA_AlphaHogRoar.BPCA_AlphaHogRoar_C.ExecuteUbergraph_BPCA_AlphaHogRoar
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPCA_AlphaHogRoar_C::ExecuteUbergraph_BPCA_AlphaHogRoar(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPCA_AlphaHogRoar.BPCA_AlphaHogRoar_C.ExecuteUbergraph_BPCA_AlphaHogRoar");
		
		UBPCA_AlphaHogRoar_C_ExecuteUbergraph_BPCA_AlphaHogRoar_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPCA_AlphaHogRoar_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPCA_AlphaHogRoar_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPCA_AlphaHogRoar.BPCA_AlphaHogRoar_C");
		return ptr;
	}

}


