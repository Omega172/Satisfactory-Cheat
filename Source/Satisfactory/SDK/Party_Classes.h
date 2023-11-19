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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class Party.Chatroom
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UChatroom : public UObject
	{
	public:
		class FString                                              CurrentChatRoomId;                                       // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    MaxChatRoomRetries;                                      // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    NumChatRoomRetries;                                      // 0x003C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6UIY[0x18];                                  // 0x0040(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Party.SocialManager
	 * Size -> 0x0180 (FullSize[0x01A8] - InheritedSize[0x0028])
	 */
	class USocialManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_BOMA[0x28];                                  // 0x0028(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class USocialToolkit*>                              SocialToolkits;                                          // 0x0050(0x0010) ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate
		class USocialDebugTools*                                   SocialDebugTools;                                        // 0x0060(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_91EC[0x140];                                 // 0x0068(0x0140) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Party.SocialToolkit
	 * Size -> 0x0280 (FullSize[0x02A8] - InheritedSize[0x0028])
	 */
	class USocialToolkit : public UObject
	{
	public:
		unsigned char                                              UnknownData_U8YJ[0x40];                                  // 0x0028(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USocialUser*                                         LocalUser;                                               // 0x0068(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class USocialUser*>                                 AllUsers;                                                // 0x0070(0x0010) ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WN1U[0x50];                                  // 0x0080(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class ULocalPlayer>                         LocalPlayerOwner;                                        // 0x00D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USocialChatManager*                                  SocialChatManager;                                       // 0x00D8(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JJX5[0x1C8];                                 // 0x00E0(0x01C8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Party.SocialChatManager
	 * Size -> 0x01F8 (FullSize[0x0220] - InheritedSize[0x0028])
	 */
	class USocialChatManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_I3FQ[0x50];                                  // 0x0028(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<TWeakObjectPtr<class USocialUser>, class USocialPrivateMessageChannel*> DirectChannelsByTargetUser;                              // 0x0078(0x0050) UObjectWrapper, NativeAccessSpecifierPrivate
		TMap<class FString, class USocialChatRoom*>                ChatRoomsById;                                           // 0x00C8(0x0050) UObjectWrapper, NativeAccessSpecifierPrivate
		TMap<class FString, class USocialReadOnlyChatChannel*>     ReadOnlyChannelsByDisplayName;                           // 0x0118(0x0050) UObjectWrapper, NativeAccessSpecifierPrivate
		bool                                                       bEnableChatSlashCommands;                                // 0x0168(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_W7ED[0x7];                                   // 0x0169(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<struct FUniqueNetIdRepl, class USocialGroupChannel*>  GroupChannels;                                           // 0x0170(0x0050) UObjectWrapper, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_F63R[0x60];                                  // 0x01C0(0x0060) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Party.SocialChatChannel
	 * Size -> 0x00C0 (FullSize[0x00E8] - InheritedSize[0x0028])
	 */
	class USocialChatChannel : public UObject
	{
	public:
		unsigned char                                              UnknownData_911U[0xC0];                                  // 0x0028(0x00C0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Party.SocialChatRoom
	 * Size -> 0x0010 (FullSize[0x00F8] - InheritedSize[0x00E8])
	 */
	class USocialChatRoom : public USocialChatChannel
	{
	public:
		unsigned char                                              UnknownData_ZJLW[0x10];                                  // 0x00E8(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Party.SocialGroupChannel
	 * Size -> 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
	 */
	class USocialGroupChannel : public UObject
	{
	public:
		class USocialUser*                                         SocialUser;                                              // 0x0028(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FUniqueNetIdRepl                                    GroupId;                                                 // 0x0030(0x0030) HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FText                                                DisplayName;                                             // 0x0060(0x0018) NativeAccessSpecifierPrivate
		TArray<class USocialUser*>                                 Members;                                                 // 0x0078(0x0010) ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KNT6[0x10];                                  // 0x0088(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Party.SocialPartyChatRoom
	 * Size -> 0x0000 (FullSize[0x00F8] - InheritedSize[0x00F8])
	 */
	class USocialPartyChatRoom : public USocialChatRoom
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Party.SocialPrivateMessageChannel
	 * Size -> 0x0008 (FullSize[0x00F0] - InheritedSize[0x00E8])
	 */
	class USocialPrivateMessageChannel : public USocialChatChannel
	{
	public:
		class USocialUser*                                         TargetUser;                                              // 0x00E8(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Party.SocialReadOnlyChatChannel
	 * Size -> 0x0000 (FullSize[0x00E8] - InheritedSize[0x00E8])
	 */
	class USocialReadOnlyChatChannel : public USocialChatChannel
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Party.SocialParty
	 * Size -> 0x0358 (FullSize[0x0380] - InheritedSize[0x0028])
	 */
	class USocialParty : public UObject
	{
	public:
		unsigned char                                              UnknownData_RMZ1[0x38];                                  // 0x0028(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ReservationBeaconClientClass;                            // 0x0060(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              SpectatorBeaconClientClass;                              // 0x0068(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6VY4[0x10];                                  // 0x0070(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FUniqueNetIdRepl                                    OwningLocalUserId;                                       // 0x0080(0x0030) HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FUniqueNetIdRepl                                    CurrentLeaderId;                                         // 0x00B0(0x0030) HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TMap<struct FUniqueNetIdRepl, class UPartyMember*>         PartyMembersById;                                        // 0x00E0(0x0050) UObjectWrapper, NativeAccessSpecifierPrivate
		bool                                                       bEnableAutomaticPartyRejoin;                             // 0x0130(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_IVT6[0x57];                                  // 0x0131(0x0057) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     PlatformUserInviteCooldown;                              // 0x0188(0x0008) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		double                                                     PrimaryUserInviteCooldown;                               // 0x0190(0x0008) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EP3M[0x74];                                  // 0x0198(0x0074) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class APartyBeaconClient>                   ReservationBeaconClient;                                 // 0x020C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0N4P[0x8];                                   // 0x0214(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class ASpectatorBeaconClient>               SpectatorBeaconClient;                                   // 0x021C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XBM8[0x2C];                                  // 0x0224(0x002C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      JoinInProgressTimerRate;                                 // 0x0250(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    JoinInProgressRequestTimeout;                            // 0x0254(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    JoinInProgressResponseTimeout;                           // 0x0258(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ZR72[0x124];                                 // 0x025C(0x0124) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Party.PartyMember
	 * Size -> 0x00E8 (FullSize[0x0110] - InheritedSize[0x0028])
	 */
	class UPartyMember : public UObject
	{
	public:
		unsigned char                                              UnknownData_JIVQ[0x48];                                  // 0x0028(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USocialUser*                                         SocialUser;                                              // 0x0070(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8E7W[0x98];                                  // 0x0078(0x0098) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Party.SocialDebugTools
	 * Size -> 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
	 */
	class USocialDebugTools : public UObject
	{
	public:
		unsigned char                                              UnknownData_Q5CW[0x60];                                  // 0x0028(0x0060) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Party.SocialSettings
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	class USocialSettings : public UObject
	{
	public:
		TArray<class FName>                                        OssNamesWithEnvironmentIdPrefix;                         // 0x0028(0x0010) ZeroConstructor, Config, NativeAccessSpecifierPrivate
		int32_t                                                    DefaultMaxPartySize;                                     // 0x0038(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bPreferPlatformInvites;                                  // 0x003C(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bMustSendPrimaryInvites;                                 // 0x003D(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bLeavePartyOnDisconnect;                                 // 0x003E(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bSetDesiredPrivacyOnLocalPlayerBecomesLeader;            // 0x003F(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      UserListAutoUpdateRate;                                  // 0x0040(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    MinNicknameLength;                                       // 0x0044(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    MaxNicknameLength;                                       // 0x0048(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WXX3[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSocialPlatformDescription>                  SocialPlatformDescriptions;                              // 0x0050(0x0010) ZeroConstructor, Config, NativeAccessSpecifierPrivate
		TArray<class FName>                                        SonyOSSNames;                                            // 0x0060(0x0010) ZeroConstructor, Config, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Party.SocialUser
	 * Size -> 0x01A8 (FullSize[0x01D0] - InheritedSize[0x0028])
	 */
	class USocialUser : public UObject
	{
	public:
		unsigned char                                              UnknownData_D6TH[0x1A8];                                 // 0x0028(0x01A8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
