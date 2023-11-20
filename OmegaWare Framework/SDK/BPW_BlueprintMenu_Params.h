#pragma once

/**
 * Name: Satisfactory
 * Version: Early_Access_CL#264901
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.LeaveDirectoryModeIfBlueprintNameExists
	 */
	struct UBPW_BlueprintMenu_C_LeaveDirectoryModeIfBlueprintNameExists_Params
	{
	public:
		struct FBlueprintRecord                                    BlueprintRecord;                                         // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.CheckIfBlueprintNameExistsInCurrentCategory
	 */
	struct UBPW_BlueprintMenu_C_CheckIfBlueprintNameExistsInCurrentCategory_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       BlueprintExists;                                         // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_O4M4[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UFGBlueprintDescriptor*                              Descriptor;                                              // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UFGBlueprintSubCategory*                             SubCategory;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UFGBlueprintCategory*                                Category;                                                // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.MoveToSubcategory
	 */
	struct UBPW_BlueprintMenu_C_MoveToSubcategory_Params
	{
	public:
		class UFGBlueprintCategory*                                Category;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UFGBlueprintSubCategory*                             SubCategory;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnBlueprintDragBegin
	 */
	struct UBPW_BlueprintMenu_C_OnBlueprintDragBegin_Params
	{
	public:
		class UBPW_BuildMenuBlueprintButton_C*                     Instigator;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class UBPW_Blueprint_DragAndDropRep_C*                     DragAndDropRep;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnRemoveCategoryClicked
	 */
	struct UBPW_BlueprintMenu_C_OnRemoveCategoryClicked_Params
	{	};

	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.IsCategoryEmpty
	 */
	struct UBPW_BlueprintMenu_C_IsCategoryEmpty_Params
	{
	public:
		class UFGCategory*                                         Category;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1XYC[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnSearch
	 */
	struct UBPW_BlueprintMenu_C_OnSearch_Params
	{
	public:
		class FText                                                SearchText;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.UpdateDirectoryCategory
	 */
	struct UBPW_BlueprintMenu_C_UpdateDirectoryCategory_Params
	{
	public:
		bool                                                       SetFromCurrentCategory;                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SGS6[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.HighlightCurrentCategoryButton
	 */
	struct UBPW_BlueprintMenu_C_HighlightCurrentCategoryButton_Params
	{	};

	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.RemoveCurrentPopup
	 */
	struct UBPW_BlueprintMenu_C_RemoveCurrentPopup_Params
	{	};

	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnPopupRemoved
	 */
	struct UBPW_BlueprintMenu_C_OnPopupRemoved_Params
	{	};

	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.AddPopup
	 */
	struct UBPW_BlueprintMenu_C_AddPopup_Params
	{
	public:
		class UWidget*                                             mPopupWidget;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnRemoveBlueprintsPopupClosed
	 */
	struct UBPW_BlueprintMenu_C_OnRemoveBlueprintsPopupClosed_Params
	{
	public:
		bool                                                       ConfirmClicked;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnBlueprintRemoved
	 */
	struct UBPW_BlueprintMenu_C_OnBlueprintRemoved_Params
	{
	public:
		class UFGBlueprintDescriptor*                              blueprintDescriptor;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnBlueprintUnhovered
	 */
	struct UBPW_BlueprintMenu_C_OnBlueprintUnhovered_Params
	{	};

	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.GetLatestBlueprintRecord
	 */
	struct UBPW_BlueprintMenu_C_GetLatestBlueprintRecord_Params
	{
	public:
		class UFGBlueprintDescriptor*                              blueprintDescriptor;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FBlueprintRecord                                    BlueprintRecord;                                         // 0x0008(0x0050)  (Parm, OutParm)
	};

	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.AddOrUpdateNewBlueprint
	 */
	struct UBPW_BlueprintMenu_C_AddOrUpdateNewBlueprint_Params
	{
	public:
		struct FBlueprintRecord                                    BlueprintRecord;                                         // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.SetEditBarVisibility
	 */
	struct UBPW_BlueprintMenu_C_SetEditBarVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnObjectDroppedOnEmptySpace
	 */
	struct UBPW_BlueprintMenu_C_OnObjectDroppedOnEmptySpace_Params
	{
	public:
		class UDragDropOperation*                                  Operation;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnObjectDroppedOnCategory
	 */
	struct UBPW_BlueprintMenu_C_OnObjectDroppedOnCategory_Params
	{
	public:
		class UWidget_CategoryButton_C*                            Instigator;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		struct FGeometry                                           MyGeometry;                                              // 0x0008(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0040(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UDragDropOperation*                                  Operation;                                               // 0x00B8(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnBlueprintHovered
	 */
	struct UBPW_BlueprintMenu_C_OnBlueprintHovered_Params
	{
	public:
		class UFGBlueprintDescriptor*                              blueprintDescriptor;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnCategoryRemoved
	 */
	struct UBPW_BlueprintMenu_C_OnCategoryRemoved_Params
	{
	public:
		class UFGCategory*                                         Category;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.SetEmptyCategoryMessageVisibility
	 */
	struct UBPW_BlueprintMenu_C_SetEmptyCategoryMessageVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnAddCategoryClicked
	 */
	struct UBPW_BlueprintMenu_C_OnAddCategoryClicked_Params
	{	};

	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.ClearAllEditData
	 */
	struct UBPW_BlueprintMenu_C_ClearAllEditData_Params
	{	};

	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.SaveAllEditData
	 */
	struct UBPW_BlueprintMenu_C_SaveAllEditData_Params
	{	};

	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnBlueprintUpdated
	 */
	struct UBPW_BlueprintMenu_C_OnBlueprintUpdated_Params
	{
	public:
		class UObject*                                             Instigator;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FBlueprintRecord                                    BlueprintRecord;                                         // 0x0008(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnSubcategoryUpdated
	 */
	struct UBPW_BlueprintMenu_C_OnSubcategoryUpdated_Params
	{
	public:
		class UWidget_BuildMenu_SubCategoryButton_C*               Instigator;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class FString                                              Name;                                                    // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.UpdateCategoryButton
	 */
	struct UBPW_BlueprintMenu_C_UpdateCategoryButton_Params
	{
	public:
		class UWidget_CategoryButton_C*                            CategoryWidget;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		struct FStruct_BlueprintCategoryData                       CategoryData;                                            // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.CreateDummyCategory
	 */
	struct UBPW_BlueprintMenu_C_CreateDummyCategory_Params
	{
	public:
		struct FStruct_BlueprintCategoryData                       CategoryData;                                            // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UFGBlueprintCategory*                                ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.CreateDummySubCategory
	 */
	struct UBPW_BlueprintMenu_C_CreateDummySubCategory_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UFGBlueprintSubCategory*                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.Create Dummy Blueprint Descriptor
	 */
	struct UBPW_BlueprintMenu_C_CreateDummyBlueprintDescriptor_Params
	{
	public:
		struct FBlueprintRecord                                    BlueprintRecord;                                         // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UFGBlueprintDescriptor*                              ReturnValue;                                             // 0x0050(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnCategoryUpdated
	 */
	struct UBPW_BlueprintMenu_C_OnCategoryUpdated_Params
	{
	public:
		class UFGCategory*                                         Category;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FStruct_BlueprintCategoryData                       CategoryData;                                            // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnCategorySettingClicked
	 */
	struct UBPW_BlueprintMenu_C_OnCategorySettingClicked_Params
	{
	public:
		class UWidget_CategoryButton_C*                            Instigator;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		struct FStruct_BlueprintCategoryData                       CategoryData;                                            // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnBlueprintSettingClicked
	 */
	struct UBPW_BlueprintMenu_C_OnBlueprintSettingClicked_Params
	{
	public:
		class UBPW_BuildMenuBlueprintButton_C*                     Instigator;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.AddCategory
	 */
	struct UBPW_BlueprintMenu_C_AddCategory_Params
	{
	public:
		class UFGCategory*                                         mCategory;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UWidget_CategoryButton_C*                            ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.On Subcategory Selected
	 */
	struct UBPW_BlueprintMenu_C_OnSubcategorySelected_Params
	{
	public:
		class UWidget*                                             Instigator;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.CleanUpMovedItems
	 */
	struct UBPW_BlueprintMenu_C_CleanUpMovedItems_Params
	{	};

	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnCategoryHovered
	 */
	struct UBPW_BlueprintMenu_C_OnCategoryHovered_Params
	{
	public:
		class UWidget_CategoryButton_C*                            Instigator;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnCategoryClicked
	 */
	struct UBPW_BlueprintMenu_C_OnCategoryClicked_Params
	{
	public:
		class UFGCategory*                                         Catgeory;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.GenerateCategories
	 */
	struct UBPW_BlueprintMenu_C_GenerateCategories_Params
	{	};

	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.SaveOrganizationDataForCurrentCategoryIfDirty
	 */
	struct UBPW_BlueprintMenu_C_SaveOrganizationDataForCurrentCategoryIfDirty_Params
	{	};

	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnCloseLeaveEditModePrompt
	 */
	struct UBPW_BlueprintMenu_C_OnCloseLeaveEditModePrompt_Params
	{
	public:
		bool                                                       ConfirmClicked;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.PromptLeaveEditMode
	 */
	struct UBPW_BlueprintMenu_C_PromptLeaveEditMode_Params
	{
	public:
		bool                                                       IsInEditMode;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.SetShowEditMenu
	 */
	struct UBPW_BlueprintMenu_C_SetShowEditMenu_Params
	{
	public:
		bool                                                       mShowEditMenu;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnAddBlueprintHereClicked
	 */
	struct UBPW_BlueprintMenu_C_OnAddBlueprintHereClicked_Params
	{
	public:
		class UWidget_BuildMenu_SubCategoryButton_C*               SubcategoryButton;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.Generate Sub Catgeories
	 */
	struct UBPW_BlueprintMenu_C_GenerateSubCatgeories_Params
	{
	public:
		class UFGBlueprintCategory*                                BlueprintCategory;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.SetDirectoryMode
	 */
	struct UBPW_BlueprintMenu_C_SetDirectoryMode_Params
	{
	public:
		bool                                                       mDirectoryMode;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0HEF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.AddBlueprintDirectoryButton
	 */
	struct UBPW_BlueprintMenu_C_AddBlueprintDirectoryButton_Params
	{
	public:
		class UWidget_BuildMenu_SubCategoryButton_C*               SubcategoryButton;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnBlueprintButtonClicked
	 */
	struct UBPW_BlueprintMenu_C_OnBlueprintButtonClicked_Params
	{
	public:
		class UFGBlueprintDescriptor*                              blueprintDescriptor;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.AddBlueprintButton
	 */
	struct UBPW_BlueprintMenu_C_AddBlueprintButton_Params
	{
	public:
		class UWidget_BuildMenu_SubCategoryButton_C*               SubcategoryButton;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class UFGBlueprintDescriptor*                              BlueprintDescritpor;                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UBPW_BuildMenuBlueprintButton_C*                     BlueprintButton;                                         // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnDrop
	 */
	struct UBPW_BlueprintMenu_C_OnDrop_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0038(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UDragDropOperation*                                  Operation;                                               // 0x00B0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x00B8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5OBL[0x7];                                   // 0x00B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnMouseButtonDown
	 */
	struct UBPW_BlueprintMenu_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnSubcategoryDragged
	 */
	struct UBPW_BlueprintMenu_C_OnSubcategoryDragged_Params
	{	};

	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnSelect
	 */
	struct UBPW_BlueprintMenu_C_OnSelect_Params
	{
	public:
		class UWidget*                                             Instigator;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnClearSelection
	 */
	struct UBPW_BlueprintMenu_C_OnClearSelection_Params
	{	};

	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnSelectToggle
	 */
	struct UBPW_BlueprintMenu_C_OnSelectToggle_Params
	{
	public:
		class UWidget*                                             Instigator;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.AddSubCategory
	 */
	struct UBPW_BlueprintMenu_C_AddSubCategory_Params
	{
	public:
		class UFGBlueprintSubCategory*                             SubCategory;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsNew;                                                   // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_L65V[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget_BuildMenu_SubCategoryButton_C*               ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnSubCategoryRemoved
	 */
	struct UBPW_BlueprintMenu_C_OnSubCategoryRemoved_Params
	{	};

	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnAddSubcategoryClicked
	 */
	struct UBPW_BlueprintMenu_C_OnAddSubcategoryClicked_Params
	{	};

	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.UpdateSubcategoryRemoveButtons
	 */
	struct UBPW_BlueprintMenu_C_UpdateSubcategoryRemoveButtons_Params
	{	};

	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnApplyClicked
	 */
	struct UBPW_BlueprintMenu_C_OnApplyClicked_Params
	{	};

	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnCancelClicked
	 */
	struct UBPW_BlueprintMenu_C_OnCancelClicked_Params
	{	};

	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnEditClicked
	 */
	struct UBPW_BlueprintMenu_C_OnEditClicked_Params
	{	};

	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.SetEditMode
	 */
	struct UBPW_BlueprintMenu_C_SetEditMode_Params
	{
	public:
		bool                                                       mEditMode;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnObjectMoved
	 */
	struct UBPW_BlueprintMenu_C_OnObjectMoved_Params
	{
	public:
		class UWidget*                                             Payload;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ToIndex;                                                 // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RTW3[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPanelWidget*                                        Parent;                                                  // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.Construct
	 */
	struct UBPW_BlueprintMenu_C_Construct_Params
	{	};

	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnObjectDroppedOnSubcategory
	 */
	struct UBPW_BlueprintMenu_C_OnObjectDroppedOnSubcategory_Params
	{
	public:
		class UWidget_BuildMenu_SubCategoryButton_C*               SubcategoryButton;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		struct FGeometry                                           MyGemoetry;                                              // 0x0008(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0040(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UDragDropOperation*                                  Operation;                                               // 0x00B8(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.BndEvt__BPW_BlueprintMenu_BPW_BuildMenu_Browser_K2Node_ComponentBoundEvent_1_OnObjectDroppedInSubcategoryContainer__DelegateSignature
	 */
	struct UBPW_BlueprintMenu_C_BndEvt__BPW_BlueprintMenu_BPW_BuildMenu_Browser_K2Node_ComponentBoundEvent_1_OnObjectDroppedInSubcategoryContainer__DelegateSignature_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0038(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UDragDropOperation*                                  Operation;                                               // 0x00B0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.BndEvt__BPW_BlueprintMenu_BPW_BuildMenu_Browser_K2Node_ComponentBoundEvent_0_OnSearchTextChanged__DelegateSignature
	 */
	struct UBPW_BlueprintMenu_C_BndEvt__BPW_BlueprintMenu_BPW_BuildMenu_Browser_K2Node_ComponentBoundEvent_0_OnSearchTextChanged__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.BndEvt__BPW_BlueprintMenu_BPW_BuildMenu_Browser_K2Node_ComponentBoundEvent_3_OnSearchComittedEnter__DelegateSignature
	 */
	struct UBPW_BlueprintMenu_C_BndEvt__BPW_BlueprintMenu_BPW_BuildMenu_Browser_K2Node_ComponentBoundEvent_3_OnSearchComittedEnter__DelegateSignature_Params
	{
	public:
		class UWidget*                                             FirstResultWidget;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.BndEvt__BPW_BlueprintMenu_BPW_BuildMenu_Browser_K2Node_ComponentBoundEvent_2_OnObjectDroppedInCategoryContainer__DelegateSignature
	 */
	struct UBPW_BlueprintMenu_C_BndEvt__BPW_BlueprintMenu_BPW_BuildMenu_Browser_K2Node_ComponentBoundEvent_2_OnObjectDroppedInCategoryContainer__DelegateSignature_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0038(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UDragDropOperation*                                  Operation;                                               // 0x00B0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.Testest
	 */
	struct UBPW_BlueprintMenu_C_Testest_Params
	{	};

	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.ExecuteUbergraph_BPW_BlueprintMenu
	 */
	struct UBPW_BlueprintMenu_C_ExecuteUbergraph_BPW_BlueprintMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnBlueprintButtonUnhovered__DelegateSignature
	 */
	struct UBPW_BlueprintMenu_C_OnBlueprintButtonUnhovered__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnBlueprintButtonHovered__DelegateSignature
	 */
	struct UBPW_BlueprintMenu_C_OnBlueprintButtonHovered__DelegateSignature_Params
	{
	public:
		class UFGBlueprintDescriptor*                              blueprintDescriptor;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnPopupCreated__DelegateSignature
	 */
	struct UBPW_BlueprintMenu_C_OnPopupCreated__DelegateSignature_Params
	{
	public:
		class UWidget*                                             PopupWidget;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnNewDirectoryDataUpdated__DelegateSignature
	 */
	struct UBPW_BlueprintMenu_C_OnNewDirectoryDataUpdated__DelegateSignature_Params
	{
	public:
		struct FStruct_BlueprintDirectoryData                      DirectoryData;                                           // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnCloseEditModePrompt__DelegateSignature
	 */
	struct UBPW_BlueprintMenu_C_OnCloseEditModePrompt__DelegateSignature_Params
	{
	public:
		bool                                                       StayInEditMode;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BlueprintMenu.BPW_BlueprintMenu_C.OnBlueprintClicked__DelegateSignature
	 */
	struct UBPW_BlueprintMenu_C_OnBlueprintClicked__DelegateSignature_Params
	{
	public:
		class UFGBlueprintDescriptor*                              blueprintDescriptor;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
