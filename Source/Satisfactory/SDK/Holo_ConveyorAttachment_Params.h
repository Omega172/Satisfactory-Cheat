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
	 * Function Holo_ConveyorAttachment.Holo_ConveyorAttachment_C.ReceiveConfigureComponents
	 */
	struct AHolo_ConveyorAttachment_C_ReceiveConfigureComponents_Params
	{
	public:
		class AFGBuildable*                                        inBuildable;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Holo_ConveyorAttachment.Holo_ConveyorAttachment_C.ExecuteUbergraph_Holo_ConveyorAttachment
	 */
	struct AHolo_ConveyorAttachment_C_ExecuteUbergraph_Holo_ConveyorAttachment_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PZGT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
