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
	 * Enum Hotfix.EHotfixResult
	 */
	enum class EHotfixResult : uint8_t
	{
		Failed               = 0,
		Success              = 1,
		SuccessNoChange      = 2,
		SuccessNeedsReload   = 3,
		SuccessNeedsRelaunch = 4,
		MAX                  = 5
	};

	/**
	 * Enum Hotfix.EUpdateState
	 */
	enum class EUpdateState : uint8_t
	{
		UpdateIdle                   = 0,
		UpdatePending                = 1,
		CheckingForPatch             = 2,
		DetectingPlatformEnvironment = 3,
		CheckingForHotfix            = 4,
		WaitingOnInitialLoad         = 5,
		InitialLoadComplete          = 6,
		UpdateComplete               = 7,
		MAX                          = 8
	};

	/**
	 * Enum Hotfix.EUpdateCompletionStatus
	 */
	enum class EUpdateCompletionStatus : uint8_t
	{
		UpdateUnknown               = 0,
		UpdateSuccess               = 1,
		UpdateSuccess_NoChange      = 2,
		UpdateSuccess_NeedsReload   = 3,
		UpdateSuccess_NeedsRelaunch = 4,
		UpdateSuccess_NeedsPatch    = 5,
		UpdateFailure_PatchCheck    = 6,
		UpdateFailure_HotfixCheck   = 7,
		UpdateFailure_NotLoggedIn   = 8,
		MAX                         = 9
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Hotfix.UpdateContextDefinition
	 * Size -> 0x0068
	 */
	struct FUpdateContextDefinition
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x0010(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCheckAvailabilityOnly;                                  // 0x0011(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPatchCheckEnabled;                                      // 0x0012(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPlatformEnvironmentDetectionEnabled;                    // 0x0013(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HX33[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              AdditionalTags[0x50];                                    // 0x0018(0x0050) UNKNOWN PROPERTY: SetProperty
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
