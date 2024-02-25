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
	 * Function BPA_DroneTransport.BPA_DroneTransport_C.AnimGraph
	 */
	struct UBPA_DroneTransport_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function BPA_DroneTransport.BPA_DroneTransport_C.BlueprintUpdateAnimation
	 */
	struct UBPA_DroneTransport_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_DroneTransport.BPA_DroneTransport_C.OnFlyingModeChange
	 */
	struct UBPA_DroneTransport_C_OnFlyingModeChange_Params
	{
	public:
		EDroneFlyingMode                                           NewFlyingMode;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_DroneTransport.BPA_DroneTransport_C.StartDocking
	 */
	struct UBPA_DroneTransport_C_StartDocking_Params
	{	};

	/**
	 * Function BPA_DroneTransport.BPA_DroneTransport_C.StartTakeOff
	 */
	struct UBPA_DroneTransport_C_StartTakeOff_Params
	{	};

	/**
	 * Function BPA_DroneTransport.BPA_DroneTransport_C.AnimNotify_PropellerStart
	 */
	struct UBPA_DroneTransport_C_AnimNotify_PropellerStart_Params
	{	};

	/**
	 * Function BPA_DroneTransport.BPA_DroneTransport_C.AnimNotify_Deactivate
	 */
	struct UBPA_DroneTransport_C_AnimNotify_Deactivate_Params
	{	};

	/**
	 * Function BPA_DroneTransport.BPA_DroneTransport_C.ExecuteUbergraph_BPA_DroneTransport
	 */
	struct UBPA_DroneTransport_C_ExecuteUbergraph_BPA_DroneTransport_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NEC1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
