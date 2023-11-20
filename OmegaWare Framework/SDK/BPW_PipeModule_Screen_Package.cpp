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
	 * 		Name   -> Function BPW_PipeModule_Screen.BPW_PipeModule_Screen_C.SetNetText
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        mNetText                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_PipeModule_Screen_C::SetNetText(const class FText& mNetText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PipeModule_Screen.BPW_PipeModule_Screen_C.SetNetText");
		
		UBPW_PipeModule_Screen_C_SetNetText_Params params {};
		params.mNetText = mNetText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PipeModule_Screen.BPW_PipeModule_Screen_C.SetDrainRateText
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        mDrainRateText                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_PipeModule_Screen_C::SetDrainRateText(const class FText& mDrainRateText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PipeModule_Screen.BPW_PipeModule_Screen_C.SetDrainRateText");
		
		UBPW_PipeModule_Screen_C_SetDrainRateText_Params params {};
		params.mDrainRateText = mDrainRateText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PipeModule_Screen.BPW_PipeModule_Screen_C.SetFillRateText
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        mFillRateText                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_PipeModule_Screen_C::SetFillRateText(const class FText& mFillRateText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PipeModule_Screen.BPW_PipeModule_Screen_C.SetFillRateText");
		
		UBPW_PipeModule_Screen_C_SetFillRateText_Params params {};
		params.mFillRateText = mFillRateText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PipeModule_Screen.BPW_PipeModule_Screen_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_PipeModule_Screen_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PipeModule_Screen.BPW_PipeModule_Screen_C.PreConstruct");
		
		UBPW_PipeModule_Screen_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PipeModule_Screen.BPW_PipeModule_Screen_C.ExecuteUbergraph_BPW_PipeModule_Screen
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_PipeModule_Screen_C::ExecuteUbergraph_BPW_PipeModule_Screen(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PipeModule_Screen.BPW_PipeModule_Screen_C.ExecuteUbergraph_BPW_PipeModule_Screen");
		
		UBPW_PipeModule_Screen_C_ExecuteUbergraph_BPW_PipeModule_Screen_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_PipeModule_Screen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_PipeModule_Screen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_PipeModule_Screen.BPW_PipeModule_Screen_C");
		return ptr;
	}

}


