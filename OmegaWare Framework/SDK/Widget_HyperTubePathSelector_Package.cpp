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
	 * 		Name   -> Function Widget_HyperTubePathSelector.Widget_HyperTubePathSelector_C.CREATEDELEGATE_PROXYFUNCTION_1
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FFGPendingHyperJunctionInfo                 newJunctionInfo                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 */
	void UWidget_HyperTubePathSelector_C::CREATEDELEGATE_PROXYFUNCTION_1(const struct FFGPendingHyperJunctionInfo& newJunctionInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_HyperTubePathSelector.Widget_HyperTubePathSelector_C.CREATEDELEGATE_PROXYFUNCTION_1");
		
		UWidget_HyperTubePathSelector_C_CREATEDELEGATE_PROXYFUNCTION_1_Params params {};
		params.newJunctionInfo = newJunctionInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_HyperTubePathSelector.Widget_HyperTubePathSelector_C.On Shortcut Pressed
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            shortcutIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_HyperTubePathSelector_C::OnShortcutPressed(int32_t shortcutIndex, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_HyperTubePathSelector.Widget_HyperTubePathSelector_C.On Shortcut Pressed");
		
		UWidget_HyperTubePathSelector_C_OnShortcutPressed_Params params {};
		params.shortcutIndex = shortcutIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_HyperTubePathSelector.Widget_HyperTubePathSelector_C.Populate Connection List
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_HyperTubePathSelector_C::PopulateConnectionList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_HyperTubePathSelector.Widget_HyperTubePathSelector_C.Populate Connection List");
		
		UWidget_HyperTubePathSelector_C_PopulateConnectionList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_HyperTubePathSelector.Widget_HyperTubePathSelector_C.Update Junction Info Text
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_HyperTubePathSelector_C::UpdateJunctionInfoText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_HyperTubePathSelector.Widget_HyperTubePathSelector_C.Update Junction Info Text");
		
		UWidget_HyperTubePathSelector_C_UpdateJunctionInfoText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_HyperTubePathSelector.Widget_HyperTubePathSelector_C.Init Pending Junction Info
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FFGPendingHyperJunctionInfo                 NewInfo                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	 */
	void UWidget_HyperTubePathSelector_C::InitPendingJunctionInfo(const struct FFGPendingHyperJunctionInfo& NewInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_HyperTubePathSelector.Widget_HyperTubePathSelector_C.Init Pending Junction Info");
		
		UWidget_HyperTubePathSelector_C_InitPendingJunctionInfo_Params params {};
		params.NewInfo = NewInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_HyperTubePathSelector.Widget_HyperTubePathSelector_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_HyperTubePathSelector_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_HyperTubePathSelector.Widget_HyperTubePathSelector_C.Construct");
		
		UWidget_HyperTubePathSelector_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_HyperTubePathSelector.Widget_HyperTubePathSelector_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_HyperTubePathSelector_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_HyperTubePathSelector.Widget_HyperTubePathSelector_C.Tick");
		
		UWidget_HyperTubePathSelector_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_HyperTubePathSelector.Widget_HyperTubePathSelector_C.ExecuteUbergraph_Widget_HyperTubePathSelector
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_HyperTubePathSelector_C::ExecuteUbergraph_Widget_HyperTubePathSelector(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_HyperTubePathSelector.Widget_HyperTubePathSelector_C.ExecuteUbergraph_Widget_HyperTubePathSelector");
		
		UWidget_HyperTubePathSelector_C_ExecuteUbergraph_Widget_HyperTubePathSelector_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_HyperTubePathSelector_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_HyperTubePathSelector_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_HyperTubePathSelector.Widget_HyperTubePathSelector_C");
		return ptr;
	}

}


