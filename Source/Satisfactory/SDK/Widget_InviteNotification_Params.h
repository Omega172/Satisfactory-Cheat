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
	 * Function Widget_InviteNotification.Widget_InviteNotification_C.Construct
	 */
	struct UWidget_InviteNotification_C_Construct_Params
	{	};

	/**
	 * Function Widget_InviteNotification.Widget_InviteNotification_C.OnInviteReceived
	 */
	struct UWidget_InviteNotification_C_OnInviteReceived_Params
	{
	public:
		struct FPendingInvite                                      receivedInvite;                                          // 0x0000(0x0140)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_InviteNotification.Widget_InviteNotification_C.Destruct
	 */
	struct UWidget_InviteNotification_C_Destruct_Params
	{	};

	/**
	 * Function Widget_InviteNotification.Widget_InviteNotification_C.ExecuteUbergraph_Widget_InviteNotification
	 */
	struct UWidget_InviteNotification_C_ExecuteUbergraph_Widget_InviteNotification_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
