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
	 * Function Widget_ManufacturingStat.Widget_ManufacturingStat_C.SetBrush
	 */
	struct UWidget_ManufacturingStat_C_SetBrush_Params
	{	};

	/**
	 * Function Widget_ManufacturingStat.Widget_ManufacturingStat_C.SetIconColor
	 */
	struct UWidget_ManufacturingStat_C_SetIconColor_Params
	{	};

	/**
	 * Function Widget_ManufacturingStat.Widget_ManufacturingStat_C.GetStatText
	 */
	struct UWidget_ManufacturingStat_C_GetStatText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_ManufacturingStat.Widget_ManufacturingStat_C.PreConstruct
	 */
	struct UWidget_ManufacturingStat_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ManufacturingStat.Widget_ManufacturingStat_C.OnDragEnter
	 */
	struct UWidget_ManufacturingStat_C_OnDragEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0038(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UDragDropOperation*                                  Operation;                                               // 0x00B0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ManufacturingStat.Widget_ManufacturingStat_C.OnDragLeave
	 */
	struct UWidget_ManufacturingStat_C_OnDragLeave_Params
	{
	public:
		struct FPointerEvent                                       PointerEvent;                                            // 0x0000(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UDragDropOperation*                                  Operation;                                               // 0x0078(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ManufacturingStat.Widget_ManufacturingStat_C.Construct
	 */
	struct UWidget_ManufacturingStat_C_Construct_Params
	{	};

	/**
	 * Function Widget_ManufacturingStat.Widget_ManufacturingStat_C.UpdateStat
	 */
	struct UWidget_ManufacturingStat_C_UpdateStat_Params
	{	};

	/**
	 * Function Widget_ManufacturingStat.Widget_ManufacturingStat_C.Destruct
	 */
	struct UWidget_ManufacturingStat_C_Destruct_Params
	{	};

	/**
	 * Function Widget_ManufacturingStat.Widget_ManufacturingStat_C.ExecuteUbergraph_Widget_ManufacturingStat
	 */
	struct UWidget_ManufacturingStat_C_ExecuteUbergraph_Widget_ManufacturingStat_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
