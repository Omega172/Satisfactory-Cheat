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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class SignificanceISPC.SignificanceManagerAccelerated
	 * Size -> 0x0058 (FullSize[0x01A8] - InheritedSize[0x0150])
	 */
	class USignificanceManagerAccelerated : public USignificanceManager
	{
	public:
		unsigned char                                              UnknownData_WH7M[0x50];                                  // 0x0150(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NumFramesForFullCycle;                                   // 0x01A0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8N7F[0x4];                                   // 0x01A4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
