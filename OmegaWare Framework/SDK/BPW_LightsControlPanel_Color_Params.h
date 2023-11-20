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
	 * Function BPW_LightsControlPanel_Color.BPW_LightsControlPanel_Color_C.SetIsSelected
	 */
	struct UBPW_LightsControlPanel_Color_C_SetIsSelected_Params
	{
	public:
		bool                                                       mIsSelected;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_LightsControlPanel_Color.BPW_LightsControlPanel_Color_C.SetColor
	 */
	struct UBPW_LightsControlPanel_Color_C_SetColor_Params
	{
	public:
		struct FLinearColor                                        mColor;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_LightsControlPanel_Color.BPW_LightsControlPanel_Color_C.PreConstruct
	 */
	struct UBPW_LightsControlPanel_Color_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_LightsControlPanel_Color.BPW_LightsControlPanel_Color_C.OnMouseEnter
	 */
	struct UBPW_LightsControlPanel_Color_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_LightsControlPanel_Color.BPW_LightsControlPanel_Color_C.OnMouseLeave
	 */
	struct UBPW_LightsControlPanel_Color_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_LightsControlPanel_Color.BPW_LightsControlPanel_Color_C.BndEvt__BPW_LightsControlPanel_Color_Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBPW_LightsControlPanel_Color_C_BndEvt__BPW_LightsControlPanel_Color_Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_LightsControlPanel_Color.BPW_LightsControlPanel_Color_C.ExecuteUbergraph_BPW_LightsControlPanel_Color
	 */
	struct UBPW_LightsControlPanel_Color_C_ExecuteUbergraph_BPW_LightsControlPanel_Color_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_LightsControlPanel_Color.BPW_LightsControlPanel_Color_C.OnClicked__DelegateSignature
	 */
	struct UBPW_LightsControlPanel_Color_C_OnClicked__DelegateSignature_Params
	{
	public:
		class UBPW_LightsControlPanel_Color_C*                     ColorWidget;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
