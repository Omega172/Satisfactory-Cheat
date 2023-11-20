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
	 * 		Name   -> Function Widget_FreightWagon.Widget_FreightWagon_C.SetFluidInfo
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      fluidDescriptor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_FreightWagon_C::SetFluidInfo(class UClass* fluidDescriptor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_FreightWagon.Widget_FreightWagon_C.SetFluidInfo");
		
		UWidget_FreightWagon_C_SetFluidInfo_Params params {};
		params.fluidDescriptor = fluidDescriptor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_FreightWagon.Widget_FreightWagon_C.SetFluidAmount
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_FreightWagon_C::SetFluidAmount(double Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_FreightWagon.Widget_FreightWagon_C.SetFluidAmount");
		
		UWidget_FreightWagon_C_SetFluidAmount_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_FreightWagon.Widget_FreightWagon_C.SetFluidStats
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_FreightWagon_C::SetFluidStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_FreightWagon.Widget_FreightWagon_C.SetFluidStats");
		
		UWidget_FreightWagon_C_SetFluidStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_FreightWagon.Widget_FreightWagon_C.OnDumpAllClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_FreightWagon_C::OnDumpAllClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_FreightWagon.Widget_FreightWagon_C.OnDumpAllClicked");
		
		UWidget_FreightWagon_C_OnDumpAllClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_FreightWagon.Widget_FreightWagon_C.OnGrabAllClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_FreightWagon_C::OnGrabAllClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_FreightWagon.Widget_FreightWagon_C.OnGrabAllClicked");
		
		UWidget_FreightWagon_C_OnGrabAllClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_FreightWagon.Widget_FreightWagon_C.OnSortButtonClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_FreightWagon_C::OnSortButtonClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_FreightWagon.Widget_FreightWagon_C.OnSortButtonClicked");
		
		UWidget_FreightWagon_C_OnSortButtonClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_FreightWagon.Widget_FreightWagon_C.SetFreightWagonInventoryComponent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_FreightWagon_C::SetFreightWagonInventoryComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_FreightWagon.Widget_FreightWagon_C.SetFreightWagonInventoryComponent");
		
		UWidget_FreightWagon_C_SetFreightWagonInventoryComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_FreightWagon.Widget_FreightWagon_C.BindStorageButtons
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_FreightWagon_C::BindStorageButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_FreightWagon.Widget_FreightWagon_C.BindStorageButtons");
		
		UWidget_FreightWagon_C_BindStorageButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_FreightWagon.Widget_FreightWagon_C.DropInventorySlotStack
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget_InventorySlot_C*                     InventorySlot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               WasStackMoved                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_FreightWagon_C::DropInventorySlotStack(class UWidget_InventorySlot_C* InventorySlot, bool* WasStackMoved)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_FreightWagon.Widget_FreightWagon_C.DropInventorySlotStack");
		
		UWidget_FreightWagon_C_DropInventorySlotStack_Params params {};
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
	 * 		Name   -> Function Widget_FreightWagon.Widget_FreightWagon_C.UpdateHeaderText
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_FreightWagon_C::UpdateHeaderText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_FreightWagon.Widget_FreightWagon_C.UpdateHeaderText");
		
		UWidget_FreightWagon_C_UpdateHeaderText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_FreightWagon.Widget_FreightWagon_C.Init
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UWidget_FreightWagon_C::Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_FreightWagon.Widget_FreightWagon_C.Init");
		
		UWidget_FreightWagon_C_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_FreightWagon.Widget_FreightWagon_C.CloseStorage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_FreightWagon_C::CloseStorage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_FreightWagon.Widget_FreightWagon_C.CloseStorage");
		
		UWidget_FreightWagon_C_CloseStorage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_FreightWagon.Widget_FreightWagon_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_FreightWagon_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_FreightWagon.Widget_FreightWagon_C.Construct");
		
		UWidget_FreightWagon_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_FreightWagon.Widget_FreightWagon_C.DumpAllInStorage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_FreightWagon_C::DumpAllInStorage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_FreightWagon.Widget_FreightWagon_C.DumpAllInStorage");
		
		UWidget_FreightWagon_C_DumpAllInStorage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_FreightWagon.Widget_FreightWagon_C.GrabAllFromStorage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_FreightWagon_C::GrabAllFromStorage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_FreightWagon.Widget_FreightWagon_C.GrabAllFromStorage");
		
		UWidget_FreightWagon_C_GrabAllFromStorage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_FreightWagon.Widget_FreightWagon_C.BndEvt__mSortButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_FreightWagon_C::BndEvt__mSortButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_FreightWagon.Widget_FreightWagon_C.BndEvt__mSortButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UWidget_FreightWagon_C_BndEvt__mSortButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_FreightWagon.Widget_FreightWagon_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_FreightWagon_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_FreightWagon.Widget_FreightWagon_C.Tick");
		
		UWidget_FreightWagon_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_FreightWagon.Widget_FreightWagon_C.OnCustomTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              UpdateTime                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_FreightWagon_C::OnCustomTick(float UpdateTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_FreightWagon.Widget_FreightWagon_C.OnCustomTick");
		
		UWidget_FreightWagon_C_OnCustomTick_Params params {};
		params.UpdateTime = UpdateTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_FreightWagon.Widget_FreightWagon_C.BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_0_OnFluidLerp__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		double                                             Alpha                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_FreightWagon_C::BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_0_OnFluidLerp__DelegateSignature(double Alpha)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_FreightWagon.Widget_FreightWagon_C.BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_0_OnFluidLerp__DelegateSignature");
		
		UWidget_FreightWagon_C_BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_0_OnFluidLerp__DelegateSignature_Params params {};
		params.Alpha = Alpha;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_FreightWagon.Widget_FreightWagon_C.BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_2_OnFlush__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		double                                             DrainDuration                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_FreightWagon_C::BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_2_OnFlush__DelegateSignature(double DrainDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_FreightWagon.Widget_FreightWagon_C.BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_2_OnFlush__DelegateSignature");
		
		UWidget_FreightWagon_C_BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_2_OnFlush__DelegateSignature_Params params {};
		params.DrainDuration = DrainDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_FreightWagon.Widget_FreightWagon_C.BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_4_OnDrainCompleted__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_FreightWagon_C::BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_4_OnDrainCompleted__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_FreightWagon.Widget_FreightWagon_C.BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_4_OnDrainCompleted__DelegateSignature");
		
		UWidget_FreightWagon_C_BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_4_OnDrainCompleted__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_FreightWagon.Widget_FreightWagon_C.ExecuteUbergraph_Widget_FreightWagon
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_FreightWagon_C::ExecuteUbergraph_Widget_FreightWagon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_FreightWagon.Widget_FreightWagon_C.ExecuteUbergraph_Widget_FreightWagon");
		
		UWidget_FreightWagon_C_ExecuteUbergraph_Widget_FreightWagon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_FreightWagon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_FreightWagon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_FreightWagon.Widget_FreightWagon_C");
		return ptr;
	}

}


