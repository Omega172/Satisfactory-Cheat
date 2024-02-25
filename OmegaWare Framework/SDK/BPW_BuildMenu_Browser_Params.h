#pragma once

/**
 * Name: Satisfactory
 * Version: Early_Access_CL#273254
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
	 * Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.MouseMoveChecker
	 */
	struct UBPW_BuildMenu_Browser_C_MouseMoveChecker_Params
	{	};

	/**
	 * Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.SetSearchBarVisibility
	 */
	struct UBPW_BuildMenu_Browser_C_SetSearchBarVisibility_Params
	{
	public:
		bool                                                       mShowSearchbar;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.SetBlueprintRecipe
	 */
	struct UBPW_BuildMenu_Browser_C_SetBlueprintRecipe_Params
	{
	public:
		class UFGBlueprintDescriptor*                              blueprintDescriptor;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FBlueprintRecord                                    BlueprintRecord;                                         // 0x0008(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.Remove and Release All Childs from Category Container
	 */
	struct UBPW_BuildMenu_Browser_C_RemoveandReleaseAllChildsfromCategoryContainer_Params
	{	};

	/**
	 * Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.ScrollToEnd
	 */
	struct UBPW_BuildMenu_Browser_C_ScrollToEnd_Params
	{	};

	/**
	 * Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.SetSubCategoryBottomOffset
	 */
	struct UBPW_BuildMenu_Browser_C_SetSubCategoryBottomOffset_Params
	{
	public:
		double                                                     mSubCategorySpacer;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.ScrollToTop
	 */
	struct UBPW_BuildMenu_Browser_C_ScrollToTop_Params
	{	};

	/**
	 * Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.GetScrollPosition
	 */
	struct UBPW_BuildMenu_Browser_C_GetScrollPosition_Params
	{
	public:
		double                                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.Scroll To Position
	 */
	struct UBPW_BuildMenu_Browser_C_ScrollToPosition_Params
	{
	public:
		bool                                                       AnimateScroll;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KS25[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     padding;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.SetCustomisationRecipe
	 */
	struct UBPW_BuildMenu_Browser_C_SetCustomisationRecipe_Params
	{
	public:
		class UClass*                                              CustomisationRecipe;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.SetSearchHint
	 */
	struct UBPW_BuildMenu_Browser_C_SetSearchHint_Params
	{
	public:
		class FText                                                mSearchText;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.AnimateInfoBoxIcon
	 */
	struct UBPW_BuildMenu_Browser_C_AnimateInfoBoxIcon_Params
	{	};

	/**
	 * Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.SetInfoBoxCost
	 */
	struct UBPW_BuildMenu_Browser_C_SetInfoBoxCost_Params
	{
	public:
		TArray<struct FItemAmount>                                 cost;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       TakeFromCentralStorage;                                  // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.SetCustomIconWidget
	 */
	struct UBPW_BuildMenu_Browser_C_SetCustomIconWidget_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.SetInfoBoxIcon
	 */
	struct UBPW_BuildMenu_Browser_C_SetInfoBoxIcon_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.SetInfoBoxDescription
	 */
	struct UBPW_BuildMenu_Browser_C_SetInfoBoxDescription_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.SetInfoBoxName
	 */
	struct UBPW_BuildMenu_Browser_C_SetInfoBoxName_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.SetVisibleInfoboxElements
	 */
	struct UBPW_BuildMenu_Browser_C_SetVisibleInfoboxElements_Params
	{
	public:
		bool                                                       Name;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Descripction;                                            // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       StatsAndCost;                                            // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.ClearCategories
	 */
	struct UBPW_BuildMenu_Browser_C_ClearCategories_Params
	{	};

	/**
	 * Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.SetInfoBoxVisibility
	 */
	struct UBPW_BuildMenu_Browser_C_SetInfoBoxVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.Set Build Recipe
	 */
	struct UBPW_BuildMenu_Browser_C_SetBuildRecipe_Params
	{
	public:
		class UClass*                                              recipe;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		TArray<class UClass*>                                      AvailableRecipes;                                        // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class AFGBuildGun*                                         BuildGun;                                                // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.AddCategory
	 */
	struct UBPW_BuildMenu_Browser_C_AddCategory_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.SetIsMouseBlockerActive
	 */
	struct UBPW_BuildMenu_Browser_C_SetIsMouseBlockerActive_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.IsSearchHovered
	 */
	struct UBPW_BuildMenu_Browser_C_IsSearchHovered_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AMFZ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.GetSearchResultAt
	 */
	struct UBPW_BuildMenu_Browser_C_GetSearchResultAt_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OWMS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.AddSearchResult
	 */
	struct UBPW_BuildMenu_Browser_C_AddSearchResult_Params
	{
	public:
		class UWidget*                                             Content;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.InitSearch
	 */
	struct UBPW_BuildMenu_Browser_C_InitSearch_Params
	{	};

	/**
	 * Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.ClearAndHideSearchResults
	 */
	struct UBPW_BuildMenu_Browser_C_ClearAndHideSearchResults_Params
	{	};

	/**
	 * Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.Remove and Release All Childs from Subcategory Container
	 */
	struct UBPW_BuildMenu_Browser_C_RemoveandReleaseAllChildsfromSubcategoryContainer_Params
	{	};

	/**
	 * Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.AddSubcategoryButton
	 */
	struct UBPW_BuildMenu_Browser_C_AddSubcategoryButton_Params
	{
	public:
		class UWidget*                                             SubcategoryWidget;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class UVerticalBoxSlot*                                    ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.SetSearchText
	 */
	struct UBPW_BuildMenu_Browser_C_SetSearchText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.ClearSearchText
	 */
	struct UBPW_BuildMenu_Browser_C_ClearSearchText_Params
	{	};

	/**
	 * Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.SetUserFocusToSearch
	 */
	struct UBPW_BuildMenu_Browser_C_SetUserFocusToSearch_Params
	{	};

	/**
	 * Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.PreConstruct
	 */
	struct UBPW_BuildMenu_Browser_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.BndEvt__mSearchBar_K2Node_ComponentBoundEvent_0_OnTextChanged__DelegateSignature
	 */
	struct UBPW_BuildMenu_Browser_C_BndEvt__mSearchBar_K2Node_ComponentBoundEvent_0_OnTextChanged__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.BndEvt__mSearchBar_K2Node_ComponentBoundEvent_1_OnTextComitted__DelegateSignature
	 */
	struct UBPW_BuildMenu_Browser_C_BndEvt__mSearchBar_K2Node_ComponentBoundEvent_1_OnTextComitted__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.BndEvt__mSearchBar_K2Node_ComponentBoundEvent_2_OnInputBoxFocusReceived__DelegateSignature
	 */
	struct UBPW_BuildMenu_Browser_C_BndEvt__mSearchBar_K2Node_ComponentBoundEvent_2_OnInputBoxFocusReceived__DelegateSignature_Params
	{
	public:
		struct FFocusEvent                                         FocusEvent;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.CheckSearchResultHover
	 */
	struct UBPW_BuildMenu_Browser_C_CheckSearchResultHover_Params
	{	};

	/**
	 * Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.BndEvt__BPW_BuildMenu_Browser_Widget_Scrollbox_K2Node_ComponentBoundEvent_3_OnObjectDropped__DelegateSignature
	 */
	struct UBPW_BuildMenu_Browser_C_BndEvt__BPW_BuildMenu_Browser_Widget_Scrollbox_K2Node_ComponentBoundEvent_3_OnObjectDropped__DelegateSignature_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0038(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UDragDropOperation*                                  Operation;                                               // 0x00B0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.BndEvt__BPW_BuildMenu_Browser_mCategoryDropArea_K2Node_ComponentBoundEvent_4_OnObjectDropped__DelegateSignature
	 */
	struct UBPW_BuildMenu_Browser_C_BndEvt__BPW_BuildMenu_Browser_mCategoryDropArea_K2Node_ComponentBoundEvent_4_OnObjectDropped__DelegateSignature_Params
	{
	public:
		class UBPW_GenericDropArea_C*                              Instigator;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		struct FGeometry                                           MyGeometry;                                              // 0x0008(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0040(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UDragDropOperation*                                  Operation;                                               // 0x00B8(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.ExecuteUbergraph_BPW_BuildMenu_Browser
	 */
	struct UBPW_BuildMenu_Browser_C_ExecuteUbergraph_BPW_BuildMenu_Browser_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.OnObjectDroppedInCategoryContainer__DelegateSignature
	 */
	struct UBPW_BuildMenu_Browser_C_OnObjectDroppedInCategoryContainer__DelegateSignature_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0038(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UDragDropOperation*                                  Operation;                                               // 0x00B0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.OnObjectDroppedInSubcategoryContainer__DelegateSignature
	 */
	struct UBPW_BuildMenu_Browser_C_OnObjectDroppedInSubcategoryContainer__DelegateSignature_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0038(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UDragDropOperation*                                  Operation;                                               // 0x00B0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.OnSearchComittedEnter__DelegateSignature
	 */
	struct UBPW_BuildMenu_Browser_C_OnSearchComittedEnter__DelegateSignature_Params
	{
	public:
		class UWidget*                                             FirstResultWidget;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.OnDeselectFirstSearchResultIfOtherOptionIsHovered__DelegateSignature
	 */
	struct UBPW_BuildMenu_Browser_C_OnDeselectFirstSearchResultIfOtherOptionIsHovered__DelegateSignature_Params
	{
	public:
		class UWidget*                                             FirstResultWidget;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.OnSearchInputBoxFocusReceived__DelegateSignature
	 */
	struct UBPW_BuildMenu_Browser_C_OnSearchInputBoxFocusReceived__DelegateSignature_Params
	{
	public:
		struct FFocusEvent                                         FocusEvent;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.OnSearchTextComitted__DelegateSignature
	 */
	struct UBPW_BuildMenu_Browser_C_OnSearchTextComitted__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		ETextCommit                                                ComittMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.OnSearchTextChanged__DelegateSignature
	 */
	struct UBPW_BuildMenu_Browser_C_OnSearchTextChanged__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
