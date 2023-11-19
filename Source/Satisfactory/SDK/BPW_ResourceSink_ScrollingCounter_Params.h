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
	 * Function BPW_ResourceSink_ScrollingCounter.BPW_ResourceSink_ScrollingCounter_C.UpdateCounter
	 */
	struct UBPW_ResourceSink_ScrollingCounter_C_UpdateCounter_Params
	{
	public:
		int64_t                                                    NewNumber;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSink_ScrollingCounter.BPW_ResourceSink_ScrollingCounter_C.PreConstruct
	 */
	struct UBPW_ResourceSink_ScrollingCounter_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSink_ScrollingCounter.BPW_ResourceSink_ScrollingCounter_C.AnimateDigits
	 */
	struct UBPW_ResourceSink_ScrollingCounter_C_AnimateDigits_Params
	{
	public:
		class FString                                              TextToAnimate;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSink_ScrollingCounter.BPW_ResourceSink_ScrollingCounter_C.ExecuteUbergraph_BPW_ResourceSink_ScrollingCounter
	 */
	struct UBPW_ResourceSink_ScrollingCounter_C_ExecuteUbergraph_BPW_ResourceSink_ScrollingCounter_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
