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
	 * 		Name   -> Function BPW_VehiclePath_ListEntry.BPW_VehiclePath_ListEntry_C.SetIsSelected
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               mIsSelected                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_VehiclePath_ListEntry_C::SetIsSelected(bool mIsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_VehiclePath_ListEntry.BPW_VehiclePath_ListEntry_C.SetIsSelected");
		
		UBPW_VehiclePath_ListEntry_C_SetIsSelected_Params params {};
		params.mIsSelected = mIsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_VehiclePath_ListEntry.BPW_VehiclePath_ListEntry_C.GetFuelPerTrip
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGSavedWheeledVehiclePath*                  VehiclePath                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void UBPW_VehiclePath_ListEntry_C::GetFuelPerTrip(class AFGSavedWheeledVehiclePath* VehiclePath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_VehiclePath_ListEntry.BPW_VehiclePath_ListEntry_C.GetFuelPerTrip");
		
		UBPW_VehiclePath_ListEntry_C_GetFuelPerTrip_Params params {};
		params.VehiclePath = VehiclePath;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_VehiclePath_ListEntry.BPW_VehiclePath_ListEntry_C.GetIsInUseByThisVehicle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGSavedWheeledVehiclePath*                  Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_VehiclePath_ListEntry_C::GetIsInUseByThisVehicle(class AFGSavedWheeledVehiclePath* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_VehiclePath_ListEntry.BPW_VehiclePath_ListEntry_C.GetIsInUseByThisVehicle");
		
		UBPW_VehiclePath_ListEntry_C_GetIsInUseByThisVehicle_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_VehiclePath_ListEntry.BPW_VehiclePath_ListEntry_C.GetIsInUse
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGSavedWheeledVehiclePath*                  VehiclePath                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_VehiclePath_ListEntry_C::GetIsInUse(class AFGSavedWheeledVehiclePath* VehiclePath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_VehiclePath_ListEntry.BPW_VehiclePath_ListEntry_C.GetIsInUse");
		
		UBPW_VehiclePath_ListEntry_C_GetIsInUse_Params params {};
		params.VehiclePath = VehiclePath;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_VehiclePath_ListEntry.BPW_VehiclePath_ListEntry_C.GetDistanceToVehicle
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGSavedWheeledVehiclePath*                  VehiclePath                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_VehiclePath_ListEntry_C::GetDistanceToVehicle(class AFGSavedWheeledVehiclePath* VehiclePath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_VehiclePath_ListEntry.BPW_VehiclePath_ListEntry_C.GetDistanceToVehicle");
		
		UBPW_VehiclePath_ListEntry_C_GetDistanceToVehicle_Params params {};
		params.VehiclePath = VehiclePath;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_VehiclePath_ListEntry.BPW_VehiclePath_ListEntry_C.GetVehicleType
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGSavedWheeledVehiclePath*                  VehiclePath                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_VehiclePath_ListEntry_C::GetVehicleType(class AFGSavedWheeledVehiclePath* VehiclePath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_VehiclePath_ListEntry.BPW_VehiclePath_ListEntry_C.GetVehicleType");
		
		UBPW_VehiclePath_ListEntry_C_GetVehicleType_Params params {};
		params.VehiclePath = VehiclePath;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_VehiclePath_ListEntry.BPW_VehiclePath_ListEntry_C.GetPathName
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGSavedWheeledVehiclePath*                  VehiclePath                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_VehiclePath_ListEntry_C::GetPathName(class AFGSavedWheeledVehiclePath* VehiclePath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_VehiclePath_ListEntry.BPW_VehiclePath_ListEntry_C.GetPathName");
		
		UBPW_VehiclePath_ListEntry_C_GetPathName_Params params {};
		params.VehiclePath = VehiclePath;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_VehiclePath_ListEntry.BPW_VehiclePath_ListEntry_C.GetSavedVehiclePath
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     ListObject                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_VehiclePath_ListEntry_C::GetSavedVehiclePath(class UObject* ListObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_VehiclePath_ListEntry.BPW_VehiclePath_ListEntry_C.GetSavedVehiclePath");
		
		UBPW_VehiclePath_ListEntry_C_GetSavedVehiclePath_Params params {};
		params.ListObject = ListObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_VehiclePath_ListEntry.BPW_VehiclePath_ListEntry_C.GetPathLength
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGSavedWheeledVehiclePath*                  VehiclePath                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_VehiclePath_ListEntry_C::GetPathLength(class AFGSavedWheeledVehiclePath* VehiclePath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_VehiclePath_ListEntry.BPW_VehiclePath_ListEntry_C.GetPathLength");
		
		UBPW_VehiclePath_ListEntry_C_GetPathLength_Params params {};
		params.VehiclePath = VehiclePath;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_VehiclePath_ListEntry.BPW_VehiclePath_ListEntry_C.UpdateButton
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGSavedWheeledVehiclePath*                  mSavedVehiclePath                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void UBPW_VehiclePath_ListEntry_C::UpdateButton(class AFGSavedWheeledVehiclePath* mSavedVehiclePath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_VehiclePath_ListEntry.BPW_VehiclePath_ListEntry_C.UpdateButton");
		
		UBPW_VehiclePath_ListEntry_C_UpdateButton_Params params {};
		params.mSavedVehiclePath = mSavedVehiclePath;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_VehiclePath_ListEntry.BPW_VehiclePath_ListEntry_C.BP_OnEntryReleased
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UBPW_VehiclePath_ListEntry_C::BP_OnEntryReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_VehiclePath_ListEntry.BPW_VehiclePath_ListEntry_C.BP_OnEntryReleased");
		
		UBPW_VehiclePath_ListEntry_C_BP_OnEntryReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_VehiclePath_ListEntry.BPW_VehiclePath_ListEntry_C.BP_OnItemExpansionChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsExpanded                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_VehiclePath_ListEntry_C::BP_OnItemExpansionChanged(bool bIsExpanded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_VehiclePath_ListEntry.BPW_VehiclePath_ListEntry_C.BP_OnItemExpansionChanged");
		
		UBPW_VehiclePath_ListEntry_C_BP_OnItemExpansionChanged_Params params {};
		params.bIsExpanded = bIsExpanded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_VehiclePath_ListEntry.BPW_VehiclePath_ListEntry_C.OnListItemObjectSet
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     ListItemObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_VehiclePath_ListEntry_C::OnListItemObjectSet(class UObject* ListItemObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_VehiclePath_ListEntry.BPW_VehiclePath_ListEntry_C.OnListItemObjectSet");
		
		UBPW_VehiclePath_ListEntry_C_OnListItemObjectSet_Params params {};
		params.ListItemObject = ListItemObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_VehiclePath_ListEntry.BPW_VehiclePath_ListEntry_C.BP_OnItemSelectionChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsSelected                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_VehiclePath_ListEntry_C::BP_OnItemSelectionChanged(bool bIsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_VehiclePath_ListEntry.BPW_VehiclePath_ListEntry_C.BP_OnItemSelectionChanged");
		
		UBPW_VehiclePath_ListEntry_C_BP_OnItemSelectionChanged_Params params {};
		params.bIsSelected = bIsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_VehiclePath_ListEntry.BPW_VehiclePath_ListEntry_C.Event Collapse Vehicle Type Row
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isCollapsed                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_VehiclePath_ListEntry_C::EventCollapseVehicleTypeRow(bool isCollapsed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_VehiclePath_ListEntry.BPW_VehiclePath_ListEntry_C.Event Collapse Vehicle Type Row");
		
		UBPW_VehiclePath_ListEntry_C_EventCollapseVehicleTypeRow_Params params {};
		params.isCollapsed = isCollapsed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_VehiclePath_ListEntry.BPW_VehiclePath_ListEntry_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_VehiclePath_ListEntry_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_VehiclePath_ListEntry.BPW_VehiclePath_ListEntry_C.PreConstruct");
		
		UBPW_VehiclePath_ListEntry_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_VehiclePath_ListEntry.BPW_VehiclePath_ListEntry_C.OnMouseEnter
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBPW_VehiclePath_ListEntry_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_VehiclePath_ListEntry.BPW_VehiclePath_ListEntry_C.OnMouseEnter");
		
		UBPW_VehiclePath_ListEntry_C_OnMouseEnter_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_VehiclePath_ListEntry.BPW_VehiclePath_ListEntry_C.OnMouseLeave
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBPW_VehiclePath_ListEntry_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_VehiclePath_ListEntry.BPW_VehiclePath_ListEntry_C.OnMouseLeave");
		
		UBPW_VehiclePath_ListEntry_C_OnMouseLeave_Params params {};
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_VehiclePath_ListEntry.BPW_VehiclePath_ListEntry_C.ExecuteUbergraph_BPW_VehiclePath_ListEntry
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_VehiclePath_ListEntry_C::ExecuteUbergraph_BPW_VehiclePath_ListEntry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_VehiclePath_ListEntry.BPW_VehiclePath_ListEntry_C.ExecuteUbergraph_BPW_VehiclePath_ListEntry");
		
		UBPW_VehiclePath_ListEntry_C_ExecuteUbergraph_BPW_VehiclePath_ListEntry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_VehiclePath_ListEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_VehiclePath_ListEntry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_VehiclePath_ListEntry.BPW_VehiclePath_ListEntry_C");
		return ptr;
	}

}


