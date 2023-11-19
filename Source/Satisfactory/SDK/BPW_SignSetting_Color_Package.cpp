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
	 * 		Name   -> Function BPW_SignSetting_Color.BPW_SignSetting_Color_C.SetupColorPreviews
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_SignSetting_Color_C::SetupColorPreviews()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignSetting_Color.BPW_SignSetting_Color_C.SetupColorPreviews");
		
		UBPW_SignSetting_Color_C_SetupColorPreviews_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SignSetting_Color.BPW_SignSetting_Color_C.SetColors
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                mForegroundColor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                mBackgroundColor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                AuxilliaryColor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_SignSetting_Color_C::SetColors(const struct FLinearColor& mForegroundColor, const struct FLinearColor& mBackgroundColor, const struct FLinearColor& AuxilliaryColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignSetting_Color.BPW_SignSetting_Color_C.SetColors");
		
		UBPW_SignSetting_Color_C_SetColors_Params params {};
		params.mForegroundColor = mForegroundColor;
		params.mBackgroundColor = mBackgroundColor;
		params.AuxilliaryColor = AuxilliaryColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SignSetting_Color.BPW_SignSetting_Color_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_SignSetting_Color_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignSetting_Color.BPW_SignSetting_Color_C.PreConstruct");
		
		UBPW_SignSetting_Color_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SignSetting_Color.BPW_SignSetting_Color_C.BndEvt__BPW_SignSettingContainer_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_SignSetting_Color_C::BndEvt__BPW_SignSettingContainer_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignSetting_Color.BPW_SignSetting_Color_C.BndEvt__BPW_SignSettingContainer_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");
		
		UBPW_SignSetting_Color_C_BndEvt__BPW_SignSettingContainer_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SignSetting_Color.BPW_SignSetting_Color_C.ExecuteUbergraph_BPW_SignSetting_Color
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_SignSetting_Color_C::ExecuteUbergraph_BPW_SignSetting_Color(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignSetting_Color.BPW_SignSetting_Color_C.ExecuteUbergraph_BPW_SignSetting_Color");
		
		UBPW_SignSetting_Color_C_ExecuteUbergraph_BPW_SignSetting_Color_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SignSetting_Color.BPW_SignSetting_Color_C.OnOpenColorPicker__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_SignSetting_Color_C::OnOpenColorPicker__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignSetting_Color.BPW_SignSetting_Color_C.OnOpenColorPicker__DelegateSignature");
		
		UBPW_SignSetting_Color_C_OnOpenColorPicker__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_SignSetting_Color_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_SignSetting_Color_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_SignSetting_Color.BPW_SignSetting_Color_C");
		return ptr;
	}

}


