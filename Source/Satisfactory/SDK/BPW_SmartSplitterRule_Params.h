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
	 * Function BPW_SmartSplitterRule.BPW_SmartSplitterRule_C.SetAddButtonVisibility
	 */
	struct UBPW_SmartSplitterRule_C_SetAddButtonVisibility_Params
	{
	public:
		bool                                                       mIsVisible;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_SmartSplitterRule.BPW_SmartSplitterRule_C.SetMaxItemAmount
	 */
	struct UBPW_SmartSplitterRule_C_SetMaxItemAmount_Params
	{
	public:
		int32_t                                                    mMaxItemAmount;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_SmartSplitterRule.BPW_SmartSplitterRule_C.SetRules
	 */
	struct UBPW_SmartSplitterRule_C_SetRules_Params
	{
	public:
		TArray<struct FSplitterSortRule>                           Rules;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_SmartSplitterRule.BPW_SmartSplitterRule_C.SetIsSmartSplitter
	 */
	struct UBPW_SmartSplitterRule_C_SetIsSmartSplitter_Params
	{
	public:
		bool                                                       mIsSmartSplitter;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Y97P[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_SmartSplitterRule.BPW_SmartSplitterRule_C.GetList
	 */
	struct UBPW_SmartSplitterRule_C_GetList_Params
	{
	public:
		TArray<class UClass*>                                      Items;                                                   // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BPW_SmartSplitterRule.BPW_SmartSplitterRule_C.SetCachedSmartDescriptor
	 */
	struct UBPW_SmartSplitterRule_C_SetCachedSmartDescriptor_Params
	{
	public:
		class UClass*                                              mCachedDescriptor;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		bool                                                       CallCombobox;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_SmartSplitterRule.BPW_SmartSplitterRule_C.SetIndex
	 */
	struct UBPW_SmartSplitterRule_C_SetIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_SmartSplitterRule.BPW_SmartSplitterRule_C.SetDescriptors
	 */
	struct UBPW_SmartSplitterRule_C_SetDescriptors_Params
	{
	public:
		TArray<class UClass*>                                      mDescriptors;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_SmartSplitterRule.BPW_SmartSplitterRule_C.PreConstruct
	 */
	struct UBPW_SmartSplitterRule_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_SmartSplitterRule.BPW_SmartSplitterRule_C.Construct
	 */
	struct UBPW_SmartSplitterRule_C_Construct_Params
	{	};

	/**
	 * Function BPW_SmartSplitterRule.BPW_SmartSplitterRule_C.BndEvt__BPW_SmartSplitterRule_BPW_ComboboxSearch_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature
	 */
	struct UBPW_SmartSplitterRule_C_BndEvt__BPW_SmartSplitterRule_BPW_ComboboxSearch_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedOption;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    selectedIndex;                                           // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_SmartSplitterRule.BPW_SmartSplitterRule_C.BndEvt__BPW_SmartSplitterRule_mProgrammableSplitterSettings_K2Node_ComponentBoundEvent_1_OnListChanged__DelegateSignature
	 */
	struct UBPW_SmartSplitterRule_C_BndEvt__BPW_SmartSplitterRule_mProgrammableSplitterSettings_K2Node_ComponentBoundEvent_1_OnListChanged__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_SmartSplitterRule.BPW_SmartSplitterRule_C.ExecuteUbergraph_BPW_SmartSplitterRule
	 */
	struct UBPW_SmartSplitterRule_C_ExecuteUbergraph_BPW_SmartSplitterRule_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_SmartSplitterRule.BPW_SmartSplitterRule_C.OnListChanged__DelegateSignature
	 */
	struct UBPW_SmartSplitterRule_C_OnListChanged__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
