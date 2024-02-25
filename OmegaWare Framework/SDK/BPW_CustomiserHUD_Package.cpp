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
	 * 		Name   -> Function BPW_CustomiserHUD.BPW_CustomiserHUD_C.OnFilterChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      newClassFilter                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		class UClass*                                      itemDescriptor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void UBPW_CustomiserHUD_C::OnFilterChanged(class UClass* newClassFilter, class UClass* itemDescriptor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_CustomiserHUD.BPW_CustomiserHUD_C.OnFilterChanged");
		
		UBPW_CustomiserHUD_C_OnFilterChanged_Params params {};
		params.newClassFilter = newClassFilter;
		params.itemDescriptor = itemDescriptor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_CustomiserHUD.BPW_CustomiserHUD_C.OnCostumiserApplied
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      CustomisationDesc                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_CustomiserHUD_C::OnCostumiserApplied(class UClass* CustomisationDesc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_CustomiserHUD.BPW_CustomiserHUD_C.OnCostumiserApplied");
		
		UBPW_CustomiserHUD_C_OnCostumiserApplied_Params params {};
		params.CustomisationDesc = CustomisationDesc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_CustomiserHUD.BPW_CustomiserHUD_C.OnDescriptorChanged
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ECustomiserType                                    CustomiserType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_CustomiserHUD_C::OnDescriptorChanged(ECustomiserType CustomiserType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_CustomiserHUD.BPW_CustomiserHUD_C.OnDescriptorChanged");
		
		UBPW_CustomiserHUD_C_OnDescriptorChanged_Params params {};
		params.CustomiserType = CustomiserType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_CustomiserHUD.BPW_CustomiserHUD_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_CustomiserHUD_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_CustomiserHUD.BPW_CustomiserHUD_C.Construct");
		
		UBPW_CustomiserHUD_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_CustomiserHUD.BPW_CustomiserHUD_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_CustomiserHUD_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_CustomiserHUD.BPW_CustomiserHUD_C.Destruct");
		
		UBPW_CustomiserHUD_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_CustomiserHUD.BPW_CustomiserHUD_C.OnCustomTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              UpdateTime                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_CustomiserHUD_C::OnCustomTick(float UpdateTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_CustomiserHUD.BPW_CustomiserHUD_C.OnCustomTick");
		
		UBPW_CustomiserHUD_C_OnCustomTick_Params params {};
		params.UpdateTime = UpdateTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_CustomiserHUD.BPW_CustomiserHUD_C.BndEvt__Widget_BuildMode_K2Node_ComponentBoundEvent_1_OnQuickSwitchClosed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      recipe                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_CustomiserHUD_C::BndEvt__Widget_BuildMode_K2Node_ComponentBoundEvent_1_OnQuickSwitchClosed__DelegateSignature(class UClass* recipe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_CustomiserHUD.BPW_CustomiserHUD_C.BndEvt__Widget_BuildMode_K2Node_ComponentBoundEvent_1_OnQuickSwitchClosed__DelegateSignature");
		
		UBPW_CustomiserHUD_C_BndEvt__Widget_BuildMode_K2Node_ComponentBoundEvent_1_OnQuickSwitchClosed__DelegateSignature_Params params {};
		params.recipe = recipe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_CustomiserHUD.BPW_CustomiserHUD_C.BndEvt__Widget_BuildMode_K2Node_ComponentBoundEvent_2_OnQuickSwitchBuildingButtonDown__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_CustomiserHUD_C::BndEvt__Widget_BuildMode_K2Node_ComponentBoundEvent_2_OnQuickSwitchBuildingButtonDown__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_CustomiserHUD.BPW_CustomiserHUD_C.BndEvt__Widget_BuildMode_K2Node_ComponentBoundEvent_2_OnQuickSwitchBuildingButtonDown__DelegateSignature");
		
		UBPW_CustomiserHUD_C_BndEvt__Widget_BuildMode_K2Node_ComponentBoundEvent_2_OnQuickSwitchBuildingButtonDown__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_CustomiserHUD.BPW_CustomiserHUD_C.OnEscapePressed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_CustomiserHUD_C::OnEscapePressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_CustomiserHUD.BPW_CustomiserHUD_C.OnEscapePressed");
		
		UBPW_CustomiserHUD_C_OnEscapePressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_CustomiserHUD.BPW_CustomiserHUD_C.ExecuteUbergraph_BPW_CustomiserHUD
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_CustomiserHUD_C::ExecuteUbergraph_BPW_CustomiserHUD(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_CustomiserHUD.BPW_CustomiserHUD_C.ExecuteUbergraph_BPW_CustomiserHUD");
		
		UBPW_CustomiserHUD_C_ExecuteUbergraph_BPW_CustomiserHUD_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_CustomiserHUD_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_CustomiserHUD_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_CustomiserHUD.BPW_CustomiserHUD_C");
		return ptr;
	}

}


