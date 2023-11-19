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
	 * 		Name   -> Function BPW_AddBlueprintButton.BPW_AddBlueprintButton_C.SetSubcategoryButton
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget_BuildMenu_SubCategoryButton_C*       mSubcategoryButton                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_AddBlueprintButton_C::SetSubcategoryButton(class UWidget_BuildMenu_SubCategoryButton_C* mSubcategoryButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_AddBlueprintButton.BPW_AddBlueprintButton_C.SetSubcategoryButton");
		
		UBPW_AddBlueprintButton_C_SetSubcategoryButton_Params params {};
		params.mSubcategoryButton = mSubcategoryButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_AddBlueprintButton.BPW_AddBlueprintButton_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_AddBlueprintButton_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_AddBlueprintButton.BPW_AddBlueprintButton_C.Construct");
		
		UBPW_AddBlueprintButton_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_AddBlueprintButton.BPW_AddBlueprintButton_C.BndEvt__BPW_AddBlueprintButton_Button_32_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_AddBlueprintButton_C::BndEvt__BPW_AddBlueprintButton_Button_32_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_AddBlueprintButton.BPW_AddBlueprintButton_C.BndEvt__BPW_AddBlueprintButton_Button_32_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UBPW_AddBlueprintButton_C_BndEvt__BPW_AddBlueprintButton_Button_32_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_AddBlueprintButton.BPW_AddBlueprintButton_C.ExecuteUbergraph_BPW_AddBlueprintButton
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_AddBlueprintButton_C::ExecuteUbergraph_BPW_AddBlueprintButton(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_AddBlueprintButton.BPW_AddBlueprintButton_C.ExecuteUbergraph_BPW_AddBlueprintButton");
		
		UBPW_AddBlueprintButton_C_ExecuteUbergraph_BPW_AddBlueprintButton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_AddBlueprintButton.BPW_AddBlueprintButton_C.OnAddClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget_BuildMenu_SubCategoryButton_C*       SubcategoryButton                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_AddBlueprintButton_C::OnAddClicked__DelegateSignature(class UWidget_BuildMenu_SubCategoryButton_C* SubcategoryButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_AddBlueprintButton.BPW_AddBlueprintButton_C.OnAddClicked__DelegateSignature");
		
		UBPW_AddBlueprintButton_C_OnAddClicked__DelegateSignature_Params params {};
		params.SubcategoryButton = SubcategoryButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_AddBlueprintButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_AddBlueprintButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_AddBlueprintButton.BPW_AddBlueprintButton_C");
		return ptr;
	}

}


