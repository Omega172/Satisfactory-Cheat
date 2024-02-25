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
	 * 		Name   -> Function BPW_BuildMode_Disqualifier.BPW_BuildMode_Disqualifier_C.SetIsInverted
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               mIsInverted                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BuildMode_Disqualifier_C::SetIsInverted(bool mIsInverted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMode_Disqualifier.BPW_BuildMode_Disqualifier_C.SetIsInverted");
		
		UBPW_BuildMode_Disqualifier_C_SetIsInverted_Params params {};
		params.mIsInverted = mIsInverted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_BuildMode_Disqualifier.BPW_BuildMode_Disqualifier_C.SetAnimate
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               mAnimate                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BuildMode_Disqualifier_C::SetAnimate(bool mAnimate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMode_Disqualifier.BPW_BuildMode_Disqualifier_C.SetAnimate");
		
		UBPW_BuildMode_Disqualifier_C_SetAnimate_Params params {};
		params.mAnimate = mAnimate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_BuildMode_Disqualifier.BPW_BuildMode_Disqualifier_C.SetText
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        InText                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_BuildMode_Disqualifier_C::SetText(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMode_Disqualifier.BPW_BuildMode_Disqualifier_C.SetText");
		
		UBPW_BuildMode_Disqualifier_C_SetText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_BuildMode_Disqualifier.BPW_BuildMode_Disqualifier_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BuildMode_Disqualifier_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMode_Disqualifier.BPW_BuildMode_Disqualifier_C.PreConstruct");
		
		UBPW_BuildMode_Disqualifier_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_BuildMode_Disqualifier.BPW_BuildMode_Disqualifier_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_BuildMode_Disqualifier_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMode_Disqualifier.BPW_BuildMode_Disqualifier_C.Construct");
		
		UBPW_BuildMode_Disqualifier_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_BuildMode_Disqualifier.BPW_BuildMode_Disqualifier_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_BuildMode_Disqualifier_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMode_Disqualifier.BPW_BuildMode_Disqualifier_C.Destruct");
		
		UBPW_BuildMode_Disqualifier_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_BuildMode_Disqualifier.BPW_BuildMode_Disqualifier_C.ExecuteUbergraph_BPW_BuildMode_Disqualifier
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BuildMode_Disqualifier_C::ExecuteUbergraph_BPW_BuildMode_Disqualifier(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMode_Disqualifier.BPW_BuildMode_Disqualifier_C.ExecuteUbergraph_BPW_BuildMode_Disqualifier");
		
		UBPW_BuildMode_Disqualifier_C_ExecuteUbergraph_BPW_BuildMode_Disqualifier_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_BuildMode_Disqualifier.BPW_BuildMode_Disqualifier_C.OnDestroyed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_BuildMode_Disqualifier_C::OnDestroyed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMode_Disqualifier.BPW_BuildMode_Disqualifier_C.OnDestroyed__DelegateSignature");
		
		UBPW_BuildMode_Disqualifier_C_OnDestroyed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_BuildMode_Disqualifier_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_BuildMode_Disqualifier_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_BuildMode_Disqualifier.BPW_BuildMode_Disqualifier_C");
		return ptr;
	}

}


