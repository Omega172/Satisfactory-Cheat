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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum Party.ESocialChannelType
	 */
	enum class ESocialChannelType : uint8_t
	{
		General = 0,
		Founder = 1,
		Party   = 2,
		Team    = 3,
		System  = 4,
		Private = 5,
		MAX     = 6
	};

	/**
	 * Enum Party.EPartyType
	 */
	enum class EPartyType : uint8_t
	{
		Public      = 0,
		FriendsOnly = 1,
		Private     = 2,
		MAX         = 3
	};

	/**
	 * Enum Party.EPartyInviteRestriction
	 */
	enum class EPartyInviteRestriction : uint8_t
	{
		AnyMember  = 0,
		LeaderOnly = 1,
		NoInvites  = 2,
		MAX        = 3
	};

	/**
	 * Enum Party.EPartyJoinDenialReason
	 */
	enum class EPartyJoinDenialReason : uint8_t
	{
		NoReason                         = 0,
		JoinAttemptAborted               = 1,
		Busy                             = 2,
		OssUnavailable                   = 3,
		PartyFull                        = 4,
		GameFull                         = 5,
		NotPartyLeader                   = 6,
		PartyPrivate                     = 7,
		JoinerCrossplayRestricted        = 8,
		MemberCrossplayRestricted        = 9,
		GameModeRestricted               = 10,
		Banned                           = 11,
		NotLoggedIn                      = 12,
		CheckingForRejoin                = 13,
		TargetUserMissingPresence        = 14,
		TargetUserUnjoinable             = 15,
		TargetUserAway                   = 16,
		AlreadyLeaderInPlatformSession   = 17,
		TargetUserPlayingDifferentGame   = 18,
		TargetUserMissingPlatformSession = 19,
		PlatformSessionMissingJoinInfo   = 20,
		FailedToStartFindConsoleSession  = 21,
		MissingPartyClassForTypeId       = 22,
		TargetUserBlocked                = 23,
		CustomReason0                    = 24,
		CustomReason1                    = 25,
		CustomReason2                    = 26,
		CustomReason3                    = 27,
		CustomReason4                    = 28,
		CustomReason5                    = 29,
		CustomReason6                    = 30,
		CustomReason7                    = 31,
		CustomReason8                    = 32,
		CustomReason9                    = 33,
		CustomReason10                   = 34,
		CustomReason11                   = 35,
		CustomReason12                   = 36,
		CustomReason13                   = 37,
		CustomReason14                   = 38,
		CustomReason15                   = 39,
		CustomReason16                   = 40,
		CustomReason17                   = 41,
		CustomReason18                   = 42,
		CustomReason19                   = 43,
		CustomReason20                   = 44,
		CustomReason21                   = 45,
		CustomReason22                   = 46,
		CustomReason23                   = 47,
		CustomReason24                   = 48,
		CustomReason25                   = 49,
		CustomReason26                   = 50,
		CustomReason27                   = 51,
		CustomReason28                   = 52,
		CustomReason29                   = 53,
		CustomReason30                   = 54,
		CustomReason31                   = 55,
		CustomReason32                   = 56,
		CustomReason33                   = 57,
		CustomReason34                   = 58,
		CustomReason35                   = 59,
		CustomReason36                   = 60,
		CustomReason37                   = 61,
		CustomReason38                   = 62,
		CustomReason39                   = 63,
		MAX                              = 64
	};

	/**
	 * Enum Party.EApprovalAction
	 */
	enum class EApprovalAction : uint8_t
	{
		Approve               = 0,
		Enqueue               = 1,
		EnqueueAndStartBeacon = 2,
		Deny                  = 3,
		MAX                   = 4
	};

	/**
	 * Enum Party.ESocialPartyInviteMethod
	 */
	enum class ESocialPartyInviteMethod : uint8_t
	{
		Other        = 0,
		Notification = 1,
		Custom1      = 2,
		MAX          = 3
	};

	/**
	 * Enum Party.ESocialPartyInviteFailureReason
	 */
	enum class ESocialPartyInviteFailureReason : uint8_t
	{
		Success                 = 0,
		NotOnline               = 1,
		NotAcceptingMembers     = 2,
		NotFriends              = 3,
		AlreadyInParty          = 4,
		OssValidationFailed     = 5,
		PlatformInviteFailed    = 6,
		PartyInviteFailed       = 7,
		InviteRateLimitExceeded = 8,
		MAX                     = 9
	};

	/**
	 * Enum Party.ESocialSubsystem
	 */
	enum class ESocialSubsystem : uint8_t
	{
		Primary  = 0,
		Platform = 1,
		MAX      = 2
	};

	/**
	 * Enum Party.ESocialRelationship
	 */
	enum class ESocialRelationship : uint8_t
	{
		Any                  = 0,
		FriendInviteReceived = 1,
		FriendInviteSent     = 2,
		PartyInvite          = 3,
		Friend               = 4,
		BlockedPlayer        = 5,
		SuggestedFriend      = 6,
		RecentPlayer         = 7,
		JoinRequest          = 8,
		MAX                  = 9
	};

	/**
	 * Enum Party.ECrossplayPreference
	 */
	enum class ECrossplayPreference : uint8_t
	{
		NoSelection        = 0,
		OptedIn            = 1,
		OptedOut           = 2,
		OptedOutRestricted = 3,
		MAX                = 4
	};

	/**
	 * Enum Party.EPlatformIconDisplayRule
	 */
	enum class EPlatformIconDisplayRule : uint8_t
	{
		Always                                = 0,
		AlwaysIfDifferent                     = 1,
		AlwaysWhenInCrossplayParty            = 2,
		AlwaysIfDifferentWhenInCrossplayParty = 3,
		Never                                 = 4,
		MAX                                   = 5
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Party.SocialPlatformDescription
	 * Size -> 0x0058
	 */
	struct FSocialPlatformDescription
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlatformType;                                            // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                OnlineSubsystem;                                         // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SessionType;                                             // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ExternalAccountType;                                     // 0x0038(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CrossplayPool;                                           // 0x0048(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Party.UserPlatform
	 * Size -> 0x0058
	 */
	struct FUserPlatform
	{
	public:
		struct FSocialPlatformDescription                          PlatformDescription;                                     // 0x0000(0x0058) NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct Party.PartyMemberPlatformData
	 * Size -> 0x0098
	 */
	struct FPartyMemberPlatformData
	{
	public:
		struct FUserPlatform                                       Platform;                                                // 0x0000(0x0058) NativeAccessSpecifierPublic
		struct FUniqueNetIdRepl                                    UniqueId;                                                // 0x0058(0x0030) HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SessionId;                                               // 0x0088(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Party.PartyMemberJoinInProgressRequest
	 * Size -> 0x0038
	 */
	struct FPartyMemberJoinInProgressRequest
	{
	public:
		struct FUniqueNetIdRepl                                    Target;                                                  // 0x0000(0x0030) HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    Time;                                                    // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Party.PartyMemberJoinInProgressResponse
	 * Size -> 0x0048
	 */
	struct FPartyMemberJoinInProgressResponse
	{
	public:
		struct FUniqueNetIdRepl                                    Requester;                                               // 0x0000(0x0030) HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    RequestTime;                                             // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    ResponseTime;                                            // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              DenialReason;                                            // 0x0040(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9CZ3[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Party.PartyMemberJoinInProgressData
	 * Size -> 0x0048
	 */
	struct FPartyMemberJoinInProgressData
	{
	public:
		struct FPartyMemberJoinInProgressRequest                   Request;                                                 // 0x0000(0x0038) NativeAccessSpecifierPublic
		TArray<struct FPartyMemberJoinInProgressResponse>          Responses;                                               // 0x0038(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Party.OnlinePartyRepDataBase
	 * Size -> 0x0018
	 */
	struct FOnlinePartyRepDataBase
	{
	public:
		unsigned char                                              UnknownData_9JLA[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Party.PartyMemberRepData
	 * Size -> 0x0250 (FullSize[0x0268] - InheritedSize[0x0018])
	 */
	struct FPartyMemberRepData : public FOnlinePartyRepDataBase
	{
	public:
		unsigned char                                              UnknownData_RD23[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPartyMemberPlatformData                            PlatformData;                                            // 0x0020(0x0098) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LCVM[0x90];                                  // 0x00B8(0x0090) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ECrossplayPreference                                       CrossplayPreference;                                     // 0x0148(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4TPI[0x37];                                  // 0x0149(0x0037) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              JoinMethod;                                              // 0x0180(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SZ8U[0x30];                                  // 0x0190(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPartyMemberJoinInProgressData                      JoinInProgressData;                                      // 0x01C0(0x0048) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YZ4G[0x60];                                  // 0x0208(0x0060) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Party.PartyPlatformSessionInfo
	 * Size -> 0x0050
	 */
	struct FPartyPlatformSessionInfo
	{
	public:
		class FString                                              SessionType;                                             // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SessionId;                                               // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FUniqueNetIdRepl                                    OwnerPrimaryId;                                          // 0x0020(0x0030) HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Party.PartyPrivacySettings
	 * Size -> 0x0003
	 */
	struct FPartyPrivacySettings
	{
	public:
		EPartyType                                                 PartyType;                                               // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPartyInviteRestriction                                    PartyInviteRestriction;                                  // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnlyLeaderFriendsCanJoin;                               // 0x0002(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Party.PartyRepData
	 * Size -> 0x0068 (FullSize[0x0080] - InheritedSize[0x0018])
	 */
	struct FPartyRepData : public FOnlinePartyRepDataBase
	{
	public:
		unsigned char                                              UnknownData_SKCW[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPartyPrivacySettings                               PrivacySettings;                                         // 0x0020(0x0003) NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_NSCY[0x35];                                  // 0x0023(0x0035) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPartyPlatformSessionInfo>                   PlatformSessions;                                        // 0x0058(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_FZAA[0x18];                                  // 0x0068(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Party.SocialChatChannelConfig
	 * Size -> 0x0040
	 */
	struct FSocialChatChannelConfig
	{
	public:
		class USocialUser*                                         SocialUser;                                              // 0x0000(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2336[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class USocialChatChannel*>                          ListenChannels;                                          // 0x0018(0x0010) ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9HLA[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
