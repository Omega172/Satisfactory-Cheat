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
	 * Enum VectorVM.EVectorVMBaseTypes
	 */
	enum class EVectorVMBaseTypes : uint8_t
	{
		Float = 0,
		Int   = 1,
		Bool  = 2,
		Num   = 3,
		MAX   = 4
	};

	/**
	 * Enum VectorVM.EVectorVMOperandLocation
	 */
	enum class EVectorVMOperandLocation : uint8_t
	{
		Register = 0,
		Constant = 1,
		Num      = 2,
		MAX      = 3
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
