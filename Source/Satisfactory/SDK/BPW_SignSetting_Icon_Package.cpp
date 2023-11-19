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
	 * 		Name   -> Function BPW_SignSetting_Icon.BPW_SignSetting_Icon_C.SetIconName
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        mIconName                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_SignSetting_Icon_C::SetIconName(const class FText& mIconName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignSetting_Icon.BPW_SignSetting_Icon_C.SetIconName");
		
		UBPW_SignSetting_Icon_C_SetIconName_Params params {};
		params.mIconName = mIconName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SignSetting_Icon.BPW_SignSetting_Icon_C.UpdateInfo
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            mIconID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     TextureObject                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        IconName                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_SignSetting_Icon_C::UpdateInfo(int32_t mIconID, class UObject* TextureObject, const class FText& IconName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignSetting_Icon.BPW_SignSetting_Icon_C.UpdateInfo");
		
		UBPW_SignSetting_Icon_C_UpdateInfo_Params params {};
		params.mIconID = mIconID;
		params.TextureObject = TextureObject;
		params.IconName = IconName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SignSetting_Icon.BPW_SignSetting_Icon_C.SetIcon
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     TextureObject                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_SignSetting_Icon_C::SetIcon(class UObject* TextureObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignSetting_Icon.BPW_SignSetting_Icon_C.SetIcon");
		
		UBPW_SignSetting_Icon_C_SetIcon_Params params {};
		params.TextureObject = TextureObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SignSetting_Icon.BPW_SignSetting_Icon_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_SignSetting_Icon_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignSetting_Icon.BPW_SignSetting_Icon_C.PreConstruct");
		
		UBPW_SignSetting_Icon_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SignSetting_Icon.BPW_SignSetting_Icon_C.BndEvt__BPW_SignSettingContainer_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_SignSetting_Icon_C::BndEvt__BPW_SignSettingContainer_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignSetting_Icon.BPW_SignSetting_Icon_C.BndEvt__BPW_SignSettingContainer_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature");
		
		UBPW_SignSetting_Icon_C_BndEvt__BPW_SignSettingContainer_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SignSetting_Icon.BPW_SignSetting_Icon_C.ExecuteUbergraph_BPW_SignSetting_Icon
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_SignSetting_Icon_C::ExecuteUbergraph_BPW_SignSetting_Icon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignSetting_Icon.BPW_SignSetting_Icon_C.ExecuteUbergraph_BPW_SignSetting_Icon");
		
		UBPW_SignSetting_Icon_C_ExecuteUbergraph_BPW_SignSetting_Icon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SignSetting_Icon.BPW_SignSetting_Icon_C.OnBrowserOpened__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      IconKey                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            IconID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_SignSetting_Icon_C::OnBrowserOpened__DelegateSignature(const class FString& IconKey, int32_t IconID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignSetting_Icon.BPW_SignSetting_Icon_C.OnBrowserOpened__DelegateSignature");
		
		UBPW_SignSetting_Icon_C_OnBrowserOpened__DelegateSignature_Params params {};
		params.IconKey = IconKey;
		params.IconID = IconID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_SignSetting_Icon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_SignSetting_Icon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_SignSetting_Icon.BPW_SignSetting_Icon_C");
		return ptr;
	}

}


