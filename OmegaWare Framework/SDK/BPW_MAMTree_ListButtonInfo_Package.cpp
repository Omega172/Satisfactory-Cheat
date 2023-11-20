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
	 * 		Name   -> Function BPW_MAMTree_ListButtonInfo.BPW_MAMTree_ListButtonInfo_C.StartProgressBarLerp
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             EndValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_MAMTree_ListButtonInfo_C::StartProgressBarLerp(double EndValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MAMTree_ListButtonInfo.BPW_MAMTree_ListButtonInfo_C.StartProgressBarLerp");
		
		UBPW_MAMTree_ListButtonInfo_C_StartProgressBarLerp_Params params {};
		params.EndValue = EndValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MAMTree_ListButtonInfo.BPW_MAMTree_ListButtonInfo_C.SetContent
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      researchTree                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_MAMTree_ListButtonInfo_C::SetContent(class UClass* researchTree)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MAMTree_ListButtonInfo.BPW_MAMTree_ListButtonInfo_C.SetContent");
		
		UBPW_MAMTree_ListButtonInfo_C_SetContent_Params params {};
		params.researchTree = researchTree;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MAMTree_ListButtonInfo.BPW_MAMTree_ListButtonInfo_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_MAMTree_ListButtonInfo_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MAMTree_ListButtonInfo.BPW_MAMTree_ListButtonInfo_C.Construct");
		
		UBPW_MAMTree_ListButtonInfo_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MAMTree_ListButtonInfo.BPW_MAMTree_ListButtonInfo_C.LerpProgressBar
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_MAMTree_ListButtonInfo_C::LerpProgressBar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MAMTree_ListButtonInfo.BPW_MAMTree_ListButtonInfo_C.LerpProgressBar");
		
		UBPW_MAMTree_ListButtonInfo_C_LerpProgressBar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MAMTree_ListButtonInfo.BPW_MAMTree_ListButtonInfo_C.ExecuteUbergraph_BPW_MAMTree_ListButtonInfo
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_MAMTree_ListButtonInfo_C::ExecuteUbergraph_BPW_MAMTree_ListButtonInfo(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MAMTree_ListButtonInfo.BPW_MAMTree_ListButtonInfo_C.ExecuteUbergraph_BPW_MAMTree_ListButtonInfo");
		
		UBPW_MAMTree_ListButtonInfo_C_ExecuteUbergraph_BPW_MAMTree_ListButtonInfo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_MAMTree_ListButtonInfo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_MAMTree_ListButtonInfo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_MAMTree_ListButtonInfo.BPW_MAMTree_ListButtonInfo_C");
		return ptr;
	}

}


