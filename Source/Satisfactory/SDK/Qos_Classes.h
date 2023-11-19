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
	 * Class Qos.QosBeaconClient
	 * Size -> 0x0038 (FullSize[0x03C0] - InheritedSize[0x0388])
	 */
	class AQosBeaconClient : public AOnlineBeaconClient
	{
	public:
		unsigned char                                              UnknownData_JHA3[0x8];                                   // 0x0388(0x0008) Fix Super Size
		unsigned char                                              UnknownData_WO74[0x30];                                  // 0x0390(0x0030) MISSED OFFSET (PADDING)

	public:
		void ServerQosRequest(const class FString& InSessionId);
		void ClientQosResponse(EQosResponseType Response);
		static UClass* StaticClass();
	};

	/**
	 * Class Qos.QosBeaconHost
	 * Size -> 0x0010 (FullSize[0x0330] - InheritedSize[0x0320])
	 */
	class AQosBeaconHost : public AOnlineBeaconHostObject
	{
	public:
		unsigned char                                              UnknownData_DO2W[0x10];                                  // 0x0320(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Qos.QosEvaluator
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	class UQosEvaluator : public UObject
	{
	public:
		unsigned char                                              UnknownData_F6OD[0x20];                                  // 0x0028(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bInProgress;                                             // 0x0048(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bCancelOperation;                                        // 0x0049(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9FWE[0x6];                                   // 0x004A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FDatacenterQosInstance>                      Datacenters;                                             // 0x0050(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_A6KL[0x20];                                  // 0x0060(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Qos.QosRegionManager
	 * Size -> 0x00D0 (FullSize[0x00F8] - InheritedSize[0x0028])
	 */
	class UQosRegionManager : public UObject
	{
	public:
		int32_t                                                    NumTestsPerRegion;                                       // 0x0028(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      PingTimeout;                                             // 0x002C(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bEnableSubspaceBiasOrder;                                // 0x0030(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9OCS[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SubspaceDelimiter;                                       // 0x0038(0x0010) ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FQosRegionInfo>                              RegionDefinitions;                                       // 0x0048(0x0010) ZeroConstructor, Config, NativeAccessSpecifierPrivate
		TArray<struct FQosDatacenterInfo>                          DatacenterDefinitions;                                   // 0x0058(0x0010) ZeroConstructor, Config, NativeAccessSpecifierPrivate
		struct FDateTime                                           LastCheckTimestamp;                                      // 0x0068(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UQosEvaluator*                                       Evaluator;                                               // 0x0070(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EQosCompletionResult                                       QosEvalResult;                                           // 0x0078(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_3MAK[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRegionQosInstance>                          RegionOptions;                                           // 0x0080(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		class FString                                              ForceRegionId;                                           // 0x0090(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bRegionForcedViaCommandline;                             // 0x00A0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2GQ1[0x7];                                   // 0x00A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SelectedRegionId;                                        // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CCCF[0x40];                                  // 0x00B8(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
