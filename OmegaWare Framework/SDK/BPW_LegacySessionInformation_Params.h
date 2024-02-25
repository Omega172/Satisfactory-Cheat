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
	 * Function BPW_LegacySessionInformation.BPW_LegacySessionInformation_C.SetLocalUserInfo
	 */
	struct UBPW_LegacySessionInformation_C_SetLocalUserInfo_Params
	{
	public:
		class ULocalUserInfo*                                      ViewModel;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_LegacySessionInformation.BPW_LegacySessionInformation_C.UpdateCurrentSession
	 */
	struct UBPW_LegacySessionInformation_C_UpdateCurrentSession_Params
	{
	public:
		struct FCommonSession                                      Session;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BPW_LegacySessionInformation.BPW_LegacySessionInformation_C.GetActiveSwitcherWidget
	 */
	struct UBPW_LegacySessionInformation_C_GetActiveSwitcherWidget_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_LegacySessionInformation.BPW_LegacySessionInformation_C.Construct
	 */
	struct UBPW_LegacySessionInformation_C_Construct_Params
	{	};

	/**
	 * Function BPW_LegacySessionInformation.BPW_LegacySessionInformation_C.BndEvt__BPW_LegacySessionInformation_mSwitcher_K2Node_ComponentBoundEvent_0_OnActiveWidgetSet__DelegateSignature
	 */
	struct UBPW_LegacySessionInformation_C_BndEvt__BPW_LegacySessionInformation_mSwitcher_K2Node_ComponentBoundEvent_0_OnActiveWidgetSet__DelegateSignature_Params
	{
	public:
		class UWidget*                                             oldWidget;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class UWidget*                                             newWidget;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_LegacySessionInformation.BPW_LegacySessionInformation_C.BndEvt__BPW_LegacySessionInformation_mCopyToClipboardButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UBPW_LegacySessionInformation_C_BndEvt__BPW_LegacySessionInformation_mCopyToClipboardButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_LegacySessionInformation.BPW_LegacySessionInformation_C.BndEvt__BPW_LegacySessionInformation_mShowHideSessionIDButton_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature
	 */
	struct UBPW_LegacySessionInformation_C_BndEvt__BPW_LegacySessionInformation_mShowHideSessionIDButton_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_LegacySessionInformation.BPW_LegacySessionInformation_C.BndEvt__BPW_LegacySessionInformation_mShowHideSessionIDButton_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature
	 */
	struct UBPW_LegacySessionInformation_C_BndEvt__BPW_LegacySessionInformation_mShowHideSessionIDButton_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_LegacySessionInformation.BPW_LegacySessionInformation_C.BndEvt__Widget_Options_DropdownBox_K2Node_ComponentBoundEvent_0_onSelectionChanged__DelegateSignature
	 */
	struct UBPW_LegacySessionInformation_C_BndEvt__Widget_Options_DropdownBox_K2Node_ComponentBoundEvent_0_onSelectionChanged__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedOption;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_LegacySessionInformation.BPW_LegacySessionInformation_C.ExecuteUbergraph_BPW_LegacySessionInformation
	 */
	struct UBPW_LegacySessionInformation_C_ExecuteUbergraph_BPW_LegacySessionInformation_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KATC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_LegacySessionInformation.BPW_LegacySessionInformation_C.OnSwitcherWidgetChanged__DelegateSignature
	 */
	struct UBPW_LegacySessionInformation_C_OnSwitcherWidgetChanged__DelegateSignature_Params
	{
	public:
		class UWidget*                                             OldWidget;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class UWidget*                                             NewWidget;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
