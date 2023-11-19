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
	 * Function Widget_SplitterProgrammable.Widget_SplitterProgrammable_C.UpdateAddButtonsVisiblity
	 */
	struct UWidget_SplitterProgrammable_C_UpdateAddButtonsVisiblity_Params
	{	};

	/**
	 * Function Widget_SplitterProgrammable.Widget_SplitterProgrammable_C.GetRuleWidgets
	 */
	struct UWidget_SplitterProgrammable_C_GetRuleWidgets_Params
	{
	public:
		TArray<class UBPW_SmartSplitterRule_C*>                    Array;                                                   // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function Widget_SplitterProgrammable.Widget_SplitterProgrammable_C.SaveRules
	 */
	struct UWidget_SplitterProgrammable_C_SaveRules_Params
	{	};

	/**
	 * Function Widget_SplitterProgrammable.Widget_SplitterProgrammable_C.GenerateRulesArray
	 */
	struct UWidget_SplitterProgrammable_C_GenerateRulesArray_Params
	{
	public:
		TArray<struct FSplitterSortRule>                           Rules;                                                   // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function Widget_SplitterProgrammable.Widget_SplitterProgrammable_C.SetupDescriptors
	 */
	struct UWidget_SplitterProgrammable_C_SetupDescriptors_Params
	{	};

	/**
	 * Function Widget_SplitterProgrammable.Widget_SplitterProgrammable_C.CheckIfSmartSplitter
	 */
	struct UWidget_SplitterProgrammable_C_CheckIfSmartSplitter_Params
	{	};

	/**
	 * Function Widget_SplitterProgrammable.Widget_SplitterProgrammable_C.PopulateRules
	 */
	struct UWidget_SplitterProgrammable_C_PopulateRules_Params
	{
	public:
		TArray<struct FSplitterSortRule>                           Rules;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Widget_SplitterProgrammable.Widget_SplitterProgrammable_C.InitWindow
	 */
	struct UWidget_SplitterProgrammable_C_InitWindow_Params
	{	};

	/**
	 * Function Widget_SplitterProgrammable.Widget_SplitterProgrammable_C.Construct
	 */
	struct UWidget_SplitterProgrammable_C_Construct_Params
	{	};

	/**
	 * Function Widget_SplitterProgrammable.Widget_SplitterProgrammable_C.PreConstruct
	 */
	struct UWidget_SplitterProgrammable_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_SplitterProgrammable.Widget_SplitterProgrammable_C.Destruct
	 */
	struct UWidget_SplitterProgrammable_C_Destruct_Params
	{	};

	/**
	 * Function Widget_SplitterProgrammable.Widget_SplitterProgrammable_C.OnSortRulesChanged
	 */
	struct UWidget_SplitterProgrammable_C_OnSortRulesChanged_Params
	{	};

	/**
	 * Function Widget_SplitterProgrammable.Widget_SplitterProgrammable_C.OnFactoryClipboardPasted
	 */
	struct UWidget_SplitterProgrammable_C_OnFactoryClipboardPasted_Params
	{
	public:
		class UObject*                                             interactObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UFGFactoryClipboardSettings*                         factoryClipboardSettings;                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_SplitterProgrammable.Widget_SplitterProgrammable_C.OnFactoryClipboardCopied
	 */
	struct UWidget_SplitterProgrammable_C_OnFactoryClipboardCopied_Params
	{
	public:
		class UObject*                                             interactObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UFGFactoryClipboardSettings*                         factoryClipboardSettings;                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_SplitterProgrammable.Widget_SplitterProgrammable_C.BndEvt__Widget_SplitterProgrammable_mSmartRight_K2Node_ComponentBoundEvent_0_OnListChanged__DelegateSignature
	 */
	struct UWidget_SplitterProgrammable_C_BndEvt__Widget_SplitterProgrammable_mSmartRight_K2Node_ComponentBoundEvent_0_OnListChanged__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_SplitterProgrammable.Widget_SplitterProgrammable_C.BndEvt__Widget_SplitterProgrammable_mSmartCenter_K2Node_ComponentBoundEvent_1_OnListChanged__DelegateSignature
	 */
	struct UWidget_SplitterProgrammable_C_BndEvt__Widget_SplitterProgrammable_mSmartCenter_K2Node_ComponentBoundEvent_1_OnListChanged__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_SplitterProgrammable.Widget_SplitterProgrammable_C.BndEvt__Widget_SplitterProgrammable_mSmartLeft_K2Node_ComponentBoundEvent_2_OnListChanged__DelegateSignature
	 */
	struct UWidget_SplitterProgrammable_C_BndEvt__Widget_SplitterProgrammable_mSmartLeft_K2Node_ComponentBoundEvent_2_OnListChanged__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_SplitterProgrammable.Widget_SplitterProgrammable_C.ExecuteUbergraph_Widget_SplitterProgrammable
	 */
	struct UWidget_SplitterProgrammable_C_ExecuteUbergraph_Widget_SplitterProgrammable_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
