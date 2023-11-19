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
	 * Function BP_MainMenuWidget.BP_MainMenuWidget_C.SetLocalUserInfo
	 */
	struct UBP_MainMenuWidget_C_SetLocalUserInfo_Params
	{
	public:
		class ULocalUserInfo*                                      ViewModel;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenuWidget.BP_MainMenuWidget_C.__c16791d0-4621-8d4e-6c6c-1eb1cc2cea8e_SourceToDest
	 */
	struct UBP_MainMenuWidget_C___c16791d046218d4e6c6c1eb1cc2cea8e_SourceToDest_Params
	{
	public:
		bool                                                       ButtonEnabled;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenuWidget.BP_MainMenuWidget_C.SetJoinButtonEnabled
	 */
	struct UBP_MainMenuWidget_C_SetJoinButtonEnabled_Params
	{
	public:
		bool                                                       bIsEnabled;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenuWidget.BP_MainMenuWidget_C.OnlinePlayButtonVisibilityFromPrivilegeAvailability
	 */
	struct UBP_MainMenuWidget_C_OnlinePlayButtonVisibilityFromPrivilegeAvailability_Params
	{
	public:
		ECommonUserPrivilegeAvailability                           CanPlay;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ECommonUserPrivilegeAvailability                           CanPlayOnline;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ButtonEnabled;                                           // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenuWidget.BP_MainMenuWidget_C.SetLoadGameButtonEnabled
	 */
	struct UBP_MainMenuWidget_C_SetLoadGameButtonEnabled_Params
	{
	public:
		bool                                                       bIsEnabled;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenuWidget.BP_MainMenuWidget_C.SetNewGameButtonEnabled
	 */
	struct UBP_MainMenuWidget_C_SetNewGameButtonEnabled_Params
	{
	public:
		bool                                                       bIsEnabled;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenuWidget.BP_MainMenuWidget_C.SetContinueButtonEnabled
	 */
	struct UBP_MainMenuWidget_C_SetContinueButtonEnabled_Params
	{
	public:
		bool                                                       bIsEnabled;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenuWidget.BP_MainMenuWidget_C.AnyPlayButtonVisibilityFromPrivilegeAvailability
	 */
	struct UBP_MainMenuWidget_C_AnyPlayButtonVisibilityFromPrivilegeAvailability_Params
	{
	public:
		ECommonUserPrivilegeAvailability                           CanPlay;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ButtonEnabled;                                           // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenuWidget.BP_MainMenuWidget_C.ClearMainMenuSelection
	 */
	struct UBP_MainMenuWidget_C_ClearMainMenuSelection_Params
	{	};

	/**
	 * Function BP_MainMenuWidget.BP_MainMenuWidget_C.UpdateMultiplayerStatus
	 */
	struct UBP_MainMenuWidget_C_UpdateMultiplayerStatus_Params
	{	};

	/**
	 * Function BP_MainMenuWidget.BP_MainMenuWidget_C.UpdateNATType
	 */
	struct UBP_MainMenuWidget_C_UpdateNATType_Params
	{	};

	/**
	 * Function BP_MainMenuWidget.BP_MainMenuWidget_C.GetLogedInUsernameText
	 */
	struct UBP_MainMenuWidget_C_GetLogedInUsernameText_Params
	{
	public:
		ENetIdType                                                 Platform;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_05OY[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                LoginStatusText;                                         // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BP_MainMenuWidget.BP_MainMenuWidget_C.OnSavesEnumerated
	 */
	struct UBP_MainMenuWidget_C_OnSavesEnumerated_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RHJR[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FSaveHeader>                                 saves;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_MainMenuWidget.BP_MainMenuWidget_C.SetContinueButtonVisibility
	 */
	struct UBP_MainMenuWidget_C_SetContinueButtonVisibility_Params
	{
	public:
		struct FSaveHeader                                         recentSave;                                              // 0x0000(0x00A8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_MainMenuWidget.BP_MainMenuWidget_C.GetMostRecentSaveName
	 */
	struct UBP_MainMenuWidget_C_GetMostRecentSaveName_Params
	{	};

	/**
	 * Function BP_MainMenuWidget.BP_MainMenuWidget_C.GetExperimentalVisibility
	 */
	struct UBP_MainMenuWidget_C_GetExperimentalVisibility_Params
	{	};

	/**
	 * Function BP_MainMenuWidget.BP_MainMenuWidget_C.UpdateUsername
	 */
	struct UBP_MainMenuWidget_C_UpdateUsername_Params
	{	};

	/**
	 * Function BP_MainMenuWidget.BP_MainMenuWidget_C.UpdateVersionString
	 */
	struct UBP_MainMenuWidget_C_UpdateVersionString_Params
	{	};

	/**
	 * Function BP_MainMenuWidget.BP_MainMenuWidget_C.CacheMostRecentSave
	 */
	struct UBP_MainMenuWidget_C_CacheMostRecentSave_Params
	{	};

	/**
	 * Function BP_MainMenuWidget.BP_MainMenuWidget_C.GetVersionString
	 */
	struct UBP_MainMenuWidget_C_GetVersionString_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_MainMenuWidget.BP_MainMenuWidget_C.OnEscape
	 */
	struct UBP_MainMenuWidget_C_OnEscape_Params
	{	};

	/**
	 * Function BP_MainMenuWidget.BP_MainMenuWidget_C.BndEvt__mButtonQuit_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UBP_MainMenuWidget_C_BndEvt__mButtonQuit_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenuWidget.BP_MainMenuWidget_C.Construct
	 */
	struct UBP_MainMenuWidget_C_Construct_Params
	{	};

	/**
	 * Function BP_MainMenuWidget.BP_MainMenuWidget_C.BndEvt__mButtonContinue_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UBP_MainMenuWidget_C_BndEvt__mButtonContinue_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenuWidget.BP_MainMenuWidget_C.BndEvt__mButtonMP_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 */
	struct UBP_MainMenuWidget_C_BndEvt__mButtonMP_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenuWidget.BP_MainMenuWidget_C.OnExit
	 */
	struct UBP_MainMenuWidget_C_OnExit_Params
	{
	public:
		bool                                                       Bool;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenuWidget.BP_MainMenuWidget_C.NATTypeUpdated
	 */
	struct UBP_MainMenuWidget_C_NATTypeUpdated_Params
	{
	public:
		ECachedNATType                                             NATType;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenuWidget.BP_MainMenuWidget_C.Destruct
	 */
	struct UBP_MainMenuWidget_C_Destruct_Params
	{	};

	/**
	 * Function BP_MainMenuWidget.BP_MainMenuWidget_C.OnMenuEnter
	 */
	struct UBP_MainMenuWidget_C_OnMenuEnter_Params
	{
	public:
		class UWidget*                                             prevMenu;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenuWidget.BP_MainMenuWidget_C.LoginStateChanged
	 */
	struct UBP_MainMenuWidget_C_LoginStateChanged_Params
	{
	public:
		ELoginState                                                oldState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ELoginState                                                NewState;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenuWidget.BP_MainMenuWidget_C.BndEvt__mButtonContinue_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature
	 */
	struct UBP_MainMenuWidget_C_BndEvt__mButtonContinue_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenuWidget.BP_MainMenuWidget_C.BndEvt__mButtonContinue_K2Node_ComponentBoundEvent_2_OnUnhovered__DelegateSignature
	 */
	struct UBP_MainMenuWidget_C_BndEvt__mButtonContinue_K2Node_ComponentBoundEvent_2_OnUnhovered__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenuWidget.BP_MainMenuWidget_C.ClosedLoadPopup
	 */
	struct UBP_MainMenuWidget_C_ClosedLoadPopup_Params
	{
	public:
		bool                                                       ConfirmClicked;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenuWidget.BP_MainMenuWidget_C.OnMultiplayerStatusUpdated
	 */
	struct UBP_MainMenuWidget_C_OnMultiplayerStatusUpdated_Params
	{	};

	/**
	 * Function BP_MainMenuWidget.BP_MainMenuWidget_C.ModCheckPopupPressed
	 */
	struct UBP_MainMenuWidget_C_ModCheckPopupPressed_Params
	{
	public:
		bool                                                       ConfirmClicked;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenuWidget.BP_MainMenuWidget_C.BndEvt__BP_MainMenuWidget_mSwitcher_K2Node_ComponentBoundEvent_4_OnActiveWidgetSet__DelegateSignature
	 */
	struct UBP_MainMenuWidget_C_BndEvt__BP_MainMenuWidget_mSwitcher_K2Node_ComponentBoundEvent_4_OnActiveWidgetSet__DelegateSignature_Params
	{
	public:
		class UWidget*                                             oldWidget;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class UWidget*                                             newWidget;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenuWidget.BP_MainMenuWidget_C.UserInfoCreated
	 */
	struct UBP_MainMenuWidget_C_UserInfoCreated_Params
	{
	public:
		class ULocalUserInfo*                                      UserInfo;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenuWidget.BP_MainMenuWidget_C.ExecuteUbergraph_BP_MainMenuWidget
	 */
	struct UBP_MainMenuWidget_C_ExecuteUbergraph_BP_MainMenuWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VW12[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MainMenuWidget.BP_MainMenuWidget_C.OnCreditsClicked__DelegateSignature
	 */
	struct UBP_MainMenuWidget_C_OnCreditsClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenuWidget.BP_MainMenuWidget_C.OnModsClicked__DelegateSignature
	 */
	struct UBP_MainMenuWidget_C_OnModsClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenuWidget.BP_MainMenuWidget_C.OnOptionsClicked__DelegateSignature
	 */
	struct UBP_MainMenuWidget_C_OnOptionsClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenuWidget.BP_MainMenuWidget_C.OnLoadClicked__DelegateSignature
	 */
	struct UBP_MainMenuWidget_C_OnLoadClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenuWidget.BP_MainMenuWidget_C.OnExitClicked__DelegateSignature
	 */
	struct UBP_MainMenuWidget_C_OnExitClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenuWidget.BP_MainMenuWidget_C.OnBrowseClicked__DelegateSignature
	 */
	struct UBP_MainMenuWidget_C_OnBrowseClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenuWidget.BP_MainMenuWidget_C.OnPlayClicked__DelegateSignature
	 */
	struct UBP_MainMenuWidget_C_OnPlayClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
