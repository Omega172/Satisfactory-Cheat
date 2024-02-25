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
	 * Function BPI_SpaceRabbit.BPI_SpaceRabbit_C.UpdateDisplayName
	 */
	struct UBPI_SpaceRabbit_C_UpdateDisplayName_Params
	{
	public:
		class FText                                                NewName;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPI_SpaceRabbit.BPI_SpaceRabbit_C.GetDisplayName
	 */
	struct UBPI_SpaceRabbit_C_GetDisplayName_Params
	{
	public:
		class FText                                                DisplayName;                                             // 0x0000(0x0018)  (Parm, OutParm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
