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
	 * 		Name   -> Function Widget_HUDBox_Equipment.Widget_HUDBox_Equipment_C.ShowHideWarningAnim
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ShowAnim                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_HUDBox_Equipment_C::ShowHideWarningAnim(bool ShowAnim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_HUDBox_Equipment.Widget_HUDBox_Equipment_C.ShowHideWarningAnim");
		
		UWidget_HUDBox_Equipment_C_ShowHideWarningAnim_Params params {};
		params.ShowAnim = ShowAnim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_HUDBox_Equipment.Widget_HUDBox_Equipment_C.SetEquipmentSlotText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_HUDBox_Equipment_C::SetEquipmentSlotText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_HUDBox_Equipment.Widget_HUDBox_Equipment_C.SetEquipmentSlotText");
		
		UWidget_HUDBox_Equipment_C_SetEquipmentSlotText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_HUDBox_Equipment.Widget_HUDBox_Equipment_C.GetEquipmentSlotVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_HUDBox_Equipment_C::GetEquipmentSlotVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_HUDBox_Equipment.Widget_HUDBox_Equipment_C.GetEquipmentSlotVisibility");
		
		UWidget_HUDBox_Equipment_C_GetEquipmentSlotVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_HUDBox_Equipment.Widget_HUDBox_Equipment_C.SetContentWidgetClass
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_HUDBox_Equipment_C::SetContentWidgetClass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_HUDBox_Equipment.Widget_HUDBox_Equipment_C.SetContentWidgetClass");
		
		UWidget_HUDBox_Equipment_C_SetContentWidgetClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_HUDBox_Equipment.Widget_HUDBox_Equipment_C.GetEquipmentInSlot
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AFGEquipment*                                equipment                                                  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_HUDBox_Equipment_C::GetEquipmentInSlot(class AFGEquipment** equipment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_HUDBox_Equipment.Widget_HUDBox_Equipment_C.GetEquipmentInSlot");
		
		UWidget_HUDBox_Equipment_C_GetEquipmentInSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (equipment != nullptr)
			*equipment = params.equipment;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_HUDBox_Equipment.Widget_HUDBox_Equipment_C.UpdateTitle
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_HUDBox_Equipment_C::UpdateTitle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_HUDBox_Equipment.Widget_HUDBox_Equipment_C.UpdateTitle");
		
		UWidget_HUDBox_Equipment_C_UpdateTitle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_HUDBox_Equipment.Widget_HUDBox_Equipment_C.UpdateIcon
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_HUDBox_Equipment_C::UpdateIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_HUDBox_Equipment.Widget_HUDBox_Equipment_C.UpdateIcon");
		
		UWidget_HUDBox_Equipment_C_UpdateIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_HUDBox_Equipment.Widget_HUDBox_Equipment_C.GetEquipmentItemClass
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UClass*                                      Class                                                      (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_HUDBox_Equipment_C::GetEquipmentItemClass(class UClass** Class)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_HUDBox_Equipment.Widget_HUDBox_Equipment_C.GetEquipmentItemClass");
		
		UWidget_HUDBox_Equipment_C_GetEquipmentItemClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Class != nullptr)
			*Class = params.Class;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_HUDBox_Equipment.Widget_HUDBox_Equipment_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_HUDBox_Equipment_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_HUDBox_Equipment.Widget_HUDBox_Equipment_C.Construct");
		
		UWidget_HUDBox_Equipment_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_HUDBox_Equipment.Widget_HUDBox_Equipment_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_HUDBox_Equipment_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_HUDBox_Equipment.Widget_HUDBox_Equipment_C.Tick");
		
		UWidget_HUDBox_Equipment_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_HUDBox_Equipment.Widget_HUDBox_Equipment_C.HideWidget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_HUDBox_Equipment_C::HideWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_HUDBox_Equipment.Widget_HUDBox_Equipment_C.HideWidget");
		
		UWidget_HUDBox_Equipment_C_HideWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_HUDBox_Equipment.Widget_HUDBox_Equipment_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_HUDBox_Equipment_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_HUDBox_Equipment.Widget_HUDBox_Equipment_C.Destruct");
		
		UWidget_HUDBox_Equipment_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_HUDBox_Equipment.Widget_HUDBox_Equipment_C.ExecuteUbergraph_Widget_HUDBox_Equipment
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_HUDBox_Equipment_C::ExecuteUbergraph_Widget_HUDBox_Equipment(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_HUDBox_Equipment.Widget_HUDBox_Equipment_C.ExecuteUbergraph_Widget_HUDBox_Equipment");
		
		UWidget_HUDBox_Equipment_C_ExecuteUbergraph_Widget_HUDBox_Equipment_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_HUDBox_Equipment_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_HUDBox_Equipment_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_HUDBox_Equipment.Widget_HUDBox_Equipment_C");
		return ptr;
	}

}


