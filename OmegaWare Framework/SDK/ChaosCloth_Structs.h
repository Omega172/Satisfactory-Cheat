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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum ChaosCloth.EChaosWeightMapTarget
	 */
	enum class EChaosWeightMapTarget : uint8_t
	{
		None               = 0,
		MaxDistance        = 1,
		BackstopDistance   = 2,
		BackstopRadius     = 3,
		AnimDriveStiffness = 4,
		AnimDriveDamping   = 5,
		TetherStiffness    = 6,
		TetherScale        = 7,
		Drag               = 8,
		Lift               = 9,
		EdgeStiffness      = 10,
		BendingStiffness   = 11,
		AreaStiffness      = 12,
		BucklingStiffness  = 13,
		Pressure           = 14,
		MAX                = 15
	};

	/**
	 * Enum ChaosCloth.EChaosClothTetherMode
	 */
	enum class EChaosClothTetherMode : uint8_t
	{
		FastTetherFastLength         = 0,
		AccurateTetherFastLength     = 1,
		AccurateTetherAccurateLength = 2,
		MaxChaosClothTetherMode      = 3,
		MAX                          = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct ChaosCloth.ChaosClothWeightedValue
	 * Size -> 0x0008
	 */
	struct FChaosClothWeightedValue
	{
	public:
		float                                                      Low;                                                     // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      High;                                                    // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
