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
	 * Function BP_OnlineHelpers.BP_OnlineHelpers_C.IsFriendInSession
	 */
	struct UBP_OnlineHelpers_C_IsFriendInSession_Params
	{
	public:
		struct FFGOnlineFriend                                     Friend;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UObject*                                             WorldContext;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       Result;                                                  // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VHKT[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_OnlineHelpers.BP_OnlineHelpers_C.IsFriendInPublicSession
	 */
	struct UBP_OnlineHelpers_C_IsFriendInPublicSession_Params
	{
	public:
		struct FFGOnlineFriend                                     Friend;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UObject*                                             WorldContext;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       Result;                                                  // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_L7U9[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_OnlineHelpers.BP_OnlineHelpers_C.IsPresenceInPublicSession
	 */
	struct UBP_OnlineHelpers_C_IsPresenceInPublicSession_Params
	{
	public:
		struct FOnlinePresence                                     Presence;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       Result;                                                  // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_S7GT[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_OnlineHelpers.BP_OnlineHelpers_C.GetConnectingNatIssue
	 */
	struct UBP_OnlineHelpers_C_GetConnectingNatIssue_Params
	{
	public:
		ECachedNATType                                             hostNat;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ECachedNATType                                             clientNat;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YQMT[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class FText                                                ToolTip;                                                 // 0x0010(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BP_OnlineHelpers.BP_OnlineHelpers_C.IsNATIssue
	 */
	struct UBP_OnlineHelpers_C_IsNATIssue_Params
	{
	public:
		unsigned char                                              hostNat;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              clientNat;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LX15[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       isIssue;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OnlineHelpers.BP_OnlineHelpers_C.IsInSession
	 */
	struct UBP_OnlineHelpers_C_IsInSession_Params
	{
	public:
		struct FOnlinePresence                                     Presence;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       Result;                                                  // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DHK0[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_OnlineHelpers.BP_OnlineHelpers_C.InsertionAddButton
	 */
	struct UBP_OnlineHelpers_C_InsertionAddButton_Params
	{
	public:
		class UPanelWidget*                                        NewParam;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OnlineHelpers.BP_OnlineHelpers_C.IsHost
	 */
	struct UBP_OnlineHelpers_C_IsHost_Params
	{
	public:
		class APlayerState*                                        PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class APlayerController*                                   OwningPlayer;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       isOurself;                                               // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OnlineHelpers.BP_OnlineHelpers_C.CanJoinInviteToSession
	 */
	struct UBP_OnlineHelpers_C_CanJoinInviteToSession_Params
	{
	public:
		class UObject*                                             WorldContext;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FFGOnlineFriend                                     Friend;                                                  // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		struct FCommonSession                                      Session;                                                 // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FPendingInvite                                      invite;                                                  // 0x0020(0x0140)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		bool                                                       IsFriendOnline;                                          // 0x0160(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4ZEI[0x7];                                   // 0x0161(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0168(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		ECanJoinInviteResult                                       Result;                                                  // 0x0170(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Z5JG[0x3];                                   // 0x0171(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_OnlineHelpers.BP_OnlineHelpers_C.IsInThisGame
	 */
	struct UBP_OnlineHelpers_C_IsInThisGame_Params
	{
	public:
		struct FFGOnlineFriend                                     OnlineFriend;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		class ULocalPlayer*                                        LocalPlayer;                                             // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       inThisGame;                                              // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UYH7[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_OnlineHelpers.BP_OnlineHelpers_C.CanSendInvite
	 */
	struct UBP_OnlineHelpers_C_CanSendInvite_Params
	{
	public:
		class ULocalPlayer*                                        LocalPlayer;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FFGOnlineFriend                                     Friend;                                                  // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		ECantInviteResult                                          canSend;                                                 // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6YF7[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_OnlineHelpers.BP_OnlineHelpers_C.GetCompactPresence
	 */
	struct UBP_OnlineHelpers_C_GetCompactPresence_Params
	{
	public:
		struct FOnlinePresence                                     Presence;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FFCompactPresence                                   compactPresence;                                         // 0x0018(0x0018)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OnlineHelpers.BP_OnlineHelpers_C.GetInvitePresence
	 */
	struct UBP_OnlineHelpers_C_GetInvitePresence_Params
	{
	public:
		class UObject*                                             WorldContext;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FPendingInvite                                      invite;                                                  // 0x0008(0x0140)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0148(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FOnlinePresence                                     Presence;                                                // 0x0150(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BP_OnlineHelpers.BP_OnlineHelpers_C.GetFriendPresence
	 */
	struct UBP_OnlineHelpers_C_GetFriendPresence_Params
	{
	public:
		struct FFGOnlineFriend                                     OnlineFriend;                                            // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		class UObject*                                             WorldContext;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FOnlinePresence                                     ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_OnlineHelpers.BP_OnlineHelpers_C.SessionVisibilityStringToEnum
	 */
	struct UBP_OnlineHelpers_C_SessionVisibilityStringToEnum_Params
	{
	public:
		class FString                                              String;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		ESessionVisibility                                         Enum;                                                    // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5EEK[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
