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
	 * Function Widget_SplitterProgrammableRule.Widget_SplitterProgrammableRule_C.AddDescriptorsToArray
	 */
	struct UWidget_SplitterProgrammableRule_C_AddDescriptorsToArray_Params
	{	};

	/**
	 * Function Widget_SplitterProgrammableRule.Widget_SplitterProgrammableRule_C.PopulateDescriptors
	 */
	struct UWidget_SplitterProgrammableRule_C_PopulateDescriptors_Params
	{	};

	/**
	 * Function Widget_SplitterProgrammableRule.Widget_SplitterProgrammableRule_C.ShowHideDeleteButton
	 */
	struct UWidget_SplitterProgrammableRule_C_ShowHideDeleteButton_Params
	{
	public:
		bool                                                       ShowDeleteButton;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_SplitterProgrammableRule.Widget_SplitterProgrammableRule_C.RemoveRule
	 */
	struct UWidget_SplitterProgrammableRule_C_RemoveRule_Params
	{	};

	/**
	 * Function Widget_SplitterProgrammableRule.Widget_SplitterProgrammableRule_C.SetRuleOutputIndex
	 */
	struct UWidget_SplitterProgrammableRule_C_SetRuleOutputIndex_Params
	{
	public:
		int32_t                                                    OutputIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZEFV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_SplitterProgrammableRule.Widget_SplitterProgrammableRule_C.SetRuleItemClass
	 */
	struct UWidget_SplitterProgrammableRule_C_SetRuleItemClass_Params
	{
	public:
		class UClass*                                              ItemClass;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_SplitterProgrammableRule.Widget_SplitterProgrammableRule_C.GetSortRuleSafe
	 */
	struct UWidget_SplitterProgrammableRule_C_GetSortRuleSafe_Params
	{
	public:
		struct FSplitterSortRule                                   Rule;                                                    // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function Widget_SplitterProgrammableRule.Widget_SplitterProgrammableRule_C.SetSelectedItemDescriptor
	 */
	struct UWidget_SplitterProgrammableRule_C_SetSelectedItemDescriptor_Params
	{
	public:
		class UClass*                                              inDescriptor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_SplitterProgrammableRule.Widget_SplitterProgrammableRule_C.RefreshItemClassButton
	 */
	struct UWidget_SplitterProgrammableRule_C_RefreshItemClassButton_Params
	{	};

	/**
	 * Function Widget_SplitterProgrammableRule.Widget_SplitterProgrammableRule_C.Construct
	 */
	struct UWidget_SplitterProgrammableRule_C_Construct_Params
	{	};

	/**
	 * Function Widget_SplitterProgrammableRule.Widget_SplitterProgrammableRule_C.BndEvt__mDeleteButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWidget_SplitterProgrammableRule_C_BndEvt__mDeleteButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_SplitterProgrammableRule.Widget_SplitterProgrammableRule_C.ForceRefreshButton
	 */
	struct UWidget_SplitterProgrammableRule_C_ForceRefreshButton_Params
	{
	public:
		struct FSplitterSortRule                                   SplitterRule;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function Widget_SplitterProgrammableRule.Widget_SplitterProgrammableRule_C.PreConstruct
	 */
	struct UWidget_SplitterProgrammableRule_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_SplitterProgrammableRule.Widget_SplitterProgrammableRule_C.BndEvt__mItemClassCombobox_K2Node_ComponentBoundEvent_3_OnSelectionChanged__DelegateSignature
	 */
	struct UWidget_SplitterProgrammableRule_C_BndEvt__mItemClassCombobox_K2Node_ComponentBoundEvent_3_OnSelectionChanged__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedOption;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    selectedIndex;                                           // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_SplitterProgrammableRule.Widget_SplitterProgrammableRule_C.ExecuteUbergraph_Widget_SplitterProgrammableRule
	 */
	struct UWidget_SplitterProgrammableRule_C_ExecuteUbergraph_Widget_SplitterProgrammableRule_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZIOF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_SplitterProgrammableRule.Widget_SplitterProgrammableRule_C.OnClicked__DelegateSignature
	 */
	struct UWidget_SplitterProgrammableRule_C_OnClicked__DelegateSignature_Params
	{
	public:
		class UWidget_SplitterProgrammableRule_C*                  SplitterRule;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_SplitterProgrammableRule.Widget_SplitterProgrammableRule_C.OnUpdated__DelegateSignature
	 */
	struct UWidget_SplitterProgrammableRule_C_OnUpdated__DelegateSignature_Params
	{
	public:
		int32_t                                                    RuleIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CVHF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSplitterSortRule                                   RuleData;                                                // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function Widget_SplitterProgrammableRule.Widget_SplitterProgrammableRule_C.OnRemoved__DelegateSignature
	 */
	struct UWidget_SplitterProgrammableRule_C_OnRemoved__DelegateSignature_Params
	{
	public:
		class UWidget_SplitterProgrammableRule_C*                  SplitterRule;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
