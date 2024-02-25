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
	 * Class OnlineSubsystemUtils.AchievementBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAchievementBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_GetCachedAchievementProgress(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FName& AchievementID, bool* bFoundID, float* Progress);
		void STATIC_GetCachedAchievementDescription(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FName& AchievementID, bool* bFoundID, class FText* Title, class FText* LockedDescription, class FText* UnlockedDescription, bool* bHidden);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.AchievementQueryCallbackProxy
	 * Size -> 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
	 */
	class UAchievementQueryCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G4K5[0x18];                                  // 0x0050(0x0018) MISSED OFFSET (PADDING)

	public:
		class UAchievementQueryCallbackProxy* STATIC_CacheAchievements(class UObject* WorldContextObject, class APlayerController* PlayerController);
		class UAchievementQueryCallbackProxy* STATIC_CacheAchievementDescriptions(class UObject* WorldContextObject, class APlayerController* PlayerController);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.AchievementWriteCallbackProxy
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class UAchievementWriteCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N3Z6[0x30];                                  // 0x0050(0x0030) MISSED OFFSET (PADDING)

	public:
		class UAchievementWriteCallbackProxy* STATIC_WriteAchievementProgress(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FName& AchievementName, float Progress, int32_t UserTag);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.ConnectionCallbackProxy
	 * Size -> 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
	 */
	class UConnectionCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BI1U[0x28];                                  // 0x0050(0x0028) MISSED OFFSET (PADDING)

	public:
		class UConnectionCallbackProxy* STATIC_ConnectToService(class UObject* WorldContextObject, class APlayerController* PlayerController);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.CreateSessionCallbackProxy
	 * Size -> 0x0078 (FullSize[0x00A8] - InheritedSize[0x0030])
	 */
	class UCreateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AKMQ[0x58];                                  // 0x0050(0x0058) MISSED OFFSET (PADDING)

	public:
		class UCreateSessionCallbackProxy* STATIC_CreateSession(class UObject* WorldContextObject, class APlayerController* PlayerController, int32_t PublicConnections, bool bUseLAN, bool bIsPrivateGame, const class FString& SessionName);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.DestroySessionCallbackProxy
	 * Size -> 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
	 */
	class UDestroySessionCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LF4F[0x28];                                  // 0x0050(0x0028) MISSED OFFSET (PADDING)

	public:
		class UDestroySessionCallbackProxy* STATIC_DestroySession(class UObject* WorldContextObject, class APlayerController* PlayerController);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.EndMatchCallbackProxy
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class UEndMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9G9L[0x30];                                  // 0x0050(0x0030) MISSED OFFSET (PADDING)

	public:
		class UEndMatchCallbackProxy* STATIC_EndMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& MatchID, EMPMatchOutcome LocalPlayerOutcome, EMPMatchOutcome OtherPlayersOutcome);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.EndTurnCallbackProxy
	 * Size -> 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
	 */
	class UEndTurnCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZG4B[0x28];                                  // 0x0050(0x0028) MISSED OFFSET (PADDING)

	public:
		class UEndTurnCallbackProxy* STATIC_EndTurn(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& MatchID);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.FindSessionsCallbackProxy
	 * Size -> 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
	 */
	class UFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OFW2[0x40];                                  // 0x0050(0x0040) MISSED OFFSET (PADDING)

	public:
		class FString STATIC_GetServerName(const struct FBlueprintSessionResult& Result);
		int32_t STATIC_GetPingInMs(const struct FBlueprintSessionResult& Result);
		int32_t STATIC_GetMaxPlayers(const struct FBlueprintSessionResult& Result);
		int32_t STATIC_GetCurrentPlayers(const struct FBlueprintSessionResult& Result);
		class UFindSessionsCallbackProxy* STATIC_FindSessions(class UObject* WorldContextObject, class APlayerController* PlayerController, int32_t MaxResults, bool bUseLAN);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy
	 * Size -> 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
	 */
	class UFindTurnBasedMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7626[0x38];                                  // 0x0050(0x0038) MISSED OFFSET (PADDING)

	public:
		class UFindTurnBasedMatchCallbackProxy* STATIC_FindTurnBasedMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, int32_t MinPlayers, int32_t MaxPlayers, int32_t PlayerGroup, bool ShowExistingMatches);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy2
	 * Size -> 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
	 */
	class UInAppPurchaseCallbackProxy2 : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DJR1[0x60];                                  // 0x0048(0x0060) MISSED OFFSET (PADDING)

	public:
		class UInAppPurchaseCallbackProxy2* STATIC_CreateProxyObjectForInAppPurchaseUnprocessedPurchases(class APlayerController* PlayerController);
		class UInAppPurchaseCallbackProxy2* STATIC_CreateProxyObjectForInAppPurchaseQueryOwned(class APlayerController* PlayerController);
		class UInAppPurchaseCallbackProxy2* STATIC_CreateProxyObjectForInAppPurchase(class APlayerController* PlayerController, const struct FInAppPurchaseProductRequest2& ProductRequest);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UInAppPurchaseQueryCallbackProxy2 : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_51CO[0x20];                                  // 0x0048(0x0020) MISSED OFFSET (PADDING)

	public:
		class UInAppPurchaseQueryCallbackProxy2* STATIC_CreateProxyObjectForInAppPurchaseQuery(class APlayerController* PlayerController, TArray<class FString> ProductIdentifiers);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2
	 * Size -> 0x0088 (FullSize[0x00B0] - InheritedSize[0x0028])
	 */
	class UInAppPurchaseRestoreCallbackProxy2 : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XR3O[0x68];                                  // 0x0048(0x0068) MISSED OFFSET (PADDING)

	public:
		class UInAppPurchaseRestoreCallbackProxy2* STATIC_CreateProxyObjectForInAppPurchaseRestore(TArray<struct FInAppPurchaseProductRequest2> ConsumableProductFlags, class APlayerController* PlayerController);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.IpConnection
	 * Size -> 0x0090 (FullSize[0x1E48] - InheritedSize[0x1DB8])
	 */
	class UIpConnection : public UNetConnection
	{
	public:
		unsigned char                                              UnknownData_9SWF[0x74];                                  // 0x1DB8(0x0074) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SocketErrorDisconnectDelay;                              // 0x1E2C(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7UJF[0x18];                                  // 0x1E30(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.IpNetDriver
	 * Size -> 0x00B0 (FullSize[0x0860] - InheritedSize[0x07B0])
	 */
	class UIpNetDriver : public UNetDriver
	{
	public:
		bool                                                       LogPortUnreach : 1;                                      // 0x07B0(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AllowPlayerPortUnreach : 1;                              // 0x07B0(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TSVT[0x3];                                   // 0x07B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   MaxPortCountToTry;                                       // 0x07B4(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CL8Q[0x4];                                   // 0x07B8(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   ServerDesiredSocketReceiveBufferBytes;                   // 0x07BC(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		uint32_t                                                   ServerDesiredSocketSendBufferBytes;                      // 0x07C0(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		uint32_t                                                   ClientDesiredSocketReceiveBufferBytes;                   // 0x07C4(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		uint32_t                                                   ClientDesiredSocketSendBufferBytes;                      // 0x07C8(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_S50N[0x4];                                   // 0x07CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     MaxSecondsInReceive;                                     // 0x07D0(0x0008) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    NbPacketsBetweenReceiveTimeTest;                         // 0x07D8(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      ResolutionConnectionTimeout;                             // 0x07DC(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UYDF[0x80];                                  // 0x07E0(0x0080) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.JoinSessionCallbackProxy
	 * Size -> 0x0168 (FullSize[0x0198] - InheritedSize[0x0030])
	 */
	class UJoinSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D1Y4[0x148];                                 // 0x0050(0x0148) MISSED OFFSET (PADDING)

	public:
		class UJoinSessionCallbackProxy* STATIC_JoinSession(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FBlueprintSessionResult& SearchResult);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.LeaderboardBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULeaderboardBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_WriteLeaderboardInteger(class APlayerController* PlayerController, const class FName& StatName, int32_t StatValue);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.LeaderboardFlushCallbackProxy
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class ULeaderboardFlushCallbackProxy : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S03P[0x20];                                  // 0x0048(0x0020) MISSED OFFSET (PADDING)

	public:
		class ULeaderboardFlushCallbackProxy* STATIC_CreateProxyObjectForFlush(class APlayerController* PlayerController, const class FName& SessionName);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.LeaderboardQueryCallbackProxy
	 * Size -> 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
	 */
	class ULeaderboardQueryCallbackProxy : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7HDY[0x50];                                  // 0x0048(0x0050) MISSED OFFSET (PADDING)

	public:
		class ULeaderboardQueryCallbackProxy* STATIC_CreateProxyObjectForIntQuery(class APlayerController* PlayerController, const class FName& StatName);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.LogoutCallbackProxy
	 * Size -> 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
	 */
	class ULogoutCallbackProxy : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_25V4[0x18];                                  // 0x0050(0x0018) MISSED OFFSET (PADDING)

	public:
		class ULogoutCallbackProxy* STATIC_Logout(class UObject* WorldContextObject, class APlayerController* PlayerController);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.OnlineBeacon
	 * Size -> 0x0030 (FullSize[0x0328] - InheritedSize[0x02F8])
	 */
	class AOnlineBeacon : public AActor
	{
	public:
		unsigned char                                              UnknownData_P416[0x8];                                   // 0x02F8(0x0008) Fix Super Size
		float                                                      BeaconConnectionInitialTimeout;                          // 0x0300(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BeaconConnectionTimeout;                                 // 0x0304(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UNetDriver*                                          NetDriver;                                               // 0x0308(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_EBFC[0x18];                                  // 0x0310(0x0018) Fix size for supers

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.OnlineBeaconClient
	 * Size -> 0x0060 (FullSize[0x0388] - InheritedSize[0x0328])
	 */
	class AOnlineBeaconClient : public AOnlineBeacon
	{
	public:
		class AOnlineBeaconHostObject*                             BeaconOwner;                                             // 0x0328(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UNetConnection*                                      BeaconConnection;                                        // 0x0330(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EBeaconConnectionState                                     ConnectionState;                                         // 0x0338(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZILQ[0x4F];                                  // 0x0339(0x004F) Fix size for supers

	public:
		void ClientOnConnected();
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.OnlineBeaconHost
	 * Size -> 0x0118 (FullSize[0x0440] - InheritedSize[0x0328])
	 */
	class AOnlineBeaconHost : public AOnlineBeacon
	{
	public:
		unsigned char                                              UnknownData_S9L0[0x8];                                   // 0x0328(0x0008) Fix Super Size
		uint32_t                                                   MaxAuthTokenSize;                                        // 0x0330(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7WJ8[0x54];                                  // 0x0334(0x0054) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AOnlineBeaconClient*>                         ClientActors;                                            // 0x0388(0x0010) ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_C2IR[0xA8];                                  // 0x0398(0x00A8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.OnlineBeaconHostObject
	 * Size -> 0x0028 (FullSize[0x0320] - InheritedSize[0x02F8])
	 */
	class AOnlineBeaconHostObject : public AActor
	{
	public:
		class FString                                              BeaconTypeName;                                          // 0x02F8(0x0010) ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              ClientBeaconActorClass;                                  // 0x0308(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class AOnlineBeaconClient*>                         ClientActors;                                            // 0x0310(0x0010) ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl
	 * Size -> 0x0160 (FullSize[0x0188] - InheritedSize[0x0028])
	 */
	class UOnlineEngineInterfaceImpl : public UOnlineEngineInterface
	{
	public:
		TMap<class FName, class FName>                             MappedUniqueNetIdTypes;                                  // 0x0028(0x0050) Config, NativeAccessSpecifierPrivate
		TArray<class FName>                                        CompatibleUniqueNetIdTypes;                              // 0x0078(0x0010) ZeroConstructor, Config, NativeAccessSpecifierPrivate
		class FName                                                VoiceSubsystemNameOverride;                              // 0x0088(0x0008) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_OSPQ[0xF8];                                  // 0x0090(0x00F8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.OnlinePIESettings
	 * Size -> 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
	 */
	class UOnlinePIESettings : public UDeveloperSettings
	{
	public:
		bool                                                       bOnlinePIEEnabled;                                       // 0x0038(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6Q0K[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPIELoginSettingsInternal>                   Logins;                                                  // 0x0040(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.OnlineServicesEngineInterfaceImpl
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOnlineServicesEngineInterfaceImpl : public UOnlineEngineInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.OnlineSessionClient
	 * Size -> 0x01B8 (FullSize[0x01E0] - InheritedSize[0x0028])
	 */
	class UOnlineSessionClient : public UOnlineSession
	{
	public:
		unsigned char                                              UnknownData_1PJX[0x1B0];                                 // 0x0028(0x01B0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bIsFromInvite;                                           // 0x01D8(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHandlingDisconnect;                                     // 0x01D9(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_NEBI[0x6];                                   // 0x01DA(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.PartyBeaconClient
	 * Size -> 0x00C8 (FullSize[0x0450] - InheritedSize[0x0388])
	 */
	class APartyBeaconClient : public AOnlineBeaconClient
	{
	public:
		unsigned char                                              UnknownData_9Y7Q[0x8];                                   // 0x0388(0x0008) Fix Super Size
		unsigned char                                              UnknownData_HQZ8[0x28];                                  // 0x0390(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DestSessionId;                                           // 0x03B8(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FPartyReservation                                   PendingReservation;                                      // 0x03C8(0x0058) Protected, NativeAccessSpecifierProtected
		EClientRequestType                                         RequestType;                                             // 0x0420(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bPendingReservationSent;                                 // 0x0421(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bCancelReservation;                                      // 0x0422(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_PAMS[0x2D];                                  // 0x0423(0x002D) MISSED OFFSET (PADDING)

	public:
		void ServerUpdateReservationRequest(const class FString& SessionId, const struct FPartyReservation& ReservationUpdate);
		void ServerReservationRequest(const class FString& SessionId, const struct FPartyReservation& Reservation);
		void ServerRemoveMemberFromReservationRequest(const class FString& SessionId, const struct FPartyReservation& ReservationUpdate);
		void ServerCancelReservationRequest(const struct FUniqueNetIdRepl& PartyLeader);
		void ServerAddOrUpdateReservationRequest(const class FString& SessionId, const struct FPartyReservation& Reservation);
		void ClientSendReservationUpdates(int32_t NumRemainingReservations);
		void ClientSendReservationFull();
		void ClientReservationResponse(EPartyReservationResult ReservationResponse);
		void ClientCancelReservationResponse(EPartyReservationResult ReservationResponse);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.PartyBeaconHost
	 * Size -> 0x0080 (FullSize[0x03A0] - InheritedSize[0x0320])
	 */
	class APartyBeaconHost : public AOnlineBeaconHostObject
	{
	public:
		class UPartyBeaconState*                                   State;                                                   // 0x0320(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_O4LG[0x60];                                  // 0x0328(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bLogoutOnSessionTimeout;                                 // 0x0388(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1KW3[0x3];                                   // 0x0389(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SessionTimeoutSecs;                                      // 0x038C(0x0004) ZeroConstructor, Transient, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      TravelSessionTimeoutSecs;                                // 0x0390(0x0004) ZeroConstructor, Transient, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_NWHQ[0xC];                                   // 0x0394(0x000C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.PartyBeaconState
	 * Size -> 0x0078 (FullSize[0x00A0] - InheritedSize[0x0028])
	 */
	class UPartyBeaconState : public UObject
	{
	public:
		class FName                                                SessionName;                                             // 0x0028(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    NumConsumedReservations;                                 // 0x0030(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    MaxReservations;                                         // 0x0034(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    NumTeams;                                                // 0x0038(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    NumPlayersPerTeam;                                       // 0x003C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                TeamAssignmentMethod;                                    // 0x0040(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    ReservedHostTeamNum;                                     // 0x0048(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    ForceTeamNum;                                            // 0x004C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bRestrictCrossConsole;                                   // 0x0050(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_TLKV[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      PlatformCrossplayRestrictions;                           // 0x0058(0x0010) ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected
		TArray<struct FPartyBeaconCrossplayPlatformMapping>        PlatformTypeMapping;                                     // 0x0068(0x0010) ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected
		bool                                                       bEnableRemovalRequests;                                  // 0x0078(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8CTL[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPartyReservation>                           Reservations;                                            // 0x0080(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7E2X[0x10];                                  // 0x0090(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.QuitMatchCallbackProxy
	 * Size -> 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
	 */
	class UQuitMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_829W[0x28];                                  // 0x0050(0x0028) MISSED OFFSET (PADDING)

	public:
		class UQuitMatchCallbackProxy* STATIC_QuitMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& MatchID, EMPMatchOutcome Outcome, int32_t TurnTimeoutInSeconds);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.ShowLoginUICallbackProxy
	 * Size -> 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
	 */
	class UShowLoginUICallbackProxy : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CDQE[0x10];                                  // 0x0050(0x0010) MISSED OFFSET (PADDING)

	public:
		class UShowLoginUICallbackProxy* STATIC_ShowExternalLoginUI(class UObject* WorldContextObject, class APlayerController* InPlayerController);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.SpectatorBeaconClient
	 * Size -> 0x00F8 (FullSize[0x0480] - InheritedSize[0x0388])
	 */
	class ASpectatorBeaconClient : public AOnlineBeaconClient
	{
	public:
		unsigned char                                              UnknownData_3PO2[0x8];                                   // 0x0388(0x0008) Fix Super Size
		unsigned char                                              UnknownData_8RRC[0x28];                                  // 0x0390(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DestSessionId;                                           // 0x03B8(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FSpectatorReservation                               PendingReservation;                                      // 0x03C8(0x0088) Protected, NativeAccessSpecifierProtected
		ESpectatorClientRequestType                                RequestType;                                             // 0x0450(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bPendingReservationSent;                                 // 0x0451(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bCancelReservation;                                      // 0x0452(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZGA4[0x2D];                                  // 0x0453(0x002D) MISSED OFFSET (PADDING)

	public:
		void ServerReservationRequest(const class FString& SessionId, const struct FSpectatorReservation& Reservation);
		void ServerCancelReservationRequest(const struct FUniqueNetIdRepl& Spectator);
		void ClientSendReservationUpdates(int32_t NumRemainingReservations);
		void ClientSendReservationFull();
		void ClientReservationResponse(ESpectatorReservationResult ReservationResponse);
		void ClientCancelReservationResponse(ESpectatorReservationResult ReservationResponse);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.SpectatorBeaconHost
	 * Size -> 0x0080 (FullSize[0x03A0] - InheritedSize[0x0320])
	 */
	class ASpectatorBeaconHost : public AOnlineBeaconHostObject
	{
	public:
		class USpectatorBeaconState*                               State;                                                   // 0x0320(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WDLK[0x60];                                  // 0x0328(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bLogoutOnSessionTimeout;                                 // 0x0388(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_5CYE[0x3];                                   // 0x0389(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SessionTimeoutSecs;                                      // 0x038C(0x0004) ZeroConstructor, Transient, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      TravelSessionTimeoutSecs;                                // 0x0390(0x0004) ZeroConstructor, Transient, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8UFB[0xC];                                   // 0x0394(0x000C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.SpectatorBeaconState
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class USpectatorBeaconState : public UObject
	{
	public:
		class FName                                                SessionName;                                             // 0x0028(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    NumConsumedReservations;                                 // 0x0030(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    MaxReservations;                                         // 0x0034(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bRestrictCrossConsole;                                   // 0x0038(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CLON[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSpectatorReservation>                       Reservations;                                            // 0x0040(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XSKA[0x10];                                  // 0x0050(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.TestBeaconClient
	 * Size -> 0x0008 (FullSize[0x0390] - InheritedSize[0x0388])
	 */
	class ATestBeaconClient : public AOnlineBeaconClient
	{
	public:
		unsigned char                                              UnknownData_B8WK[0x8];                                   // 0x0388(0x0008) Fix Super Size

	public:
		void ServerPong();
		void ClientPing();
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.TestBeaconHost
	 * Size -> 0x0000 (FullSize[0x0320] - InheritedSize[0x0320])
	 */
	class ATestBeaconHost : public AOnlineBeaconHostObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.TurnBasedBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTurnBasedBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_RegisterTurnBasedMatchInterfaceObject(class UObject* WorldContextObject, class APlayerController* PlayerController, class UObject* Object);
		void STATIC_GetPlayerDisplayName(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& MatchID, int32_t PlayerIndex, class FString* PlayerDisplayName);
		void STATIC_GetMyPlayerIndex(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& MatchID, int32_t* PlayerIndex);
		void STATIC_GetIsMyTurn(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& MatchID, bool* bIsMyTurn);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.VoipListenerSynthComponent
	 * Size -> 0x0060 (FullSize[0x07F0] - InheritedSize[0x0790])
	 */
	class UVoipListenerSynthComponent : public USynthComponent
	{
	public:
		unsigned char                                              UnknownData_1E9M[0x60];                                  // 0x0790(0x0060) MISSED OFFSET (PADDING)

	public:
		bool IsIdling();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
