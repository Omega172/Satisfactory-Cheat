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
	 * 		Name   -> Function BPW_Tooltip_Expanded_IO.BPW_Tooltip_Expanded_IO_C.SetCycleRate
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             mCycleRate                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Tooltip_Expanded_IO_C::SetCycleRate(double mCycleRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Tooltip_Expanded_IO.BPW_Tooltip_Expanded_IO_C.SetCycleRate");
		
		UBPW_Tooltip_Expanded_IO_C_SetCycleRate_Params params {};
		params.mCycleRate = mCycleRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Tooltip_Expanded_IO.BPW_Tooltip_Expanded_IO_C.SetItemAmount
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FItemAmount                                 mItemAmount                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		double                                             mCycleRate                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Tooltip_Expanded_IO_C::SetItemAmount(const struct FItemAmount& mItemAmount, double mCycleRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Tooltip_Expanded_IO.BPW_Tooltip_Expanded_IO_C.SetItemAmount");
		
		UBPW_Tooltip_Expanded_IO_C_SetItemAmount_Params params {};
		params.mItemAmount = mItemAmount;
		params.mCycleRate = mCycleRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Tooltip_Expanded_IO.BPW_Tooltip_Expanded_IO_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Tooltip_Expanded_IO_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Tooltip_Expanded_IO.BPW_Tooltip_Expanded_IO_C.PreConstruct");
		
		UBPW_Tooltip_Expanded_IO_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Tooltip_Expanded_IO.BPW_Tooltip_Expanded_IO_C.ExecuteUbergraph_BPW_Tooltip_Expanded_IO
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Tooltip_Expanded_IO_C::ExecuteUbergraph_BPW_Tooltip_Expanded_IO(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Tooltip_Expanded_IO.BPW_Tooltip_Expanded_IO_C.ExecuteUbergraph_BPW_Tooltip_Expanded_IO");
		
		UBPW_Tooltip_Expanded_IO_C_ExecuteUbergraph_BPW_Tooltip_Expanded_IO_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_Tooltip_Expanded_IO_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_Tooltip_Expanded_IO_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_Tooltip_Expanded_IO.BPW_Tooltip_Expanded_IO_C");
		return ptr;
	}

}


