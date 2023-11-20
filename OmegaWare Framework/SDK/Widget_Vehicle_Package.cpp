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
	 * 		Name   -> Function Widget_Vehicle.Widget_Vehicle_C.CheckIfRecordMenuShouldOpen
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Vehicle_C::CheckIfRecordMenuShouldOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Vehicle.Widget_Vehicle_C.CheckIfRecordMenuShouldOpen");
		
		UWidget_Vehicle_C_CheckIfRecordMenuShouldOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Vehicle.Widget_Vehicle_C.OpenSaveViaRecordMenu
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Vehicle_C::OpenSaveViaRecordMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Vehicle.Widget_Vehicle_C.OpenSaveViaRecordMenu");
		
		UWidget_Vehicle_C_OpenSaveViaRecordMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Vehicle.Widget_Vehicle_C.OpenLoadViaRecordMenu
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Vehicle_C::OpenLoadViaRecordMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Vehicle.Widget_Vehicle_C.OpenLoadViaRecordMenu");
		
		UWidget_Vehicle_C_OpenLoadViaRecordMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Vehicle.Widget_Vehicle_C.OpenSave
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Vehicle_C::OpenSave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Vehicle.Widget_Vehicle_C.OpenSave");
		
		UWidget_Vehicle_C_OpenSave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Vehicle.Widget_Vehicle_C.OpenLoad
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Vehicle_C::OpenLoad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Vehicle.Widget_Vehicle_C.OpenLoad");
		
		UWidget_Vehicle_C_OpenLoad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Vehicle.Widget_Vehicle_C.OnRecordMenuOpened
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget_RecordMenu_C*                        RecordMenu                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Vehicle_C::OnRecordMenuOpened(class UWidget_RecordMenu_C* RecordMenu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Vehicle.Widget_Vehicle_C.OnRecordMenuOpened");
		
		UWidget_Vehicle_C_OnRecordMenuOpened_Params params {};
		params.RecordMenu = RecordMenu;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Vehicle.Widget_Vehicle_C.OnSaveClosed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Vehicle_C::OnSaveClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Vehicle.Widget_Vehicle_C.OnSaveClosed");
		
		UWidget_Vehicle_C_OnSaveClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Vehicle.Widget_Vehicle_C.OnLoadClosed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Vehicle_C::OnLoadClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Vehicle.Widget_Vehicle_C.OnLoadClosed");
		
		UWidget_Vehicle_C_OnLoadClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Vehicle.Widget_Vehicle_C.UnbindMappingContexts
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Vehicle_C::UnbindMappingContexts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Vehicle.Widget_Vehicle_C.UnbindMappingContexts");
		
		UWidget_Vehicle_C_UnbindMappingContexts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Vehicle.Widget_Vehicle_C.SetupMappingContexts
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Vehicle_C::SetupMappingContexts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Vehicle.Widget_Vehicle_C.SetupMappingContexts");
		
		UWidget_Vehicle_C_SetupMappingContexts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Vehicle.Widget_Vehicle_C.Dock
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Vehicle_C::Dock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Vehicle.Widget_Vehicle_C.Dock");
		
		UWidget_Vehicle_C_Dock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Vehicle.Widget_Vehicle_C.UpdateManualDockText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Vehicle_C::UpdateManualDockText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Vehicle.Widget_Vehicle_C.UpdateManualDockText");
		
		UWidget_Vehicle_C_UpdateManualDockText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Vehicle.Widget_Vehicle_C.SetupKeybindings
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Vehicle_C::SetupKeybindings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Vehicle.Widget_Vehicle_C.SetupKeybindings");
		
		UWidget_Vehicle_C_SetupKeybindings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Vehicle.Widget_Vehicle_C.GetHealthPercent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Vehicle_C::GetHealthPercent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Vehicle.Widget_Vehicle_C.GetHealthPercent");
		
		UWidget_Vehicle_C_GetHealthPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Vehicle.Widget_Vehicle_C.OnItemAddedOrRemoved
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      ItemClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NumAddedRemoved                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Vehicle_C::OnItemAddedOrRemoved(class UClass* ItemClass, int32_t NumAddedRemoved)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Vehicle.Widget_Vehicle_C.OnItemAddedOrRemoved");
		
		UWidget_Vehicle_C_OnItemAddedOrRemoved_Params params {};
		params.ItemClass = ItemClass;
		params.NumAddedRemoved = NumAddedRemoved;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Vehicle.Widget_Vehicle_C.UpdateTransferStatus
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Vehicle_C::UpdateTransferStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Vehicle.Widget_Vehicle_C.UpdateTransferStatus");
		
		UWidget_Vehicle_C_UpdateTransferStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Vehicle.Widget_Vehicle_C.GetCurrentSpeedinKMHText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Vehicle_C::GetCurrentSpeedinKMHText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Vehicle.Widget_Vehicle_C.GetCurrentSpeedinKMHText");
		
		UWidget_Vehicle_C_GetCurrentSpeedinKMHText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Vehicle.Widget_Vehicle_C.Init
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_WheeledVehicle_C*                        Vehicle                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Vehicle_C::Init(class ABP_WheeledVehicle_C* Vehicle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Vehicle.Widget_Vehicle_C.Init");
		
		UWidget_Vehicle_C_Init_Params params {};
		params.Vehicle = Vehicle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Vehicle.Widget_Vehicle_C.Stop Recording
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Success                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Vehicle_C::StopRecording(bool Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Vehicle.Widget_Vehicle_C.Stop Recording");
		
		UWidget_Vehicle_C_StopRecording_Params params {};
		params.Success = Success;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Vehicle.Widget_Vehicle_C.UpdateHUDStartRecording
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Vehicle_C::UpdateHUDStartRecording()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Vehicle.Widget_Vehicle_C.UpdateHUDStartRecording");
		
		UWidget_Vehicle_C_UpdateHUDStartRecording_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Vehicle.Widget_Vehicle_C.InpActEvt_IA_LoadPath_K2Node_EnhancedInputActionEvent_4
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputActionValue                           ActionValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		float                                              ElapsedTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TriggeredTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInputAction*                                SourceAction                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Vehicle_C::InpActEvt_IA_LoadPath_K2Node_EnhancedInputActionEvent_4(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Vehicle.Widget_Vehicle_C.InpActEvt_IA_LoadPath_K2Node_EnhancedInputActionEvent_4");
		
		UWidget_Vehicle_C_InpActEvt_IA_LoadPath_K2Node_EnhancedInputActionEvent_4_Params params {};
		params.ActionValue = ActionValue;
		params.ElapsedTime = ElapsedTime;
		params.TriggeredTime = TriggeredTime;
		params.SourceAction = SourceAction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Vehicle.Widget_Vehicle_C.InpActEvt_IA_TogglePathVisibility_K2Node_EnhancedInputActionEvent_3
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputActionValue                           ActionValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		float                                              ElapsedTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TriggeredTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInputAction*                                SourceAction                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Vehicle_C::InpActEvt_IA_TogglePathVisibility_K2Node_EnhancedInputActionEvent_3(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Vehicle.Widget_Vehicle_C.InpActEvt_IA_TogglePathVisibility_K2Node_EnhancedInputActionEvent_3");
		
		UWidget_Vehicle_C_InpActEvt_IA_TogglePathVisibility_K2Node_EnhancedInputActionEvent_3_Params params {};
		params.ActionValue = ActionValue;
		params.ElapsedTime = ElapsedTime;
		params.TriggeredTime = TriggeredTime;
		params.SourceAction = SourceAction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Vehicle.Widget_Vehicle_C.InpActEvt_IA_SavePath_K2Node_EnhancedInputActionEvent_2
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputActionValue                           ActionValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		float                                              ElapsedTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TriggeredTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInputAction*                                SourceAction                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Vehicle_C::InpActEvt_IA_SavePath_K2Node_EnhancedInputActionEvent_2(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Vehicle.Widget_Vehicle_C.InpActEvt_IA_SavePath_K2Node_EnhancedInputActionEvent_2");
		
		UWidget_Vehicle_C_InpActEvt_IA_SavePath_K2Node_EnhancedInputActionEvent_2_Params params {};
		params.ActionValue = ActionValue;
		params.ElapsedTime = ElapsedTime;
		params.TriggeredTime = TriggeredTime;
		params.SourceAction = SourceAction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Vehicle.Widget_Vehicle_C.InpActEvt_IA_Dock_K2Node_EnhancedInputActionEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputActionValue                           ActionValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		float                                              ElapsedTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TriggeredTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInputAction*                                SourceAction                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Vehicle_C::InpActEvt_IA_Dock_K2Node_EnhancedInputActionEvent_1(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Vehicle.Widget_Vehicle_C.InpActEvt_IA_Dock_K2Node_EnhancedInputActionEvent_1");
		
		UWidget_Vehicle_C_InpActEvt_IA_Dock_K2Node_EnhancedInputActionEvent_1_Params params {};
		params.ActionValue = ActionValue;
		params.ElapsedTime = ElapsedTime;
		params.TriggeredTime = TriggeredTime;
		params.SourceAction = SourceAction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Vehicle.Widget_Vehicle_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_Vehicle_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Vehicle.Widget_Vehicle_C.Construct");
		
		UWidget_Vehicle_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Vehicle.Widget_Vehicle_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Vehicle_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Vehicle.Widget_Vehicle_C.Tick");
		
		UWidget_Vehicle_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Vehicle.Widget_Vehicle_C.AutoPilotCheck
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Vehicle_C::AutoPilotCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Vehicle.Widget_Vehicle_C.AutoPilotCheck");
		
		UWidget_Vehicle_C_AutoPilotCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Vehicle.Widget_Vehicle_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_Vehicle_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Vehicle.Widget_Vehicle_C.Destruct");
		
		UWidget_Vehicle_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Vehicle.Widget_Vehicle_C.Event Update Vehicle Data
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Vehicle_C::EventUpdateVehicleData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Vehicle.Widget_Vehicle_C.Event Update Vehicle Data");
		
		UWidget_Vehicle_C_EventUpdateVehicleData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Vehicle.Widget_Vehicle_C.OnManualDockingStateChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Vehicle_C::OnManualDockingStateChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Vehicle.Widget_Vehicle_C.OnManualDockingStateChanged");
		
		UWidget_Vehicle_C_OnManualDockingStateChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Vehicle.Widget_Vehicle_C.Clear Path
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Vehicle_C::ClearPath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Vehicle.Widget_Vehicle_C.Clear Path");
		
		UWidget_Vehicle_C_ClearPath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Vehicle.Widget_Vehicle_C.ExecuteUbergraph_Widget_Vehicle
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Vehicle_C::ExecuteUbergraph_Widget_Vehicle(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Vehicle.Widget_Vehicle_C.ExecuteUbergraph_Widget_Vehicle");
		
		UWidget_Vehicle_C_ExecuteUbergraph_Widget_Vehicle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Vehicle.Widget_Vehicle_C.OpenRecordMenu__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Vehicle_C::OpenRecordMenu__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Vehicle.Widget_Vehicle_C.OpenRecordMenu__DelegateSignature");
		
		UWidget_Vehicle_C_OpenRecordMenu__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_Vehicle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_Vehicle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Vehicle.Widget_Vehicle_C");
		return ptr;
	}

}


