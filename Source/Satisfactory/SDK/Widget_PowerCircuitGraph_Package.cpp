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
	 * 		Name   -> Function Widget_PowerCircuitGraph.Widget_PowerCircuitGraph_C.ShowGameModeFeedback
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_PowerCircuitGraph_C::ShowGameModeFeedback()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PowerCircuitGraph.Widget_PowerCircuitGraph_C.ShowGameModeFeedback");
		
		UWidget_PowerCircuitGraph_C_ShowGameModeFeedback_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_PowerCircuitGraph.Widget_PowerCircuitGraph_C.OnMouseButtonUp
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UWidget_PowerCircuitGraph_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PowerCircuitGraph.Widget_PowerCircuitGraph_C.OnMouseButtonUp");
		
		UWidget_PowerCircuitGraph_C_OnMouseButtonUp_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_PowerCircuitGraph.Widget_PowerCircuitGraph_C.CachePowerStorageInfo
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_PowerCircuitGraph_C::CachePowerStorageInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PowerCircuitGraph.Widget_PowerCircuitGraph_C.CachePowerStorageInfo");
		
		UWidget_PowerCircuitGraph_C_CachePowerStorageInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_PowerCircuitGraph.Widget_PowerCircuitGraph_C.SetShowConnectionError
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_PowerCircuitGraph_C::SetShowConnectionError(bool Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PowerCircuitGraph.Widget_PowerCircuitGraph_C.SetShowConnectionError");
		
		UWidget_PowerCircuitGraph_C_SetShowConnectionError_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_PowerCircuitGraph.Widget_PowerCircuitGraph_C.ShowPowerStorage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_PowerCircuitGraph_C::ShowPowerStorage(bool Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PowerCircuitGraph.Widget_PowerCircuitGraph_C.ShowPowerStorage");
		
		UWidget_PowerCircuitGraph_C_ShowPowerStorage_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_PowerCircuitGraph.Widget_PowerCircuitGraph_C.UpdatePowerStorageInfo
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_PowerCircuitGraph_C::UpdatePowerStorageInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PowerCircuitGraph.Widget_PowerCircuitGraph_C.UpdatePowerStorageInfo");
		
		UWidget_PowerCircuitGraph_C_UpdatePowerStorageInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_PowerCircuitGraph.Widget_PowerCircuitGraph_C.UpdateData
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_PowerCircuitGraph_C::UpdateData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PowerCircuitGraph.Widget_PowerCircuitGraph_C.UpdateData");
		
		UWidget_PowerCircuitGraph_C_UpdateData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_PowerCircuitGraph.Widget_PowerCircuitGraph_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_PowerCircuitGraph_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PowerCircuitGraph.Widget_PowerCircuitGraph_C.Construct");
		
		UWidget_PowerCircuitGraph_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_PowerCircuitGraph.Widget_PowerCircuitGraph_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_PowerCircuitGraph_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PowerCircuitGraph.Widget_PowerCircuitGraph_C.Destruct");
		
		UWidget_PowerCircuitGraph_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_PowerCircuitGraph.Widget_PowerCircuitGraph_C.BndEvt__BPW_PowerStorageInfo_K2Node_ComponentBoundEvent_0_OnShowInfoClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ShowInfo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_PowerCircuitGraph_C::BndEvt__BPW_PowerStorageInfo_K2Node_ComponentBoundEvent_0_OnShowInfoClicked__DelegateSignature(bool ShowInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PowerCircuitGraph.Widget_PowerCircuitGraph_C.BndEvt__BPW_PowerStorageInfo_K2Node_ComponentBoundEvent_0_OnShowInfoClicked__DelegateSignature");
		
		UWidget_PowerCircuitGraph_C_BndEvt__BPW_PowerStorageInfo_K2Node_ComponentBoundEvent_0_OnShowInfoClicked__DelegateSignature_Params params {};
		params.ShowInfo = ShowInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_PowerCircuitGraph.Widget_PowerCircuitGraph_C.IsPowerCircuitValidChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isPowerCircuitValid                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_PowerCircuitGraph_C::IsPowerCircuitValidChanged(bool isPowerCircuitValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PowerCircuitGraph.Widget_PowerCircuitGraph_C.IsPowerCircuitValidChanged");
		
		UWidget_PowerCircuitGraph_C_IsPowerCircuitValidChanged_Params params {};
		params.isPowerCircuitValid = isPowerCircuitValid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_PowerCircuitGraph.Widget_PowerCircuitGraph_C.AddToClickCount
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_PowerCircuitGraph_C::AddToClickCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PowerCircuitGraph.Widget_PowerCircuitGraph_C.AddToClickCount");
		
		UWidget_PowerCircuitGraph_C_AddToClickCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_PowerCircuitGraph.Widget_PowerCircuitGraph_C.ExecuteUbergraph_Widget_PowerCircuitGraph
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_PowerCircuitGraph_C::ExecuteUbergraph_Widget_PowerCircuitGraph(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PowerCircuitGraph.Widget_PowerCircuitGraph_C.ExecuteUbergraph_Widget_PowerCircuitGraph");
		
		UWidget_PowerCircuitGraph_C_ExecuteUbergraph_Widget_PowerCircuitGraph_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_PowerCircuitGraph_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_PowerCircuitGraph_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_PowerCircuitGraph.Widget_PowerCircuitGraph_C");
		return ptr;
	}

}


