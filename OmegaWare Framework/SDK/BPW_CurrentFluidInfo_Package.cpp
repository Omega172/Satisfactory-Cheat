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
	 * 		Name   -> Function BPW_CurrentFluidInfo.BPW_CurrentFluidInfo_C.SetCurrentContainerTypeText
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        mCurrentTypeOfContainerText                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_CurrentFluidInfo_C::SetCurrentContainerTypeText(const class FText& mCurrentTypeOfContainerText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_CurrentFluidInfo.BPW_CurrentFluidInfo_C.SetCurrentContainerTypeText");
		
		UBPW_CurrentFluidInfo_C_SetCurrentContainerTypeText_Params params {};
		params.mCurrentTypeOfContainerText = mCurrentTypeOfContainerText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_CurrentFluidInfo.BPW_CurrentFluidInfo_C.SetCurrentAmountText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        mCurrentAmountText                                         (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        mMaxAmountText                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_CurrentFluidInfo_C::SetCurrentAmountText(const class FText& mCurrentAmountText, const class FText& mMaxAmountText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_CurrentFluidInfo.BPW_CurrentFluidInfo_C.SetCurrentAmountText");
		
		UBPW_CurrentFluidInfo_C_SetCurrentAmountText_Params params {};
		params.mCurrentAmountText = mCurrentAmountText;
		params.mMaxAmountText = mMaxAmountText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_CurrentFluidInfo.BPW_CurrentFluidInfo_C.Set Fluid Name Text
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        mFluidNameText                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_CurrentFluidInfo_C::SetFluidNameText(const class FText& mFluidNameText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_CurrentFluidInfo.BPW_CurrentFluidInfo_C.Set Fluid Name Text");
		
		UBPW_CurrentFluidInfo_C_SetFluidNameText_Params params {};
		params.mFluidNameText = mFluidNameText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_CurrentFluidInfo.BPW_CurrentFluidInfo_C.SetFluidIconObject
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     mFluidIconObject                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_CurrentFluidInfo_C::SetFluidIconObject(class UObject* mFluidIconObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_CurrentFluidInfo.BPW_CurrentFluidInfo_C.SetFluidIconObject");
		
		UBPW_CurrentFluidInfo_C_SetFluidIconObject_Params params {};
		params.mFluidIconObject = mFluidIconObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_CurrentFluidInfo.BPW_CurrentFluidInfo_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_CurrentFluidInfo_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_CurrentFluidInfo.BPW_CurrentFluidInfo_C.PreConstruct");
		
		UBPW_CurrentFluidInfo_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_CurrentFluidInfo.BPW_CurrentFluidInfo_C.ExecuteUbergraph_BPW_CurrentFluidInfo
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_CurrentFluidInfo_C::ExecuteUbergraph_BPW_CurrentFluidInfo(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_CurrentFluidInfo.BPW_CurrentFluidInfo_C.ExecuteUbergraph_BPW_CurrentFluidInfo");
		
		UBPW_CurrentFluidInfo_C_ExecuteUbergraph_BPW_CurrentFluidInfo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_CurrentFluidInfo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_CurrentFluidInfo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_CurrentFluidInfo.BPW_CurrentFluidInfo_C");
		return ptr;
	}

}


