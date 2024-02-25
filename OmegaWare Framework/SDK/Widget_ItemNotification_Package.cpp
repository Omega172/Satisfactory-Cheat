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
	 * 		Name   -> Function Widget_ItemNotification.Widget_ItemNotification_C.UpdateItemInfo
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      mItemClass                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void UWidget_ItemNotification_C::UpdateItemInfo(class UClass* mItemClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ItemNotification.Widget_ItemNotification_C.UpdateItemInfo");
		
		UWidget_ItemNotification_C_UpdateItemInfo_Params params {};
		params.mItemClass = mItemClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_ItemNotification.Widget_ItemNotification_C.AddToNumItems
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NumItems                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_ItemNotification_C::AddToNumItems(int32_t NumItems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ItemNotification.Widget_ItemNotification_C.AddToNumItems");
		
		UWidget_ItemNotification_C_AddToNumItems_Params params {};
		params.NumItems = NumItems;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_ItemNotification.Widget_ItemNotification_C.Finished_E9DF9233470456A05ECB24928D6ADE1B
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ItemNotification_C::Finished_E9DF9233470456A05ECB24928D6ADE1B()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ItemNotification.Widget_ItemNotification_C.Finished_E9DF9233470456A05ECB24928D6ADE1B");
		
		UWidget_ItemNotification_C_Finished_E9DF9233470456A05ECB24928D6ADE1B_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_ItemNotification.Widget_ItemNotification_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_ItemNotification_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ItemNotification.Widget_ItemNotification_C.Construct");
		
		UWidget_ItemNotification_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_ItemNotification.Widget_ItemNotification_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_ItemNotification_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ItemNotification.Widget_ItemNotification_C.Destruct");
		
		UWidget_ItemNotification_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_ItemNotification.Widget_ItemNotification_C.UpdatePickUpAmount
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ItemNotification_C::UpdatePickUpAmount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ItemNotification.Widget_ItemNotification_C.UpdatePickUpAmount");
		
		UWidget_ItemNotification_C_UpdatePickUpAmount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_ItemNotification.Widget_ItemNotification_C.Set Destroy Timer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ItemNotification_C::SetDestroyTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ItemNotification.Widget_ItemNotification_C.Set Destroy Timer");
		
		UWidget_ItemNotification_C_SetDestroyTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_ItemNotification.Widget_ItemNotification_C.Remove Item
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ItemNotification_C::RemoveItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ItemNotification.Widget_ItemNotification_C.Remove Item");
		
		UWidget_ItemNotification_C_RemoveItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_ItemNotification.Widget_ItemNotification_C.ExecuteUbergraph_Widget_ItemNotification
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_ItemNotification_C::ExecuteUbergraph_Widget_ItemNotification(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ItemNotification.Widget_ItemNotification_C.ExecuteUbergraph_Widget_ItemNotification");
		
		UWidget_ItemNotification_C_ExecuteUbergraph_Widget_ItemNotification_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_ItemNotification.Widget_ItemNotification_C.OnNotificationDestroyed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      mItemClass                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_ItemNotification_C::OnNotificationDestroyed__DelegateSignature(class UClass* mItemClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ItemNotification.Widget_ItemNotification_C.OnNotificationDestroyed__DelegateSignature");
		
		UWidget_ItemNotification_C_OnNotificationDestroyed__DelegateSignature_Params params {};
		params.mItemClass = mItemClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_ItemNotification_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_ItemNotification_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_ItemNotification.Widget_ItemNotification_C");
		return ptr;
	}

}


