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
	 * Function BPW_AddServer_Popup.BPW_AddServer_Popup_C.GetShouldOkayBeEnabled
	 */
	struct UBPW_AddServer_Popup_C_GetShouldOkayBeEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VVI5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_AddServer_Popup.BPW_AddServer_Popup_C.Construct
	 */
	struct UBPW_AddServer_Popup_C_Construct_Params
	{	};

	/**
	 * Function BPW_AddServer_Popup.BPW_AddServer_Popup_C.NotifyPopupConfirmed
	 */
	struct UBPW_AddServer_Popup_C_NotifyPopupConfirmed_Params
	{	};

	/**
	 * Function BPW_AddServer_Popup.BPW_AddServer_Popup_C.NotifyPopupCanceled
	 */
	struct UBPW_AddServer_Popup_C_NotifyPopupCanceled_Params
	{	};

	/**
	 * Function BPW_AddServer_Popup.BPW_AddServer_Popup_C.BndEvt__Button_ShowAddress_K2Node_ComponentBoundEvent_2_OnStateChanged__DelegateSignature
	 */
	struct UBPW_AddServer_Popup_C_BndEvt__Button_ShowAddress_K2Node_ComponentBoundEvent_2_OnStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsTrue;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_AddServer_Popup.BPW_AddServer_Popup_C.ExecuteUbergraph_BPW_AddServer_Popup
	 */
	struct UBPW_AddServer_Popup_C_ExecuteUbergraph_BPW_AddServer_Popup_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_AddServer_Popup.BPW_AddServer_Popup_C.OnPopupCanceled__DelegateSignature
	 */
	struct UBPW_AddServer_Popup_C_OnPopupCanceled__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_AddServer_Popup.BPW_AddServer_Popup_C.OnServerAdded__DelegateSignature
	 */
	struct UBPW_AddServer_Popup_C_OnServerAdded__DelegateSignature_Params
	{
	public:
		class FString                                              IP;                                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    Port;                                                    // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
