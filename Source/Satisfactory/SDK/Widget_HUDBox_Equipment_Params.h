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
	 * Function Widget_HUDBox_Equipment.Widget_HUDBox_Equipment_C.ShowHideWarningAnim
	 */
	struct UWidget_HUDBox_Equipment_C_ShowHideWarningAnim_Params
	{
	public:
		bool                                                       ShowAnim;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_HUDBox_Equipment.Widget_HUDBox_Equipment_C.SetEquipmentSlotText
	 */
	struct UWidget_HUDBox_Equipment_C_SetEquipmentSlotText_Params
	{	};

	/**
	 * Function Widget_HUDBox_Equipment.Widget_HUDBox_Equipment_C.GetEquipmentSlotVisibility
	 */
	struct UWidget_HUDBox_Equipment_C_GetEquipmentSlotVisibility_Params
	{	};

	/**
	 * Function Widget_HUDBox_Equipment.Widget_HUDBox_Equipment_C.SetContentWidgetClass
	 */
	struct UWidget_HUDBox_Equipment_C_SetContentWidgetClass_Params
	{	};

	/**
	 * Function Widget_HUDBox_Equipment.Widget_HUDBox_Equipment_C.GetEquipmentInSlot
	 */
	struct UWidget_HUDBox_Equipment_C_GetEquipmentInSlot_Params
	{
	public:
		class AFGEquipment*                                        equipment;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_HUDBox_Equipment.Widget_HUDBox_Equipment_C.UpdateTitle
	 */
	struct UWidget_HUDBox_Equipment_C_UpdateTitle_Params
	{	};

	/**
	 * Function Widget_HUDBox_Equipment.Widget_HUDBox_Equipment_C.UpdateIcon
	 */
	struct UWidget_HUDBox_Equipment_C_UpdateIcon_Params
	{	};

	/**
	 * Function Widget_HUDBox_Equipment.Widget_HUDBox_Equipment_C.GetEquipmentItemClass
	 */
	struct UWidget_HUDBox_Equipment_C_GetEquipmentItemClass_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_HUDBox_Equipment.Widget_HUDBox_Equipment_C.Construct
	 */
	struct UWidget_HUDBox_Equipment_C_Construct_Params
	{	};

	/**
	 * Function Widget_HUDBox_Equipment.Widget_HUDBox_Equipment_C.Tick
	 */
	struct UWidget_HUDBox_Equipment_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_HUDBox_Equipment.Widget_HUDBox_Equipment_C.HideWidget
	 */
	struct UWidget_HUDBox_Equipment_C_HideWidget_Params
	{	};

	/**
	 * Function Widget_HUDBox_Equipment.Widget_HUDBox_Equipment_C.Destruct
	 */
	struct UWidget_HUDBox_Equipment_C_Destruct_Params
	{	};

	/**
	 * Function Widget_HUDBox_Equipment.Widget_HUDBox_Equipment_C.ExecuteUbergraph_Widget_HUDBox_Equipment
	 */
	struct UWidget_HUDBox_Equipment_C_ExecuteUbergraph_Widget_HUDBox_Equipment_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
