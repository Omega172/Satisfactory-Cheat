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
	 * Function BPW_PhotoAnalyser_UI.BPW_PhotoAnalyser_UI_C.OnCategoryClicked
	 */
	struct UBPW_PhotoAnalyser_UI_C_OnCategoryClicked_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_A18Z[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget_ListButton_C*                                ListButton;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PhotoAnalyser_UI.BPW_PhotoAnalyser_UI_C.CategorizeChallenges
	 */
	struct UBPW_PhotoAnalyser_UI_C_CategorizeChallenges_Params
	{	};

	/**
	 * Function BPW_PhotoAnalyser_UI.BPW_PhotoAnalyser_UI_C.CreateCategories
	 */
	struct UBPW_PhotoAnalyser_UI_C_CreateCategories_Params
	{	};

	/**
	 * Function BPW_PhotoAnalyser_UI.BPW_PhotoAnalyser_UI_C.CreateChallengeList
	 */
	struct UBPW_PhotoAnalyser_UI_C_CreateChallengeList_Params
	{
	public:
		class UClass*                                              Category;                                                // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PhotoAnalyser_UI.BPW_PhotoAnalyser_UI_C.PreConstruct
	 */
	struct UBPW_PhotoAnalyser_UI_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PhotoAnalyser_UI.BPW_PhotoAnalyser_UI_C.Construct
	 */
	struct UBPW_PhotoAnalyser_UI_C_Construct_Params
	{	};

	/**
	 * Function BPW_PhotoAnalyser_UI.BPW_PhotoAnalyser_UI_C.BndEvt__BPW_PhotoAnalyser_UI_mWindow_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature
	 */
	struct UBPW_PhotoAnalyser_UI_C_BndEvt__BPW_PhotoAnalyser_UI_mWindow_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_PhotoAnalyser_UI.BPW_PhotoAnalyser_UI_C.ExecuteUbergraph_BPW_PhotoAnalyser_UI
	 */
	struct UBPW_PhotoAnalyser_UI_C_ExecuteUbergraph_BPW_PhotoAnalyser_UI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
