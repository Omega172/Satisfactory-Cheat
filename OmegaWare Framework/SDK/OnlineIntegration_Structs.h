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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum OnlineIntegration.EOnlineIntegrationUnmappedContext
	 */
	enum class EOnlineIntegrationUnmappedContext : uint8_t
	{
		Platform = 0,
		External = 1,
		Invalid  = 2,
		MAX      = 3
	};

	/**
	 * Enum OnlineIntegration.EOnlineRelationship
	 */
	enum class EOnlineRelationship : uint8_t
	{
		Friend         = 0,
		NotFriend      = 1,
		InviteSent     = 2,
		InviteReceived = 3,
		Blocked        = 4,
		MAX            = 5
	};

	/**
	 * Enum OnlineIntegration.ECommonUserLoginType
	 */
	enum class ECommonUserLoginType : uint8_t
	{
		None           = 0,
		Auto           = 1,
		PersistentAuth = 2,
		AccountPortal  = 3,
		MAX            = 4
	};

	/**
	 * Enum OnlineIntegration.EOnlineIntegrationMappedContext
	 */
	enum class EOnlineIntegrationMappedContext : uint8_t
	{
		Game    = 0,
		Session = 1,
		Invalid = 2,
		MAX     = 3
	};

	/**
	 * Enum OnlineIntegration.ECommonUserInitializationState
	 */
	enum class ECommonUserInitializationState : uint8_t
	{
		Unknown           = 0,
		DoingInitialLogin = 1,
		DoingNetworkLogin = 2,
		FailedtoLogin     = 3,
		LoggedInOnline    = 4,
		LoggedInLocalOnly = 5,
		Invalid           = 6,
		MAX               = 7
	};

	/**
	 * Enum OnlineIntegration.ECommonUserPrivilege
	 */
	enum class ECommonUserPrivilege : uint8_t
	{
		CanPlay                      = 0,
		CanPlayOnline                = 1,
		CanCommunicateViaTextOnline  = 2,
		CanCommunicateViaVoiceOnline = 3,
		CanUseUserGeneratedContent   = 4,
		CanUseCrossPlay              = 5,
		Invalid_Count                = 6,
		MAX                          = 7
	};

	/**
	 * Enum OnlineIntegration.ECommonUserPrivilegeAvailability
	 */
	enum class ECommonUserPrivilegeAvailability : uint8_t
	{
		Unknown              = 0,
		NowAvailable         = 1,
		PossiblyAvailable    = 2,
		CurrentlyUnavailable = 3,
		AlwaysUnavailable    = 4,
		Invalid              = 5,
		MAX                  = 6
	};

	/**
	 * Enum OnlineIntegration.ECommonUserPrivilegeResult
	 */
	enum class ECommonUserPrivilegeResult : uint8_t
	{
		Unknown                      = 0,
		Available                    = 1,
		UserNotLoggedIn              = 2,
		LicenseInvalid               = 3,
		VersionOutdated              = 4,
		NetworkConnectionUnavailable = 5,
		AgeRestricted                = 6,
		AccountTypeRestricted        = 7,
		AccountUseRestricted         = 8,
		PlatformFailure              = 9,
		MAX                          = 10
	};

	/**
	 * Enum OnlineIntegration.ECommonSessionOnlineMode
	 */
	enum class ECommonSessionOnlineMode : uint8_t
	{
		Offline = 0,
		LAN     = 1,
		IP      = 2,
		Online  = 3,
		MAX     = 4
	};

	/**
	 * Enum OnlineIntegration.ECommonSessionJoinPolicy
	 */
	enum class ECommonSessionJoinPolicy : uint8_t
	{
		Public      = 0,
		FriendsOnly = 1,
		InviteOnly  = 2,
		MAX         = 3
	};

	/**
	 * Enum OnlineIntegration.ECommonUserOnlineLoginResult
	 */
	enum class ECommonUserOnlineLoginResult : uint8_t
	{
		Success                 = 0,
		DifferentAccountsLinked = 1,
		ContinuationRequired    = 2,
		OtherError              = 3,
		MAX                     = 4
	};

	/**
	 * Enum OnlineIntegration.ECommonUserNATType
	 */
	enum class ECommonUserNATType : uint8_t
	{
		Unknown  = 0,
		Open     = 1,
		Moderate = 2,
		Strict   = 3,
		MAX      = 4
	};

	/**
	 * Enum OnlineIntegration.ECommonUserLoginStatus
	 */
	enum class ECommonUserLoginStatus : uint8_t
	{
		NotLoggedIn                  = 0,
		UsingLocalProfile            = 1,
		LoggedInReducedFunctionality = 2,
		LoggedIn                     = 3,
		MAX                          = 4
	};

	/**
	 * Enum OnlineIntegration.EOnlineIntegrationPlatform
	 */
	enum class EOnlineIntegrationPlatform : uint8_t
	{
		Null         = 0,
		Epic         = 1,
		Xbox         = 2,
		PSN          = 3,
		Nintendo     = 4,
		Stadia       = 5,
		Steam        = 6,
		Google       = 7,
		GooglePlay   = 8,
		Apple        = 9,
		AppleGameKit = 10,
		Samsung      = 11,
		Oculus       = 12,
		Tencent      = 13,
		MAX          = 14
	};

	/**
	 * Enum OnlineIntegration.EOnlineIntegrationMode
	 */
	enum class EOnlineIntegrationMode : uint8_t
	{
		Undefined        = 0,
		PlatformOnly     = 1,
		LimitedCrossPlay = 2,
		FullCrossPlay    = 3,
		MAX              = 4
	};

	/**
	 * Enum OnlineIntegration.EOnlineSessionAttributeType
	 */
	enum class EOnlineSessionAttributeType : uint8_t
	{
		None   = 0,
		Bool   = 1,
		Int64  = 2,
		Double = 3,
		String = 4,
		MAX    = 5
	};

	/**
	 * Enum OnlineIntegration.EOfflineSessionPromptResult
	 */
	enum class EOfflineSessionPromptResult : uint8_t
	{
		CancelSessionCreation = 0,
		CreateOfflineSession  = 1,
		MAX                   = 2
	};

	/**
	 * Enum OnlineIntegration.EOnlineUserPresenceStatus
	 */
	enum class EOnlineUserPresenceStatus : uint8_t
	{
		Offline      = 0,
		Online       = 1,
		Away         = 2,
		ExtendedAway = 3,
		DoNotDisturb = 4,
		Unknown      = 5,
		MAX          = 6
	};

	/**
	 * Enum OnlineIntegration.EOnlineUserPresenceJoinability
	 */
	enum class EOnlineUserPresenceJoinability : uint8_t
	{
		Public      = 0,
		FriendsOnly = 1,
		InviteOnly  = 2,
		Private     = 3,
		Unknown     = 4,
		MAX         = 5
	};

	/**
	 * Enum OnlineIntegration.EOnlineUserPresenceGameStatus
	 */
	enum class EOnlineUserPresenceGameStatus : uint8_t
	{
		PlayingThisGame  = 0,
		PlayingOtherGame = 1,
		Unknown          = 2,
		MAX              = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct OnlineIntegration.PlayerAvatar
	 * Size -> 0x0008
	 */
	struct FPlayerAvatar
	{
	public:
		class UTexture2D*                                          Texture2D;                                               // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OnlineIntegration.CommonSession
	 * Size -> 0x0008
	 */
	struct FCommonSession
	{
	public:
		unsigned char                                              UnknownData_XZYY[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OnlineIntegration.OnlineCredentials
	 * Size -> 0x0028
	 */
	struct FOnlineCredentials
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Token;                                                   // 0x0010(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Type;                                                    // 0x0020(0x0008) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OnlineIntegration.PieOnlineCredentials
	 * Size -> 0x0058
	 */
	struct FPieOnlineCredentials
	{
	public:
		EOnlineIntegrationPlatform                                 Backend;                                                 // 0x0000(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A456[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FOnlineCredentials                                  Credentials;                                             // 0x0008(0x0028) Edit, Config, NativeAccessSpecifierPublic
		struct FOnlineCredentials                                  EOSCredentials;                                          // 0x0030(0x0028) Edit, Config, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OnlineIntegration.CommonSessionCreationSettings
	 * Size -> 0x0088
	 */
	struct FCommonSessionCreationSettings
	{
	public:
		ECommonSessionOnlineMode                                   OnlineMode;                                              // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECommonSessionJoinPolicy                                   JoinPolicy;                                              // 0x0001(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseLobbies;                                             // 0x0002(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HOXY[0x5];                                   // 0x0003(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ModeNameForAdvertisement;                                // 0x0008(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTopLevelAssetPath                                  MapID;                                                   // 0x0018(0x0010) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, class FString>                         ExtraArgs;                                               // 0x0028(0x0050) BlueprintVisible, NativeAccessSpecifierPublic
		int32_t                                                    MaxPlayerCount;                                          // 0x0078(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OSGP[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ULocalUserInfo*                                      Host;                                                    // 0x0080(0x0008) BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OnlineIntegration.CommonSessionInfo
	 * Size -> 0x0004
	 */
	struct FCommonSessionInfo
	{
	public:
		bool                                                       bIsLANSession;                                           // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsDedicatedServerSession;                               // 0x0001(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowSanctionedPlayers;                                 // 0x0002(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAntiCheatProtected;                                     // 0x0003(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OnlineIntegration.CommonSessionSettings
	 * Size -> 0x0058
	 */
	struct FCommonSessionSettings
	{
	public:
		int32_t                                                    NumMaxConnections;                                       // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECommonSessionJoinPolicy                                   JoinPolicy;                                              // 0x0004(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowNewMembers;                                        // 0x0005(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NMFM[0x52];                                  // 0x0006(0x0052) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OnlineIntegration.CommonUserInitializeParams
	 * Size -> 0x0050
	 */
	struct FCommonUserInitializeParams
	{
	public:
		int32_t                                                    LocalPlayerIndex;                                        // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ControllerId;                                            // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInputDeviceId                                      PrimaryInputDevice;                                      // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPlatformUserId                                     PlatformUser;                                            // 0x000C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECommonUserPrivilege                                       RequestedPrivilege;                                      // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOnlineIntegrationUnmappedContext                          OnlineContext;                                           // 0x0011(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanCreateNewLocalPlayer;                                // 0x0012(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z3YU[0x5];                                   // 0x0013(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<ECommonUserLoginType>                               AllowedLoginTypes;                                       // 0x0018(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bCanUseGuestLogin;                                       // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSuppressLoginErrors;                                    // 0x0029(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4UY5[0x2];                                   // 0x002A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      OnCommonUserInitializeComplete;                          // 0x002C(0x0010) BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_067B[0x14];                                  // 0x003C(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OnlineIntegration.OnlineIntegrationPlatformSettings
	 * Size -> 0x0014
	 */
	struct FOnlineIntegrationPlatformSettings
	{
	public:
		bool                                                       bMultiUser;                                              // 0x0000(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1C84[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                PlatformOnlineServices;                                  // 0x0004(0x0008) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ExternalOnlineServices;                                  // 0x000C(0x0008) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OnlineIntegration.OnlineResultInformation
	 * Size -> 0x0030
	 */
	struct FOnlineResultInformation
	{
	public:
		bool                                                       bWasSuccessful;                                          // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_59YX[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ErrorId;                                                 // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                ErrorText;                                               // 0x0018(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OnlineIntegration.OnlineSessionAttribute
	 * Size -> 0x0028
	 */
	struct FOnlineSessionAttribute
	{
	public:
		EOnlineSessionAttributeType                                Type;                                                    // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VEAY[0x27];                                  // 0x0001(0x0027) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
