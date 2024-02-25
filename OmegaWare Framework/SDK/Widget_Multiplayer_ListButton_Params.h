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
	 * Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.OpenMenuAnchor
	 */
	struct UWidget_Multiplayer_ListButton_C_OpenMenuAnchor_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.DeselectButton
	 */
	struct UWidget_Multiplayer_ListButton_C_DeselectButton_Params
	{	};

	/**
	 * Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.GetManagedPlayerPresenceString
	 */
	struct UWidget_Multiplayer_ListButton_C_GetManagedPlayerPresenceString_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.GetManagedPlayerName
	 */
	struct UWidget_Multiplayer_ListButton_C_GetManagedPlayerName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.GetManagedPlayerPing
	 */
	struct UWidget_Multiplayer_ListButton_C_GetManagedPlayerPing_Params
	{
	public:
		int32_t                                                    Ping;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.IsManagedPlayerServerAdmin
	 */
	struct UWidget_Multiplayer_ListButton_C_IsManagedPlayerServerAdmin_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.UpdateSessionStatus
	 */
	struct UWidget_Multiplayer_ListButton_C_UpdateSessionStatus_Params
	{	};

	/**
	 * Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.UpdateFriendStatus
	 */
	struct UWidget_Multiplayer_ListButton_C_UpdateFriendStatus_Params
	{	};

	/**
	 * Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.QuerySession
	 */
	struct UWidget_Multiplayer_ListButton_C_QuerySession_Params
	{	};

	/**
	 * Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.OnSessionQueried
	 */
	struct UWidget_Multiplayer_ListButton_C_OnSessionQueried_Params
	{
	public:
		struct FCommonSession                                      SessionResult;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.UpdateNATWarningForClient
	 */
	struct UWidget_Multiplayer_ListButton_C_UpdateNATWarningForClient_Params
	{	};

	/**
	 * Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.GetHostingNATIsse
	 */
	struct UWidget_Multiplayer_ListButton_C_GetHostingNATIsse_Params
	{
	public:
		ECachedNATType                                             HostNat;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ECachedNATType                                             ClientNat;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JNAH[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                ToolTip;                                                 // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.UpdateNATWarningForHost
	 */
	struct UWidget_Multiplayer_ListButton_C_UpdateNATWarningForHost_Params
	{	};

	/**
	 * Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.SetupForManagePlayers
	 */
	struct UWidget_Multiplayer_ListButton_C_SetupForManagePlayers_Params
	{
	public:
		class AFGPlayerState*                                      PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.SetupForJoinInvite
	 */
	struct UWidget_Multiplayer_ListButton_C_SetupForJoinInvite_Params
	{
	public:
		struct FPendingInvite                                      invite;                                                  // 0x0000(0x0140)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.SetupForSendInvite
	 */
	struct UWidget_Multiplayer_ListButton_C_SetupForSendInvite_Params
	{
	public:
		struct FFGOnlineFriend                                     Friend;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.SetupForJoinGame
	 */
	struct UWidget_Multiplayer_ListButton_C_SetupForJoinGame_Params
	{
	public:
		struct FFGOnlineFriend                                     Friend;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.SetButtonColor
	 */
	struct UWidget_Multiplayer_ListButton_C_SetButtonColor_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.ClearListSelection
	 */
	struct UWidget_Multiplayer_ListButton_C_ClearListSelection_Params
	{	};

	/**
	 * Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.UpdateButton
	 */
	struct UWidget_Multiplayer_ListButton_C_UpdateButton_Params
	{	};

	/**
	 * Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.PreConstruct
	 */
	struct UWidget_Multiplayer_ListButton_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.BndEvt__mButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWidget_Multiplayer_ListButton_C_BndEvt__mButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.Construct
	 */
	struct UWidget_Multiplayer_ListButton_C_Construct_Params
	{	};

	/**
	 * Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.Event Show Player Kicked Feedback
	 */
	struct UWidget_Multiplayer_ListButton_C_EventShowPlayerKickedFeedback_Params
	{	};

	/**
	 * Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.Destruct
	 */
	struct UWidget_Multiplayer_ListButton_C_Destruct_Params
	{	};

	/**
	 * Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.OnSessionQueryFinished
	 */
	struct UWidget_Multiplayer_ListButton_C_OnSessionQueryFinished_Params
	{	};

	/**
	 * Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.OnSessionQueryStarted
	 */
	struct UWidget_Multiplayer_ListButton_C_OnSessionQueryStarted_Params
	{	};

	/**
	 * Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.OnMouseEnter
	 */
	struct UWidget_Multiplayer_ListButton_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.OnMouseLeave
	 */
	struct UWidget_Multiplayer_ListButton_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.On Player Kicked
	 */
	struct UWidget_Multiplayer_ListButton_C_OnPlayerKicked_Params
	{	};

	/**
	 * Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.ExecuteUbergraph_Widget_Multiplayer_ListButton
	 */
	struct UWidget_Multiplayer_ListButton_C_ExecuteUbergraph_Widget_Multiplayer_ListButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8CFD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.OnSessionDeselected__DelegateSignature
	 */
	struct UWidget_Multiplayer_ListButton_C_OnSessionDeselected__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.OnButtonClicked__DelegateSignature
	 */
	struct UWidget_Multiplayer_ListButton_C_OnButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.OnSessionSelected__DelegateSignature
	 */
	struct UWidget_Multiplayer_ListButton_C_OnSessionSelected__DelegateSignature_Params
	{
	public:
		struct FCommonSession                                      Session;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.OnActionButtonClicked__DelegateSignature
	 */
	struct UWidget_Multiplayer_ListButton_C_OnActionButtonClicked__DelegateSignature_Params
	{
	public:
		class UWidget_Multiplayer_ListButton_C*                    ClickedButton;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
