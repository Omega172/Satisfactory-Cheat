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
	 * 		Name   -> Function BPW_SubCatHdr_Options.BPW_SubCatHdr_Options_C.OnSearch
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        SearchResult                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               FoundResult                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_SubCatHdr_Options_C::OnSearch(const class FText& SearchResult, bool* FoundResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SubCatHdr_Options.BPW_SubCatHdr_Options_C.OnSearch");
		
		UBPW_SubCatHdr_Options_C_OnSearch_Params params {};
		params.SearchResult = SearchResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FoundResult != nullptr)
			*FoundResult = params.FoundResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_SubCatHdr_Options.BPW_SubCatHdr_Options_C.PopulateSettings
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UUserWidget*>                         mSettingsWidgets                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 */
	void UBPW_SubCatHdr_Options_C::PopulateSettings(TArray<class UUserWidget*>* mSettingsWidgets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SubCatHdr_Options.BPW_SubCatHdr_Options_C.PopulateSettings");
		
		UBPW_SubCatHdr_Options_C_PopulateSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (mSettingsWidgets != nullptr)
			*mSettingsWidgets = params.mSettingsWidgets;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_SubCatHdr_Options.BPW_SubCatHdr_Options_C.SetName
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        mName                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_SubCatHdr_Options_C::SetName(const class FText& mName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SubCatHdr_Options.BPW_SubCatHdr_Options_C.SetName");
		
		UBPW_SubCatHdr_Options_C_SetName_Params params {};
		params.mName = mName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_SubCatHdr_Options.BPW_SubCatHdr_Options_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_SubCatHdr_Options_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SubCatHdr_Options.BPW_SubCatHdr_Options_C.Construct");
		
		UBPW_SubCatHdr_Options_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_SubCatHdr_Options.BPW_SubCatHdr_Options_C.ExecuteUbergraph_BPW_SubCatHdr_Options
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_SubCatHdr_Options_C::ExecuteUbergraph_BPW_SubCatHdr_Options(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SubCatHdr_Options.BPW_SubCatHdr_Options_C.ExecuteUbergraph_BPW_SubCatHdr_Options");
		
		UBPW_SubCatHdr_Options_C_ExecuteUbergraph_BPW_SubCatHdr_Options_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_SubCatHdr_Options_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_SubCatHdr_Options_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_SubCatHdr_Options.BPW_SubCatHdr_Options_C");
		return ptr;
	}

}


