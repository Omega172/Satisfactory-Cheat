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
	 * Function BPW_EnhancedKeyBindFocus.BPW_EnhancedKeyBindFocus_C.OnKeyUp
	 */
	struct UBPW_EnhancedKeyBindFocus_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BPW_EnhancedKeyBindFocus.BPW_EnhancedKeyBindFocus_C.HandleInput
	 */
	struct UBPW_EnhancedKeyBindFocus_C_HandleInput_Params
	{
	public:
		struct FInputEvent                                         InputEvent;                                              // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FKey                                                keyPressed;                                              // 0x0020(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		struct FEventReply                                         Handled;                                                 // 0x0038(0x00B8)  (Parm, OutParm)
	};

	/**
	 * Function BPW_EnhancedKeyBindFocus.BPW_EnhancedKeyBindFocus_C.OnMouseWheel
	 */
	struct UBPW_EnhancedKeyBindFocus_C_OnMouseWheel_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BPW_EnhancedKeyBindFocus.BPW_EnhancedKeyBindFocus_C.OnKeyDown
	 */
	struct UBPW_EnhancedKeyBindFocus_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BPW_EnhancedKeyBindFocus.BPW_EnhancedKeyBindFocus_C.OnMouseButtonDown
	 */
	struct UBPW_EnhancedKeyBindFocus_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BPW_EnhancedKeyBindFocus.BPW_EnhancedKeyBindFocus_C.Construct
	 */
	struct UBPW_EnhancedKeyBindFocus_C_Construct_Params
	{	};

	/**
	 * Function BPW_EnhancedKeyBindFocus.BPW_EnhancedKeyBindFocus_C.ExecuteUbergraph_BPW_EnhancedKeyBindFocus
	 */
	struct UBPW_EnhancedKeyBindFocus_C_ExecuteUbergraph_BPW_EnhancedKeyBindFocus_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
