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
	 * 		Name   -> Function BPW_HUDBox_Hoverpack.BPW_HUDBox_Hoverpack_C.GetNormalizedRangeWarningDistanceThreshold
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             RangeWarningNormalizedDistanceThreshold                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_HUDBox_Hoverpack_C::GetNormalizedRangeWarningDistanceThreshold(double* RangeWarningNormalizedDistanceThreshold)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_HUDBox_Hoverpack.BPW_HUDBox_Hoverpack_C.GetNormalizedRangeWarningDistanceThreshold");
		
		UBPW_HUDBox_Hoverpack_C_GetNormalizedRangeWarningDistanceThreshold_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RangeWarningNormalizedDistanceThreshold != nullptr)
			*RangeWarningNormalizedDistanceThreshold = params.RangeWarningNormalizedDistanceThreshold;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_HUDBox_Hoverpack.BPW_HUDBox_Hoverpack_C.IsHoverpackHovering
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               IsHovering                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_HUDBox_Hoverpack_C::IsHoverpackHovering(bool* IsHovering)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_HUDBox_Hoverpack.BPW_HUDBox_Hoverpack_C.IsHoverpackHovering");
		
		UBPW_HUDBox_Hoverpack_C_IsHoverpackHovering_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsHovering != nullptr)
			*IsHovering = params.IsHovering;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_HUDBox_Hoverpack.BPW_HUDBox_Hoverpack_C.SetBrushForHoverpackState
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_HUDBox_Hoverpack_C::SetBrushForHoverpackState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_HUDBox_Hoverpack.BPW_HUDBox_Hoverpack_C.SetBrushForHoverpackState");
		
		UBPW_HUDBox_Hoverpack_C_SetBrushForHoverpackState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_HUDBox_Hoverpack.BPW_HUDBox_Hoverpack_C.PlayIsHoveringAnimation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsHovering                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_HUDBox_Hoverpack_C::PlayIsHoveringAnimation(bool IsHovering)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_HUDBox_Hoverpack.BPW_HUDBox_Hoverpack_C.PlayIsHoveringAnimation");
		
		UBPW_HUDBox_Hoverpack_C_PlayIsHoveringAnimation_Params params {};
		params.IsHovering = IsHovering;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_HUDBox_Hoverpack.BPW_HUDBox_Hoverpack_C.OnConnectionStatusUpdated
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               HasConnection                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_HUDBox_Hoverpack_C::OnConnectionStatusUpdated(bool HasConnection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_HUDBox_Hoverpack.BPW_HUDBox_Hoverpack_C.OnConnectionStatusUpdated");
		
		UBPW_HUDBox_Hoverpack_C_OnConnectionStatusUpdated_Params params {};
		params.HasConnection = HasConnection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_HUDBox_Hoverpack.BPW_HUDBox_Hoverpack_C.UnbindHoverpackEvents
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_HUDBox_Hoverpack_C::UnbindHoverpackEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_HUDBox_Hoverpack.BPW_HUDBox_Hoverpack_C.UnbindHoverpackEvents");
		
		UBPW_HUDBox_Hoverpack_C_UnbindHoverpackEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_HUDBox_Hoverpack.BPW_HUDBox_Hoverpack_C.BindHoverpackEvents
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_HUDBox_Hoverpack_C::BindHoverpackEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_HUDBox_Hoverpack.BPW_HUDBox_Hoverpack_C.BindHoverpackEvents");
		
		UBPW_HUDBox_Hoverpack_C_BindHoverpackEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_HUDBox_Hoverpack.BPW_HUDBox_Hoverpack_C.UpdateProgressBar
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_HUDBox_Hoverpack_C::UpdateProgressBar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_HUDBox_Hoverpack.BPW_HUDBox_Hoverpack_C.UpdateProgressBar");
		
		UBPW_HUDBox_Hoverpack_C_UpdateProgressBar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_HUDBox_Hoverpack.BPW_HUDBox_Hoverpack_C.GetCurrentConnectionNormalisedDistance
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             NormalisedConnectionDistance                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_HUDBox_Hoverpack_C::GetCurrentConnectionNormalisedDistance(double* NormalisedConnectionDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_HUDBox_Hoverpack.BPW_HUDBox_Hoverpack_C.GetCurrentConnectionNormalisedDistance");
		
		UBPW_HUDBox_Hoverpack_C_GetCurrentConnectionNormalisedDistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NormalisedConnectionDistance != nullptr)
			*NormalisedConnectionDistance = params.NormalisedConnectionDistance;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_HUDBox_Hoverpack.BPW_HUDBox_Hoverpack_C.IsHoverpackConnected
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               IsConnected                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_HUDBox_Hoverpack_C::IsHoverpackConnected(bool* IsConnected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_HUDBox_Hoverpack.BPW_HUDBox_Hoverpack_C.IsHoverpackConnected");
		
		UBPW_HUDBox_Hoverpack_C_IsHoverpackConnected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsConnected != nullptr)
			*IsConnected = params.IsConnected;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_HUDBox_Hoverpack.BPW_HUDBox_Hoverpack_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_HUDBox_Hoverpack_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_HUDBox_Hoverpack.BPW_HUDBox_Hoverpack_C.PreConstruct");
		
		UBPW_HUDBox_Hoverpack_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_HUDBox_Hoverpack.BPW_HUDBox_Hoverpack_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_HUDBox_Hoverpack_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_HUDBox_Hoverpack.BPW_HUDBox_Hoverpack_C.Destruct");
		
		UBPW_HUDBox_Hoverpack_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_HUDBox_Hoverpack.BPW_HUDBox_Hoverpack_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_HUDBox_Hoverpack_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_HUDBox_Hoverpack.BPW_HUDBox_Hoverpack_C.Tick");
		
		UBPW_HUDBox_Hoverpack_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_HUDBox_Hoverpack.BPW_HUDBox_Hoverpack_C.Event IsHovering
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EHoverPackMode                                     NewMode                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_HUDBox_Hoverpack_C::EventIsHovering(EHoverPackMode NewMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_HUDBox_Hoverpack.BPW_HUDBox_Hoverpack_C.Event IsHovering");
		
		UBPW_HUDBox_Hoverpack_C_EventIsHovering_Params params {};
		params.NewMode = NewMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_HUDBox_Hoverpack.BPW_HUDBox_Hoverpack_C.PlayWarningAnimation
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_HUDBox_Hoverpack_C::PlayWarningAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_HUDBox_Hoverpack.BPW_HUDBox_Hoverpack_C.PlayWarningAnimation");
		
		UBPW_HUDBox_Hoverpack_C_PlayWarningAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_HUDBox_Hoverpack.BPW_HUDBox_Hoverpack_C.Event PlayRangeWarningAnimation
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ShouldPlayWarning                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_HUDBox_Hoverpack_C::EventPlayRangeWarningAnimation(bool ShouldPlayWarning)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_HUDBox_Hoverpack.BPW_HUDBox_Hoverpack_C.Event PlayRangeWarningAnimation");
		
		UBPW_HUDBox_Hoverpack_C_EventPlayRangeWarningAnimation_Params params {};
		params.ShouldPlayWarning = ShouldPlayWarning;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_HUDBox_Hoverpack.BPW_HUDBox_Hoverpack_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_HUDBox_Hoverpack_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_HUDBox_Hoverpack.BPW_HUDBox_Hoverpack_C.Construct");
		
		UBPW_HUDBox_Hoverpack_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_HUDBox_Hoverpack.BPW_HUDBox_Hoverpack_C.ExecuteUbergraph_BPW_HUDBox_Hoverpack
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_HUDBox_Hoverpack_C::ExecuteUbergraph_BPW_HUDBox_Hoverpack(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_HUDBox_Hoverpack.BPW_HUDBox_Hoverpack_C.ExecuteUbergraph_BPW_HUDBox_Hoverpack");
		
		UBPW_HUDBox_Hoverpack_C_ExecuteUbergraph_BPW_HUDBox_Hoverpack_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_HUDBox_Hoverpack_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_HUDBox_Hoverpack_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_HUDBox_Hoverpack.BPW_HUDBox_Hoverpack_C");
		return ptr;
	}

}


