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
	 * Function Widget_SchematicList.Widget_SchematicList_C.GetTradingPostWidget
	 */
	struct UWidget_SchematicList_C_GetTradingPostWidget_Params
	{	};

	/**
	 * Function Widget_SchematicList.Widget_SchematicList_C.PopulateSchematicForTier
	 */
	struct UWidget_SchematicList_C_PopulateSchematicForTier_Params
	{
	public:
		int32_t                                                    inTier;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2O0B[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UClass*>                                      schematicsInRing;                                        // 0x0008(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function Widget_SchematicList.Widget_SchematicList_C.CreateSchematicButtons
	 */
	struct UWidget_SchematicList_C_CreateSchematicButtons_Params
	{	};

	/**
	 * Function Widget_SchematicList.Widget_SchematicList_C.Construct
	 */
	struct UWidget_SchematicList_C_Construct_Params
	{	};

	/**
	 * Function Widget_SchematicList.Widget_SchematicList_C.Destruct
	 */
	struct UWidget_SchematicList_C_Destruct_Params
	{	};

	/**
	 * Function Widget_SchematicList.Widget_SchematicList_C.ExecuteUbergraph_Widget_SchematicList
	 */
	struct UWidget_SchematicList_C_ExecuteUbergraph_Widget_SchematicList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
