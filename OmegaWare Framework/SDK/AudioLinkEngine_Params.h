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
	 * Function AudioLinkEngine.AudioLinkBlueprintInterface.StopLink
	 */
	struct UAudioLinkBlueprintInterface_StopLink_Params
	{	};

	/**
	 * Function AudioLinkEngine.AudioLinkBlueprintInterface.SetLinkSound
	 */
	struct UAudioLinkBlueprintInterface_SetLinkSound_Params
	{
	public:
		class USoundBase*                                          NewSound;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AudioLinkEngine.AudioLinkBlueprintInterface.PlayLink
	 */
	struct UAudioLinkBlueprintInterface_PlayLink_Params
	{
	public:
		float                                                      StartTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AudioLinkEngine.AudioLinkBlueprintInterface.IsLinkPlaying
	 */
	struct UAudioLinkBlueprintInterface_IsLinkPlaying_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
