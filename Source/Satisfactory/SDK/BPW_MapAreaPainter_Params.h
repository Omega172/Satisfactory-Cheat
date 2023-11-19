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
	 * Function BPW_MapAreaPainter.BPW_MapAreaPainter_C.SetBrushSize
	 */
	struct UBPW_MapAreaPainter_C_SetBrushSize_Params
	{
	public:
		double                                                     Size;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MapAreaPainter.BPW_MapAreaPainter_C.SetColor
	 */
	struct UBPW_MapAreaPainter_C_SetColor_Params
	{
	public:
		int32_t                                                    ColorIndex;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MapAreaPainter.BPW_MapAreaPainter_C.SetIsPainting
	 */
	struct UBPW_MapAreaPainter_C_SetIsPainting_Params
	{
	public:
		bool                                                       mIsPainting;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MapAreaPainter.BPW_MapAreaPainter_C.SetCurrentZoom
	 */
	struct UBPW_MapAreaPainter_C_SetCurrentZoom_Params
	{
	public:
		double                                                     mCurrentZoom;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MapAreaPainter.BPW_MapAreaPainter_C.DrawOnMap
	 */
	struct UBPW_MapAreaPainter_C_DrawOnMap_Params
	{	};

	/**
	 * Function BPW_MapAreaPainter.BPW_MapAreaPainter_C.Construct
	 */
	struct UBPW_MapAreaPainter_C_Construct_Params
	{	};

	/**
	 * Function BPW_MapAreaPainter.BPW_MapAreaPainter_C.Tick
	 */
	struct UBPW_MapAreaPainter_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MapAreaPainter.BPW_MapAreaPainter_C.ExecuteUbergraph_BPW_MapAreaPainter
	 */
	struct UBPW_MapAreaPainter_C_ExecuteUbergraph_BPW_MapAreaPainter_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_D3BB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
