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
	 * Function BPW_CreatureIndicator_Object.BPW_CreatureIndicator_Object_C.SetAggroLevel
	 */
	struct UBPW_CreatureIndicator_Object_C_SetAggroLevel_Params
	{
	public:
		double                                                     AggroLevel;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_CreatureIndicator_Object.BPW_CreatureIndicator_Object_C.SetCreatureState
	 */
	struct UBPW_CreatureIndicator_Object_C_SetCreatureState_Params
	{
	public:
		ECreatureState                                             State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_CreatureIndicator_Object.BPW_CreatureIndicator_Object_C.RemoveObject
	 */
	struct UBPW_CreatureIndicator_Object_C_RemoveObject_Params
	{	};

	/**
	 * Function BPW_CreatureIndicator_Object.BPW_CreatureIndicator_Object_C.Construct
	 */
	struct UBPW_CreatureIndicator_Object_C_Construct_Params
	{	};

	/**
	 * Function BPW_CreatureIndicator_Object.BPW_CreatureIndicator_Object_C.OnObjectOffScreenDetected
	 */
	struct UBPW_CreatureIndicator_Object_C_OnObjectOffScreenDetected_Params
	{	};

	/**
	 * Function BPW_CreatureIndicator_Object.BPW_CreatureIndicator_Object_C.OnObjectOnScreenDetected
	 */
	struct UBPW_CreatureIndicator_Object_C_OnObjectOnScreenDetected_Params
	{	};

	/**
	 * Function BPW_CreatureIndicator_Object.BPW_CreatureIndicator_Object_C.ExecuteUbergraph_BPW_CreatureIndicator_Object
	 */
	struct UBPW_CreatureIndicator_Object_C_ExecuteUbergraph_BPW_CreatureIndicator_Object_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
