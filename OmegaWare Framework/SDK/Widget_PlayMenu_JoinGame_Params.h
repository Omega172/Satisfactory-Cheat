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
	 * Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.UpdateCreativeModeInfo
	 */
	struct UWidget_PlayMenu_JoinGame_C_UpdateCreativeModeInfo_Params
	{
	public:
		struct FBlueprintSessionResult                             Session;                                                 // 0x0000(0x0120)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.ClearAndHideSearchResults
	 */
	struct UWidget_PlayMenu_JoinGame_C_ClearAndHideSearchResults_Params
	{	};

	/**
	 * Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.OnSearchCreateResult
	 */
	struct UWidget_PlayMenu_JoinGame_C_OnSearchCreateResult_Params
	{
	public:
		class FText                                                mSearchText;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.GetHostName
	 */
	struct UWidget_PlayMenu_JoinGame_C_GetHostName_Params
	{
	public:
		class FText                                                HostName;                                                // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.DeselectSessionIDButton
	 */
	struct UWidget_PlayMenu_JoinGame_C_DeselectSessionIDButton_Params
	{
	public:
		struct FBlueprintSessionResult                             Session;                                                 // 0x0000(0x0120)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.OnSessionIDButtonClicked
	 */
	struct UWidget_PlayMenu_JoinGame_C_OnSessionIDButtonClicked_Params
	{
	public:
		struct FBlueprintSessionResult                             Session;                                                 // 0x0000(0x0120)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.OnSessionIDFound
	 */
	struct UWidget_PlayMenu_JoinGame_C_OnSessionIDFound_Params
	{
	public:
		struct FCommonSession                                      Session;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.ClearButtonSelection
	 */
	struct UWidget_PlayMenu_JoinGame_C_ClearButtonSelection_Params
	{	};

	/**
	 * Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.OnSessionQueried
	 */
	struct UWidget_PlayMenu_JoinGame_C_OnSessionQueried_Params
	{
	public:
		struct FCommonSession                                      Session;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.FindSessionId
	 */
	struct UWidget_PlayMenu_JoinGame_C_FindSessionId_Params
	{
	public:
		class FString                                              SessionId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.SetupButtonForJoinGame
	 */
	struct UWidget_PlayMenu_JoinGame_C_SetupButtonForJoinGame_Params
	{
	public:
		class UWidget_Multiplayer_ListButton_C*                    Button;                                                  // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		struct FFGOnlineFriend                                     Friend;                                                  // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		class UVerticalBox*                                        VerticalBox;                                             // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.UpdateFriendsForJoinMenu
	 */
	struct UWidget_PlayMenu_JoinGame_C_UpdateFriendsForJoinMenu_Params
	{
	public:
		TArray<struct FFGOnlineFriend>                             Friends;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.UpdateFriendForJoinMenu
	 */
	struct UWidget_PlayMenu_JoinGame_C_UpdateFriendForJoinMenu_Params
	{
	public:
		struct FUniqueNetIdRepl                                    NetId;                                                   // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.ShowSessionInfoAnim
	 */
	struct UWidget_PlayMenu_JoinGame_C_ShowSessionInfoAnim_Params
	{	};

	/**
	 * Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.SetSessionInfo
	 */
	struct UWidget_PlayMenu_JoinGame_C_SetSessionInfo_Params
	{
	public:
		struct FBlueprintSessionResult                             Session;                                                 // 0x0000(0x0120)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.ClearMultiplayerList
	 */
	struct UWidget_PlayMenu_JoinGame_C_ClearMultiplayerList_Params
	{	};

	/**
	 * Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.PopulateMultiplayerList
	 */
	struct UWidget_PlayMenu_JoinGame_C_PopulateMultiplayerList_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Z0Y1[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.OnMenuEnter
	 */
	struct UWidget_PlayMenu_JoinGame_C_OnMenuEnter_Params
	{
	public:
		class UWidget*                                             prevMenu;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.OnMenuExit
	 */
	struct UWidget_PlayMenu_JoinGame_C_OnMenuExit_Params
	{
	public:
		class UWidget*                                             prevMenu;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		bool                                                       noAnimation;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.OnSessionDeselected
	 */
	struct UWidget_PlayMenu_JoinGame_C_OnSessionDeselected_Params
	{	};

	/**
	 * Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.BndEvt__Widget_FrontEnd_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UWidget_PlayMenu_JoinGame_C_BndEvt__Widget_FrontEnd_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.OnJoinSessionNew
	 */
	struct UWidget_PlayMenu_JoinGame_C_OnJoinSessionNew_Params
	{	};

	/**
	 * Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.OnNewSessionSelected
	 */
	struct UWidget_PlayMenu_JoinGame_C_OnNewSessionSelected_Params
	{
	public:
		struct FBlueprintSessionResult                             Session;                                                 // 0x0000(0x0120)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.HideSessionInfo
	 */
	struct UWidget_PlayMenu_JoinGame_C_HideSessionInfo_Params
	{
	public:
		bool                                                       InstantAnimation;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.OnJoinSession
	 */
	struct UWidget_PlayMenu_JoinGame_C_OnJoinSession_Params
	{
	public:
		class UWidget_Multiplayer_ListButton_C*                    ClickedButton;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.BndEvt__Widget_PlayMenu_JoinGame_Widget_InputBox_K2Node_ComponentBoundEvent_1_OnTextChanged__DelegateSignature
	 */
	struct UWidget_PlayMenu_JoinGame_C_BndEvt__Widget_PlayMenu_JoinGame_Widget_InputBox_K2Node_ComponentBoundEvent_1_OnTextChanged__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.BndEvt__Widget_PlayMenu_JoinGame_mSearchbar_K2Node_ComponentBoundEvent_2_OnTextComitted__DelegateSignature
	 */
	struct UWidget_PlayMenu_JoinGame_C_BndEvt__Widget_PlayMenu_JoinGame_mSearchbar_K2Node_ComponentBoundEvent_2_OnTextComitted__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.BndEvt__Widget_PlayMenu_JoinGame_ListView_FriendList_K2Node_ComponentBoundEvent_3_OnListItemSelectionChangedDynamic__DelegateSignature
	 */
	struct UWidget_PlayMenu_JoinGame_C_BndEvt__Widget_PlayMenu_JoinGame_ListView_FriendList_K2Node_ComponentBoundEvent_3_OnListItemSelectionChangedDynamic__DelegateSignature_Params
	{
	public:
		class UObject*                                             Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsSelected;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.SessionFetchComplete
	 */
	struct UWidget_PlayMenu_JoinGame_C_SessionFetchComplete_Params
	{
	public:
		class UOnlineFriend*                                       Friend;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FCommonSession                                      Session;                                                 // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.BndEvt__Widget_PlayMenu_JoinGame_mSearchbar_K2Node_ComponentBoundEvent_4_OnClearTextClicked__DelegateSignature
	 */
	struct UWidget_PlayMenu_JoinGame_C_BndEvt__Widget_PlayMenu_JoinGame_mSearchbar_K2Node_ComponentBoundEvent_4_OnClearTextClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.ExecuteUbergraph_Widget_PlayMenu_JoinGame
	 */
	struct UWidget_PlayMenu_JoinGame_C_ExecuteUbergraph_Widget_PlayMenu_JoinGame_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OUEG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
