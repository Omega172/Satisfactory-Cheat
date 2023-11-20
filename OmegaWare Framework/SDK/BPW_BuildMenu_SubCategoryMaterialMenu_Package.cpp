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
	 * 		Name   -> Function BPW_BuildMenu_SubCategoryMaterialMenu.BPW_BuildMenu_SubCategoryMaterialMenu_C.OnSetDefaultOnAll
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      CustomiserRecipe                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BuildMenu_SubCategoryMaterialMenu_C::OnSetDefaultOnAll(class UClass* CustomiserRecipe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_SubCategoryMaterialMenu.BPW_BuildMenu_SubCategoryMaterialMenu_C.OnSetDefaultOnAll");
		
		UBPW_BuildMenu_SubCategoryMaterialMenu_C_OnSetDefaultOnAll_Params params {};
		params.CustomiserRecipe = CustomiserRecipe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BuildMenu_SubCategoryMaterialMenu.BPW_BuildMenu_SubCategoryMaterialMenu_C.SetSubCategory
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      mSubCategory                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      mCategory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BuildMenu_SubCategoryMaterialMenu_C::SetSubCategory(class UClass* mSubCategory, class UClass* mCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_SubCategoryMaterialMenu.BPW_BuildMenu_SubCategoryMaterialMenu_C.SetSubCategory");
		
		UBPW_BuildMenu_SubCategoryMaterialMenu_C_SetSubCategory_Params params {};
		params.mSubCategory = mSubCategory;
		params.mCategory = mCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BuildMenu_SubCategoryMaterialMenu.BPW_BuildMenu_SubCategoryMaterialMenu_C.OnMaterialHovered
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      CustomiserRecipe                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		ECustomiserType                                    CustomiserTyper                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BuildMenu_SubCategoryMaterialMenu_C::OnMaterialHovered(class UClass* CustomiserRecipe, ECustomiserType CustomiserTyper)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_SubCategoryMaterialMenu.BPW_BuildMenu_SubCategoryMaterialMenu_C.OnMaterialHovered");
		
		UBPW_BuildMenu_SubCategoryMaterialMenu_C_OnMaterialHovered_Params params {};
		params.CustomiserRecipe = CustomiserRecipe;
		params.CustomiserTyper = CustomiserTyper;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BuildMenu_SubCategoryMaterialMenu.BPW_BuildMenu_SubCategoryMaterialMenu_C.OnMaterialClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      CustomiserRecipe                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ButtonIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BuildMenu_SubCategoryMaterialMenu_C::OnMaterialClicked(class UClass* CustomiserRecipe, int32_t ButtonIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_SubCategoryMaterialMenu.BPW_BuildMenu_SubCategoryMaterialMenu_C.OnMaterialClicked");
		
		UBPW_BuildMenu_SubCategoryMaterialMenu_C_OnMaterialClicked_Params params {};
		params.CustomiserRecipe = CustomiserRecipe;
		params.ButtonIndex = ButtonIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BuildMenu_SubCategoryMaterialMenu.BPW_BuildMenu_SubCategoryMaterialMenu_C.PopulateMenu
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_BuildMenu_SubCategoryMaterialMenu_C::PopulateMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_SubCategoryMaterialMenu.BPW_BuildMenu_SubCategoryMaterialMenu_C.PopulateMenu");
		
		UBPW_BuildMenu_SubCategoryMaterialMenu_C_PopulateMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BuildMenu_SubCategoryMaterialMenu.BPW_BuildMenu_SubCategoryMaterialMenu_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_BuildMenu_SubCategoryMaterialMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_SubCategoryMaterialMenu.BPW_BuildMenu_SubCategoryMaterialMenu_C.Construct");
		
		UBPW_BuildMenu_SubCategoryMaterialMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BuildMenu_SubCategoryMaterialMenu.BPW_BuildMenu_SubCategoryMaterialMenu_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_BuildMenu_SubCategoryMaterialMenu_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_SubCategoryMaterialMenu.BPW_BuildMenu_SubCategoryMaterialMenu_C.Destruct");
		
		UBPW_BuildMenu_SubCategoryMaterialMenu_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BuildMenu_SubCategoryMaterialMenu.BPW_BuildMenu_SubCategoryMaterialMenu_C.OnFocusLost
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBPW_BuildMenu_SubCategoryMaterialMenu_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_SubCategoryMaterialMenu.BPW_BuildMenu_SubCategoryMaterialMenu_C.OnFocusLost");
		
		UBPW_BuildMenu_SubCategoryMaterialMenu_C_OnFocusLost_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BuildMenu_SubCategoryMaterialMenu.BPW_BuildMenu_SubCategoryMaterialMenu_C.ExecuteUbergraph_BPW_BuildMenu_SubCategoryMaterialMenu
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BuildMenu_SubCategoryMaterialMenu_C::ExecuteUbergraph_BPW_BuildMenu_SubCategoryMaterialMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_SubCategoryMaterialMenu.BPW_BuildMenu_SubCategoryMaterialMenu_C.ExecuteUbergraph_BPW_BuildMenu_SubCategoryMaterialMenu");
		
		UBPW_BuildMenu_SubCategoryMaterialMenu_C_ExecuteUbergraph_BPW_BuildMenu_SubCategoryMaterialMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BuildMenu_SubCategoryMaterialMenu.BPW_BuildMenu_SubCategoryMaterialMenu_C.OnSetDefaultMaterialOnAll__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      CustomiserRecipe                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BuildMenu_SubCategoryMaterialMenu_C::OnSetDefaultMaterialOnAll__DelegateSignature(class UClass* CustomiserRecipe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_SubCategoryMaterialMenu.BPW_BuildMenu_SubCategoryMaterialMenu_C.OnSetDefaultMaterialOnAll__DelegateSignature");
		
		UBPW_BuildMenu_SubCategoryMaterialMenu_C_OnSetDefaultMaterialOnAll__DelegateSignature_Params params {};
		params.CustomiserRecipe = CustomiserRecipe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BuildMenu_SubCategoryMaterialMenu.BPW_BuildMenu_SubCategoryMaterialMenu_C.OnDestructed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_BuildMenu_SubCategoryMaterialMenu_C::OnDestructed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_SubCategoryMaterialMenu.BPW_BuildMenu_SubCategoryMaterialMenu_C.OnDestructed__DelegateSignature");
		
		UBPW_BuildMenu_SubCategoryMaterialMenu_C_OnDestructed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BuildMenu_SubCategoryMaterialMenu.BPW_BuildMenu_SubCategoryMaterialMenu_C.OnDefaultMaterialHovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      CustomiserRecipe                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		ECustomiserType                                    CustomiserType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BuildMenu_SubCategoryMaterialMenu_C::OnDefaultMaterialHovered__DelegateSignature(class UClass* CustomiserRecipe, ECustomiserType CustomiserType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_SubCategoryMaterialMenu.BPW_BuildMenu_SubCategoryMaterialMenu_C.OnDefaultMaterialHovered__DelegateSignature");
		
		UBPW_BuildMenu_SubCategoryMaterialMenu_C_OnDefaultMaterialHovered__DelegateSignature_Params params {};
		params.CustomiserRecipe = CustomiserRecipe;
		params.CustomiserType = CustomiserType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BuildMenu_SubCategoryMaterialMenu.BPW_BuildMenu_SubCategoryMaterialMenu_C.OnDefaultMaterialChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      SubCategory                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      NewDefaultMaterial                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BuildMenu_SubCategoryMaterialMenu_C::OnDefaultMaterialChanged__DelegateSignature(class UClass* SubCategory, class UClass* NewDefaultMaterial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_SubCategoryMaterialMenu.BPW_BuildMenu_SubCategoryMaterialMenu_C.OnDefaultMaterialChanged__DelegateSignature");
		
		UBPW_BuildMenu_SubCategoryMaterialMenu_C_OnDefaultMaterialChanged__DelegateSignature_Params params {};
		params.SubCategory = SubCategory;
		params.NewDefaultMaterial = NewDefaultMaterial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_BuildMenu_SubCategoryMaterialMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_BuildMenu_SubCategoryMaterialMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_BuildMenu_SubCategoryMaterialMenu.BPW_BuildMenu_SubCategoryMaterialMenu_C");
		return ptr;
	}

}


