﻿#pragma once

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
	 * Class Hotfix.OnlineHotfixManager
	 * Size -> 0x0210 (FullSize[0x0238] - InheritedSize[0x0028])
	 */
	class UOnlineHotfixManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_L5WH[0x1D0];                                 // 0x0028(0x01D0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              OSSName;                                                 // 0x01F8(0x0010) ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              HotfixManagerClassName;                                  // 0x0208(0x0010) ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DebugPrefix;                                             // 0x0218(0x0010) ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UObject*>                                     AssetsHotfixedFromIniFiles;                              // 0x0228(0x0010) ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic

	public:
		void StartHotfixProcess();
		static UClass* StaticClass();
	};

	/**
	 * Class Hotfix.UpdateManager
	 * Size -> 0x01C8 (FullSize[0x01F0] - InheritedSize[0x0028])
	 */
	class UUpdateManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_Y817[0x60];                                  // 0x0028(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HotfixCheckCompleteDelay;                                // 0x0088(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      UpdateCheckCompleteDelay;                                // 0x008C(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      HotfixAvailabilityCheckCompleteDelay;                    // 0x0090(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      UpdateCheckAvailabilityCompleteDelay;                    // 0x0094(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8BO3[0x4];                                   // 0x0098(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    AppSuspendedUpdateCheckTimeSeconds;                      // 0x009C(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LLKF[0x8];                                   // 0x00A0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bPlatformEnvironmentDetected;                            // 0x00A8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bInitialUpdateFinished;                                  // 0x00A9(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bCheckHotfixAvailabilityOnly;                            // 0x00AA(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EUpdateState                                               CurrentUpdateState;                                      // 0x00AB(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    WorstNumFilesPendingLoadViewed;                          // 0x00AC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_R66N[0x4];                                   // 0x00B0(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EHotfixResult                                              LastHotfixResult;                                        // 0x00B4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_B1SZ[0x23];                                  // 0x00B5(0x0023) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           LastUpdateCheck[0x2];                                    // 0x00D8(0x0010) ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EUpdateCompletionStatus                                    LastCompletionResult[0x2];                               // 0x00E8(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_0D5A[0x26];                                  // 0x00EA(0x0026) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UEnum*                                               UpdateStateEnum;                                         // 0x0110(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UEnum*                                               UpdateCompletionEnum;                                    // 0x0118(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FUpdateContextDefinition                            UpdateContextDefinitionUnknown;                          // 0x0120(0x0068) Config, NativeAccessSpecifierPrivate
		TArray<struct FUpdateContextDefinition>                    UpdateContextDefinitions;                                // 0x0188(0x0010) ZeroConstructor, Config, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TAF0[0x58];                                  // 0x0198(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
