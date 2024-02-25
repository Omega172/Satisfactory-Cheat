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
	 * Function BPW_Options_DropdownBox_Dynamic.BPW_Options_DropdownBox_Dynamic_C.OnDropdownSelectionChanged
	 */
	struct UBPW_Options_DropdownBox_Dynamic_C_OnDropdownSelectionChanged_Params
	{
	public:
		ESelectInfo                                                SelectionType;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Options_DropdownBox_Dynamic.BPW_Options_DropdownBox_Dynamic_C.UpdateCurrentValue
	 */
	struct UBPW_Options_DropdownBox_Dynamic_C_UpdateCurrentValue_Params
	{	};

	/**
	 * Function BPW_Options_DropdownBox_Dynamic.BPW_Options_DropdownBox_Dynamic_C.SetupDropdownOptions
	 */
	struct UBPW_Options_DropdownBox_Dynamic_C_SetupDropdownOptions_Params
	{	};

	/**
	 * Function BPW_Options_DropdownBox_Dynamic.BPW_Options_DropdownBox_Dynamic_C.SetDropdownColor
	 */
	struct UBPW_Options_DropdownBox_Dynamic_C_SetDropdownColor_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Options_DropdownBox_Dynamic.BPW_Options_DropdownBox_Dynamic_C.IsValidIndex
	 */
	struct UBPW_Options_DropdownBox_Dynamic_C_IsValidIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Valid;                                                   // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Options_DropdownBox_Dynamic.BPW_Options_DropdownBox_Dynamic_C.BndEvt__mDropdownBox_K2Node_ComponentBoundEvent_2_OnOpeningEvent__DelegateSignature
	 */
	struct UBPW_Options_DropdownBox_Dynamic_C_BndEvt__mDropdownBox_K2Node_ComponentBoundEvent_2_OnOpeningEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_Options_DropdownBox_Dynamic.BPW_Options_DropdownBox_Dynamic_C.BndEvt__mFakeButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBPW_Options_DropdownBox_Dynamic_C_BndEvt__mFakeButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_Options_DropdownBox_Dynamic.BPW_Options_DropdownBox_Dynamic_C.BndEvt__mDropdownBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UBPW_Options_DropdownBox_Dynamic_C_BndEvt__mDropdownBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Options_DropdownBox_Dynamic.BPW_Options_DropdownBox_Dynamic_C.OnRowHovered
	 */
	struct UBPW_Options_DropdownBox_Dynamic_C_OnRowHovered_Params
	{	};

	/**
	 * Function BPW_Options_DropdownBox_Dynamic.BPW_Options_DropdownBox_Dynamic_C.OnRowUnhovered
	 */
	struct UBPW_Options_DropdownBox_Dynamic_C_OnRowUnhovered_Params
	{	};

	/**
	 * Function BPW_Options_DropdownBox_Dynamic.BPW_Options_DropdownBox_Dynamic_C.Construct
	 */
	struct UBPW_Options_DropdownBox_Dynamic_C_Construct_Params
	{	};

	/**
	 * Function BPW_Options_DropdownBox_Dynamic.BPW_Options_DropdownBox_Dynamic_C.OnOptionValueUpdated
	 */
	struct UBPW_Options_DropdownBox_Dynamic_C_OnOptionValueUpdated_Params
	{	};

	/**
	 * Function BPW_Options_DropdownBox_Dynamic.BPW_Options_DropdownBox_Dynamic_C.ExecuteUbergraph_BPW_Options_DropdownBox_Dynamic
	 */
	struct UBPW_Options_DropdownBox_Dynamic_C_ExecuteUbergraph_BPW_Options_DropdownBox_Dynamic_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Options_DropdownBox_Dynamic.BPW_Options_DropdownBox_Dynamic_C.OnSelectionChanged__DelegateSignature
	 */
	struct UBPW_Options_DropdownBox_Dynamic_C_OnSelectionChanged__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedOption;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
