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
	 * Function BPW_SignSetting_Material.BPW_SignSetting_Material_C.SetIsButtonSelected
	 */
	struct UBPW_SignSetting_Material_C_SetIsButtonSelected_Params
	{
	public:
		class UButton*                                             Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		bool                                                       IsSelected;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7F6S[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_SignSetting_Material.BPW_SignSetting_Material_C.SetGlossiness
	 */
	struct UBPW_SignSetting_Material_C_SetGlossiness_Params
	{
	public:
		double                                                     mGlossiness;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CallDelegate;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_R9ON[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_SignSetting_Material.BPW_SignSetting_Material_C.SetEmission
	 */
	struct UBPW_SignSetting_Material_C_SetEmission_Params
	{
	public:
		double                                                     Emisssion;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CallDelegate;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WRTI[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_SignSetting_Material.BPW_SignSetting_Material_C.GetEmissionIndex
	 */
	struct UBPW_SignSetting_Material_C_GetEmissionIndex_Params
	{
	public:
		double                                                     Emission;                                                // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_SignSetting_Material.BPW_SignSetting_Material_C.Construct
	 */
	struct UBPW_SignSetting_Material_C_Construct_Params
	{	};

	/**
	 * Function BPW_SignSetting_Material.BPW_SignSetting_Material_C.BndEvt__e0_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBPW_SignSetting_Material_C_BndEvt__e0_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_SignSetting_Material.BPW_SignSetting_Material_C.BndEvt__e0_1_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBPW_SignSetting_Material_C_BndEvt__e0_1_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_SignSetting_Material.BPW_SignSetting_Material_C.BndEvt__e0_2_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBPW_SignSetting_Material_C_BndEvt__e0_2_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_SignSetting_Material.BPW_SignSetting_Material_C.BndEvt__e0_3_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBPW_SignSetting_Material_C_BndEvt__e0_3_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_SignSetting_Material.BPW_SignSetting_Material_C.BndEvt__s_Glossy_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBPW_SignSetting_Material_C_BndEvt__s_Glossy_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_SignSetting_Material.BPW_SignSetting_Material_C.BndEvt__s_Matte_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBPW_SignSetting_Material_C_BndEvt__s_Matte_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_SignSetting_Material.BPW_SignSetting_Material_C.ExecuteUbergraph_BPW_SignSetting_Material
	 */
	struct UBPW_SignSetting_Material_C_ExecuteUbergraph_BPW_SignSetting_Material_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_SignSetting_Material.BPW_SignSetting_Material_C.OnGlossinessChanged__DelegateSignature
	 */
	struct UBPW_SignSetting_Material_C_OnGlossinessChanged__DelegateSignature_Params
	{
	public:
		double                                                     NewGlossiness;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_SignSetting_Material.BPW_SignSetting_Material_C.OnEmissionChanged__DelegateSignature
	 */
	struct UBPW_SignSetting_Material_C_OnEmissionChanged__DelegateSignature_Params
	{
	public:
		double                                                     mNewEmission;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
