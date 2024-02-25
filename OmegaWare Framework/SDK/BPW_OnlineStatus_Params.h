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
	 * Function BPW_OnlineStatus.BPW_OnlineStatus_C.SetOnlineAuthenticationSequence
	 */
	struct UBPW_OnlineStatus_C_SetOnlineAuthenticationSequence_Params
	{
	public:
		class UOnlineAuthenticationSequence*                       ViewModel;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_OnlineStatus.BPW_OnlineStatus_C.SetLocalUserInfoSecondaryBackend
	 */
	struct UBPW_OnlineStatus_C_SetLocalUserInfoSecondaryBackend_Params
	{
	public:
		class ULocalUserInfoBackend*                               ViewModel;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_OnlineStatus.BPW_OnlineStatus_C.SetLocalUserInfoPlatformBackend
	 */
	struct UBPW_OnlineStatus_C_SetLocalUserInfoPlatformBackend_Params
	{
	public:
		class ULocalUserInfoBackend*                               ViewModel;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_OnlineStatus.BPW_OnlineStatus_C.SetLocalUserInfo
	 */
	struct UBPW_OnlineStatus_C_SetLocalUserInfo_Params
	{
	public:
		class ULocalUserInfo*                                      ViewModel;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_OnlineStatus.BPW_OnlineStatus_C.__4d2c0517-430d-3f7f-b369-bea16fcf09b7_SourceToDest
	 */
	struct UBPW_OnlineStatus_C___4d2c0517430d3f7fb369bea16fcf09b7_SourceToDest_Params
	{
	public:
		ESlateVisibility                                           Visibility;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_OnlineStatus.BPW_OnlineStatus_C.__f697fb59-449f-c25f-d46e-61b67d7f097c_SourceToDest
	 */
	struct UBPW_OnlineStatus_C___f697fb59449fc25fd46e61b67d7f097c_SourceToDest_Params
	{
	public:
		ESlateVisibility                                           Visibility;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_OnlineStatus.BPW_OnlineStatus_C.__0e976d06-4ebd-ea49-2632-efa504336e24_SourceToDest
	 */
	struct UBPW_OnlineStatus_C___0e976d064ebdea492632efa504336e24_SourceToDest_Params
	{
	public:
		ESlateVisibility                                           Visibility;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_OnlineStatus.BPW_OnlineStatus_C.__ac76ecaa-4310-13b1-4257-39af0f70d6ab_SourceToDest
	 */
	struct UBPW_OnlineStatus_C___ac76ecaa431013b1425739af0f70d6ab_SourceToDest_Params
	{
	public:
		ESlateVisibility                                           Visibility;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_OnlineStatus.BPW_OnlineStatus_C.OnUnlinkPopupClosed
	 */
	struct UBPW_OnlineStatus_C_OnUnlinkPopupClosed_Params
	{
	public:
		bool                                                       ConfirmClicked;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_OnlineStatus.BPW_OnlineStatus_C.ShowUnlinkConfirmationPopup
	 */
	struct UBPW_OnlineStatus_C_ShowUnlinkConfirmationPopup_Params
	{	};

	/**
	 * Function BPW_OnlineStatus.BPW_OnlineStatus_C.UpdateStatusTextDependingOnPendingChanges
	 */
	struct UBPW_OnlineStatus_C_UpdateStatusTextDependingOnPendingChanges_Params
	{
	public:
		ECommonUserLoginStatus                                     UserStatus;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7I1L[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                Text;                                                    // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BPW_OnlineStatus.BPW_OnlineStatus_C.GetPlayDurationText
	 */
	struct UBPW_OnlineStatus_C_GetPlayDurationText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BPW_OnlineStatus.BPW_OnlineStatus_C.ManageVisibilityFromSessionState
	 */
	struct UBPW_OnlineStatus_C_ManageVisibilityFromSessionState_Params
	{
	public:
		struct FCommonSession                                      GameSession;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		ESlateVisibility                                           Visibility;                                              // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_OnlineStatus.BPW_OnlineStatus_C.ManageMainInfoVisibilityFromSessionState
	 */
	struct UBPW_OnlineStatus_C_ManageMainInfoVisibilityFromSessionState_Params
	{
	public:
		struct FCommonSession                                      Session;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		ESlateVisibility                                           ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_OnlineStatus.BPW_OnlineStatus_C.SetExternalUserNameVisibilityFromLoginStatus
	 */
	struct UBPW_OnlineStatus_C_SetExternalUserNameVisibilityFromLoginStatus_Params
	{
	public:
		ECommonUserLoginStatus                                     LoginStatus;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESlateVisibility                                           Visibility;                                              // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_OnlineStatus.BPW_OnlineStatus_C.SecondaryPlatformStatusVisibility_FromSessionState
	 */
	struct UBPW_OnlineStatus_C_SecondaryPlatformStatusVisibility_FromSessionState_Params
	{
	public:
		struct FCommonSession                                      GameSession;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		ESlateVisibility                                           Visibility;                                              // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_OnlineStatus.BPW_OnlineStatus_C.__5c4a4556-4123-5571-5eda-10bd3b6a238f_SourceToDest
	 */
	struct UBPW_OnlineStatus_C___5c4a4556412355715eda10bd3b6a238f_SourceToDest_Params
	{
	public:
		class UMaterialInstance*                                   Material;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_OnlineStatus.BPW_OnlineStatus_C.AggregateStatusToStatusMaterial
	 */
	struct UBPW_OnlineStatus_C_AggregateStatusToStatusMaterial_Params
	{
	public:
		bool                                                       ConnectionPending;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       HasLinkedAccount;                                        // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       HasError;                                                // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5UTX[0x5];                                   // 0x0003(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UMaterialInstance*                                   Material;                                                // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_OnlineStatus.BPW_OnlineStatus_C.SetSecondaryPlatformLogo
	 */
	struct UBPW_OnlineStatus_C_SetSecondaryPlatformLogo_Params
	{
	public:
		class FName                                                PlatformName;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_OnlineStatus.BPW_OnlineStatus_C.GetSessionNameText
	 */
	struct UBPW_OnlineStatus_C_GetSessionNameText_Params
	{	};

	/**
	 * Function BPW_OnlineStatus.BPW_OnlineStatus_C.SetPrimaryPlatformLogo
	 */
	struct UBPW_OnlineStatus_C_SetPrimaryPlatformLogo_Params
	{
	public:
		class FName                                                PlatformName;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_OnlineStatus.BPW_OnlineStatus_C.PlatformIconFromPlatformName
	 */
	struct UBPW_OnlineStatus_C_PlatformIconFromPlatformName_Params
	{
	public:
		class FName                                                PlatformName;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CLI1[0x30];                                  // 0x0008(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_OnlineStatus.BPW_OnlineStatus_C.SlateBrushFromPlayerAvatarOrDefault
	 */
	struct UBPW_OnlineStatus_C_SlateBrushFromPlayerAvatarOrDefault_Params
	{
	public:
		struct FPlayerAvatar                                       PlayerAvatar;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		unsigned char                                              UnknownData_AG8W[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSlateBrush                                         Brush;                                                   // 0x0010(0x00D0)  (Parm, OutParm)
	};

	/**
	 * Function BPW_OnlineStatus.BPW_OnlineStatus_C.SecondaryPlatformStatusVisibility
	 */
	struct UBPW_OnlineStatus_C_SecondaryPlatformStatusVisibility_Params
	{
	public:
		bool                                                       IsPlatformInUse;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESlateVisibility                                           Visibility;                                              // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_OnlineStatus.BPW_OnlineStatus_C.UnlinkAccountsVisibilityFromHasLinkedAccountBool
	 */
	struct UBPW_OnlineStatus_C_UnlinkAccountsVisibilityFromHasLinkedAccountBool_Params
	{
	public:
		bool                                                       LoginStatus;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESlateVisibility                                           Visibility;                                              // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_OnlineStatus.BPW_OnlineStatus_C.LoginButtonVisibilityFromLoginStatus
	 */
	struct UBPW_OnlineStatus_C_LoginButtonVisibilityFromLoginStatus_Params
	{
	public:
		ECommonUserLoginStatus                                     LoginStatus;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bLoginPending;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bHasLinkedAccount;                                       // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESlateVisibility                                           Visibility;                                              // 0x0003(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_OnlineStatus.BPW_OnlineStatus_C.NATTypeToColor
	 */
	struct UBPW_OnlineStatus_C_NATTypeToColor_Params
	{
	public:
		ECommonUserNATType                                         NATType;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YJ4I[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSlateColor                                         Color;                                                   // 0x0004(0x0014)  (Parm, OutParm)
	};

	/**
	 * Function BPW_OnlineStatus.BPW_OnlineStatus_C.LogoutButtonVisibilityFromLoginStatus
	 */
	struct UBPW_OnlineStatus_C_LogoutButtonVisibilityFromLoginStatus_Params
	{
	public:
		ECommonUserLoginStatus                                     LoginStatus;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bPendingLoginChange;                                     // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESlateVisibility                                           Visibility;                                              // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_OnlineStatus.BPW_OnlineStatus_C.NATTypeToText
	 */
	struct UBPW_OnlineStatus_C_NATTypeToText_Params
	{
	public:
		ECommonUserNATType                                         NATType;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JJAP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                Text;                                                    // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BPW_OnlineStatus.BPW_OnlineStatus_C.BndEvt__BPW_OnlineStatus_Button_Unlink_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBPW_OnlineStatus_C_BndEvt__BPW_OnlineStatus_Button_Unlink_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_OnlineStatus.BPW_OnlineStatus_C.BndEvt__BPW_OnlineStatus_Button_Login_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBPW_OnlineStatus_C_BndEvt__BPW_OnlineStatus_Button_Login_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_OnlineStatus.BPW_OnlineStatus_C.BndEvt__BPW_OnlineStatus_Button_Logout_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBPW_OnlineStatus_C_BndEvt__BPW_OnlineStatus_Button_Logout_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_OnlineStatus.BPW_OnlineStatus_C.Construct
	 */
	struct UBPW_OnlineStatus_C_Construct_Params
	{	};

	/**
	 * Function BPW_OnlineStatus.BPW_OnlineStatus_C.ExecuteUbergraph_BPW_OnlineStatus
	 */
	struct UBPW_OnlineStatus_C_ExecuteUbergraph_BPW_OnlineStatus_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_O1ZH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
