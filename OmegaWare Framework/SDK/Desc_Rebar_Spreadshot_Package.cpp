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
	 * 		Name   -> Function Desc_Rebar_Spreadshot.Desc_Rebar_Spreadshot_C.CreateImpactEffectForHit
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void UDesc_Rebar_Spreadshot_C::CreateImpactEffectForHit(const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desc_Rebar_Spreadshot.Desc_Rebar_Spreadshot_C.CreateImpactEffectForHit");
		
		UDesc_Rebar_Spreadshot_C_CreateImpactEffectForHit_Params params {};
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Desc_Rebar_Spreadshot.Desc_Rebar_Spreadshot_C.FireAmmunition
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UDesc_Rebar_Spreadshot_C::FireAmmunition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desc_Rebar_Spreadshot.Desc_Rebar_Spreadshot_C.FireAmmunition");
		
		UDesc_Rebar_Spreadshot_C_FireAmmunition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Desc_Rebar_Spreadshot.Desc_Rebar_Spreadshot_C.PlayEffects
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FHitResult>                          traceResults                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 */
	void UDesc_Rebar_Spreadshot_C::PlayEffects(TArray<struct FHitResult> traceResults)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desc_Rebar_Spreadshot.Desc_Rebar_Spreadshot_C.PlayEffects");
		
		UDesc_Rebar_Spreadshot_C_PlayEffects_Params params {};
		params.traceResults = traceResults;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Desc_Rebar_Spreadshot.Desc_Rebar_Spreadshot_C.ExecuteUbergraph_Desc_Rebar_Spreadshot
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDesc_Rebar_Spreadshot_C::ExecuteUbergraph_Desc_Rebar_Spreadshot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desc_Rebar_Spreadshot.Desc_Rebar_Spreadshot_C.ExecuteUbergraph_Desc_Rebar_Spreadshot");
		
		UDesc_Rebar_Spreadshot_C_ExecuteUbergraph_Desc_Rebar_Spreadshot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDesc_Rebar_Spreadshot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDesc_Rebar_Spreadshot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Desc_Rebar_Spreadshot.Desc_Rebar_Spreadshot_C");
		return ptr;
	}

}


