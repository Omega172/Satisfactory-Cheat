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
	 * Function Widget_TrainWarning.Widget_TrainWarning_C.ShouldForceWarning
	 */
	struct UWidget_TrainWarning_C_ShouldForceWarning_Params
	{
	public:
		bool                                                       ForceWarning;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6HEJ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                WarningText;                                             // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Widget_TrainWarning.Widget_TrainWarning_C.UpdateWarning
	 */
	struct UWidget_TrainWarning_C_UpdateWarning_Params
	{	};

	/**
	 * Function Widget_TrainWarning.Widget_TrainWarning_C.HideWarning
	 */
	struct UWidget_TrainWarning_C_HideWarning_Params
	{	};

	/**
	 * Function Widget_TrainWarning.Widget_TrainWarning_C.ShowWarning
	 */
	struct UWidget_TrainWarning_C_ShowWarning_Params
	{
	public:
		class FText                                                WarningText;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Widget_TrainWarning.Widget_TrainWarning_C.Init
	 */
	struct UWidget_TrainWarning_C_Init_Params
	{
	public:
		class AFGTrain*                                            train;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_TrainWarning.Widget_TrainWarning_C.CheckErrors
	 */
	struct UWidget_TrainWarning_C_CheckErrors_Params
	{	};

	/**
	 * Function Widget_TrainWarning.Widget_TrainWarning_C.Destruct
	 */
	struct UWidget_TrainWarning_C_Destruct_Params
	{	};

	/**
	 * Function Widget_TrainWarning.Widget_TrainWarning_C.ExecuteUbergraph_Widget_TrainWarning
	 */
	struct UWidget_TrainWarning_C_ExecuteUbergraph_Widget_TrainWarning_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
