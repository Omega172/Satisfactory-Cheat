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
	 * Function BPW_MapVehiclePathDirection.BPW_MapVehiclePathDirection_C.SetRotation
	 */
	struct UBPW_MapVehiclePathDirection_C_SetRotation_Params
	{
	public:
		double                                                     mRotation;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MapVehiclePathDirection.BPW_MapVehiclePathDirection_C.PreConstruct
	 */
	struct UBPW_MapVehiclePathDirection_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MapVehiclePathDirection.BPW_MapVehiclePathDirection_C.ExecuteUbergraph_BPW_MapVehiclePathDirection
	 */
	struct UBPW_MapVehiclePathDirection_C_ExecuteUbergraph_BPW_MapVehiclePathDirection_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GA8F[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
