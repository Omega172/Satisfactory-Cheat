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
	 * Function Widget_PipeStorageTank.Widget_PipeStorageTank_C.GetContentText
	 */
	struct UWidget_PipeStorageTank_C_GetContentText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_PipeStorageTank.Widget_PipeStorageTank_C.GetTypeText
	 */
	struct UWidget_PipeStorageTank_C_GetTypeText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_PipeStorageTank.Widget_PipeStorageTank_C.Init
	 */
	struct UWidget_PipeStorageTank_C_Init_Params
	{	};

	/**
	 * Function Widget_PipeStorageTank.Widget_PipeStorageTank_C.BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature
	 */
	struct UWidget_PipeStorageTank_C_BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_PipeStorageTank.Widget_PipeStorageTank_C.Tick
	 */
	struct UWidget_PipeStorageTank_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PipeStorageTank.Widget_PipeStorageTank_C.Construct
	 */
	struct UWidget_PipeStorageTank_C_Construct_Params
	{	};

	/**
	 * Function Widget_PipeStorageTank.Widget_PipeStorageTank_C.BndEvt__BPW_PipeModule_K2Node_ComponentBoundEvent_1_OnFlush__DelegateSignature
	 */
	struct UWidget_PipeStorageTank_C_BndEvt__BPW_PipeModule_K2Node_ComponentBoundEvent_1_OnFlush__DelegateSignature_Params
	{
	public:
		bool                                                       FlushNetwork;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_W44Q[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     DrainDuration;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PipeStorageTank.Widget_PipeStorageTank_C.ExecuteUbergraph_Widget_PipeStorageTank
	 */
	struct UWidget_PipeStorageTank_C_ExecuteUbergraph_Widget_PipeStorageTank_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7Z4S[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
