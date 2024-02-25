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
	 * Function BPW_ComboboxSearch.BPW_ComboboxSearch_C.OnClick
	 */
	struct UBPW_ComboboxSearch_C_OnClick_Params
	{	};

	/**
	 * Function BPW_ComboboxSearch.BPW_ComboboxSearch_C.SetShowArrow
	 */
	struct UBPW_ComboboxSearch_C_SetShowArrow_Params
	{
	public:
		bool                                                       mShowArrow;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ComboboxSearch.BPW_ComboboxSearch_C.Close and Revert to Last Option
	 */
	struct UBPW_ComboboxSearch_C_CloseandReverttoLastOption_Params
	{	};

	/**
	 * Function BPW_ComboboxSearch.BPW_ComboboxSearch_C.FocusOnSearchBox
	 */
	struct UBPW_ComboboxSearch_C_FocusOnSearchBox_Params
	{	};

	/**
	 * Function BPW_ComboboxSearch.BPW_ComboboxSearch_C.CreateSelectedOptionWidget
	 */
	struct UBPW_ComboboxSearch_C_CreateSelectedOptionWidget_Params
	{
	public:
		class FString                                              mOption;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ComboboxSearch.BPW_ComboboxSearch_C.GenerateMoreOptionsWidget
	 */
	struct UBPW_ComboboxSearch_C_GenerateMoreOptionsWidget_Params
	{
	public:
		int32_t                                                    NumOfExeedingOptions;                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YAUI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_ComboboxSearch.BPW_ComboboxSearch_C.OnMouseButtonDown
	 */
	struct UBPW_ComboboxSearch_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BPW_ComboboxSearch.BPW_ComboboxSearch_C.AddToOptionsArray
	 */
	struct UBPW_ComboboxSearch_C_AddToOptionsArray_Params
	{
	public:
		class FString                                              Option;                                                  // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
		struct FStruct_ComboboxSettings                            AdditionalSettings;                                      // 0x0010(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ComboboxSearch.BPW_ComboboxSearch_C.GetSelectedIndex
	 */
	struct UBPW_ComboboxSearch_C_GetSelectedIndex_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2MEC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_ComboboxSearch.BPW_ComboboxSearch_C.SetSelectedIndex
	 */
	struct UBPW_ComboboxSearch_C_SetSelectedIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CallDelegate;                                            // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_D0PQ[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_ComboboxSearch.BPW_ComboboxSearch_C.OnKeyDown
	 */
	struct UBPW_ComboboxSearch_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BPW_ComboboxSearch.BPW_ComboboxSearch_C.SetMouseInactive
	 */
	struct UBPW_ComboboxSearch_C_SetMouseInactive_Params
	{
	public:
		bool                                                       mMouseInactive;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_K3L4[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_ComboboxSearch.BPW_ComboboxSearch_C.GetOptionAtIndexFromCurrentList
	 */
	struct UBPW_ComboboxSearch_C_GetOptionAtIndexFromCurrentList_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0VI5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Option;                                                  // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ComboboxSearch.BPW_ComboboxSearch_C.GetOptionsFromCurrentList
	 */
	struct UBPW_ComboboxSearch_C_GetOptionsFromCurrentList_Params
	{
	public:
		TArray<class FString>                                      mOptions;                                                // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BPW_ComboboxSearch.BPW_ComboboxSearch_C.OnEntryHovered
	 */
	struct UBPW_ComboboxSearch_C_OnEntryHovered_Params
	{
	public:
		class FString                                              Text;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ComboboxSearch.BPW_ComboboxSearch_C.SetSelectedOption
	 */
	struct UBPW_ComboboxSearch_C_SetSelectedOption_Params
	{
	public:
		class FString                                              Option;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       CallDelegate;                                            // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JEP2[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_ComboboxSearch.BPW_ComboboxSearch_C.OnKeyUp
	 */
	struct UBPW_ComboboxSearch_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BPW_ComboboxSearch.BPW_ComboboxSearch_C.GetSearchResultAtIndex
	 */
	struct UBPW_ComboboxSearch_C_GetSearchResultAtIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_I81V[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ComboboxSearch.BPW_ComboboxSearch_C.SetHoveredIndex
	 */
	struct UBPW_ComboboxSearch_C_SetHoveredIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       TriggeredByMouseHover;                                   // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ComboboxSearch.BPW_ComboboxSearch_C.OnOptionClicked
	 */
	struct UBPW_ComboboxSearch_C_OnOptionClicked_Params
	{
	public:
		class FString                                              Option;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ComboboxSearch.BPW_ComboboxSearch_C.OnMouseButtonUp
	 */
	struct UBPW_ComboboxSearch_C_OnMouseButtonUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BPW_ComboboxSearch.BPW_ComboboxSearch_C.SetIsOpen
	 */
	struct UBPW_ComboboxSearch_C_SetIsOpen_Params
	{
	public:
		bool                                                       IsOpen;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ComboboxSearch.BPW_ComboboxSearch_C.GetMenuContent
	 */
	struct UBPW_ComboboxSearch_C_GetMenuContent_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ComboboxSearch.BPW_ComboboxSearch_C.AddSingleEntry
	 */
	struct UBPW_ComboboxSearch_C_AddSingleEntry_Params
	{
	public:
		class FString                                              Option;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FStruct_ComboboxSettings                            AdditionalSettings;                                      // 0x0010(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ComboboxSearch.BPW_ComboboxSearch_C.PopulateEntries
	 */
	struct UBPW_ComboboxSearch_C_PopulateEntries_Params
	{
	public:
		TArray<class FString>                                      Options;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_ComboboxSearch.BPW_ComboboxSearch_C.OnSearch
	 */
	struct UBPW_ComboboxSearch_C_OnSearch_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_ComboboxSearch.BPW_ComboboxSearch_C.GetOptionCount
	 */
	struct UBPW_ComboboxSearch_C_GetOptionCount_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ComboboxSearch.BPW_ComboboxSearch_C.GetOptionAtIndex
	 */
	struct UBPW_ComboboxSearch_C_GetOptionAtIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2GY2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ComboboxSearch.BPW_ComboboxSearch_C.FindOptionIndex
	 */
	struct UBPW_ComboboxSearch_C_FindOptionIndex_Params
	{
	public:
		class FString                                              Option;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LZ3S[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_ComboboxSearch.BPW_ComboboxSearch_C.RemoveOption
	 */
	struct UBPW_ComboboxSearch_C_RemoveOption_Params
	{
	public:
		class FString                                              Option;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_S95N[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_ComboboxSearch.BPW_ComboboxSearch_C.ClearOptions
	 */
	struct UBPW_ComboboxSearch_C_ClearOptions_Params
	{	};

	/**
	 * Function BPW_ComboboxSearch.BPW_ComboboxSearch_C.AddOption
	 */
	struct UBPW_ComboboxSearch_C_AddOption_Params
	{
	public:
		class FString                                              Option;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FStruct_ComboboxSettings                            AdditionalSettings;                                      // 0x0010(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ComboboxSearch.BPW_ComboboxSearch_C.GenerateEntryWidget
	 */
	struct UBPW_ComboboxSearch_C_GenerateEntryWidget_Params
	{
	public:
		class FString                                              Item;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FStruct_ComboboxSettings                            AdditionalSettings;                                      // 0x0010(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		class UBPW_Combobox_Entry_C*                               ReturnValue;                                             // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ComboboxSearch.BPW_ComboboxSearch_C.PreConstruct
	 */
	struct UBPW_ComboboxSearch_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ComboboxSearch.BPW_ComboboxSearch_C.BndEvt__EditableText_43_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature
	 */
	struct UBPW_ComboboxSearch_C_BndEvt__EditableText_43_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_ComboboxSearch.BPW_ComboboxSearch_C.BndEvt__mSearchField_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature
	 */
	struct UBPW_ComboboxSearch_C_BndEvt__mSearchField_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ComboboxSearch.BPW_ComboboxSearch_C.OnMouseEnter
	 */
	struct UBPW_ComboboxSearch_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_ComboboxSearch.BPW_ComboboxSearch_C.OnMouseLeave
	 */
	struct UBPW_ComboboxSearch_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_ComboboxSearch.BPW_ComboboxSearch_C.Construct
	 */
	struct UBPW_ComboboxSearch_C_Construct_Params
	{	};

	/**
	 * Function BPW_ComboboxSearch.BPW_ComboboxSearch_C.BndEvt__BPW_ComboboxSearch_mButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBPW_ComboboxSearch_C_BndEvt__BPW_ComboboxSearch_mButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ComboboxSearch.BPW_ComboboxSearch_C.ExecuteUbergraph_BPW_ComboboxSearch
	 */
	struct UBPW_ComboboxSearch_C_ExecuteUbergraph_BPW_ComboboxSearch_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ComboboxSearch.BPW_ComboboxSearch_C.OnPreOpening__DelegateSignature
	 */
	struct UBPW_ComboboxSearch_C_OnPreOpening__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ComboboxSearch.BPW_ComboboxSearch_C.OnEntryCreated__DelegateSignature
	 */
	struct UBPW_ComboboxSearch_C_OnEntryCreated__DelegateSignature_Params
	{
	public:
		class UBPW_Combobox_Entry_C*                               CreatedEntry;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ComboboxSearch.BPW_ComboboxSearch_C.OnOpening__DelegateSignature
	 */
	struct UBPW_ComboboxSearch_C_OnOpening__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ComboboxSearch.BPW_ComboboxSearch_C.OnSelectionChanged__DelegateSignature
	 */
	struct UBPW_ComboboxSearch_C_OnSelectionChanged__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedOption;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    selectedIndex;                                           // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
