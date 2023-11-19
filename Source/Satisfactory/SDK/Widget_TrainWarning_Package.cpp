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
	 * 		Name   -> Function Widget_TrainWarning.Widget_TrainWarning_C.ShouldForceWarning
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ForceWarning                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        WarningText                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWidget_TrainWarning_C::ShouldForceWarning(bool ForceWarning, const class FText& WarningText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TrainWarning.Widget_TrainWarning_C.ShouldForceWarning");
		
		UWidget_TrainWarning_C_ShouldForceWarning_Params params {};
		params.ForceWarning = ForceWarning;
		params.WarningText = WarningText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TrainWarning.Widget_TrainWarning_C.UpdateWarning
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_TrainWarning_C::UpdateWarning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TrainWarning.Widget_TrainWarning_C.UpdateWarning");
		
		UWidget_TrainWarning_C_UpdateWarning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TrainWarning.Widget_TrainWarning_C.HideWarning
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_TrainWarning_C::HideWarning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TrainWarning.Widget_TrainWarning_C.HideWarning");
		
		UWidget_TrainWarning_C_HideWarning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TrainWarning.Widget_TrainWarning_C.ShowWarning
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        WarningText                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWidget_TrainWarning_C::ShowWarning(const class FText& WarningText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TrainWarning.Widget_TrainWarning_C.ShowWarning");
		
		UWidget_TrainWarning_C_ShowWarning_Params params {};
		params.WarningText = WarningText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TrainWarning.Widget_TrainWarning_C.Init
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGTrain*                                    train                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_TrainWarning_C::Init(class AFGTrain* train)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TrainWarning.Widget_TrainWarning_C.Init");
		
		UWidget_TrainWarning_C_Init_Params params {};
		params.train = train;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TrainWarning.Widget_TrainWarning_C.CheckErrors
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_TrainWarning_C::CheckErrors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TrainWarning.Widget_TrainWarning_C.CheckErrors");
		
		UWidget_TrainWarning_C_CheckErrors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TrainWarning.Widget_TrainWarning_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_TrainWarning_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TrainWarning.Widget_TrainWarning_C.Destruct");
		
		UWidget_TrainWarning_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TrainWarning.Widget_TrainWarning_C.ExecuteUbergraph_Widget_TrainWarning
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_TrainWarning_C::ExecuteUbergraph_Widget_TrainWarning(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TrainWarning.Widget_TrainWarning_C.ExecuteUbergraph_Widget_TrainWarning");
		
		UWidget_TrainWarning_C_ExecuteUbergraph_Widget_TrainWarning_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_TrainWarning_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_TrainWarning_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_TrainWarning.Widget_TrainWarning_C");
		return ptr;
	}

}


