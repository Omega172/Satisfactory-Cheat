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
	 * Enum InputCore.EControllerHand
	 */
	enum class EControllerHand : uint8_t
	{
		Left                 = 0,
		Right                = 1,
		AnyHand              = 2,
		Pad                  = 3,
		ExternalCamera       = 4,
		Gun                  = 5,
		HMD                  = 6,
		Chest                = 7,
		LeftShoulder         = 8,
		RightShoulder        = 9,
		LeftElbow            = 10,
		RightElbow           = 11,
		Waist                = 12,
		LeftKnee             = 13,
		RightKnee            = 14,
		LeftFoot             = 15,
		RightFoot            = 16,
		Special              = 17,
		ControllerHand_Count = 18,
		MAX                  = 19
	};

	/**
	 * Enum InputCore.ETouchIndex
	 */
	enum class ETouchIndex : uint8_t
	{
		Touch1             = 0,
		Touch2             = 1,
		Touch3             = 2,
		Touch4             = 3,
		Touch5             = 4,
		Touch6             = 5,
		Touch7             = 6,
		Touch8             = 7,
		Touch9             = 8,
		Touch10            = 9,
		CursorPointerIndex = 10,
		MAX_TOUCHES        = 11,
		MAX                = 12
	};

	/**
	 * Enum InputCore.EConsoleForGamepadLabels
	 */
	enum class EConsoleForGamepadLabels : uint8_t
	{
		None    = 0,
		XBoxOne = 1,
		PS4     = 2,
		MAX     = 3
	};

	/**
	 * Enum InputCore.ETouchType
	 */
	enum class ETouchType : uint8_t
	{
		Began        = 0,
		Moved        = 1,
		Stationary   = 2,
		ForceChanged = 3,
		FirstMove    = 4,
		Ended        = 5,
		NumTypes     = 6,
		MAX          = 7
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct InputCore.Key
	 * Size -> 0x0018
	 */
	struct FKey
	{
	public:
		class FName                                                KeyName;                                                 // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_77EC[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
