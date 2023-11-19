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
	 * Function Widget_DirectionalSubtitlesContainer.Widget_DirectionalSubtitlesContainer_C.StopSubtitle
	 */
	struct UWidget_DirectionalSubtitlesContainer_C_StopSubtitle_Params
	{
	public:
		class AActor*                                              Instigator;                                              // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_DirectionalSubtitlesContainer.Widget_DirectionalSubtitlesContainer_C.GetFurthestActor
	 */
	struct UWidget_DirectionalSubtitlesContainer_C_GetFurthestActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_DirectionalSubtitlesContainer.Widget_DirectionalSubtitlesContainer_C.OnSubtitleDestruct
	 */
	struct UWidget_DirectionalSubtitlesContainer_C_OnSubtitleDestruct_Params
	{
	public:
		class UWidget_DirectionalSubtitles_C*                      InstigatingSubtitle;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_DirectionalSubtitlesContainer.Widget_DirectionalSubtitlesContainer_C.CreateSubtitle
	 */
	struct UWidget_DirectionalSubtitlesContainer_C_CreateSubtitle_Params
	{
	public:
		class FText                                                Subtitle;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class AActor*                                              Instigator;                                              // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		double                                                     Duration;                                                // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       UseDuration;                                             // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RLBC[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
