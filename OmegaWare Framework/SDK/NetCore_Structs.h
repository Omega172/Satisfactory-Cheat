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
	 * Enum NetCore.ENetworkFailure
	 */
	enum class ENetworkFailure : uint8_t
	{
		NetDriverAlreadyExists   = 0,
		NetDriverCreateFailure   = 1,
		NetDriverListenFailure   = 2,
		ConnectionLost           = 3,
		ConnectionTimeout        = 4,
		FailureReceived          = 5,
		OutdatedClient           = 6,
		OutdatedServer           = 7,
		PendingConnectionFailure = 8,
		NetGuidMismatch          = 9,
		NetChecksumMismatch      = 10,
		MAX                      = 11
	};

	/**
	 * Enum NetCore.ENetCloseResult
	 */
	enum class ENetCloseResult : uint8_t
	{
		NetDriverAlreadyExists                 = 0,
		NetDriverCreateFailure                 = 1,
		NetDriverListenFailure                 = 2,
		ConnectionLost                         = 3,
		ConnectionTimeout                      = 4,
		FailureReceived                        = 5,
		OutdatedClient                         = 6,
		OutdatedServer                         = 7,
		PendingConnectionFailure               = 8,
		NetGuidMismatch                        = 9,
		NetChecksumMismatch                    = 10,
		SecurityMalformedPacket                = 11,
		SecurityInvalidData                    = 12,
		SecurityClosed                         = 13,
		Unknown                                = 14,
		Success                                = 15,
		Extended                               = 16,
		HostClosedConnection                   = 17,
		Disconnect                             = 18,
		Upgrade                                = 19,
		PreLoginFailure                        = 20,
		JoinFailure                            = 21,
		JoinSplitFailure                       = 22,
		AddressResolutionFailed                = 23,
		RPCDoS                                 = 24,
		Cleanup                                = 25,
		MissingLevelPackage                    = 26,
		PacketHandlerIncomingError             = 27,
		ZeroLastByte                           = 28,
		ZeroSize                               = 29,
		ReadHeaderFail                         = 30,
		ReadHeaderExtraFail                    = 31,
		AckSequenceMismatch                    = 32,
		BunchBadChannelIndex                   = 33,
		BunchChannelNameFail                   = 34,
		BunchWrongChannelType                  = 35,
		BunchHeaderOverflow                    = 36,
		BunchDataOverflow                      = 37,
		BunchServerPackageMapExports           = 38,
		BunchPrematureControlChannel           = 39,
		BunchPrematureChannel                  = 40,
		BunchPrematureControlClose             = 41,
		UnknownChannelType                     = 42,
		PrematureSend                          = 43,
		CorruptData                            = 44,
		SocketSendFailure                      = 45,
		BadChildConnectionIndex                = 46,
		LogLimitInstant                        = 47,
		LogLimitSustained                      = 48,
		EncryptionFailure                      = 49,
		EncryptionTokenMissing                 = 50,
		ReceivedNetGUIDBunchFail               = 51,
		MaxReliableExceeded                    = 52,
		ReceivedNextBunchFail                  = 53,
		ReceivedNextBunchQueueFail             = 54,
		PartialInitialReliableDestroy          = 55,
		PartialMergeReliableDestroy            = 56,
		PartialInitialNonByteAligned           = 57,
		PartialNonByteAligned                  = 58,
		PartialFinalPackageMapExports          = 59,
		PartialTooLarge                        = 60,
		AlreadyOpen                            = 61,
		ReliableBeforeOpen                     = 62,
		ReliableBufferOverflow                 = 63,
		RPCReliableBufferOverflow              = 64,
		ControlChannelClose                    = 65,
		ControlChannelEndianCheck              = 66,
		ControlChannelPlayerChannelFail        = 67,
		ControlChannelMessageUnknown           = 68,
		ControlChannelMessageFail              = 69,
		ControlChannelMessagePayloadFail       = 70,
		ControlChannelBunchOverflowed          = 71,
		ControlChannelQueueBunchOverflowed     = 72,
		ClientHasMustBeMappedGUIDs             = 73,
		ClientSentDestructionInfo              = 74,
		UnregisteredMustBeMappedGUID           = 75,
		ObjectReplicatorReceivedBunchFail      = 76,
		ContentBlockFail                       = 77,
		ContentBlockHeaderRepLayoutFail        = 78,
		ContentBlockHeaderIsActorFail          = 79,
		ContentBlockHeaderObjFail              = 80,
		ContentBlockHeaderPrematureEnd         = 81,
		ContentBlockHeaderSubObjectActor       = 82,
		ContentBlockHeaderBadParent            = 83,
		ContentBlockHeaderInvalidCreate        = 84,
		ContentBlockHeaderStablyNamedFail      = 85,
		ContentBlockHeaderNoSubObjectClass     = 86,
		ContentBlockHeaderUObjectSubObject     = 87,
		ContentBlockHeaderAActorSubObject      = 88,
		ContentBlockHeaderFail                 = 89,
		ContentBlockPayloadBitsFail            = 90,
		FieldHeaderRepIndex                    = 91,
		FieldHeaderBadRepIndex                 = 92,
		FieldHeaderPayloadBitsFail             = 93,
		FieldPayloadFail                       = 94,
		BeaconControlFlowError                 = 95,
		BeaconUnableToParsePacket              = 96,
		BeaconAuthenticationFailure            = 97,
		BeaconLoginInvalidIdError              = 98,
		BeaconLoginInvalidAuthHandlerError     = 99,
		BeaconAuthError                        = 100,
		BeaconSpawnClientWorldPackageNameError = 101,
		BeaconSpawnExistingActorError          = 102,
		BeaconSpawnFailureError                = 103,
		BeaconSpawnNetGUIDAckNoActor           = 104,
		BeaconSpawnNetGUIDAckNoHost            = 105,
		BeaconSpawnUnexpectedError             = 106,
		FaultDisconnect                        = 107,
		NotRecoverable                         = 108,
		MAX                                    = 109
	};

	/**
	 * Enum NetCore.EFastArraySerializerDeltaFlags
	 */
	enum class EFastArraySerializerDeltaFlags : uint8_t
	{
		None                      = 0,
		HasBeenSerialized         = 1,
		HasDeltaBeenRequested     = 2,
		IsUsingDeltaSerialization = 3,
		MAX                       = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct NetCore.NetAnalyticsDataConfig
	 * Size -> 0x000C
	 */
	struct FNetAnalyticsDataConfig
	{
	public:
		class FName                                                DataName;                                                // 0x0000(0x0008) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x0008(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B6Q8[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct NetCore.StateStruct
	 * Size -> 0x0018
	 */
	struct FStateStruct
	{
	public:
		unsigned char                                              UnknownData_51HS[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              StateName;                                               // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct NetCore.EscalationState
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FEscalationState : public FStateStruct
	{
	public:
		bool                                                       bLogEscalate;                                            // 0x0018(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDormant;                                                // 0x0019(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int16_t                                                    CooloffTime;                                             // 0x001A(0x0002) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int16_t                                                    AutoEscalateTime;                                        // 0x001C(0x0002) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int8_t                                                     HighestTimePeriod;                                       // 0x001E(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7FRB[0x1];                                   // 0x001F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int8_t>                                             AllTimePeriods;                                          // 0x0020(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct NetCore.NetFaultState
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	struct FNetFaultState : public FEscalationState
	{
	public:
		bool                                                       bCloseConnection;                                        // 0x0030(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4Q5D[0x1];                                   // 0x0031(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int16_t                                                    EscalateQuotaFaultsPerPeriod;                            // 0x0032(0x0002) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int8_t                                                     EscalateQuotaFaultPercentPerPeriod;                      // 0x0034(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GGZP[0x1];                                   // 0x0035(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int16_t                                                    DescalateQuotaFaultsPerPeriod;                           // 0x0036(0x0002) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int8_t                                                     DescalateQuotaFaultPercentPerPeriod;                     // 0x0038(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int8_t                                                     EscalateQuotaTimePeriod;                                 // 0x0039(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FDPO[0x6];                                   // 0x003A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct NetCore.FastArraySerializerItem
	 * Size -> 0x000C
	 */
	struct FFastArraySerializerItem
	{
	public:
		int32_t                                                    ReplicationID;                                           // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ReplicationKey;                                          // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MostRecentArrayReplicationKey;                           // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct NetCore.FastArraySerializer
	 * Size -> 0x0108
	 */
	struct FFastArraySerializer
	{
	public:
		unsigned char                                              UnknownData_BK0W[0x54];                                  // 0x0000(0x0054) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ArrayReplicationKey;                                     // 0x0054(0x0004) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CC5Y[0xA8];                                  // 0x0058(0x00A8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EFastArraySerializerDeltaFlags                             DeltaFlags;                                              // 0x0100(0x0001) ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_X1KH[0x7];                                   // 0x0101(0x0007) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
