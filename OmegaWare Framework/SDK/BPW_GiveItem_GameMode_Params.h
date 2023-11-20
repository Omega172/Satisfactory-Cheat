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
	 * Function BPW_GiveItem_GameMode.BPW_GiveItem_GameMode_C.TryEnableCreativeMode
	 */
	struct UBPW_GiveItem_GameMode_C_TryEnableCreativeMode_Params
	{	};

	/**
	 * Function BPW_GiveItem_GameMode.BPW_GiveItem_GameMode_C.OnPreviewKeyDown
	 */
	struct UBPW_GiveItem_GameMode_C_OnPreviewKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BPW_GiveItem_GameMode.BPW_GiveItem_GameMode_C.SetSearchbarUnfocused
	 */
	struct UBPW_GiveItem_GameMode_C_SetSearchbarUnfocused_Params
	{	};

	/**
	 * Function BPW_GiveItem_GameMode.BPW_GiveItem_GameMode_C.SetSearchbarFocused
	 */
	struct UBPW_GiveItem_GameMode_C_SetSearchbarFocused_Params
	{	};

	/**
	 * Function BPW_GiveItem_GameMode.BPW_GiveItem_GameMode_C.GetShouldOkayBeEnabled
	 */
	struct UBPW_GiveItem_GameMode_C_GetShouldOkayBeEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_GiveItem_GameMode.BPW_GiveItem_GameMode_C.GetNotificationNoSpace
	 */
	struct UBPW_GiveItem_GameMode_C_GetNotificationNoSpace_Params
	{
	public:
		bool                                                       HasNoSpace;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OH1M[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_GiveItem_GameMode.BPW_GiveItem_GameMode_C.SetCategoryVisibility
	 */
	struct UBPW_GiveItem_GameMode_C_SetCategoryVisibility_Params
	{
	public:
		E_GiveItemCategories                                       Category;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       isCollapsed;                                             // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VQ9I[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_GiveItem_GameMode.BPW_GiveItem_GameMode_C.OnSearchCreateResults
	 */
	struct UBPW_GiveItem_GameMode_C_OnSearchCreateResults_Params
	{
	public:
		class FText                                                mTextSearch;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_GiveItem_GameMode.BPW_GiveItem_GameMode_C.GiveItems
	 */
	struct UBPW_GiveItem_GameMode_C_GiveItems_Params
	{
	public:
		struct FItemAmount                                         Item;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BPW_GiveItem_GameMode.BPW_GiveItem_GameMode_C.AddObjectsToCategory
	 */
	struct UBPW_GiveItem_GameMode_C_AddObjectsToCategory_Params
	{
	public:
		E_GiveItemCategories                                       Category;                                                // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_K7F3[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UBP_GiveItemListObject_C*>                    UncatgorizedObjects;                                     // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<class UObject*>                                     AllListObjects;                                          // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_GiveItem_GameMode.BPW_GiveItem_GameMode_C.CreateCategories
	 */
	struct UBPW_GiveItem_GameMode_C_CreateCategories_Params
	{	};

	/**
	 * Function BPW_GiveItem_GameMode.BPW_GiveItem_GameMode_C.PopulateItems
	 */
	struct UBPW_GiveItem_GameMode_C_PopulateItems_Params
	{	};

	/**
	 * Function BPW_GiveItem_GameMode.BPW_GiveItem_GameMode_C.BndEvt__BPW_GiveItem_GameMode_mListOfItems_K2Node_ComponentBoundEvent_5_SimpleListItemEventDynamic__DelegateSignature
	 */
	struct UBPW_GiveItem_GameMode_C_BndEvt__BPW_GiveItem_GameMode_mListOfItems_K2Node_ComponentBoundEvent_5_SimpleListItemEventDynamic__DelegateSignature_Params
	{
	public:
		class UObject*                                             Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_GiveItem_GameMode.BPW_GiveItem_GameMode_C.BndEvt__BPW_GiveItem_GameMode_mSearchbar_K2Node_ComponentBoundEvent_2_OnTextComitted__DelegateSignature
	 */
	struct UBPW_GiveItem_GameMode_C_BndEvt__BPW_GiveItem_GameMode_mSearchbar_K2Node_ComponentBoundEvent_2_OnTextComitted__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_GiveItem_GameMode.BPW_GiveItem_GameMode_C.Construct
	 */
	struct UBPW_GiveItem_GameMode_C_Construct_Params
	{	};

	/**
	 * Function BPW_GiveItem_GameMode.BPW_GiveItem_GameMode_C.BndEvt__BPW_GiveItem_GameMode_mSearchbar_K2Node_ComponentBoundEvent_4_OnTextChanged__DelegateSignature
	 */
	struct UBPW_GiveItem_GameMode_C_BndEvt__BPW_GiveItem_GameMode_mSearchbar_K2Node_ComponentBoundEvent_4_OnTextChanged__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_GiveItem_GameMode.BPW_GiveItem_GameMode_C.ExecuteUbergraph_BPW_GiveItem_GameMode
	 */
	struct UBPW_GiveItem_GameMode_C_ExecuteUbergraph_BPW_GiveItem_GameMode_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CQDF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
