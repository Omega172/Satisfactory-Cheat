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
	 * 		Name   -> Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.SetupCompassDistanceButton
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_MarkerEditor_Marker_C::SetupCompassDistanceButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.SetupCompassDistanceButton");
		
		UBPW_MarkerEditor_Marker_C_SetupCompassDistanceButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.SetCompassViewDistance
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ECompassViewDistance                               compassViewDistance                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_MarkerEditor_Marker_C::SetCompassViewDistance(ECompassViewDistance compassViewDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.SetCompassViewDistance");
		
		UBPW_MarkerEditor_Marker_C_SetCompassViewDistance_Params params {};
		params.compassViewDistance = compassViewDistance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.SetSize
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Size                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_MarkerEditor_Marker_C::SetSize(double Size)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.SetSize");
		
		UBPW_MarkerEditor_Marker_C_SetSize_Params params {};
		params.Size = Size;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.SetColor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_MarkerEditor_Marker_C::SetColor(const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.SetColor");
		
		UBPW_MarkerEditor_Marker_C_SetColor_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.SetIconID
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            IconID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_MarkerEditor_Marker_C::SetIconID(int32_t IconID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.SetIconID");
		
		UBPW_MarkerEditor_Marker_C_SetIconID_Params params {};
		params.IconID = IconID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.UpdateName
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_MarkerEditor_Marker_C::UpdateName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.UpdateName");
		
		UBPW_MarkerEditor_Marker_C_UpdateName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_MarkerEditor_Marker_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.Construct");
		
		UBPW_MarkerEditor_Marker_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.BndEvt__BPW_MarkerEditor_Marker_mRemoveMarker_1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_MarkerEditor_Marker_C::BndEvt__BPW_MarkerEditor_Marker_mRemoveMarker_1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.BndEvt__BPW_MarkerEditor_Marker_mRemoveMarker_1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UBPW_MarkerEditor_Marker_C_BndEvt__BPW_MarkerEditor_Marker_mRemoveMarker_1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.BndEvt__BPW_MarkerEditor_Marker_mRemoveMarker_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_MarkerEditor_Marker_C::BndEvt__BPW_MarkerEditor_Marker_mRemoveMarker_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.BndEvt__BPW_MarkerEditor_Marker_mRemoveMarker_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		UBPW_MarkerEditor_Marker_C_BndEvt__BPW_MarkerEditor_Marker_mRemoveMarker_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.OnEscapePressed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_MarkerEditor_Marker_C::OnEscapePressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.OnEscapePressed");
		
		UBPW_MarkerEditor_Marker_C_OnEscapePressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.BndEvt__BPW_MarkerEditor_Marker_mName_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_MarkerEditor_Marker_C::BndEvt__BPW_MarkerEditor_Marker_mName_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.BndEvt__BPW_MarkerEditor_Marker_mName_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature");
		
		UBPW_MarkerEditor_Marker_C_BndEvt__BPW_MarkerEditor_Marker_mName_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.BndEvt__BPW_MarkerEditor_Marker_mApply_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_MarkerEditor_Marker_C::BndEvt__BPW_MarkerEditor_Marker_mApply_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.BndEvt__BPW_MarkerEditor_Marker_mApply_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");
		
		UBPW_MarkerEditor_Marker_C_BndEvt__BPW_MarkerEditor_Marker_mApply_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.BndEvt__BPW_MarkerEditor_Marker_mSelectColorButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_MarkerEditor_Marker_C::BndEvt__BPW_MarkerEditor_Marker_mSelectColorButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.BndEvt__BPW_MarkerEditor_Marker_mSelectColorButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");
		
		UBPW_MarkerEditor_Marker_C_BndEvt__BPW_MarkerEditor_Marker_mSelectColorButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.BndEvt__BPW_MarkerEditor_Marker_MSelectIconButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_MarkerEditor_Marker_C::BndEvt__BPW_MarkerEditor_Marker_MSelectIconButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.BndEvt__BPW_MarkerEditor_Marker_MSelectIconButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature");
		
		UBPW_MarkerEditor_Marker_C_BndEvt__BPW_MarkerEditor_Marker_MSelectIconButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.BndEvt__BPW_MarkerEditor_Marker_mSizeLargeButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_MarkerEditor_Marker_C::BndEvt__BPW_MarkerEditor_Marker_mSizeLargeButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.BndEvt__BPW_MarkerEditor_Marker_mSizeLargeButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");
		
		UBPW_MarkerEditor_Marker_C_BndEvt__BPW_MarkerEditor_Marker_mSizeLargeButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.BndEvt__BPW_MarkerEditor_Marker_mSizeSmallButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_MarkerEditor_Marker_C::BndEvt__BPW_MarkerEditor_Marker_mSizeSmallButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.BndEvt__BPW_MarkerEditor_Marker_mSizeSmallButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature");
		
		UBPW_MarkerEditor_Marker_C_BndEvt__BPW_MarkerEditor_Marker_mSizeSmallButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.BndEvt__BPW_MarkerEditor_Marker_mHighlightMarker_K2Node_ComponentBoundEvent_8_OnStateChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsTrue                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_MarkerEditor_Marker_C::BndEvt__BPW_MarkerEditor_Marker_mHighlightMarker_K2Node_ComponentBoundEvent_8_OnStateChanged__DelegateSignature(bool IsTrue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.BndEvt__BPW_MarkerEditor_Marker_mHighlightMarker_K2Node_ComponentBoundEvent_8_OnStateChanged__DelegateSignature");
		
		UBPW_MarkerEditor_Marker_C_BndEvt__BPW_MarkerEditor_Marker_mHighlightMarker_K2Node_ComponentBoundEvent_8_OnStateChanged__DelegateSignature_Params params {};
		params.IsTrue = IsTrue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.BndEvt__BPW_MarkerEditor_Marker_mViewDistanceOff_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_MarkerEditor_Marker_C::BndEvt__BPW_MarkerEditor_Marker_mViewDistanceOff_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.BndEvt__BPW_MarkerEditor_Marker_mViewDistanceOff_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature");
		
		UBPW_MarkerEditor_Marker_C_BndEvt__BPW_MarkerEditor_Marker_mViewDistanceOff_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.BndEvt__BPW_MarkerEditor_Marker_mViewDistanceNear_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_MarkerEditor_Marker_C::BndEvt__BPW_MarkerEditor_Marker_mViewDistanceNear_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.BndEvt__BPW_MarkerEditor_Marker_mViewDistanceNear_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature");
		
		UBPW_MarkerEditor_Marker_C_BndEvt__BPW_MarkerEditor_Marker_mViewDistanceNear_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.BndEvt__BPW_MarkerEditor_Marker_mViewDistanceMedium_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_MarkerEditor_Marker_C::BndEvt__BPW_MarkerEditor_Marker_mViewDistanceMedium_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.BndEvt__BPW_MarkerEditor_Marker_mViewDistanceMedium_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature");
		
		UBPW_MarkerEditor_Marker_C_BndEvt__BPW_MarkerEditor_Marker_mViewDistanceMedium_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.BndEvt__BPW_MarkerEditor_Marker_mViewDistanceInfinite_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_MarkerEditor_Marker_C::BndEvt__BPW_MarkerEditor_Marker_mViewDistanceInfinite_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.BndEvt__BPW_MarkerEditor_Marker_mViewDistanceInfinite_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature");
		
		UBPW_MarkerEditor_Marker_C_BndEvt__BPW_MarkerEditor_Marker_mViewDistanceInfinite_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.BndEvt__BPW_MarkerEditor_Marker_mViewDistanceFar_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_MarkerEditor_Marker_C::BndEvt__BPW_MarkerEditor_Marker_mViewDistanceFar_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.BndEvt__BPW_MarkerEditor_Marker_mViewDistanceFar_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature");
		
		UBPW_MarkerEditor_Marker_C_BndEvt__BPW_MarkerEditor_Marker_mViewDistanceFar_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.BndEvt__BPW_MarkerEditor_Marker_mViewDistanceOff_K2Node_ComponentBoundEvent_14_OnHovered__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_MarkerEditor_Marker_C::BndEvt__BPW_MarkerEditor_Marker_mViewDistanceOff_K2Node_ComponentBoundEvent_14_OnHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.BndEvt__BPW_MarkerEditor_Marker_mViewDistanceOff_K2Node_ComponentBoundEvent_14_OnHovered__DelegateSignature");
		
		UBPW_MarkerEditor_Marker_C_BndEvt__BPW_MarkerEditor_Marker_mViewDistanceOff_K2Node_ComponentBoundEvent_14_OnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.BndEvt__BPW_MarkerEditor_Marker_mViewDistanceNear_K2Node_ComponentBoundEvent_15_OnHovered__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_MarkerEditor_Marker_C::BndEvt__BPW_MarkerEditor_Marker_mViewDistanceNear_K2Node_ComponentBoundEvent_15_OnHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.BndEvt__BPW_MarkerEditor_Marker_mViewDistanceNear_K2Node_ComponentBoundEvent_15_OnHovered__DelegateSignature");
		
		UBPW_MarkerEditor_Marker_C_BndEvt__BPW_MarkerEditor_Marker_mViewDistanceNear_K2Node_ComponentBoundEvent_15_OnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.BndEvt__BPW_MarkerEditor_Marker_mViewDistanceMedium_K2Node_ComponentBoundEvent_16_OnHovered__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_MarkerEditor_Marker_C::BndEvt__BPW_MarkerEditor_Marker_mViewDistanceMedium_K2Node_ComponentBoundEvent_16_OnHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.BndEvt__BPW_MarkerEditor_Marker_mViewDistanceMedium_K2Node_ComponentBoundEvent_16_OnHovered__DelegateSignature");
		
		UBPW_MarkerEditor_Marker_C_BndEvt__BPW_MarkerEditor_Marker_mViewDistanceMedium_K2Node_ComponentBoundEvent_16_OnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.BndEvt__BPW_MarkerEditor_Marker_mViewDistanceFar_K2Node_ComponentBoundEvent_17_OnHovered__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_MarkerEditor_Marker_C::BndEvt__BPW_MarkerEditor_Marker_mViewDistanceFar_K2Node_ComponentBoundEvent_17_OnHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.BndEvt__BPW_MarkerEditor_Marker_mViewDistanceFar_K2Node_ComponentBoundEvent_17_OnHovered__DelegateSignature");
		
		UBPW_MarkerEditor_Marker_C_BndEvt__BPW_MarkerEditor_Marker_mViewDistanceFar_K2Node_ComponentBoundEvent_17_OnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.BndEvt__BPW_MarkerEditor_Marker_mViewDistanceInfinite_K2Node_ComponentBoundEvent_18_OnHovered__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_MarkerEditor_Marker_C::BndEvt__BPW_MarkerEditor_Marker_mViewDistanceInfinite_K2Node_ComponentBoundEvent_18_OnHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.BndEvt__BPW_MarkerEditor_Marker_mViewDistanceInfinite_K2Node_ComponentBoundEvent_18_OnHovered__DelegateSignature");
		
		UBPW_MarkerEditor_Marker_C_BndEvt__BPW_MarkerEditor_Marker_mViewDistanceInfinite_K2Node_ComponentBoundEvent_18_OnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.BndEvt__BPW_MarkerEditor_Marker_mViewDistanceOff_K2Node_ComponentBoundEvent_19_OnUnhovered__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_MarkerEditor_Marker_C::BndEvt__BPW_MarkerEditor_Marker_mViewDistanceOff_K2Node_ComponentBoundEvent_19_OnUnhovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.BndEvt__BPW_MarkerEditor_Marker_mViewDistanceOff_K2Node_ComponentBoundEvent_19_OnUnhovered__DelegateSignature");
		
		UBPW_MarkerEditor_Marker_C_BndEvt__BPW_MarkerEditor_Marker_mViewDistanceOff_K2Node_ComponentBoundEvent_19_OnUnhovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.BndEvt__BPW_MarkerEditor_Marker_mViewDistanceNear_K2Node_ComponentBoundEvent_20_OnUnhovered__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_MarkerEditor_Marker_C::BndEvt__BPW_MarkerEditor_Marker_mViewDistanceNear_K2Node_ComponentBoundEvent_20_OnUnhovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.BndEvt__BPW_MarkerEditor_Marker_mViewDistanceNear_K2Node_ComponentBoundEvent_20_OnUnhovered__DelegateSignature");
		
		UBPW_MarkerEditor_Marker_C_BndEvt__BPW_MarkerEditor_Marker_mViewDistanceNear_K2Node_ComponentBoundEvent_20_OnUnhovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.BndEvt__BPW_MarkerEditor_Marker_mViewDistanceMedium_K2Node_ComponentBoundEvent_21_OnUnhovered__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_MarkerEditor_Marker_C::BndEvt__BPW_MarkerEditor_Marker_mViewDistanceMedium_K2Node_ComponentBoundEvent_21_OnUnhovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.BndEvt__BPW_MarkerEditor_Marker_mViewDistanceMedium_K2Node_ComponentBoundEvent_21_OnUnhovered__DelegateSignature");
		
		UBPW_MarkerEditor_Marker_C_BndEvt__BPW_MarkerEditor_Marker_mViewDistanceMedium_K2Node_ComponentBoundEvent_21_OnUnhovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.BndEvt__BPW_MarkerEditor_Marker_mViewDistanceFar_K2Node_ComponentBoundEvent_22_OnUnhovered__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_MarkerEditor_Marker_C::BndEvt__BPW_MarkerEditor_Marker_mViewDistanceFar_K2Node_ComponentBoundEvent_22_OnUnhovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.BndEvt__BPW_MarkerEditor_Marker_mViewDistanceFar_K2Node_ComponentBoundEvent_22_OnUnhovered__DelegateSignature");
		
		UBPW_MarkerEditor_Marker_C_BndEvt__BPW_MarkerEditor_Marker_mViewDistanceFar_K2Node_ComponentBoundEvent_22_OnUnhovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.BndEvt__BPW_MarkerEditor_Marker_mViewDistanceInfinite_K2Node_ComponentBoundEvent_23_OnUnhovered__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_MarkerEditor_Marker_C::BndEvt__BPW_MarkerEditor_Marker_mViewDistanceInfinite_K2Node_ComponentBoundEvent_23_OnUnhovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.BndEvt__BPW_MarkerEditor_Marker_mViewDistanceInfinite_K2Node_ComponentBoundEvent_23_OnUnhovered__DelegateSignature");
		
		UBPW_MarkerEditor_Marker_C_BndEvt__BPW_MarkerEditor_Marker_mViewDistanceInfinite_K2Node_ComponentBoundEvent_23_OnUnhovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.BndEvt__BPW_MarkerEditor_Marker_mName_K2Node_ComponentBoundEvent_24_OnEditableTextChangedEvent__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBPW_MarkerEditor_Marker_C::BndEvt__BPW_MarkerEditor_Marker_mName_K2Node_ComponentBoundEvent_24_OnEditableTextChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.BndEvt__BPW_MarkerEditor_Marker_mName_K2Node_ComponentBoundEvent_24_OnEditableTextChangedEvent__DelegateSignature");
		
		UBPW_MarkerEditor_Marker_C_BndEvt__BPW_MarkerEditor_Marker_mName_K2Node_ComponentBoundEvent_24_OnEditableTextChangedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.ExecuteUbergraph_BPW_MarkerEditor_Marker
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_MarkerEditor_Marker_C::ExecuteUbergraph_BPW_MarkerEditor_Marker(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.ExecuteUbergraph_BPW_MarkerEditor_Marker");
		
		UBPW_MarkerEditor_Marker_C_ExecuteUbergraph_BPW_MarkerEditor_Marker_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_MarkerEditor_Marker_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_MarkerEditor_Marker_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C");
		return ptr;
	}

}


