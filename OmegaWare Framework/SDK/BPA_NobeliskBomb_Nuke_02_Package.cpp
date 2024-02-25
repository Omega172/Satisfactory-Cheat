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
	 * 		Name   -> Function BPA_NobeliskBomb_Nuke_02.BPA_NobeliskBomb_Nuke_02_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UBPA_NobeliskBomb_Nuke_02_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_NobeliskBomb_Nuke_02.BPA_NobeliskBomb_Nuke_02_C.AnimGraph");
		
		UBPA_NobeliskBomb_Nuke_02_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPA_NobeliskBomb_Nuke_02.BPA_NobeliskBomb_Nuke_02_C.OnMagazineHidden
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_NobeliskBomb_Nuke_02_C::OnMagazineHidden()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_NobeliskBomb_Nuke_02.BPA_NobeliskBomb_Nuke_02_C.OnMagazineHidden");
		
		UBPA_NobeliskBomb_Nuke_02_C_OnMagazineHidden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPA_NobeliskBomb_Nuke_02.BPA_NobeliskBomb_Nuke_02_C.PlayStingerAnimation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_NobeliskBomb_Nuke_02_C::PlayStingerAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_NobeliskBomb_Nuke_02.BPA_NobeliskBomb_Nuke_02_C.PlayStingerAnimation");
		
		UBPA_NobeliskBomb_Nuke_02_C_PlayStingerAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPA_NobeliskBomb_Nuke_02.BPA_NobeliskBomb_Nuke_02_C.ExecuteUbergraph_BPA_NobeliskBomb_Nuke_02
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPA_NobeliskBomb_Nuke_02_C::ExecuteUbergraph_BPA_NobeliskBomb_Nuke_02(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_NobeliskBomb_Nuke_02.BPA_NobeliskBomb_Nuke_02_C.ExecuteUbergraph_BPA_NobeliskBomb_Nuke_02");
		
		UBPA_NobeliskBomb_Nuke_02_C_ExecuteUbergraph_BPA_NobeliskBomb_Nuke_02_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPA_NobeliskBomb_Nuke_02_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPA_NobeliskBomb_Nuke_02_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPA_NobeliskBomb_Nuke_02.BPA_NobeliskBomb_Nuke_02_C");
		return ptr;
	}

}


