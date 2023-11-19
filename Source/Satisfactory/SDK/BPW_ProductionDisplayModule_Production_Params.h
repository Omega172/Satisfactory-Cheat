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
	 * Function BPW_ProductionDisplayModule_Production.BPW_ProductionDisplayModule_Production_C.SetBackgroundVisivbility
	 */
	struct UBPW_ProductionDisplayModule_Production_C_SetBackgroundVisivbility_Params
	{
	public:
		bool                                                       mShowBackground;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ProductionDisplayModule_Production.BPW_ProductionDisplayModule_Production_C.SetIsIdle
	 */
	struct UBPW_ProductionDisplayModule_Production_C_SetIsIdle_Params
	{
	public:
		bool                                                       mIsIdle;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RIV2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_ProductionDisplayModule_Production.BPW_ProductionDisplayModule_Production_C.UpdateFluxPower
	 */
	struct UBPW_ProductionDisplayModule_Production_C_UpdateFluxPower_Params
	{
	public:
		double                                                     FluxPowerMin;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     FluxPowerMax;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ProductionDisplayModule_Production.BPW_ProductionDisplayModule_Production_C.StopProductionAnimation
	 */
	struct UBPW_ProductionDisplayModule_Production_C_StopProductionAnimation_Params
	{	};

	/**
	 * Function BPW_ProductionDisplayModule_Production.BPW_ProductionDisplayModule_Production_C.OnProgressCompleted
	 */
	struct UBPW_ProductionDisplayModule_Production_C_OnProgressCompleted_Params
	{	};

	/**
	 * Function BPW_ProductionDisplayModule_Production.BPW_ProductionDisplayModule_Production_C.SetRecipeName
	 */
	struct UBPW_ProductionDisplayModule_Production_C_SetRecipeName_Params
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_ProductionDisplayModule_Production.BPW_ProductionDisplayModule_Production_C.SetRecipeIcon
	 */
	struct UBPW_ProductionDisplayModule_Production_C_SetRecipeIcon_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ProductionDisplayModule_Production.BPW_ProductionDisplayModule_Production_C.SetFontSize
	 */
	struct UBPW_ProductionDisplayModule_Production_C_SetFontSize_Params
	{
	public:
		int32_t                                                    mFontSize;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MGMG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_ProductionDisplayModule_Production.BPW_ProductionDisplayModule_Production_C.SetupProgressBar
	 */
	struct UBPW_ProductionDisplayModule_Production_C_SetupProgressBar_Params
	{	};

	/**
	 * Function BPW_ProductionDisplayModule_Production.BPW_ProductionDisplayModule_Production_C.SetResourceIcon
	 */
	struct UBPW_ProductionDisplayModule_Production_C_SetResourceIcon_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ProductionDisplayModule_Production.BPW_ProductionDisplayModule_Production_C.UpdateProgress
	 */
	struct UBPW_ProductionDisplayModule_Production_C_UpdateProgress_Params
	{
	public:
		double                                                     InPercent;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ProductionDisplayModule_Production.BPW_ProductionDisplayModule_Production_C.UpdateProductionStats
	 */
	struct UBPW_ProductionDisplayModule_Production_C_UpdateProductionStats_Params
	{
	public:
		double                                                     Power;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     CycleTime;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     efficiency;                                              // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ProductionDisplayModule_Production.BPW_ProductionDisplayModule_Production_C.SetupProductionStats
	 */
	struct UBPW_ProductionDisplayModule_Production_C_SetupProductionStats_Params
	{	};

	/**
	 * Function BPW_ProductionDisplayModule_Production.BPW_ProductionDisplayModule_Production_C.SetProductionTexts
	 */
	struct UBPW_ProductionDisplayModule_Production_C_SetProductionTexts_Params
	{
	public:
		TArray<class FText>                                        ProductionTexts;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_ProductionDisplayModule_Production.BPW_ProductionDisplayModule_Production_C.PlayProductionAnimation
	 */
	struct UBPW_ProductionDisplayModule_Production_C_PlayProductionAnimation_Params
	{	};

	/**
	 * Function BPW_ProductionDisplayModule_Production.BPW_ProductionDisplayModule_Production_C.PreConstruct
	 */
	struct UBPW_ProductionDisplayModule_Production_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ProductionDisplayModule_Production.BPW_ProductionDisplayModule_Production_C.ExecuteUbergraph_BPW_ProductionDisplayModule_Production
	 */
	struct UBPW_ProductionDisplayModule_Production_C_ExecuteUbergraph_BPW_ProductionDisplayModule_Production_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
