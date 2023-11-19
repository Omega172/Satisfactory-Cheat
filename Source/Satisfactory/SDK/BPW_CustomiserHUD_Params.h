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
	 * Function BPW_CustomiserHUD.BPW_CustomiserHUD_C.OnFilterChanged
	 */
	struct UBPW_CustomiserHUD_C_OnFilterChanged_Params
	{
	public:
		class UClass*                                              newClassFilter;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		class UClass*                                              itemDescriptor;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_CustomiserHUD.BPW_CustomiserHUD_C.OnCostumiserApplied
	 */
	struct UBPW_CustomiserHUD_C_OnCostumiserApplied_Params
	{
	public:
		class UClass*                                              CustomisationDesc;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_CustomiserHUD.BPW_CustomiserHUD_C.OnDescriptorChanged
	 */
	struct UBPW_CustomiserHUD_C_OnDescriptorChanged_Params
	{
	public:
		ECustomiserType                                            CustomiserType;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_CustomiserHUD.BPW_CustomiserHUD_C.Construct
	 */
	struct UBPW_CustomiserHUD_C_Construct_Params
	{	};

	/**
	 * Function BPW_CustomiserHUD.BPW_CustomiserHUD_C.Destruct
	 */
	struct UBPW_CustomiserHUD_C_Destruct_Params
	{	};

	/**
	 * Function BPW_CustomiserHUD.BPW_CustomiserHUD_C.OnCustomTick
	 */
	struct UBPW_CustomiserHUD_C_OnCustomTick_Params
	{
	public:
		float                                                      UpdateTime;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_CustomiserHUD.BPW_CustomiserHUD_C.BndEvt__Widget_BuildMode_K2Node_ComponentBoundEvent_1_OnQuickSwitchClosed__DelegateSignature
	 */
	struct UBPW_CustomiserHUD_C_BndEvt__Widget_BuildMode_K2Node_ComponentBoundEvent_1_OnQuickSwitchClosed__DelegateSignature_Params
	{
	public:
		class UClass*                                              recipe;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_CustomiserHUD.BPW_CustomiserHUD_C.BndEvt__Widget_BuildMode_K2Node_ComponentBoundEvent_2_OnQuickSwitchBuildingButtonDown__DelegateSignature
	 */
	struct UBPW_CustomiserHUD_C_BndEvt__Widget_BuildMode_K2Node_ComponentBoundEvent_2_OnQuickSwitchBuildingButtonDown__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_CustomiserHUD.BPW_CustomiserHUD_C.OnEscapePressed
	 */
	struct UBPW_CustomiserHUD_C_OnEscapePressed_Params
	{	};

	/**
	 * Function BPW_CustomiserHUD.BPW_CustomiserHUD_C.ExecuteUbergraph_BPW_CustomiserHUD
	 */
	struct UBPW_CustomiserHUD_C_ExecuteUbergraph_BPW_CustomiserHUD_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
