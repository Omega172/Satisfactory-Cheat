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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class OnlineIntegration.OnlineIntegrationComponent
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UOnlineIntegrationComponent : public UGameInstanceSubsystem
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineIntegration.CommonSessionSubsystem
	 * Size -> 0x00A0 (FullSize[0x00D0] - InheritedSize[0x0030])
	 */
	class UCommonSessionSubsystem : public UOnlineIntegrationComponent
	{
	public:
		unsigned char                                              UnknownData_T2IY[0x90];                                  // 0x0030(0x0090) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USessionMigrationSequence*                           SessionMigrationSequence;                                // 0x00C0(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DD75[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (PADDING)

	public:
		void RespondToGameInvite(class APlayerController* Player, class UOnlineFriend* OnlineFriend, bool bAccept);
		void JoinFriendGame(class APlayerController* Player, class UOnlineFriend* OnlineFriend);
		bool STATIC_IsValidSession(const struct FCommonSession& Session);
		void InviteFriendToGameSession(class UOnlineFriend* OnlineFriend);
		class FString GetStringAttributeFromSession(const struct FCommonSession& Session, const class FName& Key);
		int64_t GetIntAttributeFromSession(const struct FCommonSession& Session, const class FName& Key);
		double GetDoubleAttributeFromSession(const struct FCommonSession& Session, const class FName& Key);
		bool GetBoolAttributeFromSession(const struct FCommonSession& Session, const class FName& Key);
		void FetchSessionById(class APlayerController* Player, const class FString& SessionId, const class FScriptDelegate& OnComplete);
		class USessionMigrationSequence* CreateSessionJoiningSequence(class APlayerController* Player, const struct FCommonSession& Session);
		class USessionMigrationSequence* CreateSessionCreationSequence(const struct FCommonSessionCreationSettings& SessionSettings);
		void CleanUpSessions();
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineIntegration.CommonSessionStatics
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCommonSessionStatics : public UObject
	{
	public:
		class USessionMigrationSequence* STATIC_JoinSession(class APlayerController* PlayerController, const struct FCommonSession& Session);
		void STATIC_FetchFriendSession(class UOnlineFriend* Friend, const class FScriptDelegate& CompletionDelegate);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineIntegration.CommonUserStatusWidget
	 * Size -> 0x0008 (FullSize[0x0288] - InheritedSize[0x0280])
	 */
	class UCommonUserStatusWidget : public UUserWidget
	{
	public:
		int32_t                                                    PlayerIndex;                                             // 0x0280(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8T5A[0x4];                                   // 0x0284(0x0004) MISSED OFFSET (PADDING)

	public:
		void OnCommonUserInitializeComplete(class ULocalUserInfo* InuUserInfo);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineIntegration.CommonUserSubsystem
	 * Size -> 0x0180 (FullSize[0x01B0] - InheritedSize[0x0030])
	 */
	class UCommonUserSubsystem : public UOnlineIntegrationComponent
	{
	public:
		unsigned char                                              UnknownData_TNHB[0x88];                                  // 0x0030(0x0088) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<int32_t, class ULocalUserInfo*>                       LocalUserInfos;                                          // 0x00B8(0x0050) Protected, UObjectWrapper, NativeAccessSpecifierProtected
		TMap<int32_t, class UOnlineAsyncOperation*>                PendingAuthenticationSequences;                          // 0x0108(0x0050) Protected, UObjectWrapper, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JH8X[0x58];                                  // 0x0158(0x0058) MISSED OFFSET (PADDING)

	public:
		void WhenLocalUserInfoIsCreated(const class FScriptDelegate& Delegate, int32_t PlayerIndex);
		bool TryToLogOutUser(int32_t LocalPlayerIndex, bool bDestroyPlayer);
		bool TryToLoginForOnlinePlay(int32_t LocalPlayerIndex);
		bool TryToInitializeUser(const struct FCommonUserInitializeParams& Params);
		bool TryToInitializeForLocalPlay(int32_t LocalPlayerIndex, const struct FInputDeviceId& PrimaryInputDevice, bool bCanUseGuestLogin);
		bool ShouldWaitForStartInput();
		void SetMaxLocalPlayers(int32_t InMaxLocalPLayers);
		void ListenForLoginKeyInput(TArray<struct FKey> AnyUserKeys, TArray<struct FKey> NewUserKeys, const struct FCommonUserInitializeParams& Params);
		class ULocalUserInfo* GetUserInfoForUniqueNetId(const struct FUniqueNetIdRepl& NetId);
		class ULocalUserInfo* GetUserInfoForPlatformUser(const struct FPlatformUserId& PlatformUser);
		class ULocalUserInfo* GetUserInfoForLocalPlayerIndex(int32_t LocalPlayerIndex);
		class ULocalUserInfo* GetUserInfoForLocalPlayer(class ULocalPlayer* LocalPlayer);
		class ULocalUserInfo* GetUserInfoForInputDevice(const struct FInputDeviceId& InputDevice);
		class ULocalUserInfo* GetUserInfoForControllerId(int32_t ControllerId);
		int32_t GetNumLocalPlayers();
		int32_t GetMaxLocalPlayers();
		class UOnlineAsyncOperation* CreateAuthenticationSequence(const struct FPlatformUserId& PlatformUserId);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineIntegration.LocalUserInfoBackend
	 * Size -> 0x0030 (FullSize[0x0098] - InheritedSize[0x0068])
	 */
	class ULocalUserInfoBackend : public UMVVMViewModelBase
	{
	public:
		EOnlineIntegrationUnmappedContext                          Context;                                                 // 0x0068(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_TMHD[0x3];                                   // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ServiceProvider;                                         // 0x006C(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ECommonUserLoginStatus                                     LoginStatus;                                             // 0x0074(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_USCN[0x3];                                   // 0x0075(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPlayerAvatar                                       Avatar;                                                  // 0x0078(0x0008) BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected
		class FString                                              Nickname;                                                // 0x0080(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bPendingLoginStateChange : 1;                            // 0x0090(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsBackendInUse : 1;                                     // 0x0090(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Z543[0x7];                                   // 0x0091(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineIntegration.LocalUserInfo
	 * Size -> 0x01B0 (FullSize[0x0218] - InheritedSize[0x0068])
	 */
	class ULocalUserInfo : public UMVVMViewModelBase
	{
	public:
		class ULocalUserInfoBackend*                               PrimaryBackend;                                          // 0x0068(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ULocalUserInfoBackend*                               SecondaryBackend;                                        // 0x0070(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UOnlineAuthenticationSequence*                       PendingAuthenticationSequence;                           // 0x0078(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_KF4O[0x50];                                  // 0x0080(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FInputDeviceId                                      PrimaryInputDevice;                                      // 0x00D0(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FPlatformUserId                                     PlatformUser;                                            // 0x00D4(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    LocalPlayerIndex;                                        // 0x00D8(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ECommonUserNATType                                         NATType;                                                 // 0x00DC(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_AZZE[0x3];                                   // 0x00DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bCanBeGuest : 1;                                         // 0x00E0(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsGuest : 1;                                            // 0x00E0(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bPlatformAccountLinkedToSecondaryAccount : 1;            // 0x00E0(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_4O1Q[0x3];                                   // 0x00E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCommonSession                                      GameSession;                                             // 0x00E4(0x0008) BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected
		ECommonUserPrivilegeAvailability                           CanPlayPrivilegeAvailability;                            // 0x00EC(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ECommonUserPrivilegeAvailability                           CanPlayOnlinePrivilegeAvailability;                      // 0x00ED(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7T6S[0x4A];                                  // 0x00EE(0x004A) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnFriendRelationshipChanged;                             // 0x0138(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnFriendAdded;                                           // 0x0148(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnFriendRemoved;                                         // 0x0158(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		TArray<class UOnlineFriend*>                               Friends;                                                 // 0x0168(0x0010) ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_F44P[0xA0];                                  // 0x0178(0x00A0) MISSED OFFSET (PADDING)

	public:
		void UnlinkExternalAccount();
		void LogoutExternalAccount(bool bForgetCachedAuth);
		void LoginExternalAccount();
		bool IsLoggedIn(EOnlineIntegrationUnmappedContext Context);
		class FString GetUnmappedContextNickname(EOnlineIntegrationUnmappedContext Context);
		struct FUniqueNetIdRepl GetNetId(EOnlineIntegrationMappedContext Context);
		class FString GetMappedContextNickname(EOnlineIntegrationMappedContext Context);
		ECommonUserLoginStatus GetLoginStatus(EOnlineIntegrationUnmappedContext Context);
		class FString GetDebugString();
		class UOnlineFriendList* CreateFriendList();
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineIntegration.OnlineAsyncOperation
	 * Size -> 0x0048 (FullSize[0x00B0] - InheritedSize[0x0068])
	 */
	class UOnlineAsyncOperation : public UMVVMViewModelBase
	{
	public:
		class FText                                                StatusText;                                              // 0x0068(0x0018) BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		bool                                                       bIsFinished : 1;                                         // 0x0080(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_F7FM[0x1F];                                  // 0x0081(0x001F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnOperationCompleted;                                    // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineIntegration.OnlineAuthenticationSequence
	 * Size -> 0x0070 (FullSize[0x0120] - InheritedSize[0x00B0])
	 */
	class UOnlineAuthenticationSequence : public UOnlineAsyncOperation
	{
	public:
		unsigned char                                              AuthenticationHandler[0x10];                             // 0x00B0(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		unsigned char                                              UnknownData_C12X[0x60];                                  // 0x00C0(0x0060) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineIntegration.OnlineFriendBackend
	 * Size -> 0x0038 (FullSize[0x00A0] - InheritedSize[0x0068])
	 */
	class UOnlineFriendBackend : public UMVVMViewModelBase
	{
	public:
		unsigned char                                              UnknownData_ZCG8[0x8];                                   // 0x0068(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DisplayName;                                             // 0x0070(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              Nickname;                                                // 0x0080(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EOnlineRelationship                                        Relationship;                                            // 0x0090(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_TZCH[0x7];                                   // 0x0091(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPlayerAvatar                                       Avatar;                                                  // 0x0098(0x0008) BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineIntegration.OnlineFriend
	 * Size -> 0x0138 (FullSize[0x01A0] - InheritedSize[0x0068])
	 */
	class UOnlineFriend : public UMVVMViewModelBase
	{
	public:
		unsigned char                                              UnknownData_K6AA[0x8];                                   // 0x0068(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DisplayName;                                             // 0x0070(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              Nickname;                                                // 0x0080(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EOnlineRelationship                                        Relationship;                                            // 0x0090(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EOnlineIntegrationUnmappedContext                          Context;                                                 // 0x0091(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_E487[0x6];                                   // 0x0092(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UOnlineUserPresence*                                 Presence;                                                // 0x0098(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FCommonSession                                      GameSession;                                             // 0x00A0(0x0008) BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected
		class UTexture2D*                                          Avatar;                                                  // 0x00A8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FSlateBrush                                         AvatarBrush;                                             // 0x00B0(0x00D0) BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		bool                                                       bHasIncomingInvite;                                      // 0x0180(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7LC1[0x7];                                   // 0x0181(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UOnlineFriendBackend*                                PrimaryBackendInfo;                                      // 0x0188(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UOnlineFriendBackend*                                PlatformBackendInfo;                                     // 0x0190(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UOnlineFriendBackend*                                ExternalBackendInfo;                                     // 0x0198(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void RejectGameInvite();
		void JoinGame();
		bool IsPresenceJoinable();
		bool IsPlayingThisGame();
		bool IsEffectivelyOnline();
		void InviteToSession();
		class ULocalUserInfo* GetLocalUserInfo();
		ECommonUserNATType GetAdvertisedNATType();
		void AcceptGameInvite();
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineIntegration.OnlineFriendList
	 * Size -> 0x0098 (FullSize[0x00C0] - InheritedSize[0x0028])
	 */
	class UOnlineFriendList : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnFriendAdded;                                           // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnFriendRemoved;                                         // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnFriendListSorted_K2;                                   // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_AITZ[0x18];                                  // 0x0058(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UOnlineFriend*>                               Friends;                                                 // 0x0070(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XG9K[0x40];                                  // 0x0080(0x0040) MISSED OFFSET (PADDING)

	public:
		void SetSearchTerm(const class FString& InSearchTerm);
		bool MatchesFilters(class UOnlineFriend* Friend);
		void MakeContextRelevant(EOnlineIntegrationUnmappedContext Context);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineIntegration.OnlineIntegrationPIESettings
	 * Size -> 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
	 */
	class UOnlineIntegrationPIESettings : public UDeveloperSettings
	{
	public:
		bool                                                       bEnableOnlinePIE;                                        // 0x0038(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8KME[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPieOnlineCredentials>                       Credentials;                                             // 0x0040(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineIntegration.OnlineIntegrationSettings
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UOnlineIntegrationSettings : public UDeveloperSettings
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineIntegration.OnlineIntegrationSubsystem
	 * Size -> 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
	 */
	class UOnlineIntegrationSubsystem : public UGameInstanceSubsystem
	{
	public:
		EOnlineIntegrationMode                                     OnlineIntegrationMode;                                   // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_FSC8[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                PlatformOnlineServices;                                  // 0x0034(0x0008) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                ExternalOnlineServices;                                  // 0x003C(0x0008) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_C4WC[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UOnlineIntegrationComponent*>                 OnlineIntegrationComponents;                             // 0x0048(0x0010) ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZXGB[0x30];                                  // 0x0058(0x0030) MISSED OFFSET (PADDING)

	public:
		bool ShouldWaitForStartInput();
		bool HasTraitTag(const struct FGameplayTag& TraitTag);
		class UCommonUserSubsystem* GetUserManager();
		class UCommonSessionSubsystem* GetSessionManager();
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineIntegration.OnlineSessionInfoViewModel
	 * Size -> 0x0020 (FullSize[0x0088] - InheritedSize[0x0068])
	 */
	class UOnlineSessionInfoViewModel : public UMVVMViewModelBase
	{
	public:
		ECommonSessionJoinPolicy                                   JoinPolicy;                                              // 0x0068(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       IsOnlineSession;                                         // 0x0069(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_P25Y[0x6];                                   // 0x006A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SessionIdString;                                         // 0x0070(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FCommonSession                                      SessionHandle;                                           // 0x0080(0x0008) NoDestructor, NativeAccessSpecifierPrivate

	public:
		void SetSessionHandle(const struct FCommonSession& InSessionHandle, class UCommonSessionSubsystem* SessionSubsystem);
		void InvitePressed();
		void InviteFriend(class UOnlineFriend* Friend);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineIntegration.OnlineModelConversionFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOnlineModelConversionFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		struct FSlateBrush STATIC_MakeBrushFromPlayerAvatar(const struct FPlayerAvatar& PlayerAvatar);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineIntegration.OnlineAuthenticationHandler
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOnlineAuthenticationHandler : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineIntegration.SessionCreationInteractionHandler
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USessionCreationInteractionHandler : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineIntegration.OnlineUserPresence
	 * Size -> 0x0078 (FullSize[0x00E0] - InheritedSize[0x0068])
	 */
	class UOnlineUserPresence : public UMVVMViewModelBase
	{
	public:
		EOnlineUserPresenceStatus                                  Status;                                                  // 0x0068(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EOnlineUserPresenceJoinability                             Joinability;                                             // 0x0069(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EOnlineUserPresenceGameStatus                              GameStatus;                                              // 0x006A(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YV5R[0x5];                                   // 0x006B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              StatusString;                                            // 0x0070(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              RichPresenceString;                                      // 0x0080(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TMap<class FString, class FString>                         Properties;                                              // 0x0090(0x0050) BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineIntegration.SessionMigrationSequence
	 * Size -> 0x0028 (FullSize[0x00D8] - InheritedSize[0x00B0])
	 */
	class USessionMigrationSequence : public UOnlineAsyncOperation
	{
	public:
		class UCommonSessionSubsystem*                             CommonSessionSubsystem;                                  // 0x00B0(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnSessionSetupComplete;                                  // 0x00B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JYGO[0x10];                                  // 0x00C8(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineIntegration.SessionCreationSequence
	 * Size -> 0x00C8 (FullSize[0x01A0] - InheritedSize[0x00D8])
	 */
	class USessionCreationSequence : public USessionMigrationSequence
	{
	public:
		unsigned char                                              UnknownData_UST4[0x8];                                   // 0x00D8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCommonSessionCreationSettings                      SessionCreationSettings;                                 // 0x00E0(0x0088) BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		unsigned char                                              InteractionHandler[0x10];                                // 0x0168(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		unsigned char                                              UnknownData_PZW1[0x28];                                  // 0x0178(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineIntegration.SessionJoiningSequence
	 * Size -> 0x0050 (FullSize[0x0128] - InheritedSize[0x00D8])
	 */
	class USessionJoiningSequence : public USessionMigrationSequence
	{
	public:
		class ULocalUserInfo*                                      LocalUserInfo;                                           // 0x00D8(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class APlayerController*                                   Player;                                                  // 0x00E0(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UCYN[0x40];                                  // 0x00E8(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
