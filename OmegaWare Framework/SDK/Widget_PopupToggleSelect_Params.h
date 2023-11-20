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
	 * Function Widget_PopupToggleSelect.Widget_PopupToggleSelect_C.SetOptionalTextElements
	 */
	struct UWidget_PopupToggleSelect_C_SetOptionalTextElements_Params
	{
	public:
		class FText                                                Title;                                                   // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FText                                                Desc;                                                    // 0x0018(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Widget_PopupToggleSelect.Widget_PopupToggleSelect_C.GetShouldOkayBeEnabled
	 */
	struct UWidget_PopupToggleSelect_C_GetShouldOkayBeEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UEGH[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_PopupToggleSelect.Widget_PopupToggleSelect_C.SetInstigatorAndInitialize
	 */
	struct UWidget_PopupToggleSelect_C_SetInstigatorAndInitialize_Params
	{
	public:
		class UObject*                                             Instigator;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PopupToggleSelect.Widget_PopupToggleSelect_C.OnChildSelected
	 */
	struct UWidget_PopupToggleSelect_C_OnChildSelected_Params
	{
	public:
		int32_t                                                    ChildIndex;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PopupToggleSelect.Widget_PopupToggleSelect_C.NotifyPopupConfirmed
	 */
	struct UWidget_PopupToggleSelect_C_NotifyPopupConfirmed_Params
	{	};

	/**
	 * Function Widget_PopupToggleSelect.Widget_PopupToggleSelect_C.NotifyPopupCanceled
	 */
	struct UWidget_PopupToggleSelect_C_NotifyPopupCanceled_Params
	{	};

	/**
	 * Function Widget_PopupToggleSelect.Widget_PopupToggleSelect_C.ExecuteUbergraph_Widget_PopupToggleSelect
	 */
	struct UWidget_PopupToggleSelect_C_ExecuteUbergraph_Widget_PopupToggleSelect_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_L5EX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
