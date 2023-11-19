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
	 * Function Widget_ActorDetails_Hub.Widget_ActorDetails_Hub_C.FromSecondsToText
	 */
	struct UWidget_ActorDetails_Hub_C_FromSecondsToText_Params
	{
	public:
		double                                                     Seconds;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Result;                                                  // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function Widget_ActorDetails_Hub.Widget_ActorDetails_Hub_C.UpdateInfo
	 */
	struct UWidget_ActorDetails_Hub_C_UpdateInfo_Params
	{	};

	/**
	 * Function Widget_ActorDetails_Hub.Widget_ActorDetails_Hub_C.Construct
	 */
	struct UWidget_ActorDetails_Hub_C_Construct_Params
	{	};

	/**
	 * Function Widget_ActorDetails_Hub.Widget_ActorDetails_Hub_C.UpdateInfoEvent
	 */
	struct UWidget_ActorDetails_Hub_C_UpdateInfoEvent_Params
	{	};

	/**
	 * Function Widget_ActorDetails_Hub.Widget_ActorDetails_Hub_C.UpdateMAMInfo
	 */
	struct UWidget_ActorDetails_Hub_C_UpdateMAMInfo_Params
	{	};

	/**
	 * Function Widget_ActorDetails_Hub.Widget_ActorDetails_Hub_C.ExecuteUbergraph_Widget_ActorDetails_Hub
	 */
	struct UWidget_ActorDetails_Hub_C_ExecuteUbergraph_Widget_ActorDetails_Hub_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_R9OQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
