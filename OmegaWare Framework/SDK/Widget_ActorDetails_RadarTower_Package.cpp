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
	 * 		Name   -> Function Widget_ActorDetails_RadarTower.Widget_ActorDetails_RadarTower_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_ActorDetails_RadarTower_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ActorDetails_RadarTower.Widget_ActorDetails_RadarTower_C.Construct");
		
		UWidget_ActorDetails_RadarTower_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ActorDetails_RadarTower.Widget_ActorDetails_RadarTower_C.ExecuteUbergraph_Widget_ActorDetails_RadarTower
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_ActorDetails_RadarTower_C::ExecuteUbergraph_Widget_ActorDetails_RadarTower(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ActorDetails_RadarTower.Widget_ActorDetails_RadarTower_C.ExecuteUbergraph_Widget_ActorDetails_RadarTower");
		
		UWidget_ActorDetails_RadarTower_C_ExecuteUbergraph_Widget_ActorDetails_RadarTower_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_ActorDetails_RadarTower_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_ActorDetails_RadarTower_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_ActorDetails_RadarTower.Widget_ActorDetails_RadarTower_C");
		return ptr;
	}

}


