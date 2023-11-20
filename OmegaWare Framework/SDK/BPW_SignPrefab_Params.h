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
	 * Function BPW_SignPrefab.BPW_SignPrefab_C.SetLayoutManager
	 */
	struct UBPW_SignPrefab_C_SetLayoutManager_Params
	{
	public:
		class UBPW_SignLayoutManager_C*                            LayoutManager;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_SignPrefab.BPW_SignPrefab_C.GetActiveKeys
	 */
	struct UBPW_SignPrefab_C_GetActiveKeys_Params
	{
	public:
		TArray<class FString>                                      ImageKeys;                                               // 0x0000(0x0010)  (Parm, OutParm)
		TArray<class FString>                                      TextKeys;                                                // 0x0010(0x0010)  (Parm, OutParm)
		bool                                                       Success;                                                 // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_SignPrefab.BPW_SignPrefab_C.SetShowBackground
	 */
	struct UBPW_SignPrefab_C_SetShowBackground_Params
	{
	public:
		bool                                                       ShowBackground;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_SignPrefab.BPW_SignPrefab_C.UpdateLayoutData
	 */
	struct UBPW_SignPrefab_C_UpdateLayoutData_Params
	{
	public:
		struct FPrefabSignData                                     SignPrefabData;                                          // 0x0000(0x00F0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_SignPrefab.BPW_SignPrefab_C.GetLayoutManager
	 */
	struct UBPW_SignPrefab_C_GetLayoutManager_Params
	{
	public:
		class UBPW_SignLayoutManager_C*                            mLayoutManager;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_SignPrefab.BPW_SignPrefab_C.PreConstruct
	 */
	struct UBPW_SignPrefab_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_SignPrefab.BPW_SignPrefab_C.Construct
	 */
	struct UBPW_SignPrefab_C_Construct_Params
	{	};

	/**
	 * Function BPW_SignPrefab.BPW_SignPrefab_C.ExecuteUbergraph_BPW_SignPrefab
	 */
	struct UBPW_SignPrefab_C_ExecuteUbergraph_BPW_SignPrefab_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
