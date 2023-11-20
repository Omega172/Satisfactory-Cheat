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
	 * 		Name   -> Function BPW_LoadVehiclePath.BPW_LoadVehiclePath_C.Clear Map Data
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBPW_VehiclePathMap_C*                       Map                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		class UCanvasPanel*                                IconCanvas                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_LoadVehiclePath_C::ClearMapData(class UBPW_VehiclePathMap_C* Map, class UCanvasPanel* IconCanvas)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_LoadVehiclePath.BPW_LoadVehiclePath_C.Clear Map Data");
		
		UBPW_LoadVehiclePath_C_ClearMapData_Params params {};
		params.Map = Map;
		params.IconCanvas = IconCanvas;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_LoadVehiclePath.BPW_LoadVehiclePath_C.Display Map Data
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBPW_VehiclePathMap_C*                       Map                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		class UCanvasPanel*                                IconCanvas                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDrivingTargetListMapData                   Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		double                                             MapSize                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_LoadVehiclePath_C::DisplayMapData(class UBPW_VehiclePathMap_C* Map, class UCanvasPanel* IconCanvas, const struct FDrivingTargetListMapData& Data, double MapSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_LoadVehiclePath.BPW_LoadVehiclePath_C.Display Map Data");
		
		UBPW_LoadVehiclePath_C_DisplayMapData_Params params {};
		params.Map = Map;
		params.IconCanvas = IconCanvas;
		params.Data = Data;
		params.MapSize = MapSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_LoadVehiclePath.BPW_LoadVehiclePath_C.SearchPaths
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      textFilter                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UBPW_VehiclePaths_List_C*                    VehicleList                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		bool                                               filterOnVehicleType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AFGSavedWheeledVehiclePath*                  PathToIgnore                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_LoadVehiclePath_C::SearchPaths(const class FString& textFilter, class UBPW_VehiclePaths_List_C* VehicleList, bool filterOnVehicleType, class AFGSavedWheeledVehiclePath* PathToIgnore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_LoadVehiclePath.BPW_LoadVehiclePath_C.SearchPaths");
		
		UBPW_LoadVehiclePath_C_SearchPaths_Params params {};
		params.textFilter = textFilter;
		params.VehicleList = VehicleList;
		params.filterOnVehicleType = filterOnVehicleType;
		params.PathToIgnore = PathToIgnore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_LoadVehiclePath.BPW_LoadVehiclePath_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_LoadVehiclePath_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_LoadVehiclePath.BPW_LoadVehiclePath_C.Construct");
		
		UBPW_LoadVehiclePath_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_LoadVehiclePath.BPW_LoadVehiclePath_C.BndEvt__mSaveButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_LoadVehiclePath_C::BndEvt__mSaveButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_LoadVehiclePath.BPW_LoadVehiclePath_C.BndEvt__mSaveButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UBPW_LoadVehiclePath_C_BndEvt__mSaveButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_LoadVehiclePath.BPW_LoadVehiclePath_C.BndEvt__mCancelButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_LoadVehiclePath_C::BndEvt__mCancelButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_LoadVehiclePath.BPW_LoadVehiclePath_C.BndEvt__mCancelButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		UBPW_LoadVehiclePath_C_BndEvt__mCancelButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_LoadVehiclePath.BPW_LoadVehiclePath_C.BndEvt__mSearchBox_K2Node_ComponentBoundEvent_2_OnTextChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_LoadVehiclePath_C::BndEvt__mSearchBox_K2Node_ComponentBoundEvent_2_OnTextChanged__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_LoadVehiclePath.BPW_LoadVehiclePath_C.BndEvt__mSearchBox_K2Node_ComponentBoundEvent_2_OnTextChanged__DelegateSignature");
		
		UBPW_LoadVehiclePath_C_BndEvt__mSearchBox_K2Node_ComponentBoundEvent_2_OnTextChanged__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_LoadVehiclePath.BPW_LoadVehiclePath_C.Event Delete Path In All Paths List
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ConfirmClicked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_LoadVehiclePath_C::EventDeletePathInAllPathsList(bool ConfirmClicked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_LoadVehiclePath.BPW_LoadVehiclePath_C.Event Delete Path In All Paths List");
		
		UBPW_LoadVehiclePath_C_EventDeletePathInAllPathsList_Params params {};
		params.ConfirmClicked = ConfirmClicked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_LoadVehiclePath.BPW_LoadVehiclePath_C.BndEvt__mPathList_K2Node_ComponentBoundEvent_6_OnItemSelectionChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsSelected                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_LoadVehiclePath_C::BndEvt__mPathList_K2Node_ComponentBoundEvent_6_OnItemSelectionChanged__DelegateSignature(class UObject* Item, bool IsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_LoadVehiclePath.BPW_LoadVehiclePath_C.BndEvt__mPathList_K2Node_ComponentBoundEvent_6_OnItemSelectionChanged__DelegateSignature");
		
		UBPW_LoadVehiclePath_C_BndEvt__mPathList_K2Node_ComponentBoundEvent_6_OnItemSelectionChanged__DelegateSignature_Params params {};
		params.Item = Item;
		params.IsSelected = IsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_LoadVehiclePath.BPW_LoadVehiclePath_C.BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_7_OnTabButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_LoadVehiclePath_C::BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_7_OnTabButtonClicked__DelegateSignature(int32_t ButtonIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_LoadVehiclePath.BPW_LoadVehiclePath_C.BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_7_OnTabButtonClicked__DelegateSignature");
		
		UBPW_LoadVehiclePath_C_BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_7_OnTabButtonClicked__DelegateSignature_Params params {};
		params.ButtonIndex = ButtonIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_LoadVehiclePath.BPW_LoadVehiclePath_C.BndEvt__mAllPathsSearchbox_K2Node_ComponentBoundEvent_9_OnTextChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_LoadVehiclePath_C::BndEvt__mAllPathsSearchbox_K2Node_ComponentBoundEvent_9_OnTextChanged__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_LoadVehiclePath.BPW_LoadVehiclePath_C.BndEvt__mAllPathsSearchbox_K2Node_ComponentBoundEvent_9_OnTextChanged__DelegateSignature");
		
		UBPW_LoadVehiclePath_C_BndEvt__mAllPathsSearchbox_K2Node_ComponentBoundEvent_9_OnTextChanged__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_LoadVehiclePath.BPW_LoadVehiclePath_C.BndEvt__mPathlistAllVehicles_K2Node_ComponentBoundEvent_3_OnItemSelectionChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsSelected                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_LoadVehiclePath_C::BndEvt__mPathlistAllVehicles_K2Node_ComponentBoundEvent_3_OnItemSelectionChanged__DelegateSignature(class UObject* Item, bool IsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_LoadVehiclePath.BPW_LoadVehiclePath_C.BndEvt__mPathlistAllVehicles_K2Node_ComponentBoundEvent_3_OnItemSelectionChanged__DelegateSignature");
		
		UBPW_LoadVehiclePath_C_BndEvt__mPathlistAllVehicles_K2Node_ComponentBoundEvent_3_OnItemSelectionChanged__DelegateSignature_Params params {};
		params.Item = Item;
		params.IsSelected = IsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_LoadVehiclePath.BPW_LoadVehiclePath_C.BndEvt__mDeleteButtonAllPaths_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_LoadVehiclePath_C::BndEvt__mDeleteButtonAllPaths_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_LoadVehiclePath.BPW_LoadVehiclePath_C.BndEvt__mDeleteButtonAllPaths_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");
		
		UBPW_LoadVehiclePath_C_BndEvt__mDeleteButtonAllPaths_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_LoadVehiclePath.BPW_LoadVehiclePath_C.BndEvt__mCancelButtonAllPaths_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_LoadVehiclePath_C::BndEvt__mCancelButtonAllPaths_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_LoadVehiclePath.BPW_LoadVehiclePath_C.BndEvt__mCancelButtonAllPaths_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature");
		
		UBPW_LoadVehiclePath_C_BndEvt__mCancelButtonAllPaths_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_LoadVehiclePath.BPW_LoadVehiclePath_C.BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_8_OnClose__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_LoadVehiclePath_C::BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_8_OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_LoadVehiclePath.BPW_LoadVehiclePath_C.BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_8_OnClose__DelegateSignature");
		
		UBPW_LoadVehiclePath_C_BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_8_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_LoadVehiclePath.BPW_LoadVehiclePath_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_LoadVehiclePath_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_LoadVehiclePath.BPW_LoadVehiclePath_C.Destruct");
		
		UBPW_LoadVehiclePath_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_LoadVehiclePath.BPW_LoadVehiclePath_C.BndEvt__mLoadButton_1_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_LoadVehiclePath_C::BndEvt__mLoadButton_1_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_LoadVehiclePath.BPW_LoadVehiclePath_C.BndEvt__mLoadButton_1_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");
		
		UBPW_LoadVehiclePath_C_BndEvt__mLoadButton_1_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_LoadVehiclePath.BPW_LoadVehiclePath_C.Event Delete Path This Vehicle List
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ConfirmClicked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_LoadVehiclePath_C::EventDeletePathThisVehicleList(bool ConfirmClicked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_LoadVehiclePath.BPW_LoadVehiclePath_C.Event Delete Path This Vehicle List");
		
		UBPW_LoadVehiclePath_C_EventDeletePathThisVehicleList_Params params {};
		params.ConfirmClicked = ConfirmClicked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_LoadVehiclePath.BPW_LoadVehiclePath_C.OnEscapePressed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_LoadVehiclePath_C::OnEscapePressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_LoadVehiclePath.BPW_LoadVehiclePath_C.OnEscapePressed");
		
		UBPW_LoadVehiclePath_C_OnEscapePressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_LoadVehiclePath.BPW_LoadVehiclePath_C.ExecuteUbergraph_BPW_LoadVehiclePath
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_LoadVehiclePath_C::ExecuteUbergraph_BPW_LoadVehiclePath(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_LoadVehiclePath.BPW_LoadVehiclePath_C.ExecuteUbergraph_BPW_LoadVehiclePath");
		
		UBPW_LoadVehiclePath_C_ExecuteUbergraph_BPW_LoadVehiclePath_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_LoadVehiclePath.BPW_LoadVehiclePath_C.OnClosed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_LoadVehiclePath_C::OnClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_LoadVehiclePath.BPW_LoadVehiclePath_C.OnClosed__DelegateSignature");
		
		UBPW_LoadVehiclePath_C_OnClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_LoadVehiclePath_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_LoadVehiclePath_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_LoadVehiclePath.BPW_LoadVehiclePath_C");
		return ptr;
	}

}


