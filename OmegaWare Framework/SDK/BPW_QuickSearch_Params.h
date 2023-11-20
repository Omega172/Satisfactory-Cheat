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
	 * Function BPW_QuickSearch.BPW_QuickSearch_C.OnBlueprintSelected
	 */
	struct UBPW_QuickSearch_C_OnBlueprintSelected_Params
	{
	public:
		class UFGBlueprintDescriptor*                              Blueprint;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_QuickSearch.BPW_QuickSearch_C.OpenQuickSearch
	 */
	struct UBPW_QuickSearch_C_OpenQuickSearch_Params
	{	};

	/**
	 * Function BPW_QuickSearch.BPW_QuickSearch_C.CloseQuickSearch
	 */
	struct UBPW_QuickSearch_C_CloseQuickSearch_Params
	{	};

	/**
	 * Function BPW_QuickSearch.BPW_QuickSearch_C.SetQuickSearchVisibility
	 */
	struct UBPW_QuickSearch_C_SetQuickSearchVisibility_Params
	{
	public:
		bool                                                       IsVisibile;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_QuickSearch.BPW_QuickSearch_C.GenerateMathAnswer
	 */
	struct UBPW_QuickSearch_C_GenerateMathAnswer_Params
	{
	public:
		class FText                                                mSearchWords;                                            // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_QuickSearch.BPW_QuickSearch_C.IsMathExpression
	 */
	struct UBPW_QuickSearch_C_IsMathExpression_Params
	{
	public:
		class FText                                                mSearchWords;                                            // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1YJ6[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_QuickSearch.BPW_QuickSearch_C.OnPartSelected
	 */
	struct UBPW_QuickSearch_C_OnPartSelected_Params
	{
	public:
		class UClass*                                              product;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_QuickSearch.BPW_QuickSearch_C.OnBuildingSelected
	 */
	struct UBPW_QuickSearch_C_OnBuildingSelected_Params
	{
	public:
		class UClass*                                              product;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_QuickSearch.BPW_QuickSearch_C.OnIndexClicked
	 */
	struct UBPW_QuickSearch_C_OnIndexClicked_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PEKO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget_ListButton_C*                                ListButton;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_QuickSearch.BPW_QuickSearch_C.SetSelectedIndex
	 */
	struct UBPW_QuickSearch_C_SetSelectedIndex_Params
	{
	public:
		int32_t                                                    NewSelectedIndex;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_QuickSearch.BPW_QuickSearch_C.OnKeyUp
	 */
	struct UBPW_QuickSearch_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BPW_QuickSearch.BPW_QuickSearch_C.CreateSearchResultList
	 */
	struct UBPW_QuickSearch_C_CreateSearchResultList_Params
	{
	public:
		class FText                                                SearchWords;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_QuickSearch.BPW_QuickSearch_C.GenerateSearchResults
	 */
	struct UBPW_QuickSearch_C_GenerateSearchResults_Params
	{
	public:
		class FText                                                SearchWords;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_QuickSearch.BPW_QuickSearch_C.InitAllRecipes
	 */
	struct UBPW_QuickSearch_C_InitAllRecipes_Params
	{	};

	/**
	 * Function BPW_QuickSearch.BPW_QuickSearch_C.BndEvt__FGEditableText_357_K2Node_ComponentBoundEvent_3_OnEditableTextChangedEvent__DelegateSignature
	 */
	struct UBPW_QuickSearch_C_BndEvt__FGEditableText_357_K2Node_ComponentBoundEvent_3_OnEditableTextChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_QuickSearch.BPW_QuickSearch_C.BndEvt__BPW_QuickSearch_mCloseButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 */
	struct UBPW_QuickSearch_C_BndEvt__BPW_QuickSearch_mCloseButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_QuickSearch.BPW_QuickSearch_C.BndEvt__BPW_QuickSearch_Button_101_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBPW_QuickSearch_C_BndEvt__BPW_QuickSearch_Button_101_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_QuickSearch.BPW_QuickSearch_C.ExecuteUbergraph_BPW_QuickSearch
	 */
	struct UBPW_QuickSearch_C_ExecuteUbergraph_BPW_QuickSearch_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_A80W[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
