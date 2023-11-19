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
	 * Function BPW_NewMarkerButton.BPW_NewMarkerButton_C.SetIsSmall
	 */
	struct UBPW_NewMarkerButton_C_SetIsSmall_Params
	{
	public:
		bool                                                       mIsSmall;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_NewMarkerButton.BPW_NewMarkerButton_C.GetUnhoveredColor
	 */
	struct UBPW_NewMarkerButton_C_GetUnhoveredColor_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_NewMarkerButton.BPW_NewMarkerButton_C.SetIsSelected
	 */
	struct UBPW_NewMarkerButton_C_SetIsSelected_Params
	{
	public:
		bool                                                       mIsSelected;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WKDC[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_NewMarkerButton.BPW_NewMarkerButton_C.PreConstruct
	 */
	struct UBPW_NewMarkerButton_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_NewMarkerButton.BPW_NewMarkerButton_C.BndEvt__BPW_NewMarkerButton_mButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBPW_NewMarkerButton_C_BndEvt__BPW_NewMarkerButton_mButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_NewMarkerButton.BPW_NewMarkerButton_C.BndEvt__BPW_NewMarkerButton_mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBPW_NewMarkerButton_C_BndEvt__BPW_NewMarkerButton_mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_NewMarkerButton.BPW_NewMarkerButton_C.BndEvt__BPW_NewMarkerButton_mButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBPW_NewMarkerButton_C_BndEvt__BPW_NewMarkerButton_mButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_NewMarkerButton.BPW_NewMarkerButton_C.ExecuteUbergraph_BPW_NewMarkerButton
	 */
	struct UBPW_NewMarkerButton_C_ExecuteUbergraph_BPW_NewMarkerButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_NewMarkerButton.BPW_NewMarkerButton_C.OnClicked__DelegateSignature
	 */
	struct UBPW_NewMarkerButton_C_OnClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
