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
	 * Function BPI_DroneAnim.BPI_DroneAnim_C.StartDocking
	 */
	struct UBPI_DroneAnim_C_StartDocking_Params
	{	};

	/**
	 * Function BPI_DroneAnim.BPI_DroneAnim_C.StartTakeOff
	 */
	struct UBPI_DroneAnim_C_StartTakeOff_Params
	{	};

	/**
	 * Function BPI_DroneAnim.BPI_DroneAnim_C.OnFlyingModeChange
	 */
	struct UBPI_DroneAnim_C_OnFlyingModeChange_Params
	{
	public:
		EDroneFlyingMode                                           NewFlyingMode;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
