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
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct WwiseSoundEngine.AkUInt64Wrapper
	 * Size -> 0x0008
	 */
	struct FAkUInt64Wrapper
	{
	public:
		uint64_t                                                   UInt64Value;                                             // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WwiseSoundEngine.AkUInt32Wrapper
	 * Size -> 0x0004
	 */
	struct FAkUInt32Wrapper
	{
	public:
		uint32_t                                                   UInt32Value;                                             // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WwiseSoundEngine.AkOutputDeviceID
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FAkOutputDeviceID : public FAkUInt64Wrapper
	{	};

	/**
	 * ScriptStruct WwiseSoundEngine.AkUniqueID
	 * Size -> 0x0000 (FullSize[0x0004] - InheritedSize[0x0004])
	 */
	struct FAkUniqueID : public FAkUInt32Wrapper
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
