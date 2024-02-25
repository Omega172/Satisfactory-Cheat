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
	 * 		Name   -> Function Widget_DismantleMode.Widget_DismantleMode_C.Widget_DismantleMode_AutoGenFunc
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      newClassFilter                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		class UClass*                                      itemDescriptor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		class UFGBlueprintDescriptor*                      newBlueprintFilter                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_DismantleMode_C::Widget_DismantleMode_AutoGenFunc(class UClass* newClassFilter, class UClass* itemDescriptor, class UFGBlueprintDescriptor* newBlueprintFilter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_DismantleMode.Widget_DismantleMode_C.Widget_DismantleMode_AutoGenFunc");
		
		UWidget_DismantleMode_C_Widget_DismantleMode_AutoGenFunc_Params params {};
		params.newClassFilter = newClassFilter;
		params.itemDescriptor = itemDescriptor;
		params.newBlueprintFilter = newBlueprintFilter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_DismantleMode.Widget_DismantleMode_C.UpdateMassDismantleFeedback
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_DismantleMode_C::UpdateMassDismantleFeedback()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_DismantleMode.Widget_DismantleMode_C.UpdateMassDismantleFeedback");
		
		UWidget_DismantleMode_C_UpdateMassDismantleFeedback_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_DismantleMode.Widget_DismantleMode_C.SetDismantleFeedbackVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Condition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_DismantleMode_C::SetDismantleFeedbackVisibility(bool Condition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_DismantleMode.Widget_DismantleMode_C.SetDismantleFeedbackVisibility");
		
		UWidget_DismantleMode_C_SetDismantleFeedbackVisibility_Params params {};
		params.Condition = Condition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_DismantleMode.Widget_DismantleMode_C.GetReticleVisibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UWidget_DismantleMode_C::GetReticleVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_DismantleMode.Widget_DismantleMode_C.GetReticleVisibility");
		
		UWidget_DismantleMode_C_GetReticleVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_DismantleMode.Widget_DismantleMode_C.SetDismantleRefunds
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_DismantleMode_C::SetDismantleRefunds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_DismantleMode.Widget_DismantleMode_C.SetDismantleRefunds");
		
		UWidget_DismantleMode_C_SetDismantleRefunds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_DismantleMode.Widget_DismantleMode_C.OnEscapePressed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_DismantleMode_C::OnEscapePressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_DismantleMode.Widget_DismantleMode_C.OnEscapePressed");
		
		UWidget_DismantleMode_C_OnEscapePressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_DismantleMode.Widget_DismantleMode_C.Init
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UWidget_DismantleMode_C::Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_DismantleMode.Widget_DismantleMode_C.Init");
		
		UWidget_DismantleMode_C_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_DismantleMode.Widget_DismantleMode_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_DismantleMode_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_DismantleMode.Widget_DismantleMode_C.Construct");
		
		UWidget_DismantleMode_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_DismantleMode.Widget_DismantleMode_C.OnDismantleRefundChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGBuildGunStateDismantle*                   dismantleGun                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_DismantleMode_C::OnDismantleRefundChanged(class UFGBuildGunStateDismantle* dismantleGun)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_DismantleMode.Widget_DismantleMode_C.OnDismantleRefundChanged");
		
		UWidget_DismantleMode_C_OnDismantleRefundChanged_Params params {};
		params.dismantleGun = dismantleGun;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_DismantleMode.Widget_DismantleMode_C.Event OnMultiDismantleStateChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_DismantleMode_C::EventOnMultiDismantleStateChanged(bool NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_DismantleMode.Widget_DismantleMode_C.Event OnMultiDismantleStateChanged");
		
		UWidget_DismantleMode_C_EventOnMultiDismantleStateChanged_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_DismantleMode.Widget_DismantleMode_C.Event OnPendingDismantleActorsChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_DismantleMode_C::EventOnPendingDismantleActorsChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_DismantleMode.Widget_DismantleMode_C.Event OnPendingDismantleActorsChanged");
		
		UWidget_DismantleMode_C_EventOnPendingDismantleActorsChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_DismantleMode.Widget_DismantleMode_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_DismantleMode_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_DismantleMode.Widget_DismantleMode_C.Destruct");
		
		UWidget_DismantleMode_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_DismantleMode.Widget_DismantleMode_C.SetSmallSlots
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_DismantleMode_C::SetSmallSlots()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_DismantleMode.Widget_DismantleMode_C.SetSmallSlots");
		
		UWidget_DismantleMode_C_SetSmallSlots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_DismantleMode.Widget_DismantleMode_C.ExecuteUbergraph_Widget_DismantleMode
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_DismantleMode_C::ExecuteUbergraph_Widget_DismantleMode(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_DismantleMode.Widget_DismantleMode_C.ExecuteUbergraph_Widget_DismantleMode");
		
		UWidget_DismantleMode_C_ExecuteUbergraph_Widget_DismantleMode_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_DismantleMode_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_DismantleMode_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_DismantleMode.Widget_DismantleMode_C");
		return ptr;
	}

}


