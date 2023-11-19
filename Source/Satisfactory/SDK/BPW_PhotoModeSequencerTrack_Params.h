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
	 * Function BPW_PhotoModeSequencerTrack.BPW_PhotoModeSequencerTrack_C.GetSelectedNodes
	 */
	struct UBPW_PhotoModeSequencerTrack_C_GetSelectedNodes_Params
	{
	public:
		TArray<struct FFrameTime>                                  mSelectedNodes;                                          // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BPW_PhotoModeSequencerTrack.BPW_PhotoModeSequencerTrack_C.RefreshFloatSections
	 */
	struct UBPW_PhotoModeSequencerTrack_C_RefreshFloatSections_Params
	{
	public:
		TArray<struct FFGSequenceFloatSection>                     FloatSections;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_PhotoModeSequencerTrack.BPW_PhotoModeSequencerTrack_C.RefreshVectorSections
	 */
	struct UBPW_PhotoModeSequencerTrack_C_RefreshVectorSections_Params
	{
	public:
		TArray<struct FFGSequenceVectorSection>                    VectorSections;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
