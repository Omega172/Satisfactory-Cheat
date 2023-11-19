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
	 * Function BPW_SessionIDSearch.BPW_SessionIDSearch_C.SetWaitingText
	 */
	struct UBPW_SessionIDSearch_C_SetWaitingText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_SessionIDSearch.BPW_SessionIDSearch_C.EnableButton
	 */
	struct UBPW_SessionIDSearch_C_EnableButton_Params
	{	};

	/**
	 * Function BPW_SessionIDSearch.BPW_SessionIDSearch_C.DisableButton
	 */
	struct UBPW_SessionIDSearch_C_DisableButton_Params
	{	};

	/**
	 * Function BPW_SessionIDSearch.BPW_SessionIDSearch_C.BndEvt__Button_170_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBPW_SessionIDSearch_C_BndEvt__Button_170_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_SessionIDSearch.BPW_SessionIDSearch_C.On Popup Confirmed
	 */
	struct UBPW_SessionIDSearch_C_OnPopupConfirmed_Params
	{
	public:
		bool                                                       ConfirmClicked;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_SessionIDSearch.BPW_SessionIDSearch_C.SessionFound
	 */
	struct UBPW_SessionIDSearch_C_SessionFound_Params
	{
	public:
		struct FCommonSession                                      Session;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BPW_SessionIDSearch.BPW_SessionIDSearch_C.ExecuteUbergraph_BPW_SessionIDSearch
	 */
	struct UBPW_SessionIDSearch_C_ExecuteUbergraph_BPW_SessionIDSearch_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_SessionIDSearch.BPW_SessionIDSearch_C.SessionFoundCallback__DelegateSignature
	 */
	struct UBPW_SessionIDSearch_C_SessionFoundCallback__DelegateSignature_Params
	{
	public:
		struct FCommonSession                                      Session;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
