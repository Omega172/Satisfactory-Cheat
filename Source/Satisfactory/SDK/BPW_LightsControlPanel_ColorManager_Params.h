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
	 * Function BPW_LightsControlPanel_ColorManager.BPW_LightsControlPanel_ColorManager_C.ColorClicked
	 */
	struct UBPW_LightsControlPanel_ColorManager_C_ColorClicked_Params
	{
	public:
		class UBPW_LightsControlPanel_Color_C*                     ColorWidget;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_LightsControlPanel_ColorManager.BPW_LightsControlPanel_ColorManager_C.SetupColors
	 */
	struct UBPW_LightsControlPanel_ColorManager_C_SetupColors_Params
	{
	public:
		TArray<struct FLinearColor>                                Colors;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_LightsControlPanel_ColorManager.BPW_LightsControlPanel_ColorManager_C.SetSelectedColor
	 */
	struct UBPW_LightsControlPanel_ColorManager_C_SetSelectedColor_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_LightsControlPanel_ColorManager.BPW_LightsControlPanel_ColorManager_C.OnColorClicked__DelegateSignature
	 */
	struct UBPW_LightsControlPanel_ColorManager_C_OnColorClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
