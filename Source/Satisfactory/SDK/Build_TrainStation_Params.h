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
	 * Function Build_TrainStation.Build_TrainStation_C.GetDefaultRepresentationColor
	 */
	struct ABuild_TrainStation_C_GetDefaultRepresentationColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_TrainStation.Build_TrainStation_C.GetRepresentationText
	 */
	struct ABuild_TrainStation_C_GetRepresentationText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Build_TrainStation.Build_TrainStation_C.OnNameChanged
	 */
	struct ABuild_TrainStation_C_OnNameChanged_Params
	{	};

	/**
	 * Function Build_TrainStation.Build_TrainStation_C.SetRepresentationText
	 */
	struct ABuild_TrainStation_C_SetRepresentationText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Build_TrainStation.Build_TrainStation_C.ExecuteUbergraph_Build_TrainStation
	 */
	struct ABuild_TrainStation_C_ExecuteUbergraph_Build_TrainStation_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2F14[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
