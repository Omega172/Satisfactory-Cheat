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
	 * Function Widget_RadialMenu.Widget_RadialMenu_C.ClearMenu
	 */
	struct UWidget_RadialMenu_C_ClearMenu_Params
	{	};

	/**
	 * Function Widget_RadialMenu.Widget_RadialMenu_C.AddCustomIconWidget
	 */
	struct UWidget_RadialMenu_C_AddCustomIconWidget_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TAFW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             Widget;                                                  // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_RadialMenu.Widget_RadialMenu_C.GetCustomIcon
	 */
	struct UWidget_RadialMenu_C_GetCustomIcon_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WF2I[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             Output;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_RadialMenu.Widget_RadialMenu_C.GetIcon
	 */
	struct UWidget_RadialMenu_C_GetIcon_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9BOS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTexture*                                            Output;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_RadialMenu.Widget_RadialMenu_C.PlaySFXHover
	 */
	struct UWidget_RadialMenu_C_PlaySFXHover_Params
	{	};

	/**
	 * Function Widget_RadialMenu.Widget_RadialMenu_C.PlaySFXSelect
	 */
	struct UWidget_RadialMenu_C_PlaySFXSelect_Params
	{	};

	/**
	 * Function Widget_RadialMenu.Widget_RadialMenu_C.CreateDivider
	 */
	struct UWidget_RadialMenu_C_CreateDivider_Params
	{
	public:
		double                                                     Position;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_RadialMenu.Widget_RadialMenu_C.SetDescText
	 */
	struct UWidget_RadialMenu_C_SetDescText_Params
	{
	public:
		class FText                                                mDescText;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Widget_RadialMenu.Widget_RadialMenu_C.ClearRadialButtonNames
	 */
	struct UWidget_RadialMenu_C_ClearRadialButtonNames_Params
	{	};

	/**
	 * Function Widget_RadialMenu.Widget_RadialMenu_C.AddRadialButtonName
	 */
	struct UWidget_RadialMenu_C_AddRadialButtonName_Params
	{
	public:
		class FText                                                buttonName;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Widget_RadialMenu.Widget_RadialMenu_C.Update Button Angles
	 */
	struct UWidget_RadialMenu_C_UpdateButtonAngles_Params
	{
	public:
		double                                                     MenuAngle;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_RadialMenu.Widget_RadialMenu_C.Set Angle
	 */
	struct UWidget_RadialMenu_C_SetAngle_Params
	{	};

	/**
	 * Function Widget_RadialMenu.Widget_RadialMenu_C.Close Radial Menu
	 */
	struct UWidget_RadialMenu_C_CloseRadialMenu_Params
	{	};

	/**
	 * Function Widget_RadialMenu.Widget_RadialMenu_C.Open Radial Menu
	 */
	struct UWidget_RadialMenu_C_OpenRadialMenu_Params
	{	};

	/**
	 * Function Widget_RadialMenu.Widget_RadialMenu_C.Generate Radial Menu
	 */
	struct UWidget_RadialMenu_C_GenerateRadialMenu_Params
	{	};

	/**
	 * Function Widget_RadialMenu.Widget_RadialMenu_C.Destruct
	 */
	struct UWidget_RadialMenu_C_Destruct_Params
	{	};

	/**
	 * Function Widget_RadialMenu.Widget_RadialMenu_C.Tick
	 */
	struct UWidget_RadialMenu_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_RadialMenu.Widget_RadialMenu_C.Create Radial Menu
	 */
	struct UWidget_RadialMenu_C_CreateRadialMenu_Params
	{	};

	/**
	 * Function Widget_RadialMenu.Widget_RadialMenu_C.ExecuteUbergraph_Widget_RadialMenu
	 */
	struct UWidget_RadialMenu_C_ExecuteUbergraph_Widget_RadialMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_RadialMenu.Widget_RadialMenu_C.OnClose__DelegateSignature
	 */
	struct UWidget_RadialMenu_C_OnClose__DelegateSignature_Params
	{
	public:
		class FText                                                ActiveName;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
