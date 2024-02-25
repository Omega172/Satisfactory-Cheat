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
	 * Function OnlineIntegration.CommonSessionSubsystem.RespondToGameInvite
	 */
	struct UCommonSessionSubsystem_RespondToGameInvite_Params
	{
	public:
		class APlayerController*                                   Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UOnlineFriend*                                       OnlineFriend;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAccept;                                                 // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineIntegration.CommonSessionSubsystem.JoinFriendGame
	 */
	struct UCommonSessionSubsystem_JoinFriendGame_Params
	{
	public:
		class APlayerController*                                   Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UOnlineFriend*                                       OnlineFriend;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineIntegration.CommonSessionSubsystem.IsValidSession
	 */
	struct UCommonSessionSubsystem_IsValidSession_Params
	{
	public:
		struct FCommonSession                                      Session;                                                 // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineIntegration.CommonSessionSubsystem.InviteFriendToGameSession
	 */
	struct UCommonSessionSubsystem_InviteFriendToGameSession_Params
	{
	public:
		class UOnlineFriend*                                       OnlineFriend;                                            // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineIntegration.CommonSessionSubsystem.GetStringAttributeFromSession
	 */
	struct UCommonSessionSubsystem_GetStringAttributeFromSession_Params
	{
	public:
		struct FCommonSession                                      Session;                                                 // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FName                                                Key;                                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineIntegration.CommonSessionSubsystem.GetIntAttributeFromSession
	 */
	struct UCommonSessionSubsystem_GetIntAttributeFromSession_Params
	{
	public:
		struct FCommonSession                                      Session;                                                 // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FName                                                Key;                                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int64_t                                                    ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineIntegration.CommonSessionSubsystem.GetDoubleAttributeFromSession
	 */
	struct UCommonSessionSubsystem_GetDoubleAttributeFromSession_Params
	{
	public:
		struct FCommonSession                                      Session;                                                 // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FName                                                Key;                                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		double                                                     ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineIntegration.CommonSessionSubsystem.GetBoolAttributeFromSession
	 */
	struct UCommonSessionSubsystem_GetBoolAttributeFromSession_Params
	{
	public:
		struct FCommonSession                                      Session;                                                 // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FName                                                Key;                                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineIntegration.CommonSessionSubsystem.FetchSessionById
	 */
	struct UCommonSessionSubsystem_FetchSessionById_Params
	{
	public:
		class APlayerController*                                   Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              SessionId;                                               // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnComplete;                                              // 0x0018(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineIntegration.CommonSessionSubsystem.CreateSessionJoiningSequence
	 */
	struct UCommonSessionSubsystem_CreateSessionJoiningSequence_Params
	{
	public:
		class APlayerController*                                   Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FCommonSession                                      Session;                                                 // 0x0008(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		class USessionMigrationSequence*                           ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineIntegration.CommonSessionSubsystem.CreateSessionCreationSequence
	 */
	struct UCommonSessionSubsystem_CreateSessionCreationSequence_Params
	{
	public:
		struct FCommonSessionCreationSettings                      SessionSettings;                                         // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VMV6[0x10];                                  // 0x0088(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USessionMigrationSequence*                           ReturnValue;                                             // 0x0098(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineIntegration.CommonSessionSubsystem.CleanUpSessions
	 */
	struct UCommonSessionSubsystem_CleanUpSessions_Params
	{	};

	/**
	 * Function OnlineIntegration.CommonSessionStatics.JoinSession
	 */
	struct UCommonSessionStatics_JoinSession_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FCommonSession                                      Session;                                                 // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class USessionMigrationSequence*                           ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineIntegration.CommonSessionStatics.FetchFriendSession
	 */
	struct UCommonSessionStatics_FetchFriendSession_Params
	{
	public:
		class UOnlineFriend*                                       Friend;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      CompletionDelegate;                                      // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineIntegration.CommonUserStatusWidget.OnCommonUserInitializeComplete
	 */
	struct UCommonUserStatusWidget_OnCommonUserInitializeComplete_Params
	{
	public:
		class ULocalUserInfo*                                      InuUserInfo;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineIntegration.CommonUserSubsystem.WhenLocalUserInfoIsCreated
	 */
	struct UCommonUserSubsystem_WhenLocalUserInfoIsCreated_Params
	{
	public:
		class FScriptDelegate                                      Delegate;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    PlayerIndex;                                             // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineIntegration.CommonUserSubsystem.TryToLogOutUser
	 */
	struct UCommonUserSubsystem_TryToLogOutUser_Params
	{
	public:
		int32_t                                                    LocalPlayerIndex;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bDestroyPlayer;                                          // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0005(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineIntegration.CommonUserSubsystem.TryToLoginForOnlinePlay
	 */
	struct UCommonUserSubsystem_TryToLoginForOnlinePlay_Params
	{
	public:
		int32_t                                                    LocalPlayerIndex;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineIntegration.CommonUserSubsystem.TryToInitializeUser
	 */
	struct UCommonUserSubsystem_TryToInitializeUser_Params
	{
	public:
		struct FCommonUserInitializeParams                         Params;                                                  // 0x0000(0x0050)  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineIntegration.CommonUserSubsystem.TryToInitializeForLocalPlay
	 */
	struct UCommonUserSubsystem_TryToInitializeForLocalPlay_Params
	{
	public:
		int32_t                                                    LocalPlayerIndex;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FInputDeviceId                                      PrimaryInputDevice;                                      // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bCanUseGuestLogin;                                       // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineIntegration.CommonUserSubsystem.ShouldWaitForStartInput
	 */
	struct UCommonUserSubsystem_ShouldWaitForStartInput_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineIntegration.CommonUserSubsystem.SetMaxLocalPlayers
	 */
	struct UCommonUserSubsystem_SetMaxLocalPlayers_Params
	{
	public:
		int32_t                                                    InMaxLocalPLayers;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineIntegration.CommonUserSubsystem.ListenForLoginKeyInput
	 */
	struct UCommonUserSubsystem_ListenForLoginKeyInput_Params
	{
	public:
		TArray<struct FKey>                                        AnyUserKeys;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FKey>                                        NewUserKeys;                                             // 0x0010(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		struct FCommonUserInitializeParams                         Params;                                                  // 0x0020(0x0050)  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineIntegration.CommonUserSubsystem.GetUserInfoForUniqueNetId
	 */
	struct UCommonUserSubsystem_GetUserInfoForUniqueNetId_Params
	{
	public:
		struct FUniqueNetIdRepl                                    NetId;                                                   // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ULocalUserInfo*                                      ReturnValue;                                             // 0x0030(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineIntegration.CommonUserSubsystem.GetUserInfoForPlatformUser
	 */
	struct UCommonUserSubsystem_GetUserInfoForPlatformUser_Params
	{
	public:
		struct FPlatformUserId                                     PlatformUser;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_TKF4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ULocalUserInfo*                                      ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineIntegration.CommonUserSubsystem.GetUserInfoForLocalPlayerIndex
	 */
	struct UCommonUserSubsystem_GetUserInfoForLocalPlayerIndex_Params
	{
	public:
		int32_t                                                    LocalPlayerIndex;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1I57[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ULocalUserInfo*                                      ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineIntegration.CommonUserSubsystem.GetUserInfoForLocalPlayer
	 */
	struct UCommonUserSubsystem_GetUserInfoForLocalPlayer_Params
	{
	public:
		class ULocalPlayer*                                        LocalPlayer;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ULocalUserInfo*                                      ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineIntegration.CommonUserSubsystem.GetUserInfoForInputDevice
	 */
	struct UCommonUserSubsystem_GetUserInfoForInputDevice_Params
	{
	public:
		struct FInputDeviceId                                      InputDevice;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_CCPJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ULocalUserInfo*                                      ReturnValue;                                             // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineIntegration.CommonUserSubsystem.GetUserInfoForControllerId
	 */
	struct UCommonUserSubsystem_GetUserInfoForControllerId_Params
	{
	public:
		int32_t                                                    ControllerId;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_4W59[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ULocalUserInfo*                                      ReturnValue;                                             // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineIntegration.CommonUserSubsystem.GetNumLocalPlayers
	 */
	struct UCommonUserSubsystem_GetNumLocalPlayers_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineIntegration.CommonUserSubsystem.GetMaxLocalPlayers
	 */
	struct UCommonUserSubsystem_GetMaxLocalPlayers_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineIntegration.CommonUserSubsystem.CreateAuthenticationSequence
	 */
	struct UCommonUserSubsystem_CreateAuthenticationSequence_Params
	{
	public:
		unsigned char                                              UnknownData_FJ28[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPlatformUserId                                     PlatformUserId;                                          // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Y1GA[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UOnlineAsyncOperation*                               ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineIntegration.LocalUserInfo.UnlinkExternalAccount
	 */
	struct ULocalUserInfo_UnlinkExternalAccount_Params
	{	};

	/**
	 * Function OnlineIntegration.LocalUserInfo.LogoutExternalAccount
	 */
	struct ULocalUserInfo_LogoutExternalAccount_Params
	{
	public:
		bool                                                       bForgetCachedAuth;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineIntegration.LocalUserInfo.LoginExternalAccount
	 */
	struct ULocalUserInfo_LoginExternalAccount_Params
	{	};

	/**
	 * Function OnlineIntegration.LocalUserInfo.IsLoggedIn
	 */
	struct ULocalUserInfo_IsLoggedIn_Params
	{
	public:
		EOnlineIntegrationUnmappedContext                          Context;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineIntegration.LocalUserInfo.GetUnmappedContextNickname
	 */
	struct ULocalUserInfo_GetUnmappedContextNickname_Params
	{
	public:
		EOnlineIntegrationUnmappedContext                          Context;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_OCFP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineIntegration.LocalUserInfo.GetNetId
	 */
	struct ULocalUserInfo_GetNetId_Params
	{
	public:
		EOnlineIntegrationMappedContext                            Context;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZFPW[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FUniqueNetIdRepl                                    ReturnValue;                                             // 0x0008(0x0030)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineIntegration.LocalUserInfo.GetMappedContextNickname
	 */
	struct ULocalUserInfo_GetMappedContextNickname_Params
	{
	public:
		EOnlineIntegrationMappedContext                            Context;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_HS8M[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineIntegration.LocalUserInfo.GetLoginStatus
	 */
	struct ULocalUserInfo_GetLoginStatus_Params
	{
	public:
		EOnlineIntegrationUnmappedContext                          Context;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECommonUserLoginStatus                                     ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineIntegration.LocalUserInfo.GetDebugString
	 */
	struct ULocalUserInfo_GetDebugString_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineIntegration.LocalUserInfo.CreateFriendList
	 */
	struct ULocalUserInfo_CreateFriendList_Params
	{
	public:
		class UOnlineFriendList*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineIntegration.OnlineFriend.RejectGameInvite
	 */
	struct UOnlineFriend_RejectGameInvite_Params
	{	};

	/**
	 * Function OnlineIntegration.OnlineFriend.JoinGame
	 */
	struct UOnlineFriend_JoinGame_Params
	{	};

	/**
	 * Function OnlineIntegration.OnlineFriend.IsPresenceJoinable
	 */
	struct UOnlineFriend_IsPresenceJoinable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineIntegration.OnlineFriend.IsPlayingThisGame
	 */
	struct UOnlineFriend_IsPlayingThisGame_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineIntegration.OnlineFriend.IsEffectivelyOnline
	 */
	struct UOnlineFriend_IsEffectivelyOnline_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineIntegration.OnlineFriend.InviteToSession
	 */
	struct UOnlineFriend_InviteToSession_Params
	{	};

	/**
	 * Function OnlineIntegration.OnlineFriend.GetLocalUserInfo
	 */
	struct UOnlineFriend_GetLocalUserInfo_Params
	{
	public:
		class ULocalUserInfo*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineIntegration.OnlineFriend.GetAdvertisedNATType
	 */
	struct UOnlineFriend_GetAdvertisedNATType_Params
	{
	public:
		ECommonUserNATType                                         ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineIntegration.OnlineFriend.AcceptGameInvite
	 */
	struct UOnlineFriend_AcceptGameInvite_Params
	{	};

	/**
	 * Function OnlineIntegration.OnlineFriendList.SetSearchTerm
	 */
	struct UOnlineFriendList_SetSearchTerm_Params
	{
	public:
		class FString                                              InSearchTerm;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineIntegration.OnlineFriendList.MatchesFilters
	 */
	struct UOnlineFriendList_MatchesFilters_Params
	{
	public:
		class UOnlineFriend*                                       Friend;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineIntegration.OnlineFriendList.MakeContextRelevant
	 */
	struct UOnlineFriendList_MakeContextRelevant_Params
	{
	public:
		EOnlineIntegrationUnmappedContext                          Context;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineIntegration.OnlineIntegrationSubsystem.ShouldWaitForStartInput
	 */
	struct UOnlineIntegrationSubsystem_ShouldWaitForStartInput_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineIntegration.OnlineIntegrationSubsystem.HasTraitTag
	 */
	struct UOnlineIntegrationSubsystem_HasTraitTag_Params
	{
	public:
		struct FGameplayTag                                        TraitTag;                                                // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineIntegration.OnlineIntegrationSubsystem.GetUserManager
	 */
	struct UOnlineIntegrationSubsystem_GetUserManager_Params
	{
	public:
		class UCommonUserSubsystem*                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineIntegration.OnlineIntegrationSubsystem.GetSessionManager
	 */
	struct UOnlineIntegrationSubsystem_GetSessionManager_Params
	{
	public:
		class UCommonSessionSubsystem*                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineIntegration.OnlineSessionInfoViewModel.SetSessionHandle
	 */
	struct UOnlineSessionInfoViewModel_SetSessionHandle_Params
	{
	public:
		struct FCommonSession                                      InSessionHandle;                                         // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class UCommonSessionSubsystem*                             SessionSubsystem;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineIntegration.OnlineSessionInfoViewModel.InvitePressed
	 */
	struct UOnlineSessionInfoViewModel_InvitePressed_Params
	{	};

	/**
	 * Function OnlineIntegration.OnlineSessionInfoViewModel.InviteFriend
	 */
	struct UOnlineSessionInfoViewModel_InviteFriend_Params
	{
	public:
		class UOnlineFriend*                                       Friend;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineIntegration.OnlineModelConversionFunctionLibrary.MakeBrushFromPlayerAvatar
	 */
	struct UOnlineModelConversionFunctionLibrary_MakeBrushFromPlayerAvatar_Params
	{
	public:
		struct FPlayerAvatar                                       PlayerAvatar;                                            // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_V42O[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSlateBrush                                         ReturnValue;                                             // 0x0010(0x00D0)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
