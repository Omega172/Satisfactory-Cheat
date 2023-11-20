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
	 * Function Widget_HyperTubePathSelector_Row.Widget_HyperTubePathSelector_Row_C.Update Pointer Visibility
	 */
	struct UWidget_HyperTubePathSelector_Row_C_UpdatePointerVisibility_Params
	{	};

	/**
	 * Function Widget_HyperTubePathSelector_Row.Widget_HyperTubePathSelector_Row_C.GetConnectionInfoTexture
	 */
	struct UWidget_HyperTubePathSelector_Row_C_GetConnectionInfoTexture_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x00D0)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_HyperTubePathSelector_Row.Widget_HyperTubePathSelector_Row_C.GetConnectionIndexText
	 */
	struct UWidget_HyperTubePathSelector_Row_C_GetConnectionIndexText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_HyperTubePathSelector_Row.Widget_HyperTubePathSelector_Row_C.Update Connection Info
	 */
	struct UWidget_HyperTubePathSelector_Row_C_UpdateConnectionInfo_Params
	{
	public:
		struct FFGPipeHyperJunctionConnectionInfo                  NewInfo;                                                 // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
		int32_t                                                    NewIndex;                                                // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_HyperTubePathSelector_Row.Widget_HyperTubePathSelector_Row_C.Construct
	 */
	struct UWidget_HyperTubePathSelector_Row_C_Construct_Params
	{	};

	/**
	 * Function Widget_HyperTubePathSelector_Row.Widget_HyperTubePathSelector_Row_C.On Pending Junction Output Changed
	 */
	struct UWidget_HyperTubePathSelector_Row_C_OnPendingJunctionOutputChanged_Params
	{
	public:
		struct FFGPipeHyperConnectionHistoryEntry                  newOutputConnection;                                     // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Widget_HyperTubePathSelector_Row.Widget_HyperTubePathSelector_Row_C.ExecuteUbergraph_Widget_HyperTubePathSelector_Row
	 */
	struct UWidget_HyperTubePathSelector_Row_C_ExecuteUbergraph_Widget_HyperTubePathSelector_Row_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
