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
	 * Function BPW_PhotoAnalyser_Indicator.BPW_PhotoAnalyser_Indicator_C.SetActor
	 */
	struct UBPW_PhotoAnalyser_Indicator_C_SetActor_Params
	{
	public:
		class AActor*                                              mActor;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PhotoAnalyser_Indicator.BPW_PhotoAnalyser_Indicator_C.Construct
	 */
	struct UBPW_PhotoAnalyser_Indicator_C_Construct_Params
	{	};

	/**
	 * Function BPW_PhotoAnalyser_Indicator.BPW_PhotoAnalyser_Indicator_C.OnAnimationFin
	 */
	struct UBPW_PhotoAnalyser_Indicator_C_OnAnimationFin_Params
	{	};

	/**
	 * Function BPW_PhotoAnalyser_Indicator.BPW_PhotoAnalyser_Indicator_C.Destruct
	 */
	struct UBPW_PhotoAnalyser_Indicator_C_Destruct_Params
	{	};

	/**
	 * Function BPW_PhotoAnalyser_Indicator.BPW_PhotoAnalyser_Indicator_C.Tick
	 */
	struct UBPW_PhotoAnalyser_Indicator_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PhotoAnalyser_Indicator.BPW_PhotoAnalyser_Indicator_C.ExecuteUbergraph_BPW_PhotoAnalyser_Indicator
	 */
	struct UBPW_PhotoAnalyser_Indicator_C_ExecuteUbergraph_BPW_PhotoAnalyser_Indicator_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
