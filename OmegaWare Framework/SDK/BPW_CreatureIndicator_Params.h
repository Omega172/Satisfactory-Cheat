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
	 * Function BPW_CreatureIndicator.BPW_CreatureIndicator_C.OnCreatureStateChanged
	 */
	struct UBPW_CreatureIndicator_C_OnCreatureStateChanged_Params
	{
	public:
		struct FFGActorPlayerPerceptionInfo                        perceptionInfo;                                          // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		ECreatureState                                             NewState;                                                // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QVWO[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_CreatureIndicator.BPW_CreatureIndicator_C.OnCreatureRemoved
	 */
	struct UBPW_CreatureIndicator_C_OnCreatureRemoved_Params
	{
	public:
		struct FFGActorPlayerPerceptionInfo                        perceptionInfo;                                          // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BPW_CreatureIndicator.BPW_CreatureIndicator_C.OnCreatureAdded
	 */
	struct UBPW_CreatureIndicator_C_OnCreatureAdded_Params
	{
	public:
		struct FFGActorPlayerPerceptionInfo                        perceptionInfo;                                          // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BPW_CreatureIndicator.BPW_CreatureIndicator_C.Construct
	 */
	struct UBPW_CreatureIndicator_C_Construct_Params
	{	};

	/**
	 * Function BPW_CreatureIndicator.BPW_CreatureIndicator_C.Tick
	 */
	struct UBPW_CreatureIndicator_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_CreatureIndicator.BPW_CreatureIndicator_C.OnShowCreatureIndicatorUpdated
	 */
	struct UBPW_CreatureIndicator_C_OnShowCreatureIndicatorUpdated_Params
	{
	public:
		class FString                                              updatedCvar;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_CreatureIndicator.BPW_CreatureIndicator_C.ExecuteUbergraph_BPW_CreatureIndicator
	 */
	struct UBPW_CreatureIndicator_C_ExecuteUbergraph_BPW_CreatureIndicator_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
