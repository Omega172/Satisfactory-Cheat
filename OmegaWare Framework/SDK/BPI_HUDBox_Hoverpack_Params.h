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
	 * Function BPI_HUDBox_Hoverpack.BPI_HUDBox_Hoverpack_C.GetRangeWarningNrmlzdDistThreshold
	 */
	struct UBPI_HUDBox_Hoverpack_C_GetRangeWarningNrmlzdDistThreshold_Params
	{
	public:
		double                                                     RangeWarningNormalizedDistanceThreshold;                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_HUDBox_Hoverpack.BPI_HUDBox_Hoverpack_C.IsHoverpackHovering
	 */
	struct UBPI_HUDBox_Hoverpack_C_IsHoverpackHovering_Params
	{
	public:
		bool                                                       IsHovering;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_HUDBox_Hoverpack.BPI_HUDBox_Hoverpack_C.GetHoverpackStates
	 */
	struct UBPI_HUDBox_Hoverpack_C_GetHoverpackStates_Params
	{
	public:
		EHoverPackMode                                             HoverpackState;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_HUDBox_Hoverpack.BPI_HUDBox_Hoverpack_C.GetConnectionDistance
	 */
	struct UBPI_HUDBox_Hoverpack_C_GetConnectionDistance_Params
	{
	public:
		double                                                     ConnectionDistance;                                      // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_HUDBox_Hoverpack.BPI_HUDBox_Hoverpack_C.GetCurrentNormalisedConnectionDistance
	 */
	struct UBPI_HUDBox_Hoverpack_C_GetCurrentNormalisedConnectionDistance_Params
	{
	public:
		double                                                     NormalisedConnectionDistance;                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_HUDBox_Hoverpack.BPI_HUDBox_Hoverpack_C.GetPowerConnectionBool
	 */
	struct UBPI_HUDBox_Hoverpack_C_GetPowerConnectionBool_Params
	{
	public:
		bool                                                       IsConnected;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_HUDBox_Hoverpack.BPI_HUDBox_Hoverpack_C.GetMaxConnectionDistance
	 */
	struct UBPI_HUDBox_Hoverpack_C_GetMaxConnectionDistance_Params
	{
	public:
		double                                                     ConnectionMaxDistance;                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
