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
	 * Function Widget_TabsContainer.Widget_TabsContainer_C.SetTabVisibility
	 */
	struct UWidget_TabsContainer_C_SetTabVisibility_Params
	{
	public:
		int32_t                                                    TabIndex;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsVisible;                                               // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_TabsContainer.Widget_TabsContainer_C.SetActiveButton
	 */
	struct UWidget_TabsContainer_C_SetActiveButton_Params
	{
	public:
		class UWidget_SlidingTabs_Button_C*                        ActiveButton;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_TabsContainer.Widget_TabsContainer_C.IfButtonClicked
	 */
	struct UWidget_TabsContainer_C_IfButtonClicked_Params
	{
	public:
		class UWidget_SlidingTabs_Button_C*                        Instigator;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_TabsContainer.Widget_TabsContainer_C.IfButtonUnhovered
	 */
	struct UWidget_TabsContainer_C_IfButtonUnhovered_Params
	{
	public:
		class UWidget_SlidingTabs_Button_C*                        Insitagor;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_TabsContainer.Widget_TabsContainer_C.IfButtonHovered
	 */
	struct UWidget_TabsContainer_C_IfButtonHovered_Params
	{
	public:
		class UWidget_SlidingTabs_Button_C*                        Instigator;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_TabsContainer.Widget_TabsContainer_C.GenerateButtons
	 */
	struct UWidget_TabsContainer_C_GenerateButtons_Params
	{	};

	/**
	 * Function Widget_TabsContainer.Widget_TabsContainer_C.PreConstruct
	 */
	struct UWidget_TabsContainer_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_TabsContainer.Widget_TabsContainer_C.Init
	 */
	struct UWidget_TabsContainer_C_Init_Params
	{	};

	/**
	 * Function Widget_TabsContainer.Widget_TabsContainer_C.Destruct
	 */
	struct UWidget_TabsContainer_C_Destruct_Params
	{	};

	/**
	 * Function Widget_TabsContainer.Widget_TabsContainer_C.ExecuteUbergraph_Widget_TabsContainer
	 */
	struct UWidget_TabsContainer_C_ExecuteUbergraph_Widget_TabsContainer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HUS2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_TabsContainer.Widget_TabsContainer_C.OnTabsGenerated__DelegateSignature
	 */
	struct UWidget_TabsContainer_C_OnTabsGenerated__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_TabsContainer.Widget_TabsContainer_C.OnNoTabsGenerated__DelegateSignature
	 */
	struct UWidget_TabsContainer_C_OnNoTabsGenerated__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_TabsContainer.Widget_TabsContainer_C.OnButtonClicked__DelegateSignature
	 */
	struct UWidget_TabsContainer_C_OnButtonClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    ButtonIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_TabsContainer.Widget_TabsContainer_C.OnButtonUnhovered__DelegateSignature
	 */
	struct UWidget_TabsContainer_C_OnButtonUnhovered__DelegateSignature_Params
	{
	public:
		bool                                                       IsActiveButton;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_TabsContainer.Widget_TabsContainer_C.OnButtonHovered__DelegateSignature
	 */
	struct UWidget_TabsContainer_C_OnButtonHovered__DelegateSignature_Params
	{
	public:
		bool                                                       IsActiveButton;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
