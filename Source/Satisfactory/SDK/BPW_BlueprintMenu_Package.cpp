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
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.LeaveDirectoryModeIfBlueprintNameExists
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FBlueprintRecord                            BlueprintRecord                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_BlueprintMenu_C::LeaveDirectoryModeIfBlueprintNameExists(const struct FBlueprintRecord& BlueprintRecord)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.LeaveDirectoryModeIfBlueprintNameExists");
		
		UBPW_BlueprintMenu_C_LeaveDirectoryModeIfBlueprintNameExists_Params params {};
		params.BlueprintRecord = BlueprintRecord;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.CheckIfBlueprintNameExistsInCurrentCategory
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               BlueprintExists                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UFGBlueprintDescriptor*                      Descriptor                                                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UFGBlueprintSubCategory*                     SubCategory                                                (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UFGBlueprintCategory*                        Category                                                   (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BlueprintMenu_C::CheckIfBlueprintNameExistsInCurrentCategory(const class FString& Name, bool* BlueprintExists, class UFGBlueprintDescriptor** Descriptor, class UFGBlueprintSubCategory** SubCategory, class UFGBlueprintCategory** Category)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.CheckIfBlueprintNameExistsInCurrentCategory");
		
		UBPW_BlueprintMenu_C_CheckIfBlueprintNameExistsInCurrentCategory_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BlueprintExists != nullptr)
			*BlueprintExists = params.BlueprintExists;
		if (Descriptor != nullptr)
			*Descriptor = params.Descriptor;
		if (SubCategory != nullptr)
			*SubCategory = params.SubCategory;
		if (Category != nullptr)
			*Category = params.Category;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.MoveToSubcategory
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGBlueprintCategory*                        Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UFGBlueprintSubCategory*                     SubCategory                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BlueprintMenu_C::MoveToSubcategory(class UFGBlueprintCategory* Category, class UFGBlueprintSubCategory* SubCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.MoveToSubcategory");
		
		UBPW_BlueprintMenu_C_MoveToSubcategory_Params params {};
		params.Category = Category;
		params.SubCategory = SubCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnBlueprintDragBegin
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBPW_BuildMenuBlueprintButton_C*             Instigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		class UBPW_Blueprint_DragAndDropRep_C*             DragAndDropRep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BlueprintMenu_C::OnBlueprintDragBegin(class UBPW_BuildMenuBlueprintButton_C* Instigator, class UBPW_Blueprint_DragAndDropRep_C* DragAndDropRep)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnBlueprintDragBegin");
		
		UBPW_BlueprintMenu_C_OnBlueprintDragBegin_Params params {};
		params.Instigator = Instigator;
		params.DragAndDropRep = DragAndDropRep;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnRemoveCategoryClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_BlueprintMenu_C::OnRemoveCategoryClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnRemoveCategoryClicked");
		
		UBPW_BlueprintMenu_C_OnRemoveCategoryClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.IsCategoryEmpty
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGCategory*                                 Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBPW_BlueprintMenu_C::IsCategoryEmpty(class UFGCategory* Category)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.IsCategoryEmpty");
		
		UBPW_BlueprintMenu_C_IsCategoryEmpty_Params params {};
		params.Category = Category;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnSearch
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        SearchText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_BlueprintMenu_C::OnSearch(const class FText& SearchText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnSearch");
		
		UBPW_BlueprintMenu_C_OnSearch_Params params {};
		params.SearchText = SearchText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.UpdateDirectoryCategory
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               SetFromCurrentCategory                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BlueprintMenu_C::UpdateDirectoryCategory(bool SetFromCurrentCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.UpdateDirectoryCategory");
		
		UBPW_BlueprintMenu_C_UpdateDirectoryCategory_Params params {};
		params.SetFromCurrentCategory = SetFromCurrentCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.HighlightCurrentCategoryButton
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_BlueprintMenu_C::HighlightCurrentCategoryButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.HighlightCurrentCategoryButton");
		
		UBPW_BlueprintMenu_C_HighlightCurrentCategoryButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.RemoveCurrentPopup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_BlueprintMenu_C::RemoveCurrentPopup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.RemoveCurrentPopup");
		
		UBPW_BlueprintMenu_C_RemoveCurrentPopup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnPopupRemoved
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_BlueprintMenu_C::OnPopupRemoved()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnPopupRemoved");
		
		UBPW_BlueprintMenu_C_OnPopupRemoved_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.AddPopup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     mPopupWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BlueprintMenu_C::AddPopup(class UWidget* mPopupWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.AddPopup");
		
		UBPW_BlueprintMenu_C_AddPopup_Params params {};
		params.mPopupWidget = mPopupWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnRemoveBlueprintsPopupClosed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ConfirmClicked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BlueprintMenu_C::OnRemoveBlueprintsPopupClosed(bool ConfirmClicked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnRemoveBlueprintsPopupClosed");
		
		UBPW_BlueprintMenu_C_OnRemoveBlueprintsPopupClosed_Params params {};
		params.ConfirmClicked = ConfirmClicked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnBlueprintRemoved
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGBlueprintDescriptor*                      blueprintDescriptor                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BlueprintMenu_C::OnBlueprintRemoved(class UFGBlueprintDescriptor* blueprintDescriptor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnBlueprintRemoved");
		
		UBPW_BlueprintMenu_C_OnBlueprintRemoved_Params params {};
		params.blueprintDescriptor = blueprintDescriptor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnBlueprintUnhovered
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_BlueprintMenu_C::OnBlueprintUnhovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnBlueprintUnhovered");
		
		UBPW_BlueprintMenu_C_OnBlueprintUnhovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.GetLatestBlueprintRecord
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UFGBlueprintDescriptor*                      blueprintDescriptor                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBlueprintRecord                            BlueprintRecord                                            (Parm, OutParm)
	 */
	void UBPW_BlueprintMenu_C::GetLatestBlueprintRecord(class UFGBlueprintDescriptor* blueprintDescriptor, struct FBlueprintRecord* BlueprintRecord)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.GetLatestBlueprintRecord");
		
		UBPW_BlueprintMenu_C_GetLatestBlueprintRecord_Params params {};
		params.blueprintDescriptor = blueprintDescriptor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BlueprintRecord != nullptr)
			*BlueprintRecord = params.BlueprintRecord;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.AddOrUpdateNewBlueprint
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FBlueprintRecord                            BlueprintRecord                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_BlueprintMenu_C::AddOrUpdateNewBlueprint(const struct FBlueprintRecord& BlueprintRecord)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.AddOrUpdateNewBlueprint");
		
		UBPW_BlueprintMenu_C_AddOrUpdateNewBlueprint_Params params {};
		params.BlueprintRecord = BlueprintRecord;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.SetEditBarVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BlueprintMenu_C::SetEditBarVisibility(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.SetEditBarVisibility");
		
		UBPW_BlueprintMenu_C_SetEditBarVisibility_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnObjectDroppedOnEmptySpace
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UDragDropOperation*                          Operation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BlueprintMenu_C::OnObjectDroppedOnEmptySpace(class UDragDropOperation* Operation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnObjectDroppedOnEmptySpace");
		
		UBPW_BlueprintMenu_C_OnObjectDroppedOnEmptySpace_Params params {};
		params.Operation = Operation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnObjectDroppedOnCategory
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget_CategoryButton_C*                    Instigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               PointerEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UDragDropOperation*                          Operation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BlueprintMenu_C::OnObjectDroppedOnCategory(class UWidget_CategoryButton_C* Instigator, const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnObjectDroppedOnCategory");
		
		UBPW_BlueprintMenu_C_OnObjectDroppedOnCategory_Params params {};
		params.Instigator = Instigator;
		params.MyGeometry = MyGeometry;
		params.PointerEvent = PointerEvent;
		params.Operation = Operation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnBlueprintHovered
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGBlueprintDescriptor*                      blueprintDescriptor                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BlueprintMenu_C::OnBlueprintHovered(class UFGBlueprintDescriptor* blueprintDescriptor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnBlueprintHovered");
		
		UBPW_BlueprintMenu_C_OnBlueprintHovered_Params params {};
		params.blueprintDescriptor = blueprintDescriptor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnCategoryRemoved
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGCategory*                                 Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BlueprintMenu_C::OnCategoryRemoved(class UFGCategory* Category)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnCategoryRemoved");
		
		UBPW_BlueprintMenu_C_OnCategoryRemoved_Params params {};
		params.Category = Category;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.SetEmptyCategoryMessageVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BlueprintMenu_C::SetEmptyCategoryMessageVisibility(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.SetEmptyCategoryMessageVisibility");
		
		UBPW_BlueprintMenu_C_SetEmptyCategoryMessageVisibility_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnAddCategoryClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_BlueprintMenu_C::OnAddCategoryClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnAddCategoryClicked");
		
		UBPW_BlueprintMenu_C_OnAddCategoryClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.ClearAllEditData
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_BlueprintMenu_C::ClearAllEditData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.ClearAllEditData");
		
		UBPW_BlueprintMenu_C_ClearAllEditData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.SaveAllEditData
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_BlueprintMenu_C::SaveAllEditData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.SaveAllEditData");
		
		UBPW_BlueprintMenu_C_SaveAllEditData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnBlueprintUpdated
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Instigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBlueprintRecord                            BlueprintRecord                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_BlueprintMenu_C::OnBlueprintUpdated(class UObject* Instigator, const struct FBlueprintRecord& BlueprintRecord)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnBlueprintUpdated");
		
		UBPW_BlueprintMenu_C_OnBlueprintUpdated_Params params {};
		params.Instigator = Instigator;
		params.BlueprintRecord = BlueprintRecord;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnSubcategoryUpdated
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget_BuildMenu_SubCategoryButton_C*       Instigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBPW_BlueprintMenu_C::OnSubcategoryUpdated(class UWidget_BuildMenu_SubCategoryButton_C* Instigator, const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnSubcategoryUpdated");
		
		UBPW_BlueprintMenu_C_OnSubcategoryUpdated_Params params {};
		params.Instigator = Instigator;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.UpdateCategoryButton
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget_CategoryButton_C*                    CategoryWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		struct FStruct_BlueprintCategoryData               CategoryData                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBPW_BlueprintMenu_C::UpdateCategoryButton(class UWidget_CategoryButton_C* CategoryWidget, const struct FStruct_BlueprintCategoryData& CategoryData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.UpdateCategoryButton");
		
		UBPW_BlueprintMenu_C_UpdateCategoryButton_Params params {};
		params.CategoryWidget = CategoryWidget;
		params.CategoryData = CategoryData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.CreateDummyCategory
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FStruct_BlueprintCategoryData               CategoryData                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	class UFGBlueprintCategory* UBPW_BlueprintMenu_C::CreateDummyCategory(const struct FStruct_BlueprintCategoryData& CategoryData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.CreateDummyCategory");
		
		UBPW_BlueprintMenu_C_CreateDummyCategory_Params params {};
		params.CategoryData = CategoryData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.CreateDummySubCategory
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	class UFGBlueprintSubCategory* UBPW_BlueprintMenu_C::CreateDummySubCategory(const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.CreateDummySubCategory");
		
		UBPW_BlueprintMenu_C_CreateDummySubCategory_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.Create Dummy Blueprint Descriptor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FBlueprintRecord                            BlueprintRecord                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	class UFGBlueprintDescriptor* UBPW_BlueprintMenu_C::CreateDummyBlueprintDescriptor(const struct FBlueprintRecord& BlueprintRecord)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.Create Dummy Blueprint Descriptor");
		
		UBPW_BlueprintMenu_C_CreateDummyBlueprintDescriptor_Params params {};
		params.BlueprintRecord = BlueprintRecord;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnCategoryUpdated
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGCategory*                                 Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FStruct_BlueprintCategoryData               CategoryData                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBPW_BlueprintMenu_C::OnCategoryUpdated(class UFGCategory* Category, const struct FStruct_BlueprintCategoryData& CategoryData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnCategoryUpdated");
		
		UBPW_BlueprintMenu_C_OnCategoryUpdated_Params params {};
		params.Category = Category;
		params.CategoryData = CategoryData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnCategorySettingClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget_CategoryButton_C*                    Instigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		struct FStruct_BlueprintCategoryData               CategoryData                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBPW_BlueprintMenu_C::OnCategorySettingClicked(class UWidget_CategoryButton_C* Instigator, const struct FStruct_BlueprintCategoryData& CategoryData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnCategorySettingClicked");
		
		UBPW_BlueprintMenu_C_OnCategorySettingClicked_Params params {};
		params.Instigator = Instigator;
		params.CategoryData = CategoryData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnBlueprintSettingClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBPW_BuildMenuBlueprintButton_C*             Instigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BlueprintMenu_C::OnBlueprintSettingClicked(class UBPW_BuildMenuBlueprintButton_C* Instigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnBlueprintSettingClicked");
		
		UBPW_BlueprintMenu_C_OnBlueprintSettingClicked_Params params {};
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.AddCategory
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGCategory*                                 mCategory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	class UWidget_CategoryButton_C* UBPW_BlueprintMenu_C::AddCategory(class UFGCategory* mCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.AddCategory");
		
		UBPW_BlueprintMenu_C_AddCategory_Params params {};
		params.mCategory = mCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.On Subcategory Selected
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     Instigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BlueprintMenu_C::OnSubcategorySelected(class UWidget* Instigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.On Subcategory Selected");
		
		UBPW_BlueprintMenu_C_OnSubcategorySelected_Params params {};
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.CleanUpMovedItems
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_BlueprintMenu_C::CleanUpMovedItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.CleanUpMovedItems");
		
		UBPW_BlueprintMenu_C_CleanUpMovedItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnCategoryHovered
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget_CategoryButton_C*                    Instigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BlueprintMenu_C::OnCategoryHovered(class UWidget_CategoryButton_C* Instigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnCategoryHovered");
		
		UBPW_BlueprintMenu_C_OnCategoryHovered_Params params {};
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnCategoryClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGCategory*                                 Catgeory                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BlueprintMenu_C::OnCategoryClicked(class UFGCategory* Catgeory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnCategoryClicked");
		
		UBPW_BlueprintMenu_C_OnCategoryClicked_Params params {};
		params.Catgeory = Catgeory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.GenerateCategories
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_BlueprintMenu_C::GenerateCategories()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.GenerateCategories");
		
		UBPW_BlueprintMenu_C_GenerateCategories_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.SaveOrganizationDataForCurrentCategoryIfDirty
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_BlueprintMenu_C::SaveOrganizationDataForCurrentCategoryIfDirty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.SaveOrganizationDataForCurrentCategoryIfDirty");
		
		UBPW_BlueprintMenu_C_SaveOrganizationDataForCurrentCategoryIfDirty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnCloseLeaveEditModePrompt
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ConfirmClicked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BlueprintMenu_C::OnCloseLeaveEditModePrompt(bool ConfirmClicked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnCloseLeaveEditModePrompt");
		
		UBPW_BlueprintMenu_C_OnCloseLeaveEditModePrompt_Params params {};
		params.ConfirmClicked = ConfirmClicked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.PromptLeaveEditMode
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsInEditMode                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BlueprintMenu_C::PromptLeaveEditMode(bool* IsInEditMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.PromptLeaveEditMode");
		
		UBPW_BlueprintMenu_C_PromptLeaveEditMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsInEditMode != nullptr)
			*IsInEditMode = params.IsInEditMode;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.SetShowEditMenu
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               mShowEditMenu                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BlueprintMenu_C::SetShowEditMenu(bool mShowEditMenu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.SetShowEditMenu");
		
		UBPW_BlueprintMenu_C_SetShowEditMenu_Params params {};
		params.mShowEditMenu = mShowEditMenu;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnAddBlueprintHereClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget_BuildMenu_SubCategoryButton_C*       SubcategoryButton                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BlueprintMenu_C::OnAddBlueprintHereClicked(class UWidget_BuildMenu_SubCategoryButton_C* SubcategoryButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnAddBlueprintHereClicked");
		
		UBPW_BlueprintMenu_C_OnAddBlueprintHereClicked_Params params {};
		params.SubcategoryButton = SubcategoryButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.Generate Sub Catgeories
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGBlueprintCategory*                        BlueprintCategory                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BlueprintMenu_C::GenerateSubCatgeories(class UFGBlueprintCategory* BlueprintCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.Generate Sub Catgeories");
		
		UBPW_BlueprintMenu_C_GenerateSubCatgeories_Params params {};
		params.BlueprintCategory = BlueprintCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.SetDirectoryMode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               mDirectoryMode                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BlueprintMenu_C::SetDirectoryMode(bool mDirectoryMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.SetDirectoryMode");
		
		UBPW_BlueprintMenu_C_SetDirectoryMode_Params params {};
		params.mDirectoryMode = mDirectoryMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.AddBlueprintDirectoryButton
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget_BuildMenu_SubCategoryButton_C*       SubcategoryButton                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BlueprintMenu_C::AddBlueprintDirectoryButton(class UWidget_BuildMenu_SubCategoryButton_C* SubcategoryButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.AddBlueprintDirectoryButton");
		
		UBPW_BlueprintMenu_C_AddBlueprintDirectoryButton_Params params {};
		params.SubcategoryButton = SubcategoryButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnBlueprintButtonClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGBlueprintDescriptor*                      blueprintDescriptor                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BlueprintMenu_C::OnBlueprintButtonClicked(class UFGBlueprintDescriptor* blueprintDescriptor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnBlueprintButtonClicked");
		
		UBPW_BlueprintMenu_C_OnBlueprintButtonClicked_Params params {};
		params.blueprintDescriptor = blueprintDescriptor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.AddBlueprintButton
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget_BuildMenu_SubCategoryButton_C*       SubcategoryButton                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		class UFGBlueprintDescriptor*                      BlueprintDescritpor                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UBPW_BuildMenuBlueprintButton_C*             BlueprintButton                                            (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BlueprintMenu_C::AddBlueprintButton(class UWidget_BuildMenu_SubCategoryButton_C* SubcategoryButton, class UFGBlueprintDescriptor* BlueprintDescritpor, class UBPW_BuildMenuBlueprintButton_C** BlueprintButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.AddBlueprintButton");
		
		UBPW_BlueprintMenu_C_AddBlueprintButton_Params params {};
		params.SubcategoryButton = SubcategoryButton;
		params.BlueprintDescritpor = BlueprintDescritpor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BlueprintButton != nullptr)
			*BlueprintButton = params.BlueprintButton;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnDrop
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               PointerEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UDragDropOperation*                          Operation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBPW_BlueprintMenu_C::OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnDrop");
		
		UBPW_BlueprintMenu_C_OnDrop_Params params {};
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
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnMouseButtonDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UBPW_BlueprintMenu_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnMouseButtonDown");
		
		UBPW_BlueprintMenu_C_OnMouseButtonDown_Params params {};
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
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnSubcategoryDragged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_BlueprintMenu_C::OnSubcategoryDragged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnSubcategoryDragged");
		
		UBPW_BlueprintMenu_C_OnSubcategoryDragged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnSelect
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     Instigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BlueprintMenu_C::OnSelect(class UWidget* Instigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnSelect");
		
		UBPW_BlueprintMenu_C_OnSelect_Params params {};
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnClearSelection
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_BlueprintMenu_C::OnClearSelection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnClearSelection");
		
		UBPW_BlueprintMenu_C_OnClearSelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnSelectToggle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     Instigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BlueprintMenu_C::OnSelectToggle(class UWidget* Instigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnSelectToggle");
		
		UBPW_BlueprintMenu_C_OnSelectToggle_Params params {};
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.AddSubCategory
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGBlueprintSubCategory*                     SubCategory                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsNew                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UWidget_BuildMenu_SubCategoryButton_C* UBPW_BlueprintMenu_C::AddSubCategory(class UFGBlueprintSubCategory* SubCategory, bool IsNew)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.AddSubCategory");
		
		UBPW_BlueprintMenu_C_AddSubCategory_Params params {};
		params.SubCategory = SubCategory;
		params.IsNew = IsNew;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnSubCategoryRemoved
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_BlueprintMenu_C::OnSubCategoryRemoved()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnSubCategoryRemoved");
		
		UBPW_BlueprintMenu_C_OnSubCategoryRemoved_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnAddSubcategoryClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_BlueprintMenu_C::OnAddSubcategoryClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnAddSubcategoryClicked");
		
		UBPW_BlueprintMenu_C_OnAddSubcategoryClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.UpdateSubcategoryRemoveButtons
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_BlueprintMenu_C::UpdateSubcategoryRemoveButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.UpdateSubcategoryRemoveButtons");
		
		UBPW_BlueprintMenu_C_UpdateSubcategoryRemoveButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnApplyClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_BlueprintMenu_C::OnApplyClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnApplyClicked");
		
		UBPW_BlueprintMenu_C_OnApplyClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnCancelClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_BlueprintMenu_C::OnCancelClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnCancelClicked");
		
		UBPW_BlueprintMenu_C_OnCancelClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnEditClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_BlueprintMenu_C::OnEditClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnEditClicked");
		
		UBPW_BlueprintMenu_C_OnEditClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.SetEditMode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               mEditMode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BlueprintMenu_C::SetEditMode(bool mEditMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.SetEditMode");
		
		UBPW_BlueprintMenu_C_SetEditMode_Params params {};
		params.mEditMode = mEditMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnObjectMoved
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ToIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPanelWidget*                                Parent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BlueprintMenu_C::OnObjectMoved(class UWidget* Payload, int32_t ToIndex, class UPanelWidget* Parent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnObjectMoved");
		
		UBPW_BlueprintMenu_C_OnObjectMoved_Params params {};
		params.Payload = Payload;
		params.ToIndex = ToIndex;
		params.Parent = Parent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_BlueprintMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.Construct");
		
		UBPW_BlueprintMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnObjectDroppedOnSubcategory
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget_BuildMenu_SubCategoryButton_C*       SubcategoryButton                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGeometry                                   MyGemoetry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               PointerEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UDragDropOperation*                          Operation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BlueprintMenu_C::OnObjectDroppedOnSubcategory(class UWidget_BuildMenu_SubCategoryButton_C* SubcategoryButton, const struct FGeometry& MyGemoetry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnObjectDroppedOnSubcategory");
		
		UBPW_BlueprintMenu_C_OnObjectDroppedOnSubcategory_Params params {};
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
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.BndEvt__BPW_BlueprintMenu_BPW_BuildMenu_Browser_K2Node_ComponentBoundEvent_1_OnObjectDroppedInSubcategoryContainer__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               PointerEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UDragDropOperation*                          Operation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BlueprintMenu_C::BndEvt__BPW_BlueprintMenu_BPW_BuildMenu_Browser_K2Node_ComponentBoundEvent_1_OnObjectDroppedInSubcategoryContainer__DelegateSignature(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.BndEvt__BPW_BlueprintMenu_BPW_BuildMenu_Browser_K2Node_ComponentBoundEvent_1_OnObjectDroppedInSubcategoryContainer__DelegateSignature");
		
		UBPW_BlueprintMenu_C_BndEvt__BPW_BlueprintMenu_BPW_BuildMenu_Browser_K2Node_ComponentBoundEvent_1_OnObjectDroppedInSubcategoryContainer__DelegateSignature_Params params {};
		params.MyGeometry = MyGeometry;
		params.PointerEvent = PointerEvent;
		params.Operation = Operation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.BndEvt__BPW_BlueprintMenu_BPW_BuildMenu_Browser_K2Node_ComponentBoundEvent_0_OnSearchTextChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_BlueprintMenu_C::BndEvt__BPW_BlueprintMenu_BPW_BuildMenu_Browser_K2Node_ComponentBoundEvent_0_OnSearchTextChanged__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.BndEvt__BPW_BlueprintMenu_BPW_BuildMenu_Browser_K2Node_ComponentBoundEvent_0_OnSearchTextChanged__DelegateSignature");
		
		UBPW_BlueprintMenu_C_BndEvt__BPW_BlueprintMenu_BPW_BuildMenu_Browser_K2Node_ComponentBoundEvent_0_OnSearchTextChanged__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.BndEvt__BPW_BlueprintMenu_BPW_BuildMenu_Browser_K2Node_ComponentBoundEvent_3_OnSearchComittedEnter__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     FirstResultWidget                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BlueprintMenu_C::BndEvt__BPW_BlueprintMenu_BPW_BuildMenu_Browser_K2Node_ComponentBoundEvent_3_OnSearchComittedEnter__DelegateSignature(class UWidget* FirstResultWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.BndEvt__BPW_BlueprintMenu_BPW_BuildMenu_Browser_K2Node_ComponentBoundEvent_3_OnSearchComittedEnter__DelegateSignature");
		
		UBPW_BlueprintMenu_C_BndEvt__BPW_BlueprintMenu_BPW_BuildMenu_Browser_K2Node_ComponentBoundEvent_3_OnSearchComittedEnter__DelegateSignature_Params params {};
		params.FirstResultWidget = FirstResultWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.BndEvt__BPW_BlueprintMenu_BPW_BuildMenu_Browser_K2Node_ComponentBoundEvent_2_OnObjectDroppedInCategoryContainer__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               PointerEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UDragDropOperation*                          Operation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BlueprintMenu_C::BndEvt__BPW_BlueprintMenu_BPW_BuildMenu_Browser_K2Node_ComponentBoundEvent_2_OnObjectDroppedInCategoryContainer__DelegateSignature(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.BndEvt__BPW_BlueprintMenu_BPW_BuildMenu_Browser_K2Node_ComponentBoundEvent_2_OnObjectDroppedInCategoryContainer__DelegateSignature");
		
		UBPW_BlueprintMenu_C_BndEvt__BPW_BlueprintMenu_BPW_BuildMenu_Browser_K2Node_ComponentBoundEvent_2_OnObjectDroppedInCategoryContainer__DelegateSignature_Params params {};
		params.MyGeometry = MyGeometry;
		params.PointerEvent = PointerEvent;
		params.Operation = Operation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.Testest
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_BlueprintMenu_C::Testest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.Testest");
		
		UBPW_BlueprintMenu_C_Testest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.ExecuteUbergraph_BPW_BlueprintMenu
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BlueprintMenu_C::ExecuteUbergraph_BPW_BlueprintMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.ExecuteUbergraph_BPW_BlueprintMenu");
		
		UBPW_BlueprintMenu_C_ExecuteUbergraph_BPW_BlueprintMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnBlueprintButtonUnhovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_BlueprintMenu_C::OnBlueprintButtonUnhovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnBlueprintButtonUnhovered__DelegateSignature");
		
		UBPW_BlueprintMenu_C_OnBlueprintButtonUnhovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnBlueprintButtonHovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGBlueprintDescriptor*                      blueprintDescriptor                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BlueprintMenu_C::OnBlueprintButtonHovered__DelegateSignature(class UFGBlueprintDescriptor* blueprintDescriptor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnBlueprintButtonHovered__DelegateSignature");
		
		UBPW_BlueprintMenu_C_OnBlueprintButtonHovered__DelegateSignature_Params params {};
		params.blueprintDescriptor = blueprintDescriptor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnPopupCreated__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     PopupWidget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BlueprintMenu_C::OnPopupCreated__DelegateSignature(class UWidget* PopupWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnPopupCreated__DelegateSignature");
		
		UBPW_BlueprintMenu_C_OnPopupCreated__DelegateSignature_Params params {};
		params.PopupWidget = PopupWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnNewDirectoryDataUpdated__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FStruct_BlueprintDirectoryData              DirectoryData                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BlueprintMenu_C::OnNewDirectoryDataUpdated__DelegateSignature(const struct FStruct_BlueprintDirectoryData& DirectoryData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnNewDirectoryDataUpdated__DelegateSignature");
		
		UBPW_BlueprintMenu_C_OnNewDirectoryDataUpdated__DelegateSignature_Params params {};
		params.DirectoryData = DirectoryData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnCloseEditModePrompt__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               StayInEditMode                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BlueprintMenu_C::OnCloseEditModePrompt__DelegateSignature(bool StayInEditMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnCloseEditModePrompt__DelegateSignature");
		
		UBPW_BlueprintMenu_C_OnCloseEditModePrompt__DelegateSignature_Params params {};
		params.StayInEditMode = StayInEditMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnBlueprintClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGBlueprintDescriptor*                      blueprintDescriptor                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BlueprintMenu_C::OnBlueprintClicked__DelegateSignature(class UFGBlueprintDescriptor* blueprintDescriptor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnBlueprintClicked__DelegateSignature");
		
		UBPW_BlueprintMenu_C_OnBlueprintClicked__DelegateSignature_Params params {};
		params.blueprintDescriptor = blueprintDescriptor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_BlueprintMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_BlueprintMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_BlueprintMenu.BPW_BlueprintMenu_C");
		return ptr;
	}

}


