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
	 * 		Name   -> Function Widget_HUDBox_ObjectScanner.Widget_HUDBox_ObjectScanner_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_HUDBox_ObjectScanner_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_HUDBox_ObjectScanner.Widget_HUDBox_ObjectScanner_C.Construct");
		
		UWidget_HUDBox_ObjectScanner_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_HUDBox_ObjectScanner.Widget_HUDBox_ObjectScanner_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_HUDBox_ObjectScanner_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_HUDBox_ObjectScanner.Widget_HUDBox_ObjectScanner_C.Tick");
		
		UWidget_HUDBox_ObjectScanner_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_HUDBox_ObjectScanner.Widget_HUDBox_ObjectScanner_C.ExecuteUbergraph_Widget_HUDBox_ObjectScanner
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_HUDBox_ObjectScanner_C::ExecuteUbergraph_Widget_HUDBox_ObjectScanner(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_HUDBox_ObjectScanner.Widget_HUDBox_ObjectScanner_C.ExecuteUbergraph_Widget_HUDBox_ObjectScanner");
		
		UWidget_HUDBox_ObjectScanner_C_ExecuteUbergraph_Widget_HUDBox_ObjectScanner_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_HUDBox_ObjectScanner_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_HUDBox_ObjectScanner_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_HUDBox_ObjectScanner.Widget_HUDBox_ObjectScanner_C");
		return ptr;
	}

}


