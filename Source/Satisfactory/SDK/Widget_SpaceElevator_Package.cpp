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
	 * 		Name   -> Function Widget_SpaceElevator.Widget_SpaceElevator_C.OnDropInventorySlot
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget_InventorySlot_C*                     InventorySlot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               WasStackMoved                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_SpaceElevator_C::OnDropInventorySlot(class UWidget_InventorySlot_C* InventorySlot, bool* WasStackMoved)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SpaceElevator.Widget_SpaceElevator_C.OnDropInventorySlot");
		
		UWidget_SpaceElevator_C_OnDropInventorySlot_Params params {};
		params.InventorySlot = InventorySlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WasStackMoved != nullptr)
			*WasStackMoved = params.WasStackMoved;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SpaceElevator.Widget_SpaceElevator_C.DisplayEarlyAccessBlocker
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_SpaceElevator_C::DisplayEarlyAccessBlocker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SpaceElevator.Widget_SpaceElevator_C.DisplayEarlyAccessBlocker");
		
		UWidget_SpaceElevator_C_DisplayEarlyAccessBlocker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SpaceElevator.Widget_SpaceElevator_C.UpdateHeaderText
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_SpaceElevator_C::UpdateHeaderText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SpaceElevator.Widget_SpaceElevator_C.UpdateHeaderText");
		
		UWidget_SpaceElevator_C_UpdateHeaderText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SpaceElevator.Widget_SpaceElevator_C.SetStatusText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               Pulsing                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_SpaceElevator_C::SetStatusText(const class FText& Text, bool Pulsing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SpaceElevator.Widget_SpaceElevator_C.SetStatusText");
		
		UWidget_SpaceElevator_C_SetStatusText_Params params {};
		params.Text = Text;
		params.Pulsing = Pulsing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SpaceElevator.Widget_SpaceElevator_C.UpdatePhaseInfo
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_SpaceElevator_C::UpdatePhaseInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SpaceElevator.Widget_SpaceElevator_C.UpdatePhaseInfo");
		
		UWidget_SpaceElevator_C_UpdatePhaseInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SpaceElevator.Widget_SpaceElevator_C.SetUnlockTiers
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            FirstUnlockTier                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            LastUnlockTier                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_SpaceElevator_C::SetUnlockTiers(int32_t* FirstUnlockTier, int32_t* LastUnlockTier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SpaceElevator.Widget_SpaceElevator_C.SetUnlockTiers");
		
		UWidget_SpaceElevator_C_SetUnlockTiers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FirstUnlockTier != nullptr)
			*FirstUnlockTier = params.FirstUnlockTier;
		if (LastUnlockTier != nullptr)
			*LastUnlockTier = params.LastUnlockTier;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SpaceElevator.Widget_SpaceElevator_C.ClearInactiveLeverSelections
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidgetAnimation*                            ActiveAnimation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_SpaceElevator_C::ClearInactiveLeverSelections(class UWidgetAnimation* ActiveAnimation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SpaceElevator.Widget_SpaceElevator_C.ClearInactiveLeverSelections");
		
		UWidget_SpaceElevator_C_ClearInactiveLeverSelections_Params params {};
		params.ActiveAnimation = ActiveAnimation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SpaceElevator.Widget_SpaceElevator_C.DropInventorySlotStack
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget_InventorySlot_C*                     InventorySlot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               WasStackMoved                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_SpaceElevator_C::DropInventorySlotStack(class UWidget_InventorySlot_C* InventorySlot, bool* WasStackMoved)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SpaceElevator.Widget_SpaceElevator_C.DropInventorySlotStack");
		
		UWidget_SpaceElevator_C_DropInventorySlotStack_Params params {};
		params.InventorySlot = InventorySlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WasStackMoved != nullptr)
			*WasStackMoved = params.WasStackMoved;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SpaceElevator.Widget_SpaceElevator_C.GetPayOffContainerVisibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UWidget_SpaceElevator_C::GetPayOffContainerVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SpaceElevator.Widget_SpaceElevator_C.GetPayOffContainerVisibility");
		
		UWidget_SpaceElevator_C_GetPayOffContainerVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SpaceElevator.Widget_SpaceElevator_C.SetupPayOffWidgets
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_SpaceElevator_C::SetupPayOffWidgets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SpaceElevator.Widget_SpaceElevator_C.SetupPayOffWidgets");
		
		UWidget_SpaceElevator_C_SetupPayOffWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SpaceElevator.Widget_SpaceElevator_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_SpaceElevator_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SpaceElevator.Widget_SpaceElevator_C.Construct");
		
		UWidget_SpaceElevator_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SpaceElevator.Widget_SpaceElevator_C.Init
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UWidget_SpaceElevator_C::Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SpaceElevator.Widget_SpaceElevator_C.Init");
		
		UWidget_SpaceElevator_C_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SpaceElevator.Widget_SpaceElevator_C.PollAndSetupInventory
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_SpaceElevator_C::PollAndSetupInventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SpaceElevator.Widget_SpaceElevator_C.PollAndSetupInventory");
		
		UWidget_SpaceElevator_C_PollAndSetupInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SpaceElevator.Widget_SpaceElevator_C.OnGamePhaseChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGamePhase                                         NewGamePhase                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_SpaceElevator_C::OnGamePhaseChanged(EGamePhase NewGamePhase)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SpaceElevator.Widget_SpaceElevator_C.OnGamePhaseChanged");
		
		UWidget_SpaceElevator_C_OnGamePhaseChanged_Params params {};
		params.NewGamePhase = NewGamePhase;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SpaceElevator.Widget_SpaceElevator_C.On Lever Select
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            SelectionIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_SpaceElevator_C::OnLeverSelect(int32_t SelectionIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SpaceElevator.Widget_SpaceElevator_C.On Lever Select");
		
		UWidget_SpaceElevator_C_OnLeverSelect_Params params {};
		params.SelectionIndex = SelectionIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SpaceElevator.Widget_SpaceElevator_C.OnUpgrade
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_SpaceElevator_C::OnUpgrade()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SpaceElevator.Widget_SpaceElevator_C.OnUpgrade");
		
		UWidget_SpaceElevator_C_OnUpgrade_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SpaceElevator.Widget_SpaceElevator_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_SpaceElevator_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SpaceElevator.Widget_SpaceElevator_C.Tick");
		
		UWidget_SpaceElevator_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SpaceElevator.Widget_SpaceElevator_C.ActivateSend
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_SpaceElevator_C::ActivateSend()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SpaceElevator.Widget_SpaceElevator_C.ActivateSend");
		
		UWidget_SpaceElevator_C_ActivateSend_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SpaceElevator.Widget_SpaceElevator_C.SpawnSmoke
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_SpaceElevator_C::SpawnSmoke()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SpaceElevator.Widget_SpaceElevator_C.SpawnSmoke");
		
		UWidget_SpaceElevator_C_SpawnSmoke_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SpaceElevator.Widget_SpaceElevator_C.SpawnSparksRight
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_SpaceElevator_C::SpawnSparksRight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SpaceElevator.Widget_SpaceElevator_C.SpawnSparksRight");
		
		UWidget_SpaceElevator_C_SpawnSparksRight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SpaceElevator.Widget_SpaceElevator_C.SpawnSparksLeft
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_SpaceElevator_C::SpawnSparksLeft()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SpaceElevator.Widget_SpaceElevator_C.SpawnSparksLeft");
		
		UWidget_SpaceElevator_C_SpawnSparksLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SpaceElevator.Widget_SpaceElevator_C.StartShake
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_SpaceElevator_C::StartShake()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SpaceElevator.Widget_SpaceElevator_C.StartShake");
		
		UWidget_SpaceElevator_C_StartShake_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SpaceElevator.Widget_SpaceElevator_C.StopShake
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_SpaceElevator_C::StopShake()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SpaceElevator.Widget_SpaceElevator_C.StopShake");
		
		UWidget_SpaceElevator_C_StopShake_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SpaceElevator.Widget_SpaceElevator_C.ResetLever
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_SpaceElevator_C::ResetLever()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SpaceElevator.Widget_SpaceElevator_C.ResetLever");
		
		UWidget_SpaceElevator_C_ResetLever_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SpaceElevator.Widget_SpaceElevator_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_SpaceElevator_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SpaceElevator.Widget_SpaceElevator_C.Destruct");
		
		UWidget_SpaceElevator_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SpaceElevator.Widget_SpaceElevator_C.AnimNotify_Chime
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_SpaceElevator_C::AnimNotify_Chime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SpaceElevator.Widget_SpaceElevator_C.AnimNotify_Chime");
		
		UWidget_SpaceElevator_C_AnimNotify_Chime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SpaceElevator.Widget_SpaceElevator_C.ExecuteUbergraph_Widget_SpaceElevator
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_SpaceElevator_C::ExecuteUbergraph_Widget_SpaceElevator(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SpaceElevator.Widget_SpaceElevator_C.ExecuteUbergraph_Widget_SpaceElevator");
		
		UWidget_SpaceElevator_C_ExecuteUbergraph_Widget_SpaceElevator_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_SpaceElevator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_SpaceElevator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_SpaceElevator.Widget_SpaceElevator_C");
		return ptr;
	}

}


