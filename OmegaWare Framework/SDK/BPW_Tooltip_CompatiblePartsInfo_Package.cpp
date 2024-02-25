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
	 * 		Name   -> Function BPW_Tooltip_CompatiblePartsInfo.BPW_Tooltip_CompatiblePartsInfo_C.SetCompatibleItemDescriptors
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCompatibleItemDescriptors                  CompatibleItemDescriptors                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_Tooltip_CompatiblePartsInfo_C::SetCompatibleItemDescriptors(const struct FCompatibleItemDescriptors& CompatibleItemDescriptors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Tooltip_CompatiblePartsInfo.BPW_Tooltip_CompatiblePartsInfo_C.SetCompatibleItemDescriptors");
		
		UBPW_Tooltip_CompatiblePartsInfo_C_SetCompatibleItemDescriptors_Params params {};
		params.CompatibleItemDescriptors = CompatibleItemDescriptors;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Tooltip_CompatiblePartsInfo.BPW_Tooltip_CompatiblePartsInfo_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Tooltip_CompatiblePartsInfo_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Tooltip_CompatiblePartsInfo.BPW_Tooltip_CompatiblePartsInfo_C.PreConstruct");
		
		UBPW_Tooltip_CompatiblePartsInfo_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Tooltip_CompatiblePartsInfo.BPW_Tooltip_CompatiblePartsInfo_C.ExecuteUbergraph_BPW_Tooltip_CompatiblePartsInfo
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Tooltip_CompatiblePartsInfo_C::ExecuteUbergraph_BPW_Tooltip_CompatiblePartsInfo(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Tooltip_CompatiblePartsInfo.BPW_Tooltip_CompatiblePartsInfo_C.ExecuteUbergraph_BPW_Tooltip_CompatiblePartsInfo");
		
		UBPW_Tooltip_CompatiblePartsInfo_C_ExecuteUbergraph_BPW_Tooltip_CompatiblePartsInfo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_Tooltip_CompatiblePartsInfo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_Tooltip_CompatiblePartsInfo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_Tooltip_CompatiblePartsInfo.BPW_Tooltip_CompatiblePartsInfo_C");
		return ptr;
	}

}


