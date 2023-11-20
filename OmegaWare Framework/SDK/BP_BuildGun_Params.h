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
	 * Function BP_BuildGun.BP_BuildGun_C.GetInstigatorPlayerController
	 */
	struct ABP_BuildGun_C_GetInstigatorPlayerController_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BuildGun.BP_BuildGun_C.WasEquipped
	 */
	struct ABP_BuildGun_C_WasEquipped_Params
	{	};

	/**
	 * Function BP_BuildGun.BP_BuildGun_C.WasUnEquipped
	 */
	struct ABP_BuildGun_C_WasUnEquipped_Params
	{	};

	/**
	 * Function BP_BuildGun.BP_BuildGun_C.PlayBuilgunAnimation
	 */
	struct ABP_BuildGun_C_PlayBuilgunAnimation_Params
	{	};

	/**
	 * Function BP_BuildGun.BP_BuildGun_C.ExecuteUbergraph_BP_BuildGun
	 */
	struct ABP_BuildGun_C_ExecuteUbergraph_BP_BuildGun_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OVFO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
