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
	 * 		Name   -> Function BP_ResourceScanner.BP_ResourceScanner_C.IsScannerWheelVisible
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ResourceScanner_C::IsScannerWheelVisible(bool* IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ResourceScanner.BP_ResourceScanner_C.IsScannerWheelVisible");
		
		ABP_ResourceScanner_C_IsScannerWheelVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsVisible != nullptr)
			*IsVisible = params.IsVisible;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ResourceScanner.BP_ResourceScanner_C.ShowResourceDescriptorSelectUI
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_ResourceScanner_C::ShowResourceDescriptorSelectUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ResourceScanner.BP_ResourceScanner_C.ShowResourceDescriptorSelectUI");
		
		ABP_ResourceScanner_C_ShowResourceDescriptorSelectUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ResourceScanner.BP_ResourceScanner_C.CloseResourceDescriptorSelectUI
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ResourceScanner_C::CloseResourceDescriptorSelectUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ResourceScanner.BP_ResourceScanner_C.CloseResourceDescriptorSelectUI");
		
		ABP_ResourceScanner_C_CloseResourceDescriptorSelectUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ResourceScanner.BP_ResourceScanner_C.PlayClusterEffects
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FNodeClusterData>                    clusters                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABP_ResourceScanner_C::PlayClusterEffects(TArray<struct FNodeClusterData> clusters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ResourceScanner.BP_ResourceScanner_C.PlayClusterEffects");
		
		ABP_ResourceScanner_C_PlayClusterEffects_Params params {};
		params.clusters = clusters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ResourceScanner.BP_ResourceScanner_C.Event Play Pulse Effect
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ResourceScanner_C::EventPlayPulseEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ResourceScanner.BP_ResourceScanner_C.Event Play Pulse Effect");
		
		ABP_ResourceScanner_C_EventPlayPulseEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ResourceScanner.BP_ResourceScanner_C.Event BuildgunVisibility
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ResourceScanner_C::EventBuildgunVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ResourceScanner.BP_ResourceScanner_C.Event BuildgunVisibility");
		
		ABP_ResourceScanner_C_EventBuildgunVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ResourceScanner.BP_ResourceScanner_C.ExecuteUbergraph_BP_ResourceScanner
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ResourceScanner_C::ExecuteUbergraph_BP_ResourceScanner(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ResourceScanner.BP_ResourceScanner_C.ExecuteUbergraph_BP_ResourceScanner");
		
		ABP_ResourceScanner_C_ExecuteUbergraph_BP_ResourceScanner_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ResourceScanner.BP_ResourceScanner_C.OnClustersFound__DelegateSignature
	 * 		Flags  -> (Public, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FNodeClusterData>                    ClustersFound                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABP_ResourceScanner_C::OnClustersFound__DelegateSignature(TArray<struct FNodeClusterData>* ClustersFound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ResourceScanner.BP_ResourceScanner_C.OnClustersFound__DelegateSignature");
		
		ABP_ResourceScanner_C_OnClustersFound__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ClustersFound != nullptr)
			*ClustersFound = params.ClustersFound;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_ResourceScanner_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ResourceScanner_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ResourceScanner.BP_ResourceScanner_C");
		return ptr;
	}

}


