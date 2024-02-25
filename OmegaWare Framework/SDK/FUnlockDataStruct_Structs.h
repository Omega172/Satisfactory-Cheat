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
	// # Structs
	// --------------------------------------------------
	/**
	 * UserDefinedStruct FUnlockDataStruct.FUnlockDataStruct
	 * Size -> 0x0050
	 */
	struct FFUnlockDataStruct
	{
	public:
		class FText                                                UnlockName_2_490383D6421D4A92D86E1F835769488A;           // 0x0000(0x0018) Edit, BlueprintVisible
		class FText                                                UnlockDescription_47_C1BE3B4640DE12D11DB5B0935FB9EE8D;   // 0x0018(0x0018) Edit, BlueprintVisible
		class UTexture2D*                                          UnlockIconSmall_38_3E3B124C41C68907A6EB9FAD36C04BC4;     // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class UTexture2D*                                          UnlockIconBig_39_348C50A0404826F588C5BEA2B5BAF68E;       // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		int32_t                                                    UnlockAmount_13_F32234CC46ECA4C99973A28AA05BE30E;        // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    UnlockStructIndex_34_716E881C402D058998F7CDA17E1E4BF2;   // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UFGUnlock*                                           Unlock_29_06E6D017481991B0E94072A4F21FCC03;              // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
