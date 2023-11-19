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
	 * Function master_river_spline.master_river_spline_C.ModifyTerrain
	 */
	struct Amaster_river_spline_C_ModifyTerrain_Params
	{	};

	/**
	 * Function master_river_spline.master_river_spline_C.CheckPointsHeight
	 */
	struct Amaster_river_spline_C_CheckPointsHeight_Params
	{	};

	/**
	 * Function master_river_spline.master_river_spline_C.SnapToTerrain
	 */
	struct Amaster_river_spline_C_SnapToTerrain_Params
	{	};

	/**
	 * Function master_river_spline.master_river_spline_C.UserConstructionScript
	 */
	struct Amaster_river_spline_C_UserConstructionScript_Params
	{	};

	/**
	 * Function master_river_spline.master_river_spline_C.UpdateSignificanceTickRate
	 */
	struct Amaster_river_spline_C_UpdateSignificanceTickRate_Params
	{
	public:
		float                                                      NewTickRate;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bTickEnabled;                                            // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function master_river_spline.master_river_spline_C.ReceiveBeginPlay
	 */
	struct Amaster_river_spline_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function master_river_spline.master_river_spline_C.GainedSignificance
	 */
	struct Amaster_river_spline_C_GainedSignificance_Params
	{	};

	/**
	 * Function master_river_spline.master_river_spline_C.LostSignificance
	 */
	struct Amaster_river_spline_C_LostSignificance_Params
	{	};

	/**
	 * Function master_river_spline.master_river_spline_C.ReceiveEndPlay
	 */
	struct Amaster_river_spline_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function master_river_spline.master_river_spline_C.ExecuteUbergraph_master_river_spline
	 */
	struct Amaster_river_spline_C_ExecuteUbergraph_master_river_spline_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
