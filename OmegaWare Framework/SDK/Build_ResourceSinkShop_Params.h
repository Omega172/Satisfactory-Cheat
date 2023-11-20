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
	 * Function Build_ResourceSinkShop.Build_ResourceSinkShop_C.GetLookAtDecription
	 */
	struct ABuild_ResourceSinkShop_C_GetLookAtDecription_Params
	{
	public:
		class AFGCharacterPlayer*                                  byCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FUseState                                           State;                                                   // 0x0008(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
		class FText                                                ReturnValue;                                             // 0x0038(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Build_ResourceSinkShop.Build_ResourceSinkShop_C.OnLoaded_AB2812A240C6856744E6B69817B59BD5
	 */
	struct ABuild_ResourceSinkShop_C_OnLoaded_AB2812A240C6856744E6B69817B59BD5_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_ResourceSinkShop.Build_ResourceSinkShop_C.ReceiveBeginPlay
	 */
	struct ABuild_ResourceSinkShop_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Build_ResourceSinkShop.Build_ResourceSinkShop_C.GainedSignificance
	 */
	struct ABuild_ResourceSinkShop_C_GainedSignificance_Params
	{	};

	/**
	 * Function Build_ResourceSinkShop.Build_ResourceSinkShop_C.LostSignificance
	 */
	struct ABuild_ResourceSinkShop_C_LostSignificance_Params
	{	};

	/**
	 * Function Build_ResourceSinkShop.Build_ResourceSinkShop_C.ExecuteUbergraph_Build_ResourceSinkShop
	 */
	struct ABuild_ResourceSinkShop_C_ExecuteUbergraph_Build_ResourceSinkShop_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_56Q1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
