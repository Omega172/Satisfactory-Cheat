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
	 * Function Char_NuclearHog.Char_NuclearHog_C.SetupEvent
	 */
	struct AChar_NuclearHog_C_SetupEvent_Params
	{	};

	/**
	 * Function Char_NuclearHog.Char_NuclearHog_C.ReceiveBeginPlay
	 */
	struct AChar_NuclearHog_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Char_NuclearHog.Char_NuclearHog_C.ReceiveEndPlay
	 */
	struct AChar_NuclearHog_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_NuclearHog.Char_NuclearHog_C.ReceiveTick
	 */
	struct AChar_NuclearHog_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_NuclearHog.Char_NuclearHog_C.ExecuteUbergraph_Char_NuclearHog
	 */
	struct AChar_NuclearHog_C_ExecuteUbergraph_Char_NuclearHog_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
