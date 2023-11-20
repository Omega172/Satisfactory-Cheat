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
	 * 		Name   -> Function BPW_ResourceSink_TrackProgress.BPW_ResourceSink_TrackProgress_C.SetProgression
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             mProgression                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ForceProgressBarWrap                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ResourceSink_TrackProgress_C::SetProgression(double mProgression, bool ForceProgressBarWrap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSink_TrackProgress.BPW_ResourceSink_TrackProgress_C.SetProgression");
		
		UBPW_ResourceSink_TrackProgress_C_SetProgression_Params params {};
		params.mProgression = mProgression;
		params.ForceProgressBarWrap = ForceProgressBarWrap;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSink_TrackProgress.BPW_ResourceSink_TrackProgress_C.SetPointsToNext
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int64_t                                            mPointsToNext                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ResourceSink_TrackProgress_C::SetPointsToNext(int64_t mPointsToNext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSink_TrackProgress.BPW_ResourceSink_TrackProgress_C.SetPointsToNext");
		
		UBPW_ResourceSink_TrackProgress_C_SetPointsToNext_Params params {};
		params.mPointsToNext = mPointsToNext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSink_TrackProgress.BPW_ResourceSink_TrackProgress_C.SetColor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                mColor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ResourceSink_TrackProgress_C::SetColor(const struct FLinearColor& mColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSink_TrackProgress.BPW_ResourceSink_TrackProgress_C.SetColor");
		
		UBPW_ResourceSink_TrackProgress_C_SetColor_Params params {};
		params.mColor = mColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSink_TrackProgress.BPW_ResourceSink_TrackProgress_C.SetIcon
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture2D*                                  mIcon                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ResourceSink_TrackProgress_C::SetIcon(class UTexture2D* mIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSink_TrackProgress.BPW_ResourceSink_TrackProgress_C.SetIcon");
		
		UBPW_ResourceSink_TrackProgress_C_SetIcon_Params params {};
		params.mIcon = mIcon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSink_TrackProgress.BPW_ResourceSink_TrackProgress_C.SetCurrentPointsName
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        mCurrentPointsName                                         (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_ResourceSink_TrackProgress_C::SetCurrentPointsName(const class FText& mCurrentPointsName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSink_TrackProgress.BPW_ResourceSink_TrackProgress_C.SetCurrentPointsName");
		
		UBPW_ResourceSink_TrackProgress_C_SetCurrentPointsName_Params params {};
		params.mCurrentPointsName = mCurrentPointsName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSink_TrackProgress.BPW_ResourceSink_TrackProgress_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ResourceSink_TrackProgress_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSink_TrackProgress.BPW_ResourceSink_TrackProgress_C.PreConstruct");
		
		UBPW_ResourceSink_TrackProgress_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSink_TrackProgress.BPW_ResourceSink_TrackProgress_C.BndEvt__BPW_ResourceSink_TrackProgress_BPW_LerpingProgressBar_K2Node_ComponentBoundEvent_0_OnWrappingOccured__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_ResourceSink_TrackProgress_C::BndEvt__BPW_ResourceSink_TrackProgress_BPW_LerpingProgressBar_K2Node_ComponentBoundEvent_0_OnWrappingOccured__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSink_TrackProgress.BPW_ResourceSink_TrackProgress_C.BndEvt__BPW_ResourceSink_TrackProgress_BPW_LerpingProgressBar_K2Node_ComponentBoundEvent_0_OnWrappingOccured__DelegateSignature");
		
		UBPW_ResourceSink_TrackProgress_C_BndEvt__BPW_ResourceSink_TrackProgress_BPW_LerpingProgressBar_K2Node_ComponentBoundEvent_0_OnWrappingOccured__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSink_TrackProgress.BPW_ResourceSink_TrackProgress_C.ExecuteUbergraph_BPW_ResourceSink_TrackProgress
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ResourceSink_TrackProgress_C::ExecuteUbergraph_BPW_ResourceSink_TrackProgress(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSink_TrackProgress.BPW_ResourceSink_TrackProgress_C.ExecuteUbergraph_BPW_ResourceSink_TrackProgress");
		
		UBPW_ResourceSink_TrackProgress_C_ExecuteUbergraph_BPW_ResourceSink_TrackProgress_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_ResourceSink_TrackProgress_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_ResourceSink_TrackProgress_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_ResourceSink_TrackProgress.BPW_ResourceSink_TrackProgress_C");
		return ptr;
	}

}


