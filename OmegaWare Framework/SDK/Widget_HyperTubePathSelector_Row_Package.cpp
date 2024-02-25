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
	 * 		Name   -> Function Widget_HyperTubePathSelector_Row.Widget_HyperTubePathSelector_Row_C.Update Pointer Visibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_HyperTubePathSelector_Row_C::UpdatePointerVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_HyperTubePathSelector_Row.Widget_HyperTubePathSelector_Row_C.Update Pointer Visibility");
		
		UWidget_HyperTubePathSelector_Row_C_UpdatePointerVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_HyperTubePathSelector_Row.Widget_HyperTubePathSelector_Row_C.GetConnectionInfoTexture
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FSlateBrush UWidget_HyperTubePathSelector_Row_C::GetConnectionInfoTexture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_HyperTubePathSelector_Row.Widget_HyperTubePathSelector_Row_C.GetConnectionInfoTexture");
		
		UWidget_HyperTubePathSelector_Row_C_GetConnectionInfoTexture_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_HyperTubePathSelector_Row.Widget_HyperTubePathSelector_Row_C.GetConnectionIndexText
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UWidget_HyperTubePathSelector_Row_C::GetConnectionIndexText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_HyperTubePathSelector_Row.Widget_HyperTubePathSelector_Row_C.GetConnectionIndexText");
		
		UWidget_HyperTubePathSelector_Row_C_GetConnectionIndexText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_HyperTubePathSelector_Row.Widget_HyperTubePathSelector_Row_C.Update Connection Info
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FFGPipeHyperJunctionConnectionInfo          NewInfo                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	 * 		int32_t                                            NewIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_HyperTubePathSelector_Row_C::UpdateConnectionInfo(const struct FFGPipeHyperJunctionConnectionInfo& NewInfo, int32_t NewIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_HyperTubePathSelector_Row.Widget_HyperTubePathSelector_Row_C.Update Connection Info");
		
		UWidget_HyperTubePathSelector_Row_C_UpdateConnectionInfo_Params params {};
		params.NewInfo = NewInfo;
		params.NewIndex = NewIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_HyperTubePathSelector_Row.Widget_HyperTubePathSelector_Row_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_HyperTubePathSelector_Row_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_HyperTubePathSelector_Row.Widget_HyperTubePathSelector_Row_C.Construct");
		
		UWidget_HyperTubePathSelector_Row_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_HyperTubePathSelector_Row.Widget_HyperTubePathSelector_Row_C.On Pending Junction Output Changed
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FFGPipeHyperConnectionHistoryEntry          newOutputConnection                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	void UWidget_HyperTubePathSelector_Row_C::OnPendingJunctionOutputChanged(const struct FFGPipeHyperConnectionHistoryEntry& newOutputConnection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_HyperTubePathSelector_Row.Widget_HyperTubePathSelector_Row_C.On Pending Junction Output Changed");
		
		UWidget_HyperTubePathSelector_Row_C_OnPendingJunctionOutputChanged_Params params {};
		params.newOutputConnection = newOutputConnection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_HyperTubePathSelector_Row.Widget_HyperTubePathSelector_Row_C.ExecuteUbergraph_Widget_HyperTubePathSelector_Row
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_HyperTubePathSelector_Row_C::ExecuteUbergraph_Widget_HyperTubePathSelector_Row(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_HyperTubePathSelector_Row.Widget_HyperTubePathSelector_Row_C.ExecuteUbergraph_Widget_HyperTubePathSelector_Row");
		
		UWidget_HyperTubePathSelector_Row_C_ExecuteUbergraph_Widget_HyperTubePathSelector_Row_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_HyperTubePathSelector_Row_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_HyperTubePathSelector_Row_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_HyperTubePathSelector_Row.Widget_HyperTubePathSelector_Row_C");
		return ptr;
	}

}


