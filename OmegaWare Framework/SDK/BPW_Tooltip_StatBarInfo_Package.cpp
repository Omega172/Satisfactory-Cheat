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
	 * 		Name   -> Function BPW_Tooltip_StatBarInfo.BPW_Tooltip_StatBarInfo_C.SetStatBarData
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FDescriptorStatBar                          mStatBarData                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPW_Tooltip_StatBarInfo_C::SetStatBarData(const struct FDescriptorStatBar& mStatBarData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Tooltip_StatBarInfo.BPW_Tooltip_StatBarInfo_C.SetStatBarData");
		
		UBPW_Tooltip_StatBarInfo_C_SetStatBarData_Params params {};
		params.mStatBarData = mStatBarData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Tooltip_StatBarInfo.BPW_Tooltip_StatBarInfo_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Tooltip_StatBarInfo_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Tooltip_StatBarInfo.BPW_Tooltip_StatBarInfo_C.PreConstruct");
		
		UBPW_Tooltip_StatBarInfo_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Tooltip_StatBarInfo.BPW_Tooltip_StatBarInfo_C.ExecuteUbergraph_BPW_Tooltip_StatBarInfo
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Tooltip_StatBarInfo_C::ExecuteUbergraph_BPW_Tooltip_StatBarInfo(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Tooltip_StatBarInfo.BPW_Tooltip_StatBarInfo_C.ExecuteUbergraph_BPW_Tooltip_StatBarInfo");
		
		UBPW_Tooltip_StatBarInfo_C_ExecuteUbergraph_BPW_Tooltip_StatBarInfo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_Tooltip_StatBarInfo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_Tooltip_StatBarInfo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_Tooltip_StatBarInfo.BPW_Tooltip_StatBarInfo_C");
		return ptr;
	}

}


