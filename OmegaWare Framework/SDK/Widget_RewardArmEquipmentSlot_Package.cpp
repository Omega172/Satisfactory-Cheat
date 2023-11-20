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
	 * 		Name   -> Function Widget_RewardArmEquipmentSlot.Widget_RewardArmEquipmentSlot_C.IsValidRewardItem
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_RewardArmEquipmentSlot_C::IsValidRewardItem(bool* IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_RewardArmEquipmentSlot.Widget_RewardArmEquipmentSlot_C.IsValidRewardItem");
		
		UWidget_RewardArmEquipmentSlot_C_IsValidRewardItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_RewardArmEquipmentSlot.Widget_RewardArmEquipmentSlot_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_RewardArmEquipmentSlot_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_RewardArmEquipmentSlot.Widget_RewardArmEquipmentSlot_C.Construct");
		
		UWidget_RewardArmEquipmentSlot_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_RewardArmEquipmentSlot.Widget_RewardArmEquipmentSlot_C.ExecuteUbergraph_Widget_RewardArmEquipmentSlot
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_RewardArmEquipmentSlot_C::ExecuteUbergraph_Widget_RewardArmEquipmentSlot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_RewardArmEquipmentSlot.Widget_RewardArmEquipmentSlot_C.ExecuteUbergraph_Widget_RewardArmEquipmentSlot");
		
		UWidget_RewardArmEquipmentSlot_C_ExecuteUbergraph_Widget_RewardArmEquipmentSlot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_RewardArmEquipmentSlot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_RewardArmEquipmentSlot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_RewardArmEquipmentSlot.Widget_RewardArmEquipmentSlot_C");
		return ptr;
	}

}


