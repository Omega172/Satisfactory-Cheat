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
	 * Function BP_ResourceScanner.BP_ResourceScanner_C.IsScannerWheelVisible
	 */
	struct ABP_ResourceScanner_C_IsScannerWheelVisible_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ResourceScanner.BP_ResourceScanner_C.ShowResourceDescriptorSelectUI
	 */
	struct ABP_ResourceScanner_C_ShowResourceDescriptorSelectUI_Params
	{	};

	/**
	 * Function BP_ResourceScanner.BP_ResourceScanner_C.CloseResourceDescriptorSelectUI
	 */
	struct ABP_ResourceScanner_C_CloseResourceDescriptorSelectUI_Params
	{	};

	/**
	 * Function BP_ResourceScanner.BP_ResourceScanner_C.PlayClusterEffects
	 */
	struct ABP_ResourceScanner_C_PlayClusterEffects_Params
	{
	public:
		TArray<struct FNodeClusterData>                            clusters;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_ResourceScanner.BP_ResourceScanner_C.Event Play Pulse Effect
	 */
	struct ABP_ResourceScanner_C_EventPlayPulseEffect_Params
	{	};

	/**
	 * Function BP_ResourceScanner.BP_ResourceScanner_C.Event BuildgunVisibility
	 */
	struct ABP_ResourceScanner_C_EventBuildgunVisibility_Params
	{	};

	/**
	 * Function BP_ResourceScanner.BP_ResourceScanner_C.ExecuteUbergraph_BP_ResourceScanner
	 */
	struct ABP_ResourceScanner_C_ExecuteUbergraph_BP_ResourceScanner_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ResourceScanner.BP_ResourceScanner_C.OnClustersFound__DelegateSignature
	 */
	struct ABP_ResourceScanner_C_OnClustersFound__DelegateSignature_Params
	{
	public:
		TArray<struct FNodeClusterData>                            ClustersFound;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
