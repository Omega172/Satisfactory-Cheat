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
	 * Function Build_FloodlightWall.Build_FloodlightWall_C.DoesNeedCustomTransform
	 */
	struct ABuild_FloodlightWall_C_DoesNeedCustomTransform_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_FloodlightWall.Build_FloodlightWall_C.GetCustomTransform
	 */
	struct ABuild_FloodlightWall_C_GetCustomTransform_Params
	{
	public:
		struct FTransform                                          ReturnValue;                                             // 0x0000(0x0060)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_FloodlightWall.Build_FloodlightWall_C.GetLightColor
	 */
	struct ABuild_FloodlightWall_C_GetLightColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_FloodlightWall.Build_FloodlightWall_C.GetLightIntensity
	 */
	struct ABuild_FloodlightWall_C_GetLightIntensity_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_FloodlightWall.Build_FloodlightWall_C.GetLightMaterialFunction
	 */
	struct ABuild_FloodlightWall_C_GetLightMaterialFunction_Params
	{
	public:
		class UMaterialInterface*                                  ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_FloodlightWall.Build_FloodlightWall_C.GetLightSettings
	 */
	struct ABuild_FloodlightWall_C_GetLightSettings_Params
	{
	public:
		struct FPoolLightSettings                                  ReturnValue;                                             // 0x0000(0x0050)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Build_FloodlightWall.Build_FloodlightWall_C.GetMeshColor
	 */
	struct ABuild_FloodlightWall_C_GetMeshColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_FloodlightWall.Build_FloodlightWall_C.GetMeshSettings
	 */
	struct ABuild_FloodlightWall_C_GetMeshSettings_Params
	{
	public:
		struct FPoolMeshSettings                                   ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
