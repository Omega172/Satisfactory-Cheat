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
	 * Function BPW_UploadingSave_Popup.BPW_UploadingSave_Popup_C.OnCompleted
	 */
	struct UBPW_UploadingSave_Popup_C_OnCompleted_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_E7HQ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                ErrorMessage;                                            // 0x0008(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_UploadingSave_Popup.BPW_UploadingSave_Popup_C.UpdateProgress
	 */
	struct UBPW_UploadingSave_Popup_C_UpdateProgress_Params
	{
	public:
		int32_t                                                    mCurrent;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    mMax;                                                    // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_UploadingSave_Popup.BPW_UploadingSave_Popup_C.SetSaveHeader
	 */
	struct UBPW_UploadingSave_Popup_C_SetSaveHeader_Params
	{
	public:
		struct FSaveHeader                                         mSaveGame;                                               // 0x0000(0x00A8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_UploadingSave_Popup.BPW_UploadingSave_Popup_C.GetShouldOkayBeEnabled
	 */
	struct UBPW_UploadingSave_Popup_C_GetShouldOkayBeEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_UploadingSave_Popup.BPW_UploadingSave_Popup_C.PreConstruct
	 */
	struct UBPW_UploadingSave_Popup_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_UploadingSave_Popup.BPW_UploadingSave_Popup_C.Construct
	 */
	struct UBPW_UploadingSave_Popup_C_Construct_Params
	{	};

	/**
	 * Function BPW_UploadingSave_Popup.BPW_UploadingSave_Popup_C.ExecuteUbergraph_BPW_UploadingSave_Popup
	 */
	struct UBPW_UploadingSave_Popup_C_ExecuteUbergraph_BPW_UploadingSave_Popup_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_UploadingSave_Popup.BPW_UploadingSave_Popup_C.OnPopupCanceled__DelegateSignature
	 */
	struct UBPW_UploadingSave_Popup_C_OnPopupCanceled__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_UploadingSave_Popup.BPW_UploadingSave_Popup_C.OnServerAdded__DelegateSignature
	 */
	struct UBPW_UploadingSave_Popup_C_OnServerAdded__DelegateSignature_Params
	{
	public:
		class FString                                              IP;                                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    Port;                                                    // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
