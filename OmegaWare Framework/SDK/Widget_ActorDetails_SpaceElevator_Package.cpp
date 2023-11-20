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
	 * 		Name   -> Function Widget_ActorDetails_SpaceElevator.Widget_ActorDetails_SpaceElevator_C.SetupInventory
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ActorDetails_SpaceElevator_C::SetupInventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ActorDetails_SpaceElevator.Widget_ActorDetails_SpaceElevator_C.SetupInventory");
		
		UWidget_ActorDetails_SpaceElevator_C_SetupInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ActorDetails_SpaceElevator.Widget_ActorDetails_SpaceElevator_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_ActorDetails_SpaceElevator_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ActorDetails_SpaceElevator.Widget_ActorDetails_SpaceElevator_C.Construct");
		
		UWidget_ActorDetails_SpaceElevator_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ActorDetails_SpaceElevator.Widget_ActorDetails_SpaceElevator_C.InitCostSlots
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ActorDetails_SpaceElevator_C::InitCostSlots()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ActorDetails_SpaceElevator.Widget_ActorDetails_SpaceElevator_C.InitCostSlots");
		
		UWidget_ActorDetails_SpaceElevator_C_InitCostSlots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ActorDetails_SpaceElevator.Widget_ActorDetails_SpaceElevator_C.ExecuteUbergraph_Widget_ActorDetails_SpaceElevator
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_ActorDetails_SpaceElevator_C::ExecuteUbergraph_Widget_ActorDetails_SpaceElevator(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ActorDetails_SpaceElevator.Widget_ActorDetails_SpaceElevator_C.ExecuteUbergraph_Widget_ActorDetails_SpaceElevator");
		
		UWidget_ActorDetails_SpaceElevator_C_ExecuteUbergraph_Widget_ActorDetails_SpaceElevator_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_ActorDetails_SpaceElevator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_ActorDetails_SpaceElevator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_ActorDetails_SpaceElevator.Widget_ActorDetails_SpaceElevator_C");
		return ptr;
	}

}


