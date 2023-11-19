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
	 * 		Name   -> Function Widget_SchematicPopUp.Widget_SchematicPopUp_C.CreateRewardIcon
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture*                                    Icon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        IconText                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWidget_SchematicPopUp_C::CreateRewardIcon(class UTexture* Icon, const class FText& IconText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SchematicPopUp.Widget_SchematicPopUp_C.CreateRewardIcon");
		
		UWidget_SchematicPopUp_C_CreateRewardIcon_Params params {};
		params.Icon = Icon;
		params.IconText = IconText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SchematicPopUp.Widget_SchematicPopUp_C.GenerateSchematicRewardIcons
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_SchematicPopUp_C::GenerateSchematicRewardIcons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SchematicPopUp.Widget_SchematicPopUp_C.GenerateSchematicRewardIcons");
		
		UWidget_SchematicPopUp_C_GenerateSchematicRewardIcons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SchematicPopUp.Widget_SchematicPopUp_C.GetRelevantRewardData
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_SchematicPopUp_C::GetRelevantRewardData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SchematicPopUp.Widget_SchematicPopUp_C.GetRelevantRewardData");
		
		UWidget_SchematicPopUp_C_GetRelevantRewardData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SchematicPopUp.Widget_SchematicPopUp_C.Set Stinger Content
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_SchematicPopUp_C::SetStingerContent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SchematicPopUp.Widget_SchematicPopUp_C.Set Stinger Content");
		
		UWidget_SchematicPopUp_C_SetStingerContent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SchematicPopUp.Widget_SchematicPopUp_C.GetSchematicUnlockedText
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UWidget_SchematicPopUp_C::GetSchematicUnlockedText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SchematicPopUp.Widget_SchematicPopUp_C.GetSchematicUnlockedText");
		
		UWidget_SchematicPopUp_C_GetSchematicUnlockedText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SchematicPopUp.Widget_SchematicPopUp_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_SchematicPopUp_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SchematicPopUp.Widget_SchematicPopUp_C.Construct");
		
		UWidget_SchematicPopUp_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SchematicPopUp.Widget_SchematicPopUp_C.OnSchematicPurchased
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      schematic                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_SchematicPopUp_C::OnSchematicPurchased(class UClass* schematic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SchematicPopUp.Widget_SchematicPopUp_C.OnSchematicPurchased");
		
		UWidget_SchematicPopUp_C_OnSchematicPurchased_Params params {};
		params.schematic = schematic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SchematicPopUp.Widget_SchematicPopUp_C.Set Stinger Collapsed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_SchematicPopUp_C::SetStingerCollapsed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SchematicPopUp.Widget_SchematicPopUp_C.Set Stinger Collapsed");
		
		UWidget_SchematicPopUp_C_SetStingerCollapsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SchematicPopUp.Widget_SchematicPopUp_C.ExecuteUbergraph_Widget_SchematicPopUp
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_SchematicPopUp_C::ExecuteUbergraph_Widget_SchematicPopUp(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SchematicPopUp.Widget_SchematicPopUp_C.ExecuteUbergraph_Widget_SchematicPopUp");
		
		UWidget_SchematicPopUp_C_ExecuteUbergraph_Widget_SchematicPopUp_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_SchematicPopUp_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_SchematicPopUp_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_SchematicPopUp.Widget_SchematicPopUp_C");
		return ptr;
	}

}


