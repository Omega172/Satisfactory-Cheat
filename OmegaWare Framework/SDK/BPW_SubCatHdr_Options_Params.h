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
	 * Function BPW_SubCatHdr_Options.BPW_SubCatHdr_Options_C.OnSearch
	 */
	struct UBPW_SubCatHdr_Options_C_OnSearch_Params
	{
	public:
		class FText                                                SearchResult;                                            // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       FoundResult;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6K7E[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_SubCatHdr_Options.BPW_SubCatHdr_Options_C.PopulateSettings
	 */
	struct UBPW_SubCatHdr_Options_C_PopulateSettings_Params
	{
	public:
		TArray<class UUserWidget*>                                 mSettingsWidgets;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	};

	/**
	 * Function BPW_SubCatHdr_Options.BPW_SubCatHdr_Options_C.SetName
	 */
	struct UBPW_SubCatHdr_Options_C_SetName_Params
	{
	public:
		class FText                                                mName;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_SubCatHdr_Options.BPW_SubCatHdr_Options_C.Construct
	 */
	struct UBPW_SubCatHdr_Options_C_Construct_Params
	{	};

	/**
	 * Function BPW_SubCatHdr_Options.BPW_SubCatHdr_Options_C.ExecuteUbergraph_BPW_SubCatHdr_Options
	 */
	struct UBPW_SubCatHdr_Options_C_ExecuteUbergraph_BPW_SubCatHdr_Options_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
