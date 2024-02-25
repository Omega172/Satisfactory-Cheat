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
	 * Function BPW_Options_DropdownBox.BPW_Options_DropdownBox_C.SetupDropdownOptions
	 */
	struct UBPW_Options_DropdownBox_C_SetupDropdownOptions_Params
	{	};

	/**
	 * Function BPW_Options_DropdownBox.BPW_Options_DropdownBox_C.SetDropdownColor
	 */
	struct UBPW_Options_DropdownBox_C_SetDropdownColor_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Options_DropdownBox.BPW_Options_DropdownBox_C.IsValidIndex
	 */
	struct UBPW_Options_DropdownBox_C_IsValidIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Valid;                                                   // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Options_DropdownBox.BPW_Options_DropdownBox_C.BndEvt__mDropdownBox_K2Node_ComponentBoundEvent_2_OnOpeningEvent__DelegateSignature
	 */
	struct UBPW_Options_DropdownBox_C_BndEvt__mDropdownBox_K2Node_ComponentBoundEvent_2_OnOpeningEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_Options_DropdownBox.BPW_Options_DropdownBox_C.BndEvt__mFakeButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBPW_Options_DropdownBox_C_BndEvt__mFakeButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_Options_DropdownBox.BPW_Options_DropdownBox_C.BndEvt__mDropdownBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UBPW_Options_DropdownBox_C_BndEvt__mDropdownBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Options_DropdownBox.BPW_Options_DropdownBox_C.PreConstruct
	 */
	struct UBPW_Options_DropdownBox_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Options_DropdownBox.BPW_Options_DropdownBox_C.OnRowHovered
	 */
	struct UBPW_Options_DropdownBox_C_OnRowHovered_Params
	{	};

	/**
	 * Function BPW_Options_DropdownBox.BPW_Options_DropdownBox_C.OnRowUnhovered
	 */
	struct UBPW_Options_DropdownBox_C_OnRowUnhovered_Params
	{	};

	/**
	 * Function BPW_Options_DropdownBox.BPW_Options_DropdownBox_C.ExecuteUbergraph_BPW_Options_DropdownBox
	 */
	struct UBPW_Options_DropdownBox_C_ExecuteUbergraph_BPW_Options_DropdownBox_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_K4SS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_Options_DropdownBox.BPW_Options_DropdownBox_C.OnSelectionChanged__DelegateSignature
	 */
	struct UBPW_Options_DropdownBox_C_OnSelectionChanged__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedOption;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
