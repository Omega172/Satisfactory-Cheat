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
	 * Function Char_CliffHog.Char_CliffHog_C.SetupEvent
	 */
	struct AChar_CliffHog_C_SetupEvent_Params
	{	};

	/**
	 * Function Char_CliffHog.Char_CliffHog_C.ReceiveBeginPlay
	 */
	struct AChar_CliffHog_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Char_CliffHog.Char_CliffHog_C.ReceiveTick
	 */
	struct AChar_CliffHog_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_CliffHog.Char_CliffHog_C.ExecuteUbergraph_Char_CliffHog
	 */
	struct AChar_CliffHog_C_ExecuteUbergraph_Char_CliffHog_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
