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
	 * Function Attach_Zipline.Attach_Zipline_C.GetOwningCharacter
	 */
	struct AAttach_Zipline_C_GetOwningCharacter_Params
	{
	public:
		class AFGCharacterPlayer*                                  Character;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Attach_Zipline.Attach_Zipline_C.ThirdPerson_Stop_VFX
	 */
	struct AAttach_Zipline_C_ThirdPerson_Stop_VFX_Params
	{	};

	/**
	 * Function Attach_Zipline.Attach_Zipline_C.ThirdPerson_Start_VFX
	 */
	struct AAttach_Zipline_C_ThirdPerson_Start_VFX_Params
	{	};

	/**
	 * Function Attach_Zipline.Attach_Zipline_C.KillActiveSFX
	 */
	struct AAttach_Zipline_C_KillActiveSFX_Params
	{	};

	/**
	 * Function Attach_Zipline.Attach_Zipline_C.StartZiplineEffect
	 */
	struct AAttach_Zipline_C_StartZiplineEffect_Params
	{
	public:
		bool                                                       bAttachVFX;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Attach_Zipline.Attach_Zipline_C.StopZiplineEffect
	 */
	struct AAttach_Zipline_C_StopZiplineEffect_Params
	{	};

	/**
	 * Function Attach_Zipline.Attach_Zipline_C.OnAttach
	 */
	struct AAttach_Zipline_C_OnAttach_Params
	{	};

	/**
	 * Function Attach_Zipline.Attach_Zipline_C.OnDetach
	 */
	struct AAttach_Zipline_C_OnDetach_Params
	{	};

	/**
	 * Function Attach_Zipline.Attach_Zipline_C.TryStartZiplineAttaching
	 */
	struct AAttach_Zipline_C_TryStartZiplineAttaching_Params
	{	};

	/**
	 * Function Attach_Zipline.Attach_Zipline_C.TryStartZiplineDeAttaching
	 */
	struct AAttach_Zipline_C_TryStartZiplineDeAttaching_Params
	{	};

	/**
	 * Function Attach_Zipline.Attach_Zipline_C.StartClientZiplineAttaching
	 */
	struct AAttach_Zipline_C_StartClientZiplineAttaching_Params
	{	};

	/**
	 * Function Attach_Zipline.Attach_Zipline_C.StartClientZiplineDeAttaching
	 */
	struct AAttach_Zipline_C_StartClientZiplineDeAttaching_Params
	{	};

	/**
	 * Function Attach_Zipline.Attach_Zipline_C.Do_Burst_FX
	 */
	struct AAttach_Zipline_C_Do_Burst_FX_Params
	{	};

	/**
	 * Function Attach_Zipline.Attach_Zipline_C.OnZiplineSprintStatusChanged
	 */
	struct AAttach_Zipline_C_OnZiplineSprintStatusChanged_Params
	{
	public:
		bool                                                       sprint;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Attach_Zipline.Attach_Zipline_C.ExecuteUbergraph_Attach_Zipline
	 */
	struct AAttach_Zipline_C_ExecuteUbergraph_Attach_Zipline_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_F295[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
