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
	 * Function BP_BuildGunStateDismantle.BP_BuildGunStateDismantle_C.TickState
	 */
	struct UBP_BuildGunStateDismantle_C_TickState_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BuildGunStateDismantle.BP_BuildGunStateDismantle_C.SecondaryFire
	 */
	struct UBP_BuildGunStateDismantle_C_SecondaryFire_Params
	{	};

	/**
	 * Function BP_BuildGunStateDismantle.BP_BuildGunStateDismantle_C.BeginState
	 */
	struct UBP_BuildGunStateDismantle_C_BeginState_Params
	{	};

	/**
	 * Function BP_BuildGunStateDismantle.BP_BuildGunStateDismantle_C.EndState
	 */
	struct UBP_BuildGunStateDismantle_C_EndState_Params
	{	};

	/**
	 * Function BP_BuildGunStateDismantle.BP_BuildGunStateDismantle_C.OnStartDismantle
	 */
	struct UBP_BuildGunStateDismantle_C_OnStartDismantle_Params
	{	};

	/**
	 * Function BP_BuildGunStateDismantle.BP_BuildGunStateDismantle_C.OnStopDismantle
	 */
	struct UBP_BuildGunStateDismantle_C_OnStopDismantle_Params
	{	};

	/**
	 * Function BP_BuildGunStateDismantle.BP_BuildGunStateDismantle_C.OnRecipeSampled
	 */
	struct UBP_BuildGunStateDismantle_C_OnRecipeSampled_Params
	{
	public:
		class UClass*                                              recipe;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BuildGunStateDismantle.BP_BuildGunStateDismantle_C.ExecuteUbergraph_BP_BuildGunStateDismantle
	 */
	struct UBP_BuildGunStateDismantle_C_ExecuteUbergraph_BP_BuildGunStateDismantle_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XD2J[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
