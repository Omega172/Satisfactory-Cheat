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
	 * 		Name   -> Function BPW_ProductionDisplayModule_InputOutput.BPW_ProductionDisplayModule_InputOutput_C.UpdateItemAmountValidity
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_ProductionDisplayModule_InputOutput_C::UpdateItemAmountValidity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ProductionDisplayModule_InputOutput.BPW_ProductionDisplayModule_InputOutput_C.UpdateItemAmountValidity");
		
		UBPW_ProductionDisplayModule_InputOutput_C_UpdateItemAmountValidity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ProductionDisplayModule_InputOutput.BPW_ProductionDisplayModule_InputOutput_C.GetInventorySlot
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UWidget_InventorySlot_C*                     InventorySlot                                              (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ProductionDisplayModule_InputOutput_C::GetInventorySlot(class UWidget_InventorySlot_C** InventorySlot, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ProductionDisplayModule_InputOutput.BPW_ProductionDisplayModule_InputOutput_C.GetInventorySlot");
		
		UBPW_ProductionDisplayModule_InputOutput_C_GetInventorySlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InventorySlot != nullptr)
			*InventorySlot = params.InventorySlot;
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ProductionDisplayModule_InputOutput.BPW_ProductionDisplayModule_InputOutput_C.DropInventoryStackOnPlayerInventory
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget_InventorySlot_C*                     InventorySlot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ProductionDisplayModule_InputOutput_C::DropInventoryStackOnPlayerInventory(class UWidget_InventorySlot_C* InventorySlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ProductionDisplayModule_InputOutput.BPW_ProductionDisplayModule_InputOutput_C.DropInventoryStackOnPlayerInventory");
		
		UBPW_ProductionDisplayModule_InputOutput_C_DropInventoryStackOnPlayerInventory_Params params {};
		params.InventorySlot = InventorySlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ProductionDisplayModule_InputOutput.BPW_ProductionDisplayModule_InputOutput_C.SetupInventoryComponent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGInventoryComponent*                       mCachedInventoryComponent                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ProductionDisplayModule_InputOutput_C::SetupInventoryComponent(class UFGInventoryComponent* mCachedInventoryComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ProductionDisplayModule_InputOutput.BPW_ProductionDisplayModule_InputOutput_C.SetupInventoryComponent");
		
		UBPW_ProductionDisplayModule_InputOutput_C_SetupInventoryComponent_Params params {};
		params.mCachedInventoryComponent = mCachedInventoryComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ProductionDisplayModule_InputOutput.BPW_ProductionDisplayModule_InputOutput_C.GetSuffix
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UClass*                                      InClass                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Result                                                     (Parm, OutParm)
	 */
	void UBPW_ProductionDisplayModule_InputOutput_C::GetSuffix(class UClass* InClass, class FText* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ProductionDisplayModule_InputOutput.BPW_ProductionDisplayModule_InputOutput_C.GetSuffix");
		
		UBPW_ProductionDisplayModule_InputOutput_C_GetSuffix_Params params {};
		params.InClass = InClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ProductionDisplayModule_InputOutput.BPW_ProductionDisplayModule_InputOutput_C.UpdatePerMinStat
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             CycleTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ProductionDisplayModule_InputOutput_C::UpdatePerMinStat(double CycleTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ProductionDisplayModule_InputOutput.BPW_ProductionDisplayModule_InputOutput_C.UpdatePerMinStat");
		
		UBPW_ProductionDisplayModule_InputOutput_C_UpdatePerMinStat_Params params {};
		params.CycleTime = CycleTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ProductionDisplayModule_InputOutput.BPW_ProductionDisplayModule_InputOutput_C.UpdateItemAmount
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FItemAmount                                 ItemAmount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBPW_ProductionDisplayModule_InputOutput_C::UpdateItemAmount(const struct FItemAmount& ItemAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ProductionDisplayModule_InputOutput.BPW_ProductionDisplayModule_InputOutput_C.UpdateItemAmount");
		
		UBPW_ProductionDisplayModule_InputOutput_C_UpdateItemAmount_Params params {};
		params.ItemAmount = ItemAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ProductionDisplayModule_InputOutput.BPW_ProductionDisplayModule_InputOutput_C.ClearSlotWidget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_ProductionDisplayModule_InputOutput_C::ClearSlotWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ProductionDisplayModule_InputOutput.BPW_ProductionDisplayModule_InputOutput_C.ClearSlotWidget");
		
		UBPW_ProductionDisplayModule_InputOutput_C_ClearSlotWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ProductionDisplayModule_InputOutput.BPW_ProductionDisplayModule_InputOutput_C.PositionInventorySlot
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ProductionDisplayModule_InputOutput_C::PositionInventorySlot(class UWidget* Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ProductionDisplayModule_InputOutput.BPW_ProductionDisplayModule_InputOutput_C.PositionInventorySlot");
		
		UBPW_ProductionDisplayModule_InputOutput_C_PositionInventorySlot_Params params {};
		params.Slot = Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ProductionDisplayModule_InputOutput.BPW_ProductionDisplayModule_InputOutput_C.CreateInventorySlot
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_ProductionDisplayModule_InputOutput_C::CreateInventorySlot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ProductionDisplayModule_InputOutput.BPW_ProductionDisplayModule_InputOutput_C.CreateInventorySlot");
		
		UBPW_ProductionDisplayModule_InputOutput_C_CreateInventorySlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ProductionDisplayModule_InputOutput.BPW_ProductionDisplayModule_InputOutput_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ProductionDisplayModule_InputOutput_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ProductionDisplayModule_InputOutput.BPW_ProductionDisplayModule_InputOutput_C.PreConstruct");
		
		UBPW_ProductionDisplayModule_InputOutput_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ProductionDisplayModule_InputOutput.BPW_ProductionDisplayModule_InputOutput_C.ExecuteUbergraph_BPW_ProductionDisplayModule_InputOutput
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ProductionDisplayModule_InputOutput_C::ExecuteUbergraph_BPW_ProductionDisplayModule_InputOutput(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ProductionDisplayModule_InputOutput.BPW_ProductionDisplayModule_InputOutput_C.ExecuteUbergraph_BPW_ProductionDisplayModule_InputOutput");
		
		UBPW_ProductionDisplayModule_InputOutput_C_ExecuteUbergraph_BPW_ProductionDisplayModule_InputOutput_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_ProductionDisplayModule_InputOutput_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_ProductionDisplayModule_InputOutput_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_ProductionDisplayModule_InputOutput.BPW_ProductionDisplayModule_InputOutput_C");
		return ptr;
	}

}


