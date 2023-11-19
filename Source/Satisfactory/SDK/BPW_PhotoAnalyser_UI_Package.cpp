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
	 * 		Name   -> Function BPW_PhotoAnalyser_UI.BPW_PhotoAnalyser_UI_C.OnCategoryClicked
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidget_ListButton_C*                        ListButton                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_PhotoAnalyser_UI_C::OnCategoryClicked(int32_t Index, class UWidget_ListButton_C* ListButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PhotoAnalyser_UI.BPW_PhotoAnalyser_UI_C.OnCategoryClicked");
		
		UBPW_PhotoAnalyser_UI_C_OnCategoryClicked_Params params {};
		params.Index = Index;
		params.ListButton = ListButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PhotoAnalyser_UI.BPW_PhotoAnalyser_UI_C.CategorizeChallenges
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_PhotoAnalyser_UI_C::CategorizeChallenges()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PhotoAnalyser_UI.BPW_PhotoAnalyser_UI_C.CategorizeChallenges");
		
		UBPW_PhotoAnalyser_UI_C_CategorizeChallenges_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PhotoAnalyser_UI.BPW_PhotoAnalyser_UI_C.CreateCategories
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_PhotoAnalyser_UI_C::CreateCategories()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PhotoAnalyser_UI.BPW_PhotoAnalyser_UI_C.CreateCategories");
		
		UBPW_PhotoAnalyser_UI_C_CreateCategories_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PhotoAnalyser_UI.BPW_PhotoAnalyser_UI_C.CreateChallengeList
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Category                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_PhotoAnalyser_UI_C::CreateChallengeList(class UClass* Category)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PhotoAnalyser_UI.BPW_PhotoAnalyser_UI_C.CreateChallengeList");
		
		UBPW_PhotoAnalyser_UI_C_CreateChallengeList_Params params {};
		params.Category = Category;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PhotoAnalyser_UI.BPW_PhotoAnalyser_UI_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_PhotoAnalyser_UI_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PhotoAnalyser_UI.BPW_PhotoAnalyser_UI_C.PreConstruct");
		
		UBPW_PhotoAnalyser_UI_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PhotoAnalyser_UI.BPW_PhotoAnalyser_UI_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_PhotoAnalyser_UI_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PhotoAnalyser_UI.BPW_PhotoAnalyser_UI_C.Construct");
		
		UBPW_PhotoAnalyser_UI_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PhotoAnalyser_UI.BPW_PhotoAnalyser_UI_C.BndEvt__BPW_PhotoAnalyser_UI_mWindow_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_PhotoAnalyser_UI_C::BndEvt__BPW_PhotoAnalyser_UI_mWindow_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PhotoAnalyser_UI.BPW_PhotoAnalyser_UI_C.BndEvt__BPW_PhotoAnalyser_UI_mWindow_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature");
		
		UBPW_PhotoAnalyser_UI_C_BndEvt__BPW_PhotoAnalyser_UI_mWindow_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PhotoAnalyser_UI.BPW_PhotoAnalyser_UI_C.ExecuteUbergraph_BPW_PhotoAnalyser_UI
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_PhotoAnalyser_UI_C::ExecuteUbergraph_BPW_PhotoAnalyser_UI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PhotoAnalyser_UI.BPW_PhotoAnalyser_UI_C.ExecuteUbergraph_BPW_PhotoAnalyser_UI");
		
		UBPW_PhotoAnalyser_UI_C_ExecuteUbergraph_BPW_PhotoAnalyser_UI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_PhotoAnalyser_UI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_PhotoAnalyser_UI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_PhotoAnalyser_UI.BPW_PhotoAnalyser_UI_C");
		return ptr;
	}

}


