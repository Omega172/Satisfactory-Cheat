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
	 * Function BPW_VehiclePathMap.BPW_VehiclePathMap_C.OnPaint
	 */
	struct UBPW_VehiclePathMap_C_OnPaint_Params
	{
	public:
		struct FPaintContext                                       Context;                                                 // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BPW_VehiclePathMap.BPW_VehiclePathMap_C.Construct
	 */
	struct UBPW_VehiclePathMap_C_Construct_Params
	{	};

	/**
	 * Function BPW_VehiclePathMap.BPW_VehiclePathMap_C.ExecuteUbergraph_BPW_VehiclePathMap
	 */
	struct UBPW_VehiclePathMap_C_ExecuteUbergraph_BPW_VehiclePathMap_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_R5OF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
