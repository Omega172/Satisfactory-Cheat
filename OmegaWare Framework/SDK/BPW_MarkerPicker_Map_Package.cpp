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
	 * 		Name   -> Function BPW_MarkerPicker_Map.BPW_MarkerPicker_Map_C.OnIconUnhovered
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            IconID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_MarkerPicker_Map_C::OnIconUnhovered(int32_t IconID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MarkerPicker_Map.BPW_MarkerPicker_Map_C.OnIconUnhovered");
		
		UBPW_MarkerPicker_Map_C_OnIconUnhovered_Params params {};
		params.IconID = IconID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MarkerPicker_Map.BPW_MarkerPicker_Map_C.OnIconHovered
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            IconID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_MarkerPicker_Map_C::OnIconHovered(int32_t IconID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MarkerPicker_Map.BPW_MarkerPicker_Map_C.OnIconHovered");
		
		UBPW_MarkerPicker_Map_C_OnIconHovered_Params params {};
		params.IconID = IconID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MarkerPicker_Map.BPW_MarkerPicker_Map_C.OnBrushSizeChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Size                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_MarkerPicker_Map_C::OnBrushSizeChanged(double Size)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MarkerPicker_Map.BPW_MarkerPicker_Map_C.OnBrushSizeChanged");
		
		UBPW_MarkerPicker_Map_C_OnBrushSizeChanged_Params params {};
		params.Size = Size;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MarkerPicker_Map.BPW_MarkerPicker_Map_C.OnSwatchDeselected
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_MarkerPicker_Map_C::OnSwatchDeselected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MarkerPicker_Map.BPW_MarkerPicker_Map_C.OnSwatchDeselected");
		
		UBPW_MarkerPicker_Map_C_OnSwatchDeselected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MarkerPicker_Map.BPW_MarkerPicker_Map_C.OnSwatchClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_MarkerPicker_Map_C::OnSwatchClicked(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MarkerPicker_Map.BPW_MarkerPicker_Map_C.OnSwatchClicked");
		
		UBPW_MarkerPicker_Map_C_OnSwatchClicked_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MarkerPicker_Map.BPW_MarkerPicker_Map_C.SetMarkerAmount
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_MarkerPicker_Map_C::SetMarkerAmount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MarkerPicker_Map.BPW_MarkerPicker_Map_C.SetMarkerAmount");
		
		UBPW_MarkerPicker_Map_C_SetMarkerAmount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MarkerPicker_Map.BPW_MarkerPicker_Map_C.SelectButtonAfterID
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               mIsNewMarker                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               mIsSwatch                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_MarkerPicker_Map_C::SelectButtonAfterID(bool mIsNewMarker, bool mIsSwatch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MarkerPicker_Map.BPW_MarkerPicker_Map_C.SelectButtonAfterID");
		
		UBPW_MarkerPicker_Map_C_SelectButtonAfterID_Params params {};
		params.mIsNewMarker = mIsNewMarker;
		params.mIsSwatch = mIsSwatch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MarkerPicker_Map.BPW_MarkerPicker_Map_C.OnNewMarkerButtonClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_MarkerPicker_Map_C::OnNewMarkerButtonClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MarkerPicker_Map.BPW_MarkerPicker_Map_C.OnNewMarkerButtonClicked");
		
		UBPW_MarkerPicker_Map_C_OnNewMarkerButtonClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MarkerPicker_Map.BPW_MarkerPicker_Map_C.OnIconClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            IconID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_MarkerPicker_Map_C::OnIconClicked(int32_t IconID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MarkerPicker_Map.BPW_MarkerPicker_Map_C.OnIconClicked");
		
		UBPW_MarkerPicker_Map_C_OnIconClicked_Params params {};
		params.IconID = IconID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MarkerPicker_Map.BPW_MarkerPicker_Map_C.CreateIcons
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_MarkerPicker_Map_C::CreateIcons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MarkerPicker_Map.BPW_MarkerPicker_Map_C.CreateIcons");
		
		UBPW_MarkerPicker_Map_C_CreateIcons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MarkerPicker_Map.BPW_MarkerPicker_Map_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_MarkerPicker_Map_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MarkerPicker_Map.BPW_MarkerPicker_Map_C.PreConstruct");
		
		UBPW_MarkerPicker_Map_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MarkerPicker_Map.BPW_MarkerPicker_Map_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_MarkerPicker_Map_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MarkerPicker_Map.BPW_MarkerPicker_Map_C.Construct");
		
		UBPW_MarkerPicker_Map_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MarkerPicker_Map.BPW_MarkerPicker_Map_C.OnMapMarkerAdded
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            markerIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_MarkerPicker_Map_C::OnMapMarkerAdded(int32_t markerIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MarkerPicker_Map.BPW_MarkerPicker_Map_C.OnMapMarkerAdded");
		
		UBPW_MarkerPicker_Map_C_OnMapMarkerAdded_Params params {};
		params.markerIndex = markerIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MarkerPicker_Map.BPW_MarkerPicker_Map_C.OnMapMarkerRemoved
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            markerIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_MarkerPicker_Map_C::OnMapMarkerRemoved(int32_t markerIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MarkerPicker_Map.BPW_MarkerPicker_Map_C.OnMapMarkerRemoved");
		
		UBPW_MarkerPicker_Map_C_OnMapMarkerRemoved_Params params {};
		params.markerIndex = markerIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MarkerPicker_Map.BPW_MarkerPicker_Map_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_MarkerPicker_Map_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MarkerPicker_Map.BPW_MarkerPicker_Map_C.Destruct");
		
		UBPW_MarkerPicker_Map_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MarkerPicker_Map.BPW_MarkerPicker_Map_C.ExecuteUbergraph_BPW_MarkerPicker_Map
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_MarkerPicker_Map_C::ExecuteUbergraph_BPW_MarkerPicker_Map(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MarkerPicker_Map.BPW_MarkerPicker_Map_C.ExecuteUbergraph_BPW_MarkerPicker_Map");
		
		UBPW_MarkerPicker_Map_C_ExecuteUbergraph_BPW_MarkerPicker_Map_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MarkerPicker_Map.BPW_MarkerPicker_Map_C.OnStampUnhovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            IconID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_MarkerPicker_Map_C::OnStampUnhovered__DelegateSignature(int32_t IconID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MarkerPicker_Map.BPW_MarkerPicker_Map_C.OnStampUnhovered__DelegateSignature");
		
		UBPW_MarkerPicker_Map_C_OnStampUnhovered__DelegateSignature_Params params {};
		params.IconID = IconID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MarkerPicker_Map.BPW_MarkerPicker_Map_C.OnStampHovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            IconID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_MarkerPicker_Map_C::OnStampHovered__DelegateSignature(int32_t IconID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MarkerPicker_Map.BPW_MarkerPicker_Map_C.OnStampHovered__DelegateSignature");
		
		UBPW_MarkerPicker_Map_C_OnStampHovered__DelegateSignature_Params params {};
		params.IconID = IconID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MarkerPicker_Map.BPW_MarkerPicker_Map_C.OnPainterBrushSizeChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Size                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_MarkerPicker_Map_C::OnPainterBrushSizeChanged__DelegateSignature(double Size)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MarkerPicker_Map.BPW_MarkerPicker_Map_C.OnPainterBrushSizeChanged__DelegateSignature");
		
		UBPW_MarkerPicker_Map_C_OnPainterBrushSizeChanged__DelegateSignature_Params params {};
		params.Size = Size;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MarkerPicker_Map.BPW_MarkerPicker_Map_C.OnSwatchSelected__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ColorIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_MarkerPicker_Map_C::OnSwatchSelected__DelegateSignature(int32_t ColorIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MarkerPicker_Map.BPW_MarkerPicker_Map_C.OnSwatchSelected__DelegateSignature");
		
		UBPW_MarkerPicker_Map_C_OnSwatchSelected__DelegateSignature_Params params {};
		params.ColorIndex = ColorIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MarkerPicker_Map.BPW_MarkerPicker_Map_C.OnNewMarkerSelected__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_MarkerPicker_Map_C::OnNewMarkerSelected__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MarkerPicker_Map.BPW_MarkerPicker_Map_C.OnNewMarkerSelected__DelegateSignature");
		
		UBPW_MarkerPicker_Map_C_OnNewMarkerSelected__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MarkerPicker_Map.BPW_MarkerPicker_Map_C.OnClearSelection__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_MarkerPicker_Map_C::OnClearSelection__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MarkerPicker_Map.BPW_MarkerPicker_Map_C.OnClearSelection__DelegateSignature");
		
		UBPW_MarkerPicker_Map_C_OnClearSelection__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MarkerPicker_Map.BPW_MarkerPicker_Map_C.OnStampSelected__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            IconID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_MarkerPicker_Map_C::OnStampSelected__DelegateSignature(int32_t IconID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MarkerPicker_Map.BPW_MarkerPicker_Map_C.OnStampSelected__DelegateSignature");
		
		UBPW_MarkerPicker_Map_C_OnStampSelected__DelegateSignature_Params params {};
		params.IconID = IconID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_MarkerPicker_Map_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_MarkerPicker_Map_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_MarkerPicker_Map.BPW_MarkerPicker_Map_C");
		return ptr;
	}

}


