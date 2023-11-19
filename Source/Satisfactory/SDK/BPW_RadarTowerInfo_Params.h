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
	 * Function BPW_RadarTowerInfo.BPW_RadarTowerInfo_C.SetActorRepresentation
	 */
	struct UBPW_RadarTowerInfo_C_SetActorRepresentation_Params
	{
	public:
		class UFGActorRepresentation*                              mActorRepresentation;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_RadarTowerInfo.BPW_RadarTowerInfo_C.PreConstruct
	 */
	struct UBPW_RadarTowerInfo_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_RadarTowerInfo.BPW_RadarTowerInfo_C.ExecuteUbergraph_BPW_RadarTowerInfo
	 */
	struct UBPW_RadarTowerInfo_C_ExecuteUbergraph_BPW_RadarTowerInfo_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
