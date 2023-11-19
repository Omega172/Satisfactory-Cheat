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
	 * Function Widget_Codex_Container.Widget_Codex_Container_C.UpdateDirectory
	 */
	struct UWidget_Codex_Container_C_UpdateDirectory_Params
	{
	public:
		class UClass*                                              itemDescriptor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Codex_Container.Widget_Codex_Container_C.GetClassCategory
	 */
	struct UWidget_Codex_Container_C_GetClassCategory_Params
	{
	public:
		class UClass*                                              itemDescriptor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		TArray<class UClass*>                                      Category;                                                // 0x0008(0x0010)  (Parm, OutParm)
		int32_t                                                    CategoryIndex;                                           // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Codex_Container.Widget_Codex_Container_C.PopulateSearchResults
	 */
	struct UWidget_Codex_Container_C_PopulateSearchResults_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Widget_Codex_Container.Widget_Codex_Container_C.UpdateItemInfo
	 */
	struct UWidget_Codex_Container_C_UpdateItemInfo_Params
	{
	public:
		class UClass*                                              product;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       UpdateDirectory;                                         // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Codex_Container.Widget_Codex_Container_C.SetAllItemsAndBuildings
	 */
	struct UWidget_Codex_Container_C_SetAllItemsAndBuildings_Params
	{	};

	/**
	 * Function Widget_Codex_Container.Widget_Codex_Container_C.GenerateReceipes
	 */
	struct UWidget_Codex_Container_C_GenerateReceipes_Params
	{
	public:
		TArray<class UClass*>                                      InRecipes;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Widget_Codex_Container.Widget_Codex_Container_C.SelectButtonWithMessage
	 */
	struct UWidget_Codex_Container_C_SelectButtonWithMessage_Params
	{
	public:
		class UClass*                                              InMessage;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Codex_Container.Widget_Codex_Container_C.CheckShouldOpenMessage
	 */
	struct UWidget_Codex_Container_C_CheckShouldOpenMessage_Params
	{	};

	/**
	 * Function Widget_Codex_Container.Widget_Codex_Container_C.PopulateList
	 */
	struct UWidget_Codex_Container_C_PopulateList_Params
	{	};

	/**
	 * Function Widget_Codex_Container.Widget_Codex_Container_C.GetActiveTabFeedback
	 */
	struct UWidget_Codex_Container_C_GetActiveTabFeedback_Params
	{	};

	/**
	 * Function Widget_Codex_Container.Widget_Codex_Container_C.GetMessageVisiblity
	 */
	struct UWidget_Codex_Container_C_GetMessageVisiblity_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Codex_Container.Widget_Codex_Container_C.Construct
	 */
	struct UWidget_Codex_Container_C_Construct_Params
	{	};

	/**
	 * Function Widget_Codex_Container.Widget_Codex_Container_C.CloseCodex
	 */
	struct UWidget_Codex_Container_C_CloseCodex_Params
	{	};

	/**
	 * Function Widget_Codex_Container.Widget_Codex_Container_C.MarkAllAsRead
	 */
	struct UWidget_Codex_Container_C_MarkAllAsRead_Params
	{	};

	/**
	 * Function Widget_Codex_Container.Widget_Codex_Container_C.OnRecipeButtonClicked
	 */
	struct UWidget_Codex_Container_C_OnRecipeButtonClicked_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_179U[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget_ListButton_C*                                ListButton;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Codex_Container.Widget_Codex_Container_C.BndEvt__mSearchBar_K2Node_ComponentBoundEvent_1_OnTextChanged__DelegateSignature
	 */
	struct UWidget_Codex_Container_C_BndEvt__mSearchBar_K2Node_ComponentBoundEvent_1_OnTextChanged__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Widget_Codex_Container.Widget_Codex_Container_C.OnSearchResultClicked
	 */
	struct UWidget_Codex_Container_C_OnSearchResultClicked_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QRLY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget_ListButton_C*                                ListButton;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Codex_Container.Widget_Codex_Container_C.BndEvt__Widget_ListButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 */
	struct UWidget_Codex_Container_C_BndEvt__Widget_ListButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4MC6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget_ListButton_C*                                ListButton;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Codex_Container.Widget_Codex_Container_C.BndEvt__Widget_ListButton_C_0_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 */
	struct UWidget_Codex_Container_C_BndEvt__Widget_ListButton_C_0_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_V9TY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget_ListButton_C*                                ListButton;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Codex_Container.Widget_Codex_Container_C.BndEvt__Widget_ListButton_C_1_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
	 */
	struct UWidget_Codex_Container_C_BndEvt__Widget_ListButton_C_1_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YX9D[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget_ListButton_C*                                ListButton;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Codex_Container.Widget_Codex_Container_C.BndEvt__mCategoryVehicles_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
	 */
	struct UWidget_Codex_Container_C_BndEvt__mCategoryVehicles_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9X2P[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget_ListButton_C*                                ListButton;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Codex_Container.Widget_Codex_Container_C.BndEvt__BPW_DarkMode_K2Node_ComponentBoundEvent_6_OnTabButtonClicked__DelegateSignature
	 */
	struct UWidget_Codex_Container_C_BndEvt__BPW_DarkMode_K2Node_ComponentBoundEvent_6_OnTabButtonClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    ButtonIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Codex_Container.Widget_Codex_Container_C.ExecuteUbergraph_Widget_Codex_Container
	 */
	struct UWidget_Codex_Container_C_ExecuteUbergraph_Widget_Codex_Container_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
