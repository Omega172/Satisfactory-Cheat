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
	 * 		Name   -> Function BPW_ResourceSink_InfoBox.BPW_ResourceSink_InfoBox_C.SetIsDarkMode
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               mIsDarkMode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ResourceSink_InfoBox_C::SetIsDarkMode(bool mIsDarkMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSink_InfoBox.BPW_ResourceSink_InfoBox_C.SetIsDarkMode");
		
		UBPW_ResourceSink_InfoBox_C_SetIsDarkMode_Params params {};
		params.mIsDarkMode = mIsDarkMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSink_InfoBox.BPW_ResourceSink_InfoBox_C.UpdateTooltipInfo
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      schematic                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ResourceSink_InfoBox_C::UpdateTooltipInfo(class UClass* schematic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSink_InfoBox.BPW_ResourceSink_InfoBox_C.UpdateTooltipInfo");
		
		UBPW_ResourceSink_InfoBox_C_UpdateTooltipInfo_Params params {};
		params.schematic = schematic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSink_InfoBox.BPW_ResourceSink_InfoBox_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ResourceSink_InfoBox_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSink_InfoBox.BPW_ResourceSink_InfoBox_C.PreConstruct");
		
		UBPW_ResourceSink_InfoBox_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSink_InfoBox.BPW_ResourceSink_InfoBox_C.ExecuteUbergraph_BPW_ResourceSink_InfoBox
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ResourceSink_InfoBox_C::ExecuteUbergraph_BPW_ResourceSink_InfoBox(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSink_InfoBox.BPW_ResourceSink_InfoBox_C.ExecuteUbergraph_BPW_ResourceSink_InfoBox");
		
		UBPW_ResourceSink_InfoBox_C_ExecuteUbergraph_BPW_ResourceSink_InfoBox_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_ResourceSink_InfoBox_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_ResourceSink_InfoBox_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_ResourceSink_InfoBox.BPW_ResourceSink_InfoBox_C");
		return ptr;
	}

}


