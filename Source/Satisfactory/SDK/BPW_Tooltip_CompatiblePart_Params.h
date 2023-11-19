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
	 * Function BPW_Tooltip_CompatiblePart.BPW_Tooltip_CompatiblePart_C.SetItemDescriptor
	 */
	struct UBPW_Tooltip_CompatiblePart_C_SetItemDescriptor_Params
	{
	public:
		class UClass*                                              mItemDescriptor;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Tooltip_CompatiblePart.BPW_Tooltip_CompatiblePart_C.GetTooltipWidget
	 */
	struct UBPW_Tooltip_CompatiblePart_C_GetTooltipWidget_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Tooltip_CompatiblePart.BPW_Tooltip_CompatiblePart_C.PreConstruct
	 */
	struct UBPW_Tooltip_CompatiblePart_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Tooltip_CompatiblePart.BPW_Tooltip_CompatiblePart_C.ExecuteUbergraph_BPW_Tooltip_CompatiblePart
	 */
	struct UBPW_Tooltip_CompatiblePart_C_ExecuteUbergraph_BPW_Tooltip_CompatiblePart_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
