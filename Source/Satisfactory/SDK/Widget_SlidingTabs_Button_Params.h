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
	 * Function Widget_SlidingTabs_Button.Widget_SlidingTabs_Button_C.SetBackgroundVisibility
	 */
	struct UWidget_SlidingTabs_Button_C_SetBackgroundVisibility_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_SlidingTabs_Button.Widget_SlidingTabs_Button_C.SetIcon
	 */
	struct UWidget_SlidingTabs_Button_C_SetIcon_Params
	{
	public:
		class UTexture*                                            Texture;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_SlidingTabs_Button.Widget_SlidingTabs_Button_C.SetTitle
	 */
	struct UWidget_SlidingTabs_Button_C_SetTitle_Params
	{
	public:
		class FText                                                mTitle;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Widget_SlidingTabs_Button.Widget_SlidingTabs_Button_C.SetActive
	 */
	struct UWidget_SlidingTabs_Button_C_SetActive_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5DQ8[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_SlidingTabs_Button.Widget_SlidingTabs_Button_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWidget_SlidingTabs_Button_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_SlidingTabs_Button.Widget_SlidingTabs_Button_C.Construct
	 */
	struct UWidget_SlidingTabs_Button_C_Construct_Params
	{	};

	/**
	 * Function Widget_SlidingTabs_Button.Widget_SlidingTabs_Button_C.PreConstruct
	 */
	struct UWidget_SlidingTabs_Button_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_SlidingTabs_Button.Widget_SlidingTabs_Button_C.BndEvt__mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWidget_SlidingTabs_Button_C_BndEvt__mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_SlidingTabs_Button.Widget_SlidingTabs_Button_C.BndEvt__mButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWidget_SlidingTabs_Button_C_BndEvt__mButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_SlidingTabs_Button.Widget_SlidingTabs_Button_C.StartAutoScroll
	 */
	struct UWidget_SlidingTabs_Button_C_StartAutoScroll_Params
	{	};

	/**
	 * Function Widget_SlidingTabs_Button.Widget_SlidingTabs_Button_C.ExecuteUbergraph_Widget_SlidingTabs_Button
	 */
	struct UWidget_SlidingTabs_Button_C_ExecuteUbergraph_Widget_SlidingTabs_Button_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VFZM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_SlidingTabs_Button.Widget_SlidingTabs_Button_C.OnUnhovered__DelegateSignature
	 */
	struct UWidget_SlidingTabs_Button_C_OnUnhovered__DelegateSignature_Params
	{
	public:
		class UWidget_SlidingTabs_Button_C*                        Instigator;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_SlidingTabs_Button.Widget_SlidingTabs_Button_C.OnHovered__DelegateSignature
	 */
	struct UWidget_SlidingTabs_Button_C_OnHovered__DelegateSignature_Params
	{
	public:
		class UWidget_SlidingTabs_Button_C*                        Instigator;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_SlidingTabs_Button.Widget_SlidingTabs_Button_C.OnClicked__DelegateSignature
	 */
	struct UWidget_SlidingTabs_Button_C_OnClicked__DelegateSignature_Params
	{
	public:
		class UWidget_SlidingTabs_Button_C*                        Instigator;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
