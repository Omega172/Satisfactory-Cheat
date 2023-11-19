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
	 * 		Name   -> Function Build_StandaloneWidgetSign_Portrait.Build_StandaloneWidgetSign_Portrait_C.SetLayoutManager
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBPW_SignLayoutManager_C*                    LayoutManager                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuild_StandaloneWidgetSign_Portrait_C::SetLayoutManager(class UBPW_SignLayoutManager_C* LayoutManager)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_StandaloneWidgetSign_Portrait.Build_StandaloneWidgetSign_Portrait_C.SetLayoutManager");
		
		ABuild_StandaloneWidgetSign_Portrait_C_SetLayoutManager_Params params {};
		params.LayoutManager = LayoutManager;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_StandaloneWidgetSign_Portrait.Build_StandaloneWidgetSign_Portrait_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABuild_StandaloneWidgetSign_Portrait_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_StandaloneWidgetSign_Portrait.Build_StandaloneWidgetSign_Portrait_C.ReceiveBeginPlay");
		
		ABuild_StandaloneWidgetSign_Portrait_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_StandaloneWidgetSign_Portrait.Build_StandaloneWidgetSign_Portrait_C.ExecuteUbergraph_Build_StandaloneWidgetSign_Portrait
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuild_StandaloneWidgetSign_Portrait_C::ExecuteUbergraph_Build_StandaloneWidgetSign_Portrait(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_StandaloneWidgetSign_Portrait.Build_StandaloneWidgetSign_Portrait_C.ExecuteUbergraph_Build_StandaloneWidgetSign_Portrait");
		
		ABuild_StandaloneWidgetSign_Portrait_C_ExecuteUbergraph_Build_StandaloneWidgetSign_Portrait_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuild_StandaloneWidgetSign_Portrait_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuild_StandaloneWidgetSign_Portrait_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Build_StandaloneWidgetSign_Portrait.Build_StandaloneWidgetSign_Portrait_C");
		return ptr;
	}

}


