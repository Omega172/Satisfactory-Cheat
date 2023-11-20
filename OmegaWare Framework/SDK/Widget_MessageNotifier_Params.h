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
	 * Function Widget_MessageNotifier.Widget_MessageNotifier_C.GetKeyForAction
	 */
	struct UWidget_MessageNotifier_C_GetKeyForAction_Params
	{
	public:
		class FText                                                keyText;                                                 // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function Widget_MessageNotifier.Widget_MessageNotifier_C.PreConstruct
	 */
	struct UWidget_MessageNotifier_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MessageNotifier.Widget_MessageNotifier_C.Construct
	 */
	struct UWidget_MessageNotifier_C_Construct_Params
	{	};

	/**
	 * Function Widget_MessageNotifier.Widget_MessageNotifier_C.RemoveNotifier
	 */
	struct UWidget_MessageNotifier_C_RemoveNotifier_Params
	{	};

	/**
	 * Function Widget_MessageNotifier.Widget_MessageNotifier_C.ExecuteUbergraph_Widget_MessageNotifier
	 */
	struct UWidget_MessageNotifier_C_ExecuteUbergraph_Widget_MessageNotifier_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_S9FC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
