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
	 * 		Name   -> Function BPW_BuildMenu_SubCategoryMaterial.BPW_BuildMenu_SubCategoryMaterial_C.UpdateMaterialText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_BuildMenu_SubCategoryMaterial_C::UpdateMaterialText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_SubCategoryMaterial.BPW_BuildMenu_SubCategoryMaterial_C.UpdateMaterialText");
		
		UBPW_BuildMenu_SubCategoryMaterial_C_UpdateMaterialText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BuildMenu_SubCategoryMaterial.BPW_BuildMenu_SubCategoryMaterial_C.SetSubCategory
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      SubCategory                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      mCategory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BuildMenu_SubCategoryMaterial_C::SetSubCategory(class UClass* SubCategory, class UClass* mCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_SubCategoryMaterial.BPW_BuildMenu_SubCategoryMaterial_C.SetSubCategory");
		
		UBPW_BuildMenu_SubCategoryMaterial_C_SetSubCategory_Params params {};
		params.SubCategory = SubCategory;
		params.mCategory = mCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BuildMenu_SubCategoryMaterial.BPW_BuildMenu_SubCategoryMaterial_C.OpenCloseMenu
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Close                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BuildMenu_SubCategoryMaterial_C::OpenCloseMenu(bool Close)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_SubCategoryMaterial.BPW_BuildMenu_SubCategoryMaterial_C.OpenCloseMenu");
		
		UBPW_BuildMenu_SubCategoryMaterial_C_OpenCloseMenu_Params params {};
		params.Close = Close;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BuildMenu_SubCategoryMaterial.BPW_BuildMenu_SubCategoryMaterial_C.GetMenuContent
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class UWidget* UBPW_BuildMenu_SubCategoryMaterial_C::GetMenuContent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_SubCategoryMaterial.BPW_BuildMenu_SubCategoryMaterial_C.GetMenuContent");
		
		UBPW_BuildMenu_SubCategoryMaterial_C_GetMenuContent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BuildMenu_SubCategoryMaterial.BPW_BuildMenu_SubCategoryMaterial_C.OnMouseButtonUp
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UBPW_BuildMenu_SubCategoryMaterial_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_SubCategoryMaterial.BPW_BuildMenu_SubCategoryMaterial_C.OnMouseButtonUp");
		
		UBPW_BuildMenu_SubCategoryMaterial_C_OnMouseButtonUp_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BuildMenu_SubCategoryMaterial.BPW_BuildMenu_SubCategoryMaterial_C.SetStyling
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsHovered                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsOpen                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BuildMenu_SubCategoryMaterial_C::SetStyling(bool IsHovered, bool IsOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_SubCategoryMaterial.BPW_BuildMenu_SubCategoryMaterial_C.SetStyling");
		
		UBPW_BuildMenu_SubCategoryMaterial_C_SetStyling_Params params {};
		params.IsHovered = IsHovered;
		params.IsOpen = IsOpen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BuildMenu_SubCategoryMaterial.BPW_BuildMenu_SubCategoryMaterial_C.BndEvt__Button_76_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_BuildMenu_SubCategoryMaterial_C::BndEvt__Button_76_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_SubCategoryMaterial.BPW_BuildMenu_SubCategoryMaterial_C.BndEvt__Button_76_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
		UBPW_BuildMenu_SubCategoryMaterial_C_BndEvt__Button_76_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BuildMenu_SubCategoryMaterial.BPW_BuildMenu_SubCategoryMaterial_C.BndEvt__Button_76_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_BuildMenu_SubCategoryMaterial_C::BndEvt__Button_76_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_SubCategoryMaterial.BPW_BuildMenu_SubCategoryMaterial_C.BndEvt__Button_76_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UBPW_BuildMenu_SubCategoryMaterial_C_BndEvt__Button_76_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BuildMenu_SubCategoryMaterial.BPW_BuildMenu_SubCategoryMaterial_C.BndEvt__Button_76_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_BuildMenu_SubCategoryMaterial_C::BndEvt__Button_76_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_SubCategoryMaterial.BPW_BuildMenu_SubCategoryMaterial_C.BndEvt__Button_76_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UBPW_BuildMenu_SubCategoryMaterial_C_BndEvt__Button_76_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BuildMenu_SubCategoryMaterial.BPW_BuildMenu_SubCategoryMaterial_C.SetupBindings
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBPW_BuildMenu_SubCategoryMaterialMenu_C*    MaterialMenu                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BuildMenu_SubCategoryMaterial_C::SetupBindings(class UBPW_BuildMenu_SubCategoryMaterialMenu_C* MaterialMenu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_SubCategoryMaterial.BPW_BuildMenu_SubCategoryMaterial_C.SetupBindings");
		
		UBPW_BuildMenu_SubCategoryMaterial_C_SetupBindings_Params params {};
		params.MaterialMenu = MaterialMenu;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BuildMenu_SubCategoryMaterial.BPW_BuildMenu_SubCategoryMaterial_C.DefaultMaterialChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      SubCategory                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      NewDefaultMaterial                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BuildMenu_SubCategoryMaterial_C::DefaultMaterialChanged(class UClass* SubCategory, class UClass* NewDefaultMaterial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_SubCategoryMaterial.BPW_BuildMenu_SubCategoryMaterial_C.DefaultMaterialChanged");
		
		UBPW_BuildMenu_SubCategoryMaterial_C_DefaultMaterialChanged_Params params {};
		params.SubCategory = SubCategory;
		params.NewDefaultMaterial = NewDefaultMaterial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BuildMenu_SubCategoryMaterial.BPW_BuildMenu_SubCategoryMaterial_C.DefaultMaterialHovered
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      CustomiserRecipe                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		ECustomiserType                                    CustomiserType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BuildMenu_SubCategoryMaterial_C::DefaultMaterialHovered(class UClass* CustomiserRecipe, ECustomiserType CustomiserType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_SubCategoryMaterial.BPW_BuildMenu_SubCategoryMaterial_C.DefaultMaterialHovered");
		
		UBPW_BuildMenu_SubCategoryMaterial_C_DefaultMaterialHovered_Params params {};
		params.CustomiserRecipe = CustomiserRecipe;
		params.CustomiserType = CustomiserType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BuildMenu_SubCategoryMaterial.BPW_BuildMenu_SubCategoryMaterial_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_BuildMenu_SubCategoryMaterial_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_SubCategoryMaterial.BPW_BuildMenu_SubCategoryMaterial_C.Destruct");
		
		UBPW_BuildMenu_SubCategoryMaterial_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BuildMenu_SubCategoryMaterial.BPW_BuildMenu_SubCategoryMaterial_C.BndEvt__mMenuAnchor_K2Node_ComponentBoundEvent_4_OnMenuOpenChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsOpen                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BuildMenu_SubCategoryMaterial_C::BndEvt__mMenuAnchor_K2Node_ComponentBoundEvent_4_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_SubCategoryMaterial.BPW_BuildMenu_SubCategoryMaterial_C.BndEvt__mMenuAnchor_K2Node_ComponentBoundEvent_4_OnMenuOpenChangedEvent__DelegateSignature");
		
		UBPW_BuildMenu_SubCategoryMaterial_C_BndEvt__mMenuAnchor_K2Node_ComponentBoundEvent_4_OnMenuOpenChangedEvent__DelegateSignature_Params params {};
		params.bIsOpen = bIsOpen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BuildMenu_SubCategoryMaterial.BPW_BuildMenu_SubCategoryMaterial_C.SetDefaultMaterialOnAll
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      CustomiserRecipe                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BuildMenu_SubCategoryMaterial_C::SetDefaultMaterialOnAll(class UClass* CustomiserRecipe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_SubCategoryMaterial.BPW_BuildMenu_SubCategoryMaterial_C.SetDefaultMaterialOnAll");
		
		UBPW_BuildMenu_SubCategoryMaterial_C_SetDefaultMaterialOnAll_Params params {};
		params.CustomiserRecipe = CustomiserRecipe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BuildMenu_SubCategoryMaterial.BPW_BuildMenu_SubCategoryMaterial_C.ExecuteUbergraph_BPW_BuildMenu_SubCategoryMaterial
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BuildMenu_SubCategoryMaterial_C::ExecuteUbergraph_BPW_BuildMenu_SubCategoryMaterial(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_SubCategoryMaterial.BPW_BuildMenu_SubCategoryMaterial_C.ExecuteUbergraph_BPW_BuildMenu_SubCategoryMaterial");
		
		UBPW_BuildMenu_SubCategoryMaterial_C_ExecuteUbergraph_BPW_BuildMenu_SubCategoryMaterial_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BuildMenu_SubCategoryMaterial.BPW_BuildMenu_SubCategoryMaterial_C.OnSetDefaultMaterialOnAll__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      CustomiserRecipe                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BuildMenu_SubCategoryMaterial_C::OnSetDefaultMaterialOnAll__DelegateSignature(class UClass* CustomiserRecipe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_SubCategoryMaterial.BPW_BuildMenu_SubCategoryMaterial_C.OnSetDefaultMaterialOnAll__DelegateSignature");
		
		UBPW_BuildMenu_SubCategoryMaterial_C_OnSetDefaultMaterialOnAll__DelegateSignature_Params params {};
		params.CustomiserRecipe = CustomiserRecipe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BuildMenu_SubCategoryMaterial.BPW_BuildMenu_SubCategoryMaterial_C.OnDefaultMaterialHovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      CustomiserRecipe                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		ECustomiserType                                    CustomiserType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BuildMenu_SubCategoryMaterial_C::OnDefaultMaterialHovered__DelegateSignature(class UClass* CustomiserRecipe, ECustomiserType CustomiserType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_SubCategoryMaterial.BPW_BuildMenu_SubCategoryMaterial_C.OnDefaultMaterialHovered__DelegateSignature");
		
		UBPW_BuildMenu_SubCategoryMaterial_C_OnDefaultMaterialHovered__DelegateSignature_Params params {};
		params.CustomiserRecipe = CustomiserRecipe;
		params.CustomiserType = CustomiserType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BuildMenu_SubCategoryMaterial.BPW_BuildMenu_SubCategoryMaterial_C.OnDefaultMaterialChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      SubCategory                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      NewDefaultMaterial                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BuildMenu_SubCategoryMaterial_C::OnDefaultMaterialChanged__DelegateSignature(class UClass* SubCategory, class UClass* NewDefaultMaterial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_SubCategoryMaterial.BPW_BuildMenu_SubCategoryMaterial_C.OnDefaultMaterialChanged__DelegateSignature");
		
		UBPW_BuildMenu_SubCategoryMaterial_C_OnDefaultMaterialChanged__DelegateSignature_Params params {};
		params.SubCategory = SubCategory;
		params.NewDefaultMaterial = NewDefaultMaterial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_BuildMenu_SubCategoryMaterial_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_BuildMenu_SubCategoryMaterial_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_BuildMenu_SubCategoryMaterial.BPW_BuildMenu_SubCategoryMaterial_C");
		return ptr;
	}

}


