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
	 * 		Name   -> Function BPW_TooltipRecipe_Expanded.BPW_TooltipRecipe_Expanded_C.SetOverclock
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             mOverclock                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_TooltipRecipe_Expanded_C::SetOverclock(double mOverclock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TooltipRecipe_Expanded.BPW_TooltipRecipe_Expanded_C.SetOverclock");
		
		UBPW_TooltipRecipe_Expanded_C_SetOverclock_Params params {};
		params.mOverclock = mOverclock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_TooltipRecipe_Expanded.BPW_TooltipRecipe_Expanded_C.AddDivider
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UVerticalBox*                                Container                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_TooltipRecipe_Expanded_C::AddDivider(class UVerticalBox* Container)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TooltipRecipe_Expanded.BPW_TooltipRecipe_Expanded_C.AddDivider");
		
		UBPW_TooltipRecipe_Expanded_C_AddDivider_Params params {};
		params.Container = Container;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_TooltipRecipe_Expanded.BPW_TooltipRecipe_Expanded_C.SetRecipe
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      newRecipe                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_TooltipRecipe_Expanded_C::SetRecipe(class UClass* newRecipe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TooltipRecipe_Expanded.BPW_TooltipRecipe_Expanded_C.SetRecipe");
		
		UBPW_TooltipRecipe_Expanded_C_SetRecipe_Params params {};
		params.newRecipe = newRecipe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_TooltipRecipe_Expanded.BPW_TooltipRecipe_Expanded_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_TooltipRecipe_Expanded_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TooltipRecipe_Expanded.BPW_TooltipRecipe_Expanded_C.PreConstruct");
		
		UBPW_TooltipRecipe_Expanded_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_TooltipRecipe_Expanded.BPW_TooltipRecipe_Expanded_C.ExecuteUbergraph_BPW_TooltipRecipe_Expanded
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_TooltipRecipe_Expanded_C::ExecuteUbergraph_BPW_TooltipRecipe_Expanded(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TooltipRecipe_Expanded.BPW_TooltipRecipe_Expanded_C.ExecuteUbergraph_BPW_TooltipRecipe_Expanded");
		
		UBPW_TooltipRecipe_Expanded_C_ExecuteUbergraph_BPW_TooltipRecipe_Expanded_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_TooltipRecipe_Expanded_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_TooltipRecipe_Expanded_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_TooltipRecipe_Expanded.BPW_TooltipRecipe_Expanded_C");
		return ptr;
	}

}


