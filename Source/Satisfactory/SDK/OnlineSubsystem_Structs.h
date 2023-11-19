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
	 * Enum OnlineSubsystem.EInAppPurchaseState
	 */
	enum class EInAppPurchaseState : uint8_t
	{
		Unknown      = 0,
		Success      = 1,
		Failed       = 2,
		Cancelled    = 3,
		Invalid      = 4,
		NotAllowed   = 5,
		Restored     = 6,
		AlreadyOwned = 7,
		MAX          = 8
	};

	/**
	 * Enum OnlineSubsystem.EMPMatchOutcome
	 */
	enum class EMPMatchOutcome : uint8_t
	{
		None        = 0,
		Quit        = 1,
		Won         = 2,
		Lost        = 3,
		Tied        = 4,
		TimeExpired = 5,
		First       = 6,
		Second      = 7,
		Third       = 8,
		Fourth      = 9,
		MAX         = 10
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct OnlineSubsystem.NamedInterface
	 * Size -> 0x0010
	 */
	struct FNamedInterface
	{
	public:
		class FName                                                InterfaceName;                                           // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject*                                             InterfaceObject;                                         // 0x0008(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OnlineSubsystem.NamedInterfaceDef
	 * Size -> 0x0018
	 */
	struct FNamedInterfaceDef
	{
	public:
		class FName                                                InterfaceName;                                           // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              InterfaceClassName;                                      // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
