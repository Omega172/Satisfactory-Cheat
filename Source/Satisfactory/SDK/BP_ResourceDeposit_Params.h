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
	 * Function BP_ResourceDeposit.BP_ResourceDeposit_C.ReceiveBeginPlay
	 */
	struct ABP_ResourceDeposit_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_ResourceDeposit.BP_ResourceDeposit_C.PlayDepletedEffect
	 */
	struct ABP_ResourceDeposit_C_PlayDepletedEffect_Params
	{
	public:
		class UClass*                                              Descriptor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ResourceDeposit.BP_ResourceDeposit_C.ExecuteUbergraph_BP_ResourceDeposit
	 */
	struct ABP_ResourceDeposit_C_ExecuteUbergraph_BP_ResourceDeposit_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
