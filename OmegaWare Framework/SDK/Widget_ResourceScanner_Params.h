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
	 * Function Widget_ResourceScanner.Widget_ResourceScanner_C.AddScannableResourceButtons
	 */
	struct UWidget_ResourceScanner_C_AddScannableResourceButtons_Params
	{	};

	/**
	 * Function Widget_ResourceScanner.Widget_ResourceScanner_C.GetRandomisedScannableResourceName
	 */
	struct UWidget_ResourceScanner_C_GetRandomisedScannableResourceName_Params
	{
	public:
		class UClass*                                              ResourceDescriptorClass;                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class FText                                                OutText;                                                 // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function Widget_ResourceScanner.Widget_ResourceScanner_C.Construct
	 */
	struct UWidget_ResourceScanner_C_Construct_Params
	{	};

	/**
	 * Function Widget_ResourceScanner.Widget_ResourceScanner_C.Destruct
	 */
	struct UWidget_ResourceScanner_C_Destruct_Params
	{	};

	/**
	 * Function Widget_ResourceScanner.Widget_ResourceScanner_C.ExecuteUbergraph_Widget_ResourceScanner
	 */
	struct UWidget_ResourceScanner_C_ExecuteUbergraph_Widget_ResourceScanner_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_K0ZN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
