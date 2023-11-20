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
	 * Function Build_SnowDispenser.Build_SnowDispenser_C.Spawn_VFX
	 */
	struct ABuild_SnowDispenser_C_Spawn_VFX_Params
	{	};

	/**
	 * Function Build_SnowDispenser.Build_SnowDispenser_C.GetAvailableElementID
	 */
	struct ABuild_SnowDispenser_C_GetAvailableElementID_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_SnowDispenser.Build_SnowDispenser_C.GetBuildable
	 */
	struct ABuild_SnowDispenser_C_GetBuildable_Params
	{
	public:
		class AFGBuildable*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_SnowDispenser.Build_SnowDispenser_C.GetGridSquareDimensions
	 */
	struct ABuild_SnowDispenser_C_GetGridSquareDimensions_Params
	{
	public:
		struct FVector2D                                           ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_SnowDispenser.Build_SnowDispenser_C.GetSignDimensions
	 */
	struct ABuild_SnowDispenser_C_GetSignDimensions_Params
	{
	public:
		struct FVector2D                                           ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_SnowDispenser.Build_SnowDispenser_C.ReceiveBeginPlay
	 */
	struct ABuild_SnowDispenser_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Build_SnowDispenser.Build_SnowDispenser_C.ReceiveEndPlay
	 */
	struct ABuild_SnowDispenser_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_SnowDispenser.Build_SnowDispenser_C.GainedSignificance
	 */
	struct ABuild_SnowDispenser_C_GainedSignificance_Params
	{	};

	/**
	 * Function Build_SnowDispenser.Build_SnowDispenser_C.LostSignificance
	 */
	struct ABuild_SnowDispenser_C_LostSignificance_Params
	{	};

	/**
	 * Function Build_SnowDispenser.Build_SnowDispenser_C.ExecuteUbergraph_Build_SnowDispenser
	 */
	struct ABuild_SnowDispenser_C_ExecuteUbergraph_Build_SnowDispenser_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
