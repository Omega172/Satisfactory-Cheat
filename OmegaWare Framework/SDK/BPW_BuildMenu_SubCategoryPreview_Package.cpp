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
	 * 		Name   -> Function BPW_BuildMenu_SubCategoryPreview.BPW_BuildMenu_SubCategoryPreview_C.SetName
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        mName                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_BuildMenu_SubCategoryPreview_C::SetName(const class FText& mName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_SubCategoryPreview.BPW_BuildMenu_SubCategoryPreview_C.SetName");
		
		UBPW_BuildMenu_SubCategoryPreview_C_SetName_Params params {};
		params.mName = mName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BuildMenu_SubCategoryPreview.BPW_BuildMenu_SubCategoryPreview_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BuildMenu_SubCategoryPreview_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_SubCategoryPreview.BPW_BuildMenu_SubCategoryPreview_C.PreConstruct");
		
		UBPW_BuildMenu_SubCategoryPreview_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BuildMenu_SubCategoryPreview.BPW_BuildMenu_SubCategoryPreview_C.ExecuteUbergraph_BPW_BuildMenu_SubCategoryPreview
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BuildMenu_SubCategoryPreview_C::ExecuteUbergraph_BPW_BuildMenu_SubCategoryPreview(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_SubCategoryPreview.BPW_BuildMenu_SubCategoryPreview_C.ExecuteUbergraph_BPW_BuildMenu_SubCategoryPreview");
		
		UBPW_BuildMenu_SubCategoryPreview_C_ExecuteUbergraph_BPW_BuildMenu_SubCategoryPreview_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_BuildMenu_SubCategoryPreview_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_BuildMenu_SubCategoryPreview_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_BuildMenu_SubCategoryPreview.BPW_BuildMenu_SubCategoryPreview_C");
		return ptr;
	}

}


