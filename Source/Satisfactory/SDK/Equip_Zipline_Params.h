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
	 * Function Equip_Zipline.Equip_Zipline_C.GetOwningCharacter
	 */
	struct AEquip_Zipline_C_GetOwningCharacter_Params
	{
	public:
		class AFGCharacterPlayer*                                  Character;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_Zipline.Equip_Zipline_C.StartSFXTraveling
	 */
	struct AEquip_Zipline_C_StartSFXTraveling_Params
	{	};

	/**
	 * Function Equip_Zipline.Equip_Zipline_C.SFXZiplineSpeedRTPC
	 */
	struct AEquip_Zipline_C_SFXZiplineSpeedRTPC_Params
	{	};

	/**
	 * Function Equip_Zipline.Equip_Zipline_C.Kill_SFXLoops
	 */
	struct AEquip_Zipline_C_Kill_SFXLoops_Params
	{	};

	/**
	 * Function Equip_Zipline.Equip_Zipline_C.Func_StopVFX
	 */
	struct AEquip_Zipline_C_Func_StopVFX_Params
	{	};

	/**
	 * Function Equip_Zipline.Equip_Zipline_C.Func_StartVFX
	 */
	struct AEquip_Zipline_C_Func_StartVFX_Params
	{	};

	/**
	 * Function Equip_Zipline.Equip_Zipline_C.StartZiplineEffect
	 */
	struct AEquip_Zipline_C_StartZiplineEffect_Params
	{
	public:
		bool                                                       bAttachVFX;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_Zipline.Equip_Zipline_C.StopZiplineEffect
	 */
	struct AEquip_Zipline_C_StopZiplineEffect_Params
	{	};

	/**
	 * Function Equip_Zipline.Equip_Zipline_C.StopVFXs
	 */
	struct AEquip_Zipline_C_StopVFXs_Params
	{	};

	/**
	 * Function Equip_Zipline.Equip_Zipline_C.WasUnEquipped
	 */
	struct AEquip_Zipline_C_WasUnEquipped_Params
	{	};

	/**
	 * Function Equip_Zipline.Equip_Zipline_C.WasEquipped
	 */
	struct AEquip_Zipline_C_WasEquipped_Params
	{	};

	/**
	 * Function Equip_Zipline.Equip_Zipline_C.Do_Burst_FX
	 */
	struct AEquip_Zipline_C_Do_Burst_FX_Params
	{	};

	/**
	 * Function Equip_Zipline.Equip_Zipline_C.Server_PrimaryFire
	 */
	struct AEquip_Zipline_C_Server_PrimaryFire_Params
	{	};

	/**
	 * Function Equip_Zipline.Equip_Zipline_C.Server_PrimaryRelease
	 */
	struct AEquip_Zipline_C_Server_PrimaryRelease_Params
	{	};

	/**
	 * Function Equip_Zipline.Equip_Zipline_C.OnWantToGrabChanged
	 */
	struct AEquip_Zipline_C_OnWantToGrabChanged_Params
	{
	public:
		bool                                                       newWantToGrab;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_Zipline.Equip_Zipline_C.OnZiplineSprintStatusChanged
	 */
	struct AEquip_Zipline_C_OnZiplineSprintStatusChanged_Params
	{
	public:
		bool                                                       sprint;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_Zipline.Equip_Zipline_C.ExecuteUbergraph_Equip_Zipline
	 */
	struct AEquip_Zipline_C_ExecuteUbergraph_Equip_Zipline_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_L68G[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
