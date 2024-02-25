/**
 * Name: Satisfactory
 * Version: Early_Access_CL#273254
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_ConsumeableEquipmentAttachment.BP_ConsumeableEquipmentAttachment_C.GetHandsItem
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UClass*                                      Item                                                       (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ConsumeableEquipmentAttachment_C::GetHandsItem(class UClass** Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ConsumeableEquipmentAttachment.BP_ConsumeableEquipmentAttachment_C.GetHandsItem");
		
		ABP_ConsumeableEquipmentAttachment_C_GetHandsItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Item != nullptr)
			*Item = params.Item;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_ConsumeableEquipmentAttachment.BP_ConsumeableEquipmentAttachment_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ConsumeableEquipmentAttachment_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ConsumeableEquipmentAttachment.BP_ConsumeableEquipmentAttachment_C.ReceiveTick");
		
		ABP_ConsumeableEquipmentAttachment_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_ConsumeableEquipmentAttachment.BP_ConsumeableEquipmentAttachment_C.PlayUseEffect
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     UseLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ConsumeableEquipmentAttachment_C::PlayUseEffect(const struct FVector& UseLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ConsumeableEquipmentAttachment.BP_ConsumeableEquipmentAttachment_C.PlayUseEffect");
		
		ABP_ConsumeableEquipmentAttachment_C_PlayUseEffect_Params params {};
		params.UseLocation = UseLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_ConsumeableEquipmentAttachment.BP_ConsumeableEquipmentAttachment_C.OnAttach
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_ConsumeableEquipmentAttachment_C::OnAttach()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ConsumeableEquipmentAttachment.BP_ConsumeableEquipmentAttachment_C.OnAttach");
		
		ABP_ConsumeableEquipmentAttachment_C_OnAttach_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_ConsumeableEquipmentAttachment.BP_ConsumeableEquipmentAttachment_C.ExecuteUbergraph_BP_ConsumeableEquipmentAttachment
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ConsumeableEquipmentAttachment_C::ExecuteUbergraph_BP_ConsumeableEquipmentAttachment(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ConsumeableEquipmentAttachment.BP_ConsumeableEquipmentAttachment_C.ExecuteUbergraph_BP_ConsumeableEquipmentAttachment");
		
		ABP_ConsumeableEquipmentAttachment_C_ExecuteUbergraph_BP_ConsumeableEquipmentAttachment_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_ConsumeableEquipmentAttachment_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ConsumeableEquipmentAttachment_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ConsumeableEquipmentAttachment.BP_ConsumeableEquipmentAttachment_C");
		return ptr;
	}

}


