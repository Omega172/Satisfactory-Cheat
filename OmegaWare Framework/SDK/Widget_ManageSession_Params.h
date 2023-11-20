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
	 * Function Widget_ManageSession.Widget_ManageSession_C.UpdateCurrentSessionType
	 */
	struct UWidget_ManageSession_C_UpdateCurrentSessionType_Params
	{	};

	/**
	 * Function Widget_ManageSession.Widget_ManageSession_C.UpdateCreativeModeFeedback
	 */
	struct UWidget_ManageSession_C_UpdateCreativeModeFeedback_Params
	{	};

	/**
	 * Function Widget_ManageSession.Widget_ManageSession_C.ClearIngamePlayerList
	 */
	struct UWidget_ManageSession_C_ClearIngamePlayerList_Params
	{	};

	/**
	 * Function Widget_ManageSession.Widget_ManageSession_C.IsHost
	 */
	struct UWidget_ManageSession_C_IsHost_Params
	{
	public:
		class APlayerState*                                        State;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       isOurself;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_04TF[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_ManageSession.Widget_ManageSession_C.DisableSessionType
	 */
	struct UWidget_ManageSession_C_DisableSessionType_Params
	{	};

	/**
	 * Function Widget_ManageSession.Widget_ManageSession_C.DisableClientOptions
	 */
	struct UWidget_ManageSession_C_DisableClientOptions_Params
	{	};

	/**
	 * Function Widget_ManageSession.Widget_ManageSession_C.PopulateManagePlayerList
	 */
	struct UWidget_ManageSession_C_PopulateManagePlayerList_Params
	{	};

	/**
	 * Function Widget_ManageSession.Widget_ManageSession_C.ClearLeftSelection
	 */
	struct UWidget_ManageSession_C_ClearLeftSelection_Params
	{	};

	/**
	 * Function Widget_ManageSession.Widget_ManageSession_C.OnEscape
	 */
	struct UWidget_ManageSession_C_OnEscape_Params
	{	};

	/**
	 * Function Widget_ManageSession.Widget_ManageSession_C.OnKick
	 */
	struct UWidget_ManageSession_C_OnKick_Params
	{
	public:
		class UWidget_Multiplayer_ListButton_C*                    ClickedButton;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ManageSession.Widget_ManageSession_C.OnMenuEnter
	 */
	struct UWidget_ManageSession_C_OnMenuEnter_Params
	{
	public:
		class UWidget*                                             prevMenu;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ManageSession.Widget_ManageSession_C.Construct
	 */
	struct UWidget_ManageSession_C_Construct_Params
	{	};

	/**
	 * Function Widget_ManageSession.Widget_ManageSession_C.CustomEvent
	 */
	struct UWidget_ManageSession_C_CustomEvent_Params
	{
	public:
		class UWidget_Multiplayer_ListButton_C*                    ClickedButton;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ManageSession.Widget_ManageSession_C.ConfirmJoinInvite
	 */
	struct UWidget_ManageSession_C_ConfirmJoinInvite_Params
	{
	public:
		class UWidget_Multiplayer_ListButton_C*                    Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ManageSession.Widget_ManageSession_C.On Confirm Invite Popup Clicked
	 */
	struct UWidget_ManageSession_C_OnConfirmInvitePopupClicked_Params
	{
	public:
		bool                                                       ConfirmClicked;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ManageSession.Widget_ManageSession_C.BndEvt__Widget_ManageSession_BPW_LegacySessionInformation_K2Node_ComponentBoundEvent_0_OnSwitcherWidgetChanged__DelegateSignature
	 */
	struct UWidget_ManageSession_C_BndEvt__Widget_ManageSession_BPW_LegacySessionInformation_K2Node_ComponentBoundEvent_0_OnSwitcherWidgetChanged__DelegateSignature_Params
	{
	public:
		class UWidget*                                             OldWidget;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class UWidget*                                             NewWidget;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ManageSession.Widget_ManageSession_C.ExecuteUbergraph_Widget_ManageSession
	 */
	struct UWidget_ManageSession_C_ExecuteUbergraph_Widget_ManageSession_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_C9T8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
