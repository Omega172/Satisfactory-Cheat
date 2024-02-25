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
	 * Function BPW_FriendList_Actions.BPW_FriendList_Actions_C.SetLocalUserInfo
	 */
	struct UBPW_FriendList_Actions_C_SetLocalUserInfo_Params
	{
	public:
		class ULocalUserInfo*                                      ViewModel;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_FriendList_Actions.BPW_FriendList_Actions_C.SetOnlineFriend
	 */
	struct UBPW_FriendList_Actions_C_SetOnlineFriend_Params
	{
	public:
		class UOnlineFriend*                                       ViewModel;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_FriendList_Actions.BPW_FriendList_Actions_C.SetOnlineUserPresence
	 */
	struct UBPW_FriendList_Actions_C_SetOnlineUserPresence_Params
	{
	public:
		class UOnlineUserPresence*                                 ViewModel;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_FriendList_Actions.BPW_FriendList_Actions_C.SetKickButtonVisibility
	 */
	struct UBPW_FriendList_Actions_C_SetKickButtonVisibility_Params
	{
	public:
		bool                                                       IsInManagePlayersMode;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESlateVisibility                                           Visibility;                                              // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_FriendList_Actions.BPW_FriendList_Actions_C.SetAcceptRejectInviteVisibilityDependingOnInviteReceived
	 */
	struct UBPW_FriendList_Actions_C_SetAcceptRejectInviteVisibilityDependingOnInviteReceived_Params
	{
	public:
		bool                                                       HasIncomingInvite;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESlateVisibility                                           Visibility;                                              // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_FriendList_Actions.BPW_FriendList_Actions_C.SetInviteButtonVisibilityDependingOnGameSessionStatus
	 */
	struct UBPW_FriendList_Actions_C_SetInviteButtonVisibilityDependingOnGameSessionStatus_Params
	{
	public:
		struct FCommonSession                                      Joinability;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		ESlateVisibility                                           Visiblity;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_FriendList_Actions.BPW_FriendList_Actions_C.SetJoinButtonVisibilityDependingOnJoinability
	 */
	struct UBPW_FriendList_Actions_C_SetJoinButtonVisibilityDependingOnJoinability_Params
	{
	public:
		EOnlineUserPresenceJoinability                             Joinability;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESlateVisibility                                           Visibility;                                              // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_FriendList_Actions.BPW_FriendList_Actions_C.BndEvt__BPW_FriendList_Actions_Button_JoinSession_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBPW_FriendList_Actions_C_BndEvt__BPW_FriendList_Actions_Button_JoinSession_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_FriendList_Actions.BPW_FriendList_Actions_C.BndEvt__BPW_FriendList_Actions_Button_InviteToSession_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBPW_FriendList_Actions_C_BndEvt__BPW_FriendList_Actions_Button_InviteToSession_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_FriendList_Actions.BPW_FriendList_Actions_C.BndEvt__BPW_FriendList_Actions_Button_AcceptInvite_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBPW_FriendList_Actions_C_BndEvt__BPW_FriendList_Actions_Button_AcceptInvite_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_FriendList_Actions.BPW_FriendList_Actions_C.BndEvt__BPW_FriendList_Actions_Button_RejectInvite_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBPW_FriendList_Actions_C_BndEvt__BPW_FriendList_Actions_Button_RejectInvite_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_FriendList_Actions.BPW_FriendList_Actions_C.BndEvt__BPW_FriendList_Actions_Button_KickPlayer_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBPW_FriendList_Actions_C_BndEvt__BPW_FriendList_Actions_Button_KickPlayer_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_FriendList_Actions.BPW_FriendList_Actions_C.ExecuteUbergraph_BPW_FriendList_Actions
	 */
	struct UBPW_FriendList_Actions_C_ExecuteUbergraph_BPW_FriendList_Actions_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_FriendList_Actions.BPW_FriendList_Actions_C.OnKickClicked__DelegateSignature
	 */
	struct UBPW_FriendList_Actions_C_OnKickClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_FriendList_Actions.BPW_FriendList_Actions_C.OnRejectInviteClicked__DelegateSignature
	 */
	struct UBPW_FriendList_Actions_C_OnRejectInviteClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_FriendList_Actions.BPW_FriendList_Actions_C.OnAcceptInviteClicked__DelegateSignature
	 */
	struct UBPW_FriendList_Actions_C_OnAcceptInviteClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_FriendList_Actions.BPW_FriendList_Actions_C.OnInviteToSessionClicked__DelegateSignature
	 */
	struct UBPW_FriendList_Actions_C_OnInviteToSessionClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_FriendList_Actions.BPW_FriendList_Actions_C.OnJoinClicked__DelegateSignature
	 */
	struct UBPW_FriendList_Actions_C_OnJoinClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
