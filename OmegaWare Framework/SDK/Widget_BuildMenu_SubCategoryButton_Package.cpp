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
	 * 		Name   -> Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.GetDescriptorObject
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMenu_SubCategoryButton_C::GetDescriptorObject(class UObject** Object)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.GetDescriptorObject");
		
		UWidget_BuildMenu_SubCategoryButton_C_GetDescriptorObject_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Object != nullptr)
			*Object = params.Object;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.SetSubcategoryObject
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGCategory*                                 mSubcategoryObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMenu_SubCategoryButton_C::SetSubcategoryObject(class UFGCategory* mSubcategoryObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.SetSubcategoryObject");
		
		UWidget_BuildMenu_SubCategoryButton_C_SetSubcategoryObject_Params params {};
		params.mSubcategoryObject = mSubcategoryObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.OnMouseButtonUp
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UWidget_BuildMenu_SubCategoryButton_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.OnMouseButtonUp");
		
		UWidget_BuildMenu_SubCategoryButton_C_OnMouseButtonUp_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.OverwriteName
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        mSubCategoryText                                           (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWidget_BuildMenu_SubCategoryButton_C::OverwriteName(const class FText& mSubCategoryText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.OverwriteName");
		
		UWidget_BuildMenu_SubCategoryButton_C_OverwriteName_Params params {};
		params.mSubCategoryText = mSubCategoryText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.UpdateIndex
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_BuildMenu_SubCategoryButton_C::UpdateIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.UpdateIndex");
		
		UWidget_BuildMenu_SubCategoryButton_C_UpdateIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.ClearDragAndDropVisuals
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_BuildMenu_SubCategoryButton_C::ClearDragAndDropVisuals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.ClearDragAndDropVisuals");
		
		UWidget_BuildMenu_SubCategoryButton_C_ClearDragAndDropVisuals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.OnRemoveButtonClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_BuildMenu_SubCategoryButton_C::OnRemoveButtonClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.OnRemoveButtonClicked");
		
		UWidget_BuildMenu_SubCategoryButton_C_OnRemoveButtonClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.UpdateRemoveButtonVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_BuildMenu_SubCategoryButton_C::UpdateRemoveButtonVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.UpdateRemoveButtonVisibility");
		
		UWidget_BuildMenu_SubCategoryButton_C_UpdateRemoveButtonVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.OnDragDetected
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               PointerEvent                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UDragDropOperation*                          Operation                                                  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMenu_SubCategoryButton_C::OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.OnDragDetected");
		
		UWidget_BuildMenu_SubCategoryButton_C_OnDragDetected_Params params {};
		params.MyGeometry = MyGeometry;
		params.PointerEvent = PointerEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Operation != nullptr)
			*Operation = params.Operation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.OnMouseButtonDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UWidget_BuildMenu_SubCategoryButton_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.OnMouseButtonDown");
		
		UWidget_BuildMenu_SubCategoryButton_C_OnMouseButtonDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.SetEditMode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               mEditMode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMenu_SubCategoryButton_C::SetEditMode(bool mEditMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.SetEditMode");
		
		UWidget_BuildMenu_SubCategoryButton_C_SetEditMode_Params params {};
		params.mEditMode = mEditMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.OnDrop
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               PointerEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UDragDropOperation*                          Operation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	bool UWidget_BuildMenu_SubCategoryButton_C::OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.OnDrop");
		
		UWidget_BuildMenu_SubCategoryButton_C_OnDrop_Params params {};
		params.MyGeometry = MyGeometry;
		params.PointerEvent = PointerEvent;
		params.Operation = Operation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.SetSubCategory
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      mSubCategory                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      mCategory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMenu_SubCategoryButton_C::SetSubCategory(class UClass* mSubCategory, class UClass* mCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.SetSubCategory");
		
		UWidget_BuildMenu_SubCategoryButton_C_SetSubCategory_Params params {};
		params.mSubCategory = mSubCategory;
		params.mCategory = mCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.CloseDefaultMaterialMenu
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_BuildMenu_SubCategoryButton_C::CloseDefaultMaterialMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.CloseDefaultMaterialMenu");
		
		UWidget_BuildMenu_SubCategoryButton_C_CloseDefaultMaterialMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.SetIsSelected
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsSelected                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMenu_SubCategoryButton_C::SetIsSelected(bool IsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.SetIsSelected");
		
		UWidget_BuildMenu_SubCategoryButton_C_SetIsSelected_Params params {};
		params.IsSelected = IsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.SetSubcategoryName
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWidget_BuildMenu_SubCategoryButton_C::SetSubcategoryName(const class FText& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.SetSubcategoryName");
		
		UWidget_BuildMenu_SubCategoryButton_C_SetSubcategoryName_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.BndEvt__BPW_BuildMenu_SubCategoryMaterial_K2Node_ComponentBoundEvent_0_OnDefaultMaterialChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      SubCategory                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      NewDefaultMaterial                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMenu_SubCategoryButton_C::BndEvt__BPW_BuildMenu_SubCategoryMaterial_K2Node_ComponentBoundEvent_0_OnDefaultMaterialChanged__DelegateSignature(class UClass* SubCategory, class UClass* NewDefaultMaterial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.BndEvt__BPW_BuildMenu_SubCategoryMaterial_K2Node_ComponentBoundEvent_0_OnDefaultMaterialChanged__DelegateSignature");
		
		UWidget_BuildMenu_SubCategoryButton_C_BndEvt__BPW_BuildMenu_SubCategoryMaterial_K2Node_ComponentBoundEvent_0_OnDefaultMaterialChanged__DelegateSignature_Params params {};
		params.SubCategory = SubCategory;
		params.NewDefaultMaterial = NewDefaultMaterial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMenu_SubCategoryButton_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.PreConstruct");
		
		UWidget_BuildMenu_SubCategoryButton_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.BndEvt__mDefaultMaterialDropDown_K2Node_ComponentBoundEvent_1_OnDefaultMaterialHovered__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      CustomiserRecipe                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		ECustomiserType                                    CustomiserType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMenu_SubCategoryButton_C::BndEvt__mDefaultMaterialDropDown_K2Node_ComponentBoundEvent_1_OnDefaultMaterialHovered__DelegateSignature(class UClass* CustomiserRecipe, ECustomiserType CustomiserType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.BndEvt__mDefaultMaterialDropDown_K2Node_ComponentBoundEvent_1_OnDefaultMaterialHovered__DelegateSignature");
		
		UWidget_BuildMenu_SubCategoryButton_C_BndEvt__mDefaultMaterialDropDown_K2Node_ComponentBoundEvent_1_OnDefaultMaterialHovered__DelegateSignature_Params params {};
		params.CustomiserRecipe = CustomiserRecipe;
		params.CustomiserType = CustomiserType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_BuildMenu_SubCategoryButton_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.Destruct");
		
		UWidget_BuildMenu_SubCategoryButton_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.BndEvt__mDefaultMaterialDropDown_K2Node_ComponentBoundEvent_2_OnSetDefaultMaterialOnAll__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      CustomiserRecipe                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMenu_SubCategoryButton_C::BndEvt__mDefaultMaterialDropDown_K2Node_ComponentBoundEvent_2_OnSetDefaultMaterialOnAll__DelegateSignature(class UClass* CustomiserRecipe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.BndEvt__mDefaultMaterialDropDown_K2Node_ComponentBoundEvent_2_OnSetDefaultMaterialOnAll__DelegateSignature");
		
		UWidget_BuildMenu_SubCategoryButton_C_BndEvt__mDefaultMaterialDropDown_K2Node_ComponentBoundEvent_2_OnSetDefaultMaterialOnAll__DelegateSignature_Params params {};
		params.CustomiserRecipe = CustomiserRecipe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.OnDragEnter
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               PointerEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UDragDropOperation*                          Operation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMenu_SubCategoryButton_C::OnDragEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.OnDragEnter");
		
		UWidget_BuildMenu_SubCategoryButton_C_OnDragEnter_Params params {};
		params.MyGeometry = MyGeometry;
		params.PointerEvent = PointerEvent;
		params.Operation = Operation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.OnDragLeave
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FPointerEvent                               PointerEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UDragDropOperation*                          Operation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMenu_SubCategoryButton_C::OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.OnDragLeave");
		
		UWidget_BuildMenu_SubCategoryButton_C_OnDragLeave_Params params {};
		params.PointerEvent = PointerEvent;
		params.Operation = Operation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_BuildMenu_SubCategoryButton_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.Construct");
		
		UWidget_BuildMenu_SubCategoryButton_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.BndEvt__Widget_BuildMenu_SubCategoryButton_FGEditableText_60_K2Node_ComponentBoundEvent_4_OnEditableTextCommittedEvent__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMenu_SubCategoryButton_C::BndEvt__Widget_BuildMenu_SubCategoryButton_FGEditableText_60_K2Node_ComponentBoundEvent_4_OnEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.BndEvt__Widget_BuildMenu_SubCategoryButton_FGEditableText_60_K2Node_ComponentBoundEvent_4_OnEditableTextCommittedEvent__DelegateSignature");
		
		UWidget_BuildMenu_SubCategoryButton_C_BndEvt__Widget_BuildMenu_SubCategoryButton_FGEditableText_60_K2Node_ComponentBoundEvent_4_OnEditableTextCommittedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.OnDragCancelled
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FPointerEvent                               PointerEvent                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UDragDropOperation*                          Operation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMenu_SubCategoryButton_C::OnDragCancelled(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.OnDragCancelled");
		
		UWidget_BuildMenu_SubCategoryButton_C_OnDragCancelled_Params params {};
		params.PointerEvent = PointerEvent;
		params.Operation = Operation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.OnMouseEnter
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWidget_BuildMenu_SubCategoryButton_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.OnMouseEnter");
		
		UWidget_BuildMenu_SubCategoryButton_C_OnMouseEnter_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.OnMouseLeave
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWidget_BuildMenu_SubCategoryButton_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.OnMouseLeave");
		
		UWidget_BuildMenu_SubCategoryButton_C_OnMouseLeave_Params params {};
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.ClearDragEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_BuildMenu_SubCategoryButton_C::ClearDragEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.ClearDragEvent");
		
		UWidget_BuildMenu_SubCategoryButton_C_ClearDragEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.EditMode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               EditMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMenu_SubCategoryButton_C::EditMode(bool EditMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.EditMode");
		
		UWidget_BuildMenu_SubCategoryButton_C_EditMode_Params params {};
		params.EditMode = EditMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.BndEvt__Widget_BuildMenu_SubCategoryButton_mName_K2Node_ComponentBoundEvent_3_OnEditableTextChangedEvent__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWidget_BuildMenu_SubCategoryButton_C::BndEvt__Widget_BuildMenu_SubCategoryButton_mName_K2Node_ComponentBoundEvent_3_OnEditableTextChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.BndEvt__Widget_BuildMenu_SubCategoryButton_mName_K2Node_ComponentBoundEvent_3_OnEditableTextChangedEvent__DelegateSignature");
		
		UWidget_BuildMenu_SubCategoryButton_C_BndEvt__Widget_BuildMenu_SubCategoryButton_mName_K2Node_ComponentBoundEvent_3_OnEditableTextChangedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.ExecuteUbergraph_Widget_BuildMenu_SubCategoryButton
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMenu_SubCategoryButton_C::ExecuteUbergraph_Widget_BuildMenu_SubCategoryButton(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.ExecuteUbergraph_Widget_BuildMenu_SubCategoryButton");
		
		UWidget_BuildMenu_SubCategoryButton_C_ExecuteUbergraph_Widget_BuildMenu_SubCategoryButton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.OnSubcategoryUpdated__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget_BuildMenu_SubCategoryButton_C*       Instigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMenu_SubCategoryButton_C::OnSubcategoryUpdated__DelegateSignature(class UWidget_BuildMenu_SubCategoryButton_C* Instigator, const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.OnSubcategoryUpdated__DelegateSignature");
		
		UWidget_BuildMenu_SubCategoryButton_C_OnSubcategoryUpdated__DelegateSignature_Params params {};
		params.Instigator = Instigator;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.OnSelect__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     Instigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMenu_SubCategoryButton_C::OnSelect__DelegateSignature(class UWidget* Instigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.OnSelect__DelegateSignature");
		
		UWidget_BuildMenu_SubCategoryButton_C_OnSelect__DelegateSignature_Params params {};
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.OnClearDragAndDropSelection__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_BuildMenu_SubCategoryButton_C::OnClearDragAndDropSelection__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.OnClearDragAndDropSelection__DelegateSignature");
		
		UWidget_BuildMenu_SubCategoryButton_C_OnClearDragAndDropSelection__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.OnCatgeoryRemoved__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_BuildMenu_SubCategoryButton_C::OnCatgeoryRemoved__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.OnCatgeoryRemoved__DelegateSignature");
		
		UWidget_BuildMenu_SubCategoryButton_C_OnCatgeoryRemoved__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.OnObjectDropped__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget_BuildMenu_SubCategoryButton_C*       SubcategoryButton                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGeometry                                   MyGemoetry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               PointerEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UDragDropOperation*                          Operation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMenu_SubCategoryButton_C::OnObjectDropped__DelegateSignature(class UWidget_BuildMenu_SubCategoryButton_C* SubcategoryButton, const struct FGeometry& MyGemoetry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.OnObjectDropped__DelegateSignature");
		
		UWidget_BuildMenu_SubCategoryButton_C_OnObjectDropped__DelegateSignature_Params params {};
		params.SubcategoryButton = SubcategoryButton;
		params.MyGemoetry = MyGemoetry;
		params.PointerEvent = PointerEvent;
		params.Operation = Operation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.OnSetDefaultMaterialOnAll__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      CustomiserRecipe                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMenu_SubCategoryButton_C::OnSetDefaultMaterialOnAll__DelegateSignature(class UClass* CustomiserRecipe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.OnSetDefaultMaterialOnAll__DelegateSignature");
		
		UWidget_BuildMenu_SubCategoryButton_C_OnSetDefaultMaterialOnAll__DelegateSignature_Params params {};
		params.CustomiserRecipe = CustomiserRecipe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.OnDefaultMaterialHovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      CustomiserRecipe                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		ECustomiserType                                    CustomiserType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMenu_SubCategoryButton_C::OnDefaultMaterialHovered__DelegateSignature(class UClass* CustomiserRecipe, ECustomiserType CustomiserType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.OnDefaultMaterialHovered__DelegateSignature");
		
		UWidget_BuildMenu_SubCategoryButton_C_OnDefaultMaterialHovered__DelegateSignature_Params params {};
		params.CustomiserRecipe = CustomiserRecipe;
		params.CustomiserType = CustomiserType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.OnDefaultMaterialChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      SubCategory                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      NewDefaultRecipe                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMenu_SubCategoryButton_C::OnDefaultMaterialChanged__DelegateSignature(class UClass* SubCategory, class UClass* NewDefaultRecipe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.OnDefaultMaterialChanged__DelegateSignature");
		
		UWidget_BuildMenu_SubCategoryButton_C_OnDefaultMaterialChanged__DelegateSignature_Params params {};
		params.SubCategory = SubCategory;
		params.NewDefaultRecipe = NewDefaultRecipe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_BuildMenu_SubCategoryButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_BuildMenu_SubCategoryButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C");
		return ptr;
	}

}


