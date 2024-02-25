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
	 * Function Widget_JoinSessionPopup.Widget_JoinSessionPopup_C.GetShouldOkayBeEnabled
	 */
	struct UWidget_JoinSessionPopup_C_GetShouldOkayBeEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_JoinSessionPopup.Widget_JoinSessionPopup_C.Construct
	 */
	struct UWidget_JoinSessionPopup_C_Construct_Params
	{	};

	/**
	 * Function Widget_JoinSessionPopup.Widget_JoinSessionPopup_C.Destruct
	 */
	struct UWidget_JoinSessionPopup_C_Destruct_Params
	{	};

	/**
	 * Function Widget_JoinSessionPopup.Widget_JoinSessionPopup_C.OnJoinSessionStateUpdated
	 */
	struct UWidget_JoinSessionPopup_C_OnJoinSessionStateUpdated_Params
	{
	public:
		EJoinSessionState                                          NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_JoinSessionPopup.Widget_JoinSessionPopup_C.ExecuteUbergraph_Widget_JoinSessionPopup
	 */
	struct UWidget_JoinSessionPopup_C_ExecuteUbergraph_Widget_JoinSessionPopup_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
