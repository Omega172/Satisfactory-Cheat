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
	 * 		Name   -> Function BPW_Tooltip_CompatiblePart.BPW_Tooltip_CompatiblePart_C.SetItemDescriptor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      mItemDescriptor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Tooltip_CompatiblePart_C::SetItemDescriptor(class UClass* mItemDescriptor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Tooltip_CompatiblePart.BPW_Tooltip_CompatiblePart_C.SetItemDescriptor");
		
		UBPW_Tooltip_CompatiblePart_C_SetItemDescriptor_Params params {};
		params.mItemDescriptor = mItemDescriptor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Tooltip_CompatiblePart.BPW_Tooltip_CompatiblePart_C.GetTooltipWidget
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class UWidget* UBPW_Tooltip_CompatiblePart_C::GetTooltipWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Tooltip_CompatiblePart.BPW_Tooltip_CompatiblePart_C.GetTooltipWidget");
		
		UBPW_Tooltip_CompatiblePart_C_GetTooltipWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Tooltip_CompatiblePart.BPW_Tooltip_CompatiblePart_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Tooltip_CompatiblePart_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Tooltip_CompatiblePart.BPW_Tooltip_CompatiblePart_C.PreConstruct");
		
		UBPW_Tooltip_CompatiblePart_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Tooltip_CompatiblePart.BPW_Tooltip_CompatiblePart_C.ExecuteUbergraph_BPW_Tooltip_CompatiblePart
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Tooltip_CompatiblePart_C::ExecuteUbergraph_BPW_Tooltip_CompatiblePart(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Tooltip_CompatiblePart.BPW_Tooltip_CompatiblePart_C.ExecuteUbergraph_BPW_Tooltip_CompatiblePart");
		
		UBPW_Tooltip_CompatiblePart_C_ExecuteUbergraph_BPW_Tooltip_CompatiblePart_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_Tooltip_CompatiblePart_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_Tooltip_CompatiblePart_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_Tooltip_CompatiblePart.BPW_Tooltip_CompatiblePart_C");
		return ptr;
	}

}


