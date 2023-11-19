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
	 * Function BP_FrontEnd.BP_FrontEnd_C.CreatePopupWidget
	 */
	struct UBP_FrontEnd_C_CreatePopupWidget_Params
	{
	public:
		struct FPopupData                                          PopupData;                                               // 0x0000(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
		class UFGPopupWidget*                                      ReturnValue;                                             // 0x0070(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FrontEnd.BP_FrontEnd_C.ShouldShutdown
	 */
	struct UBP_FrontEnd_C_ShouldShutdown_Params
	{
	public:
		bool                                                       Shutdown;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FrontEnd.BP_FrontEnd_C.GetErrorButtonText
	 */
	struct UBP_FrontEnd_C_GetErrorButtonText_Params
	{
	public:
		class FText                                                ButtonText;                                              // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BP_FrontEnd.BP_FrontEnd_C.HasMoreErrors
	 */
	struct UBP_FrontEnd_C_HasMoreErrors_Params
	{
	public:
		bool                                                       moreErrors;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FO5Y[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_FrontEnd.BP_FrontEnd_C.ShouldShutdownAfterThisError
	 */
	struct UBP_FrontEnd_C_ShouldShutdownAfterThisError_Params
	{
	public:
		bool                                                       Shutdown;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FrontEnd.BP_FrontEnd_C.Internal_ShouldShowLogin
	 */
	struct UBP_FrontEnd_C_Internal_ShouldShowLogin_Params
	{
	public:
		bool                                                       shouldShow;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FrontEnd.BP_FrontEnd_C.ShouldShowLogin
	 */
	struct UBP_FrontEnd_C_ShouldShowLogin_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FrontEnd.BP_FrontEnd_C.SetNextErrorMessage
	 */
	struct UBP_FrontEnd_C_SetNextErrorMessage_Params
	{
	public:
		class UFGErrorMessage*                                     newError;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FrontEnd.BP_FrontEnd_C.GetNextErrorMessage
	 */
	struct UBP_FrontEnd_C_GetNextErrorMessage_Params
	{
	public:
		class UFGErrorMessage*                                     ErrorMessage;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FrontEnd.BP_FrontEnd_C.Internal_ShowErrorMessage
	 */
	struct UBP_FrontEnd_C_Internal_ShowErrorMessage_Params
	{
	public:
		bool                                                       shouldShow;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FrontEnd.BP_FrontEnd_C.Internal_ShouldShowMainMenu
	 */
	struct UBP_FrontEnd_C_Internal_ShouldShowMainMenu_Params
	{
	public:
		bool                                                       shouldShow;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FrontEnd.BP_FrontEnd_C.Internal_ShouldShowAlphaInfo
	 */
	struct UBP_FrontEnd_C_Internal_ShouldShowAlphaInfo_Params
	{
	public:
		bool                                                       shouldShow;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FrontEnd.BP_FrontEnd_C.ShouldShowErrorPopup
	 */
	struct UBP_FrontEnd_C_ShouldShowErrorPopup_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FrontEnd.BP_FrontEnd_C.ShouldShowMainMenu
	 */
	struct UBP_FrontEnd_C_ShouldShowMainMenu_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FrontEnd.BP_FrontEnd_C.ShouldShowAlphaInfo
	 */
	struct UBP_FrontEnd_C_ShouldShowAlphaInfo_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FrontEnd.BP_FrontEnd_C.SetupMainMenu
	 */
	struct UBP_FrontEnd_C_SetupMainMenu_Params
	{	};

	/**
	 * Function BP_FrontEnd.BP_FrontEnd_C.BndEvt__Widget_ErrorMessage_K2Node_ComponentBoundEvent_0_mOnClicked__DelegateSignature
	 */
	struct UBP_FrontEnd_C_BndEvt__Widget_ErrorMessage_K2Node_ComponentBoundEvent_0_mOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BP_FrontEnd.BP_FrontEnd_C.GetAndSetNewError
	 */
	struct UBP_FrontEnd_C_GetAndSetNewError_Params
	{	};

	/**
	 * Function BP_FrontEnd.BP_FrontEnd_C.Construct
	 */
	struct UBP_FrontEnd_C_Construct_Params
	{	};

	/**
	 * Function BP_FrontEnd.BP_FrontEnd_C.ConditionallySetNewError
	 */
	struct UBP_FrontEnd_C_ConditionallySetNewError_Params
	{	};

	/**
	 * Function BP_FrontEnd.BP_FrontEnd_C.Destruct
	 */
	struct UBP_FrontEnd_C_Destruct_Params
	{	};

	/**
	 * Function BP_FrontEnd.BP_FrontEnd_C.ClosePopup
	 */
	struct UBP_FrontEnd_C_ClosePopup_Params
	{	};

	/**
	 * Function BP_FrontEnd.BP_FrontEnd_C.ExecuteUbergraph_BP_FrontEnd
	 */
	struct UBP_FrontEnd_C_ExecuteUbergraph_BP_FrontEnd_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TJS5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
