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
	 * Function BPW_SignLayoutManager.BPW_SignLayoutManager_C.UpdateMaterialParameters
	 */
	struct UBPW_SignLayoutManager_C_UpdateMaterialParameters_Params
	{
	public:
		class UImage*                                              ImageObject;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		bool                                                       mIsBackgroundObject;                                     // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7KOD[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_SignLayoutManager.BPW_SignLayoutManager_C.CalculateSizeDiscrepancy
	 */
	struct UBPW_SignLayoutManager_C_CalculateSizeDiscrepancy_Params
	{	};

	/**
	 * Function BPW_SignLayoutManager.BPW_SignLayoutManager_C.GetValidColor
	 */
	struct UBPW_SignLayoutManager_C_GetValidColor_Params
	{
	public:
		class UWidget*                                             InWidget;                                                // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsAlwaysBackground;                                      // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       UsesAuxilliary;                                          // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Q207[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLinearColor                                        ReturnValue;                                             // 0x000C(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_SignLayoutManager.BPW_SignLayoutManager_C.GetActiveKeys
	 */
	struct UBPW_SignLayoutManager_C_GetActiveKeys_Params
	{
	public:
		TArray<class FString>                                      ImageKeys;                                               // 0x0000(0x0010)  (Parm, OutParm)
		TArray<class FString>                                      TextKeys;                                                // 0x0010(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BPW_SignLayoutManager.BPW_SignLayoutManager_C.UpdateColors
	 */
	struct UBPW_SignLayoutManager_C_UpdateColors_Params
	{	};

	/**
	 * Function BPW_SignLayoutManager.BPW_SignLayoutManager_C.SetColorToOtherImages
	 */
	struct UBPW_SignLayoutManager_C_SetColorToOtherImages_Params
	{	};

	/**
	 * Function BPW_SignLayoutManager.BPW_SignLayoutManager_C.SetSignPrefabData
	 */
	struct UBPW_SignLayoutManager_C_SetSignPrefabData_Params
	{
	public:
		struct FPrefabSignData                                     SignPrefabData;                                          // 0x0000(0x00F0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_SignLayoutManager.BPW_SignLayoutManager_C.ShowBackground
	 */
	struct UBPW_SignLayoutManager_C_ShowBackground_Params
	{
	public:
		bool                                                       ShowBackground;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_SignLayoutManager.BPW_SignLayoutManager_C.SendDataToFGPrefab
	 */
	struct UBPW_SignLayoutManager_C_SendDataToFGPrefab_Params
	{	};

	/**
	 * Function BPW_SignLayoutManager.BPW_SignLayoutManager_C.SetupText
	 */
	struct UBPW_SignLayoutManager_C_SetupText_Params
	{	};

	/**
	 * Function BPW_SignLayoutManager.BPW_SignLayoutManager_C.SetupImage
	 */
	struct UBPW_SignLayoutManager_C_SetupImage_Params
	{	};

	/**
	 * Function BPW_SignLayoutManager.BPW_SignLayoutManager_C.SetupElementData
	 */
	struct UBPW_SignLayoutManager_C_SetupElementData_Params
	{	};

	/**
	 * Function BPW_SignLayoutManager.BPW_SignLayoutManager_C.PreConstruct
	 */
	struct UBPW_SignLayoutManager_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_SignLayoutManager.BPW_SignLayoutManager_C.ExecuteUbergraph_BPW_SignLayoutManager
	 */
	struct UBPW_SignLayoutManager_C_ExecuteUbergraph_BPW_SignLayoutManager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
