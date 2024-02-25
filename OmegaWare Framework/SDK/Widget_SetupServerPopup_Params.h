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
	 * Function Widget_SetupServerPopup.Widget_SetupServerPopup_C.GetShouldOkayBeEnabled
	 */
	struct UWidget_SetupServerPopup_C_GetShouldOkayBeEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_SetupServerPopup.Widget_SetupServerPopup_C.Construct
	 */
	struct UWidget_SetupServerPopup_C_Construct_Params
	{	};

	/**
	 * Function Widget_SetupServerPopup.Widget_SetupServerPopup_C.Destruct
	 */
	struct UWidget_SetupServerPopup_C_Destruct_Params
	{	};

	/**
	 * Function Widget_SetupServerPopup.Widget_SetupServerPopup_C.OnCreateSessionStateChanged
	 */
	struct UWidget_SetupServerPopup_C_OnCreateSessionStateChanged_Params
	{
	public:
		ECreateSessionState                                        NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_SetupServerPopup.Widget_SetupServerPopup_C.ExecuteUbergraph_Widget_SetupServerPopup
	 */
	struct UWidget_SetupServerPopup_C_ExecuteUbergraph_Widget_SetupServerPopup_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_05RG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
