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
	 * 		Name   -> Function BPW_AlignableWrapBox.BPW_AlignableWrapBox_C.PositionWidgetsInRow
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UWidget*>                             Widgets                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		double                                             RowWidth                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             VerticalOffset                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_AlignableWrapBox_C::PositionWidgetsInRow(TArray<class UWidget*>* Widgets, double RowWidth, double VerticalOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_AlignableWrapBox.BPW_AlignableWrapBox_C.PositionWidgetsInRow");
		
		UBPW_AlignableWrapBox_C_PositionWidgetsInRow_Params params {};
		params.RowWidth = RowWidth;
		params.VerticalOffset = VerticalOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Widgets != nullptr)
			*Widgets = params.Widgets;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_AlignableWrapBox.BPW_AlignableWrapBox_C.UpdatePositioning
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_AlignableWrapBox_C::UpdatePositioning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_AlignableWrapBox.BPW_AlignableWrapBox_C.UpdatePositioning");
		
		UBPW_AlignableWrapBox_C_UpdatePositioning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_AlignableWrapBox.BPW_AlignableWrapBox_C.ClearChildren
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_AlignableWrapBox_C::ClearChildren()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_AlignableWrapBox.BPW_AlignableWrapBox_C.ClearChildren");
		
		UBPW_AlignableWrapBox_C_ClearChildren_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_AlignableWrapBox.BPW_AlignableWrapBox_C.AddChildToWrapBox
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     Content                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_AlignableWrapBox_C::AddChildToWrapBox(class UWidget* Content)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_AlignableWrapBox.BPW_AlignableWrapBox_C.AddChildToWrapBox");
		
		UBPW_AlignableWrapBox_C_AddChildToWrapBox_Params params {};
		params.Content = Content;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_AlignableWrapBox.BPW_AlignableWrapBox_C.InitPositioning
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_AlignableWrapBox_C::InitPositioning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_AlignableWrapBox.BPW_AlignableWrapBox_C.InitPositioning");
		
		UBPW_AlignableWrapBox_C_InitPositioning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_AlignableWrapBox.BPW_AlignableWrapBox_C.ExecuteUbergraph_BPW_AlignableWrapBox
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_AlignableWrapBox_C::ExecuteUbergraph_BPW_AlignableWrapBox(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_AlignableWrapBox.BPW_AlignableWrapBox_C.ExecuteUbergraph_BPW_AlignableWrapBox");
		
		UBPW_AlignableWrapBox_C_ExecuteUbergraph_BPW_AlignableWrapBox_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_AlignableWrapBox_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_AlignableWrapBox_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_AlignableWrapBox.BPW_AlignableWrapBox_C");
		return ptr;
	}

}


