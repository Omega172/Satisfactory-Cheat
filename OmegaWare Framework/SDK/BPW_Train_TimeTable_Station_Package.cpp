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
	 * 		Name   -> Function BPW_Train_TimeTable_Station.BPW_Train_TimeTable_Station_C.SetIsSelfDrivingEnabled
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               mIsSelfDrivingEnabled                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Train_TimeTable_Station_C::SetIsSelfDrivingEnabled(bool mIsSelfDrivingEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_Station.BPW_Train_TimeTable_Station_C.SetIsSelfDrivingEnabled");
		
		UBPW_Train_TimeTable_Station_C_SetIsSelfDrivingEnabled_Params params {};
		params.mIsSelfDrivingEnabled = mIsSelfDrivingEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_Station.BPW_Train_TimeTable_Station_C.SetOnlyStationPadding
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsOnlyStation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Train_TimeTable_Station_C::SetOnlyStationPadding(bool IsOnlyStation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_Station.BPW_Train_TimeTable_Station_C.SetOnlyStationPadding");
		
		UBPW_Train_TimeTable_Station_C_SetOnlyStationPadding_Params params {};
		params.IsOnlyStation = IsOnlyStation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_Station.BPW_Train_TimeTable_Station_C.SetIsOnlyStation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Train_TimeTable_Station_C::SetIsOnlyStation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_Station.BPW_Train_TimeTable_Station_C.SetIsOnlyStation");
		
		UBPW_Train_TimeTable_Station_C_SetIsOnlyStation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_Station.BPW_Train_TimeTable_Station_C.PlayDestinationAnim
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Animate                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Train_TimeTable_Station_C::PlayDestinationAnim(bool Animate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_Station.BPW_Train_TimeTable_Station_C.PlayDestinationAnim");
		
		UBPW_Train_TimeTable_Station_C_PlayDestinationAnim_Params params {};
		params.Animate = Animate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_Station.BPW_Train_TimeTable_Station_C.PlayRemoveAnim
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               MinimizeAnim                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Animate                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Train_TimeTable_Station_C::PlayRemoveAnim(bool MinimizeAnim, bool Animate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_Station.BPW_Train_TimeTable_Station_C.PlayRemoveAnim");
		
		UBPW_Train_TimeTable_Station_C_PlayRemoveAnim_Params params {};
		params.MinimizeAnim = MinimizeAnim;
		params.Animate = Animate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_Station.BPW_Train_TimeTable_Station_C.PlayReverseExpandAnim
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Animate                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Train_TimeTable_Station_C::PlayReverseExpandAnim(bool Animate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_Station.BPW_Train_TimeTable_Station_C.PlayReverseExpandAnim");
		
		UBPW_Train_TimeTable_Station_C_PlayReverseExpandAnim_Params params {};
		params.Animate = Animate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_Station.BPW_Train_TimeTable_Station_C.PlayExpandAnim
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Animate                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Train_TimeTable_Station_C::PlayExpandAnim(bool Animate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_Station.BPW_Train_TimeTable_Station_C.PlayExpandAnim");
		
		UBPW_Train_TimeTable_Station_C_PlayExpandAnim_Params params {};
		params.Animate = Animate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_Station.BPW_Train_TimeTable_Station_C.PlayAddAnim
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Animate                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Train_TimeTable_Station_C::PlayAddAnim(bool Animate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_Station.BPW_Train_TimeTable_Station_C.PlayAddAnim");
		
		UBPW_Train_TimeTable_Station_C_PlayAddAnim_Params params {};
		params.Animate = Animate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_Station.BPW_Train_TimeTable_Station_C.SetIsDestination
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Animate                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Train_TimeTable_Station_C::SetIsDestination(bool Animate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_Station.BPW_Train_TimeTable_Station_C.SetIsDestination");
		
		UBPW_Train_TimeTable_Station_C_SetIsDestination_Params params {};
		params.Animate = Animate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_Station.BPW_Train_TimeTable_Station_C.RemoveAnimFinished
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Train_TimeTable_Station_C::RemoveAnimFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_Station.BPW_Train_TimeTable_Station_C.RemoveAnimFinished");
		
		UBPW_Train_TimeTable_Station_C_RemoveAnimFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_Station.BPW_Train_TimeTable_Station_C.SetIsDeparture
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               mIsDeparture                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Animate                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Train_TimeTable_Station_C::SetIsDeparture(bool mIsDeparture, bool Animate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_Station.BPW_Train_TimeTable_Station_C.SetIsDeparture");
		
		UBPW_Train_TimeTable_Station_C_SetIsDeparture_Params params {};
		params.mIsDeparture = mIsDeparture;
		params.Animate = Animate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_Station.BPW_Train_TimeTable_Station_C.UpdateName
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Train_TimeTable_Station_C::UpdateName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_Station.BPW_Train_TimeTable_Station_C.UpdateName");
		
		UBPW_Train_TimeTable_Station_C_UpdateName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_Station.BPW_Train_TimeTable_Station_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Train_TimeTable_Station_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_Station.BPW_Train_TimeTable_Station_C.PreConstruct");
		
		UBPW_Train_TimeTable_Station_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_Station.BPW_Train_TimeTable_Station_C.OnBeginRemoveAnim
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Animate                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsNextStaionAfterMove                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Train_TimeTable_Station_C::OnBeginRemoveAnim(bool Animate, bool IsNextStaionAfterMove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_Station.BPW_Train_TimeTable_Station_C.OnBeginRemoveAnim");
		
		UBPW_Train_TimeTable_Station_C_OnBeginRemoveAnim_Params params {};
		params.Animate = Animate;
		params.IsNextStaionAfterMove = IsNextStaionAfterMove;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_Station.BPW_Train_TimeTable_Station_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_Train_TimeTable_Station_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_Station.BPW_Train_TimeTable_Station_C.Destruct");
		
		UBPW_Train_TimeTable_Station_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_Station.BPW_Train_TimeTable_Station_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_Train_TimeTable_Station_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_Station.BPW_Train_TimeTable_Station_C.Construct");
		
		UBPW_Train_TimeTable_Station_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_Station.BPW_Train_TimeTable_Station_C.BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_Train_TimeTable_Station_C::BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_Station.BPW_Train_TimeTable_Station_C.BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
		UBPW_Train_TimeTable_Station_C_BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_Station.BPW_Train_TimeTable_Station_C.BndEvt__mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_Train_TimeTable_Station_C::BndEvt__mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_Station.BPW_Train_TimeTable_Station_C.BndEvt__mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UBPW_Train_TimeTable_Station_C_BndEvt__mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_Station.BPW_Train_TimeTable_Station_C.ExecuteUbergraph_BPW_Train_TimeTable_Station
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Train_TimeTable_Station_C::ExecuteUbergraph_BPW_Train_TimeTable_Station(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_Station.BPW_Train_TimeTable_Station_C.ExecuteUbergraph_BPW_Train_TimeTable_Station");
		
		UBPW_Train_TimeTable_Station_C_ExecuteUbergraph_BPW_Train_TimeTable_Station_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_Station.BPW_Train_TimeTable_Station_C.OnUnhovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FTimeTableStop                              Stop                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_Train_TimeTable_Station_C::OnUnhovered__DelegateSignature(const struct FTimeTableStop& Stop)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_Station.BPW_Train_TimeTable_Station_C.OnUnhovered__DelegateSignature");
		
		UBPW_Train_TimeTable_Station_C_OnUnhovered__DelegateSignature_Params params {};
		params.Stop = Stop;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_Station.BPW_Train_TimeTable_Station_C.OnHovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FTimeTableStop                              Stop                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_Train_TimeTable_Station_C::OnHovered__DelegateSignature(const struct FTimeTableStop& Stop)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_Station.BPW_Train_TimeTable_Station_C.OnHovered__DelegateSignature");
		
		UBPW_Train_TimeTable_Station_C_OnHovered__DelegateSignature_Params params {};
		params.Stop = Stop;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_Station.BPW_Train_TimeTable_Station_C.OnRemoveAnimFinished__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBPW_Train_TimeTable_Station_C*              TimeTableStation                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Animate                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Train_TimeTable_Station_C::OnRemoveAnimFinished__DelegateSignature(class UBPW_Train_TimeTable_Station_C* TimeTableStation, bool Animate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_Station.BPW_Train_TimeTable_Station_C.OnRemoveAnimFinished__DelegateSignature");
		
		UBPW_Train_TimeTable_Station_C_OnRemoveAnimFinished__DelegateSignature_Params params {};
		params.TimeTableStation = TimeTableStation;
		params.Animate = Animate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_Train_TimeTable_Station_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_Train_TimeTable_Station_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_Train_TimeTable_Station.BPW_Train_TimeTable_Station_C");
		return ptr;
	}

}


