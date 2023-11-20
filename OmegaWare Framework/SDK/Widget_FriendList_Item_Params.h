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
	 * Function Widget_FriendList_Item.Widget_FriendList_Item_C.SetLocalUserInfoBackend
	 */
	struct UWidget_FriendList_Item_C_SetLocalUserInfoBackend_Params
	{
	public:
		class ULocalUserInfoBackend*                               ViewModel;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_FriendList_Item.Widget_FriendList_Item_C.SetLocalUserInfo
	 */
	struct UWidget_FriendList_Item_C_SetLocalUserInfo_Params
	{
	public:
		class ULocalUserInfo*                                      ViewModel;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_FriendList_Item.Widget_FriendList_Item_C.SetFriendPresence
	 */
	struct UWidget_FriendList_Item_C_SetFriendPresence_Params
	{
	public:
		class UOnlineUserPresence*                                 ViewModel;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_FriendList_Item.Widget_FriendList_Item_C.SetFriend
	 */
	struct UWidget_FriendList_Item_C_SetFriend_Params
	{
	public:
		class UOnlineFriend*                                       ViewModel;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_FriendList_Item.Widget_FriendList_Item_C.SetTextColorAccordingToPresence
	 */
	struct UWidget_FriendList_Item_C_SetTextColorAccordingToPresence_Params
	{
	public:
		EOnlineUserPresenceStatus                                  Presence;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Y3OC[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSlateColor                                         Color;                                                   // 0x0004(0x0014)  (Parm, OutParm)
	};

	/**
	 * Function Widget_FriendList_Item.Widget_FriendList_Item_C.OnGetUserMenuContent
	 */
	struct UWidget_FriendList_Item_C_OnGetUserMenuContent_Params
	{
	public:
		class UUserWidget*                                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_FriendList_Item.Widget_FriendList_Item_C.CloseMenuAnchor
	 */
	struct UWidget_FriendList_Item_C_CloseMenuAnchor_Params
	{	};

	/**
	 * Function Widget_FriendList_Item.Widget_FriendList_Item_C.OnlineStatusIndicatorColor_FromPresenceStatus
	 */
	struct UWidget_FriendList_Item_C_OnlineStatusIndicatorColor_FromPresenceStatus_Params
	{
	public:
		EOnlineUserPresenceStatus                                  PresenceStatus;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_D52D[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSlateColor                                         IndicatorColor;                                          // 0x0004(0x0014)  (Parm, OutParm)
	};

	/**
	 * Function Widget_FriendList_Item.Widget_FriendList_Item_C.Visibile_IfIsInOnlineSession
	 */
	struct UWidget_FriendList_Item_C_Visibile_IfIsInOnlineSession_Params
	{
	public:
		struct FCommonSession                                      Session;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		ESlateVisibility                                           Visibility;                                              // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_FriendList_Item.Widget_FriendList_Item_C.__c5a94980-4239-c7ec-1eb0-5ba91417454b_SourceToDest
	 */
	struct UWidget_FriendList_Item_C___c5a949804239c7ec1eb05ba91417454b_SourceToDest_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function Widget_FriendList_Item.Widget_FriendList_Item_C.PresenceString_FromGameStatusAndRichPresence
	 */
	struct UWidget_FriendList_Item_C_PresenceString_FromGameStatusAndRichPresence_Params
	{
	public:
		EOnlineUserPresenceGameStatus                              GameStatus;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_29SP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              RichPresenceString;                                      // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		EOnlineUserPresenceStatus                                  Presence;                                                // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2NKV[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                Text;                                                    // 0x0020(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function Widget_FriendList_Item.Widget_FriendList_Item_C.ShowInviteToSessionButton_IfSessionAllowsIt
	 */
	struct UWidget_FriendList_Item_C_ShowInviteToSessionButton_IfSessionAllowsIt_Params
	{
	public:
		bool                                                       InSession;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESlateVisibility                                           Visibility;                                              // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_FriendList_Item.Widget_FriendList_Item_C.Join Button Visibility from Presence Joinability
	 */
	struct UWidget_FriendList_Item_C_JoinButtonVisibilityfromPresenceJoinability_Params
	{
	public:
		EOnlineUserPresenceJoinability                             PresenceJoinability;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESlateVisibility                                           ButtonVisibility;                                        // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_FriendList_Item.Widget_FriendList_Item_C.UpdateNATWarningForClient
	 */
	struct UWidget_FriendList_Item_C_UpdateNATWarningForClient_Params
	{	};

	/**
	 * Function Widget_FriendList_Item.Widget_FriendList_Item_C.Get Hosting NATIsse
	 */
	struct UWidget_FriendList_Item_C_GetHostingNATIsse_Params
	{
	public:
		ECachedNATType                                             hostNat;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ECachedNATType                                             clientNat;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_37YB[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                ToolTip;                                                 // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function Widget_FriendList_Item.Widget_FriendList_Item_C.UpdateNATWarningForHost
	 */
	struct UWidget_FriendList_Item_C_UpdateNATWarningForHost_Params
	{	};

	/**
	 * Function Widget_FriendList_Item.Widget_FriendList_Item_C.BndEvt__Widget_FriendList_Item_mFriendListButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWidget_FriendList_Item_C_BndEvt__Widget_FriendList_Item_mFriendListButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_FriendList_Item.Widget_FriendList_Item_C.On Invite To Session Clicked
	 */
	struct UWidget_FriendList_Item_C_OnInviteToSessionClicked_Params
	{	};

	/**
	 * Function Widget_FriendList_Item.Widget_FriendList_Item_C.On Accept Invite Clicked
	 */
	struct UWidget_FriendList_Item_C_OnAcceptInviteClicked_Params
	{	};

	/**
	 * Function Widget_FriendList_Item.Widget_FriendList_Item_C.On Join Game Clicked
	 */
	struct UWidget_FriendList_Item_C_OnJoinGameClicked_Params
	{	};

	/**
	 * Function Widget_FriendList_Item.Widget_FriendList_Item_C.On Reject Invite Clicked
	 */
	struct UWidget_FriendList_Item_C_OnRejectInviteClicked_Params
	{	};

	/**
	 * Function Widget_FriendList_Item.Widget_FriendList_Item_C.BndEvt__Widget_FriendList_Item_mActionButtonsAnchor_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature
	 */
	struct UWidget_FriendList_Item_C_BndEvt__Widget_FriendList_Item_mActionButtonsAnchor_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature_Params
	{
	public:
		bool                                                       bIsOpen;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_FriendList_Item.Widget_FriendList_Item_C.Destruct
	 */
	struct UWidget_FriendList_Item_C_Destruct_Params
	{	};

	/**
	 * Function Widget_FriendList_Item.Widget_FriendList_Item_C.SelectionStateUpdate
	 */
	struct UWidget_FriendList_Item_C_SelectionStateUpdate_Params
	{
	public:
		bool                                                       selectionState;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_FriendList_Item.Widget_FriendList_Item_C.PreConstruct
	 */
	struct UWidget_FriendList_Item_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_FriendList_Item.Widget_FriendList_Item_C.OnMouseLeave
	 */
	struct UWidget_FriendList_Item_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Widget_FriendList_Item.Widget_FriendList_Item_C.OnMouseEnter
	 */
	struct UWidget_FriendList_Item_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Widget_FriendList_Item.Widget_FriendList_Item_C.OnListItemObjectSet
	 */
	struct UWidget_FriendList_Item_C_OnListItemObjectSet_Params
	{
	public:
		class UObject*                                             ListItemObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_FriendList_Item.Widget_FriendList_Item_C.ExecuteUbergraph_Widget_FriendList_Item
	 */
	struct UWidget_FriendList_Item_C_ExecuteUbergraph_Widget_FriendList_Item_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JDOF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_FriendList_Item.Widget_FriendList_Item_C.OnSessionDeselected__DelegateSignature
	 */
	struct UWidget_FriendList_Item_C_OnSessionDeselected__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_FriendList_Item.Widget_FriendList_Item_C.OnButtonClicked__DelegateSignature
	 */
	struct UWidget_FriendList_Item_C_OnButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_FriendList_Item.Widget_FriendList_Item_C.OnSessionSelected__DelegateSignature
	 */
	struct UWidget_FriendList_Item_C_OnSessionSelected__DelegateSignature_Params
	{
	public:
		struct FBlueprintSessionResult                             Session;                                                 // 0x0000(0x0120)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Widget_FriendList_Item.Widget_FriendList_Item_C.OnActionButtonClicked__DelegateSignature
	 */
	struct UWidget_FriendList_Item_C_OnActionButtonClicked__DelegateSignature_Params
	{
	public:
		class UWidget_Multiplayer_ListButton_C*                    ClickedButton;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
