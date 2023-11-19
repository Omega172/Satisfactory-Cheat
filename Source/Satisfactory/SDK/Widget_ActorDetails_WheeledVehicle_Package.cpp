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
	 * 		Name   -> Function Widget_ActorDetails_WheeledVehicle.Widget_ActorDetails_WheeledVehicle_C.SetVehicleNameText
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        VehicleName                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWidget_ActorDetails_WheeledVehicle_C::SetVehicleNameText(const class FText& VehicleName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ActorDetails_WheeledVehicle.Widget_ActorDetails_WheeledVehicle_C.SetVehicleNameText");
		
		UWidget_ActorDetails_WheeledVehicle_C_SetVehicleNameText_Params params {};
		params.VehicleName = VehicleName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ActorDetails_WheeledVehicle.Widget_ActorDetails_WheeledVehicle_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_ActorDetails_WheeledVehicle_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ActorDetails_WheeledVehicle.Widget_ActorDetails_WheeledVehicle_C.Construct");
		
		UWidget_ActorDetails_WheeledVehicle_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ActorDetails_WheeledVehicle.Widget_ActorDetails_WheeledVehicle_C.ExecuteUbergraph_Widget_ActorDetails_WheeledVehicle
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_ActorDetails_WheeledVehicle_C::ExecuteUbergraph_Widget_ActorDetails_WheeledVehicle(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ActorDetails_WheeledVehicle.Widget_ActorDetails_WheeledVehicle_C.ExecuteUbergraph_Widget_ActorDetails_WheeledVehicle");
		
		UWidget_ActorDetails_WheeledVehicle_C_ExecuteUbergraph_Widget_ActorDetails_WheeledVehicle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_ActorDetails_WheeledVehicle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_ActorDetails_WheeledVehicle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_ActorDetails_WheeledVehicle.Widget_ActorDetails_WheeledVehicle_C");
		return ptr;
	}

}


