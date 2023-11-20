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
	 * Function BPW_OptionVideoQuality.BPW_OptionVideoQuality_C.UpdateOptionText
	 */
	struct UBPW_OptionVideoQuality_C_UpdateOptionText_Params
	{	};

	/**
	 * Function BPW_OptionVideoQuality.BPW_OptionVideoQuality_C.UpdateSelectionValue
	 */
	struct UBPW_OptionVideoQuality_C_UpdateSelectionValue_Params
	{	};

	/**
	 * Function BPW_OptionVideoQuality.BPW_OptionVideoQuality_C.HandleSelection
	 */
	struct UBPW_OptionVideoQuality_C_HandleSelection_Params
	{
	public:
		bool                                                       incrementSelection;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ValueChanged;                                            // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_OptionVideoQuality.BPW_OptionVideoQuality_C.OnInitValueController
	 */
	struct UBPW_OptionVideoQuality_C_OnInitValueController_Params
	{	};

	/**
	 * Function BPW_OptionVideoQuality.BPW_OptionVideoQuality_C.OnOptionValueUpdated
	 */
	struct UBPW_OptionVideoQuality_C_OnOptionValueUpdated_Params
	{	};

	/**
	 * Function BPW_OptionVideoQuality.BPW_OptionVideoQuality_C.ExecuteUbergraph_BPW_OptionVideoQuality
	 */
	struct UBPW_OptionVideoQuality_C_ExecuteUbergraph_BPW_OptionVideoQuality_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
