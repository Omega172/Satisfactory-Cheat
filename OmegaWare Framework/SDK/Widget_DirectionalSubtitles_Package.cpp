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
	 * 		Name   -> Function Widget_DirectionalSubtitles.Widget_DirectionalSubtitles_C.SequenceEvent__ENTRYPOINTWidget_DirectionalSubtitles
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_DirectionalSubtitles_C::SequenceEvent__ENTRYPOINTWidget_DirectionalSubtitles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_DirectionalSubtitles.Widget_DirectionalSubtitles_C.SequenceEvent__ENTRYPOINTWidget_DirectionalSubtitles");
		
		UWidget_DirectionalSubtitles_C_SequenceEvent__ENTRYPOINTWidget_DirectionalSubtitles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_DirectionalSubtitles.Widget_DirectionalSubtitles_C.ForceDestroySubtitle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_DirectionalSubtitles_C::ForceDestroySubtitle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_DirectionalSubtitles.Widget_DirectionalSubtitles_C.ForceDestroySubtitle");
		
		UWidget_DirectionalSubtitles_C_ForceDestroySubtitle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_DirectionalSubtitles.Widget_DirectionalSubtitles_C.OnAnimDestruct
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_DirectionalSubtitles_C::OnAnimDestruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_DirectionalSubtitles.Widget_DirectionalSubtitles_C.OnAnimDestruct");
		
		UWidget_DirectionalSubtitles_C_OnAnimDestruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_DirectionalSubtitles.Widget_DirectionalSubtitles_C.SetSubtitleText
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        mSubtitle                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWidget_DirectionalSubtitles_C::SetSubtitleText(const class FText& mSubtitle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_DirectionalSubtitles.Widget_DirectionalSubtitles_C.SetSubtitleText");
		
		UWidget_DirectionalSubtitles_C_SetSubtitleText_Params params {};
		params.mSubtitle = mSubtitle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_DirectionalSubtitles.Widget_DirectionalSubtitles_C.UpdateSubtitle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        mSubtitle                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		double                                             Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               UseDuration                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_DirectionalSubtitles_C::UpdateSubtitle(const class FText& mSubtitle, double Duration, bool UseDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_DirectionalSubtitles.Widget_DirectionalSubtitles_C.UpdateSubtitle");
		
		UWidget_DirectionalSubtitles_C_UpdateSubtitle_Params params {};
		params.mSubtitle = mSubtitle;
		params.Duration = Duration;
		params.UseDuration = UseDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_DirectionalSubtitles.Widget_DirectionalSubtitles_C.SetDirectionVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_DirectionalSubtitles_C::SetDirectionVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_DirectionalSubtitles.Widget_DirectionalSubtitles_C.SetDirectionVisibility");
		
		UWidget_DirectionalSubtitles_C_SetDirectionVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_DirectionalSubtitles.Widget_DirectionalSubtitles_C.GetInstigatorAngle
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	double UWidget_DirectionalSubtitles_C::GetInstigatorAngle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_DirectionalSubtitles.Widget_DirectionalSubtitles_C.GetInstigatorAngle");
		
		UWidget_DirectionalSubtitles_C_GetInstigatorAngle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_DirectionalSubtitles.Widget_DirectionalSubtitles_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_DirectionalSubtitles_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_DirectionalSubtitles.Widget_DirectionalSubtitles_C.Construct");
		
		UWidget_DirectionalSubtitles_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_DirectionalSubtitles.Widget_DirectionalSubtitles_C.Event UpdateDestructionTimer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_DirectionalSubtitles_C::EventUpdateDestructionTimer(double Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_DirectionalSubtitles.Widget_DirectionalSubtitles_C.Event UpdateDestructionTimer");
		
		UWidget_DirectionalSubtitles_C_EventUpdateDestructionTimer_Params params {};
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_DirectionalSubtitles.Widget_DirectionalSubtitles_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_DirectionalSubtitles_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_DirectionalSubtitles.Widget_DirectionalSubtitles_C.Destruct");
		
		UWidget_DirectionalSubtitles_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_DirectionalSubtitles.Widget_DirectionalSubtitles_C.On Instigator End Play
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_DirectionalSubtitles_C::OnInstigatorEndPlay(class AActor* Actor, EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_DirectionalSubtitles.Widget_DirectionalSubtitles_C.On Instigator End Play");
		
		UWidget_DirectionalSubtitles_C_OnInstigatorEndPlay_Params params {};
		params.Actor = Actor;
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_DirectionalSubtitles.Widget_DirectionalSubtitles_C.ExecuteUbergraph_Widget_DirectionalSubtitles
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_DirectionalSubtitles_C::ExecuteUbergraph_Widget_DirectionalSubtitles(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_DirectionalSubtitles.Widget_DirectionalSubtitles_C.ExecuteUbergraph_Widget_DirectionalSubtitles");
		
		UWidget_DirectionalSubtitles_C_ExecuteUbergraph_Widget_DirectionalSubtitles_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_DirectionalSubtitles.Widget_DirectionalSubtitles_C.OnDestruct__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget_DirectionalSubtitles_C*              InstigatingSubtitle                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_DirectionalSubtitles_C::OnDestruct__DelegateSignature(class UWidget_DirectionalSubtitles_C* InstigatingSubtitle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_DirectionalSubtitles.Widget_DirectionalSubtitles_C.OnDestruct__DelegateSignature");
		
		UWidget_DirectionalSubtitles_C_OnDestruct__DelegateSignature_Params params {};
		params.InstigatingSubtitle = InstigatingSubtitle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_DirectionalSubtitles_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_DirectionalSubtitles_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_DirectionalSubtitles.Widget_DirectionalSubtitles_C");
		return ptr;
	}

}


