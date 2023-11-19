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
	 * Function Widget_NetworkErrorPopup.Widget_NetworkErrorPopup_C.CreatePopup
	 */
	struct UWidget_NetworkErrorPopup_C_CreatePopup_Params
	{
	public:
		struct FFGGameNetworkErrorMsg                              FGGameNetworkErrorMsg;                                   // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Widget_NetworkErrorPopup.Widget_NetworkErrorPopup_C.Construct
	 */
	struct UWidget_NetworkErrorPopup_C_Construct_Params
	{	};

	/**
	 * Function Widget_NetworkErrorPopup.Widget_NetworkErrorPopup_C.mOnNetworkErrorRecieved_Event_1
	 */
	struct UWidget_NetworkErrorPopup_C_mOnNetworkErrorRecieved_Event_1_Params
	{
	public:
		ENetworkFailure                                            ErrorType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_R6Z3[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMsg;                                                // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_NetworkErrorPopup.Widget_NetworkErrorPopup_C.CheckErrors
	 */
	struct UWidget_NetworkErrorPopup_C_CheckErrors_Params
	{	};

	/**
	 * Function Widget_NetworkErrorPopup.Widget_NetworkErrorPopup_C.OnPopupClosed
	 */
	struct UWidget_NetworkErrorPopup_C_OnPopupClosed_Params
	{
	public:
		bool                                                       NewParam;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_NetworkErrorPopup.Widget_NetworkErrorPopup_C.ExecuteUbergraph_Widget_NetworkErrorPopup
	 */
	struct UWidget_NetworkErrorPopup_C_ExecuteUbergraph_Widget_NetworkErrorPopup_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
