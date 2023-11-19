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
	 * 		Name   -> Function BPW_OutputInventorySlot.BPW_OutputInventorySlot_C.SetupCostSlot
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGInventoryComponent*                       mCachedInventoryComponent                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            mSlotIdx                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            RequiredAmount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_OutputInventorySlot_C::SetupCostSlot(class UFGInventoryComponent* mCachedInventoryComponent, int32_t mSlotIdx, int32_t RequiredAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_OutputInventorySlot.BPW_OutputInventorySlot_C.SetupCostSlot");
		
		UBPW_OutputInventorySlot_C_SetupCostSlot_Params params {};
		params.mCachedInventoryComponent = mCachedInventoryComponent;
		params.mSlotIdx = mSlotIdx;
		params.RequiredAmount = RequiredAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_OutputInventorySlot.BPW_OutputInventorySlot_C.UpdateSlot
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Title                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UFGInventoryComponent*                       mCachedInventoryComponent                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            mSlotIdx                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESlotType                                          slotType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            mRequiredAmount                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_OutputInventorySlot_C::UpdateSlot(const class FText& Title, class UFGInventoryComponent* mCachedInventoryComponent, int32_t mSlotIdx, ESlotType slotType, int32_t mRequiredAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_OutputInventorySlot.BPW_OutputInventorySlot_C.UpdateSlot");
		
		UBPW_OutputInventorySlot_C_UpdateSlot_Params params {};
		params.Title = Title;
		params.mCachedInventoryComponent = mCachedInventoryComponent;
		params.mSlotIdx = mSlotIdx;
		params.slotType = slotType;
		params.mRequiredAmount = mRequiredAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_OutputInventorySlot.BPW_OutputInventorySlot_C.SetupInventorySlot
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGInventoryComponent*                       mCachedInventoryComponent                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            mSlotIdx                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_OutputInventorySlot_C::SetupInventorySlot(class UFGInventoryComponent* mCachedInventoryComponent, int32_t mSlotIdx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_OutputInventorySlot.BPW_OutputInventorySlot_C.SetupInventorySlot");
		
		UBPW_OutputInventorySlot_C_SetupInventorySlot_Params params {};
		params.mCachedInventoryComponent = mCachedInventoryComponent;
		params.mSlotIdx = mSlotIdx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_OutputInventorySlot.BPW_OutputInventorySlot_C.SetTitle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Title                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_OutputInventorySlot_C::SetTitle(const class FText& Title)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_OutputInventorySlot.BPW_OutputInventorySlot_C.SetTitle");
		
		UBPW_OutputInventorySlot_C_SetTitle_Params params {};
		params.Title = Title;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_OutputInventorySlot.BPW_OutputInventorySlot_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_OutputInventorySlot_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_OutputInventorySlot.BPW_OutputInventorySlot_C.Construct");
		
		UBPW_OutputInventorySlot_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_OutputInventorySlot.BPW_OutputInventorySlot_C.ExecuteUbergraph_BPW_OutputInventorySlot
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_OutputInventorySlot_C::ExecuteUbergraph_BPW_OutputInventorySlot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_OutputInventorySlot.BPW_OutputInventorySlot_C.ExecuteUbergraph_BPW_OutputInventorySlot");
		
		UBPW_OutputInventorySlot_C_ExecuteUbergraph_BPW_OutputInventorySlot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_OutputInventorySlot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_OutputInventorySlot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_OutputInventorySlot.BPW_OutputInventorySlot_C");
		return ptr;
	}

}


