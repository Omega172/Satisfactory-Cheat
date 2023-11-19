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
	 * 		Name   -> Function Testa_BP_WB.Testa_BP_WB_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATesta_BP_WB_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Testa_BP_WB.Testa_BP_WB_C.UserConstructionScript");
		
		ATesta_BP_WB_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Testa_BP_WB.Testa_BP_WB_C.OnHonkStatusChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ATesta_BP_WB_C::OnHonkStatusChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Testa_BP_WB.Testa_BP_WB_C.OnHonkStatusChanged");
		
		ATesta_BP_WB_C_OnHonkStatusChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Testa_BP_WB.Testa_BP_WB_C.ReceiveOnDriverLeave
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ATesta_BP_WB_C::ReceiveOnDriverLeave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Testa_BP_WB.Testa_BP_WB_C.ReceiveOnDriverLeave");
		
		ATesta_BP_WB_C_ReceiveOnDriverLeave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Testa_BP_WB.Testa_BP_WB_C.ExecuteUbergraph_Testa_BP_WB
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATesta_BP_WB_C::ExecuteUbergraph_Testa_BP_WB(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Testa_BP_WB.Testa_BP_WB_C.ExecuteUbergraph_Testa_BP_WB");
		
		ATesta_BP_WB_C_ExecuteUbergraph_Testa_BP_WB_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATesta_BP_WB_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATesta_BP_WB_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Testa_BP_WB.Testa_BP_WB_C");
		return ptr;
	}

}


