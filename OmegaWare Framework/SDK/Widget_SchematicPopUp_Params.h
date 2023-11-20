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
	 * Function Widget_SchematicPopUp.Widget_SchematicPopUp_C.CreateRewardIcon
	 */
	struct UWidget_SchematicPopUp_C_CreateRewardIcon_Params
	{
	public:
		class UTexture*                                            Icon;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class FText                                                IconText;                                                // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Widget_SchematicPopUp.Widget_SchematicPopUp_C.GenerateSchematicRewardIcons
	 */
	struct UWidget_SchematicPopUp_C_GenerateSchematicRewardIcons_Params
	{
	public:
		unsigned char                                              UnknownData_ZBSK[0x50];                                  // 0x0000(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_SchematicPopUp.Widget_SchematicPopUp_C.GetRelevantRewardData
	 */
	struct UWidget_SchematicPopUp_C_GetRelevantRewardData_Params
	{
	public:
		unsigned char                                              UnknownData_3T9U[0x50];                                  // 0x0000(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_SchematicPopUp.Widget_SchematicPopUp_C.Set Stinger Content
	 */
	struct UWidget_SchematicPopUp_C_SetStingerContent_Params
	{	};

	/**
	 * Function Widget_SchematicPopUp.Widget_SchematicPopUp_C.GetSchematicUnlockedText
	 */
	struct UWidget_SchematicPopUp_C_GetSchematicUnlockedText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_SchematicPopUp.Widget_SchematicPopUp_C.Construct
	 */
	struct UWidget_SchematicPopUp_C_Construct_Params
	{	};

	/**
	 * Function Widget_SchematicPopUp.Widget_SchematicPopUp_C.OnSchematicPurchased
	 */
	struct UWidget_SchematicPopUp_C_OnSchematicPurchased_Params
	{
	public:
		class UClass*                                              schematic;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_SchematicPopUp.Widget_SchematicPopUp_C.Set Stinger Collapsed
	 */
	struct UWidget_SchematicPopUp_C_SetStingerCollapsed_Params
	{	};

	/**
	 * Function Widget_SchematicPopUp.Widget_SchematicPopUp_C.ExecuteUbergraph_Widget_SchematicPopUp
	 */
	struct UWidget_SchematicPopUp_C_ExecuteUbergraph_Widget_SchematicPopUp_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_M494[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
