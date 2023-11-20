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
	 * Class Lobby.LobbyBeaconClient
	 * Size -> 0x0088 (FullSize[0x0410] - InheritedSize[0x0388])
	 */
	class ALobbyBeaconClient : public AOnlineBeaconClient
	{
	public:
		class ALobbyBeaconState*                                   LobbyState;                                              // 0x0388(0x0008) Net, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ALobbyBeaconPlayerState*                             PlayerState;                                             // 0x0390(0x0008) Net, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0W4C[0x1];                                   // 0x0398(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ELobbyBeaconJoinState                                      LobbyJoinServerState;                                    // 0x0399(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_3DZZ[0x76];                                  // 0x039A(0x0076) MISSED OFFSET (PADDING)

	public:
		void ServerSetPartyOwner(const struct FUniqueNetIdRepl& InUniqueId, const struct FUniqueNetIdRepl& InPartyOwnerId);
		void ServerNotifyJoiningServer();
		void ServerLoginPlayer(const class FString& InSessionId, const struct FUniqueNetIdRepl& InUniqueId, const class FString& UrlString);
		void ServerKickPlayer(const struct FUniqueNetIdRepl& PlayerToKick, const class FText& Reason);
		void ServerDisconnectFromLobby();
		void ServerCheat(const class FString& Msg);
		void ClientWasKicked(const class FText& KickReason);
		void ClientSetInviteFlags(const struct FJoinabilitySettings& Settings);
		void ClientPlayerLeft(const struct FUniqueNetIdRepl& InUniqueId);
		void ClientPlayerJoined(const class FText& NewPlayerName, const struct FUniqueNetIdRepl& InUniqueId);
		void ClientLoginComplete(const struct FUniqueNetIdRepl& InUniqueId, bool bWasSuccessful);
		void ClientJoinGame();
		void ClientAckJoiningServer();
		static UClass* StaticClass();
	};

	/**
	 * Class Lobby.LobbyBeaconHost
	 * Size -> 0x0040 (FullSize[0x0360] - InheritedSize[0x0320])
	 */
	class ALobbyBeaconHost : public AOnlineBeaconHostObject
	{
	public:
		unsigned char                                              UnknownData_0X91[0x8];                                   // 0x0320(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              LobbyStateClass[0x30];                                   // 0x0328(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		class ALobbyBeaconState*                                   LobbyState;                                              // 0x0358(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Lobby.LobbyBeaconPlayerState
	 * Size -> 0x00D8 (FullSize[0x03D0] - InheritedSize[0x02F8])
	 */
	class ALobbyBeaconPlayerState : public AInfo
	{
	public:
		class FText                                                DisplayName;                                             // 0x02F8(0x0018) Net, NativeAccessSpecifierPublic
		struct FUniqueNetIdRepl                                    UniqueId;                                                // 0x0310(0x0030) Net, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FUniqueNetIdRepl                                    PartyOwnerUniqueId;                                      // 0x0340(0x0030) Net, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInLobby;                                                // 0x0370(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SR5Y[0x7];                                   // 0x0371(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AOnlineBeaconClient*                                 ClientActor;                                             // 0x0378(0x0008) Net, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F76N[0x50];                                  // 0x0380(0x0050) MISSED OFFSET (PADDING)

	public:
		void OnRep_UniqueId();
		void OnRep_PartyOwner();
		void OnRep_InLobby();
		static UClass* StaticClass();
	};

	/**
	 * Class Lobby.LobbyBeaconState
	 * Size -> 0x01A8 (FullSize[0x04A0] - InheritedSize[0x02F8])
	 */
	class ALobbyBeaconState : public AInfo
	{
	public:
		unsigned char                                              UnknownData_PBEE[0x8];                                   // 0x02F8(0x0008) Fix Super Size
		class UClass*                                              LobbyBeaconPlayerStateClass;                             // 0x0300(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LW0Z[0x8];                                   // 0x0308(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bLobbyStarted;                                           // 0x0310(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_RIN6[0x3];                                   // 0x0311(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WaitForPlayersTimeRemaining;                             // 0x0314(0x0004) Net, ZeroConstructor, Config, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLobbyPlayerStateInfoArray                          Players;                                                 // 0x0318(0x0120) Net, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8IFZ[0x68];                                  // 0x0438(0x0068) MISSED OFFSET (PADDING)

	public:
		void OnRep_WaitForPlayersTimeRemaining();
		void OnRep_LobbyStarted();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
