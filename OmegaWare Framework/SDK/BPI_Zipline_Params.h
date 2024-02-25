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
	 * Function BPI_Zipline.BPI_Zipline_C.Do_Burst_FX
	 */
	struct UBPI_Zipline_C_Do_Burst_FX_Params
	{	};

	/**
	 * Function BPI_Zipline.BPI_Zipline_C.StopZiplineEffect
	 */
	struct UBPI_Zipline_C_StopZiplineEffect_Params
	{	};

	/**
	 * Function BPI_Zipline.BPI_Zipline_C.StartZiplineEffect
	 */
	struct UBPI_Zipline_C_StartZiplineEffect_Params
	{
	public:
		bool                                                       bAttachVFX;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
