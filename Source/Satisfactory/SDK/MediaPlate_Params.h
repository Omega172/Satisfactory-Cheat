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
	 * Function MediaPlate.MediaPlateComponent.SetPlayOnlyWhenVisible
	 */
	struct UMediaPlateComponent_SetPlayOnlyWhenVisible_Params
	{
	public:
		bool                                                       bInPlayOnlyWhenVisible;                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MediaPlate.MediaPlateComponent.SetMeshRange
	 */
	struct UMediaPlateComponent_SetMeshRange_Params
	{
	public:
		struct FVector2D                                           InMeshRange;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MediaPlate.MediaPlateComponent.SetLoop
	 */
	struct UMediaPlateComponent_SetLoop_Params
	{
	public:
		bool                                                       bInLoop;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MediaPlate.MediaPlateComponent.SetLetterboxAspectRatio
	 */
	struct UMediaPlateComponent_SetLetterboxAspectRatio_Params
	{
	public:
		float                                                      AspectRatio;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MediaPlate.MediaPlateComponent.SetIsAspectRatioAuto
	 */
	struct UMediaPlateComponent_SetIsAspectRatioAuto_Params
	{
	public:
		bool                                                       bInIsAspectRatioAuto;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MediaPlate.MediaPlateComponent.Seek
	 */
	struct UMediaPlateComponent_Seek_Params
	{
	public:
		struct FTimespan                                           Time;                                                    // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MediaPlate.MediaPlateComponent.Rewind
	 */
	struct UMediaPlateComponent_Rewind_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MediaPlate.MediaPlateComponent.Play
	 */
	struct UMediaPlateComponent_Play_Params
	{	};

	/**
	 * Function MediaPlate.MediaPlateComponent.Pause
	 */
	struct UMediaPlateComponent_Pause_Params
	{	};

	/**
	 * Function MediaPlate.MediaPlateComponent.Open
	 */
	struct UMediaPlateComponent_Open_Params
	{	};

	/**
	 * Function MediaPlate.MediaPlateComponent.OnMediaOpened
	 */
	struct UMediaPlateComponent_OnMediaOpened_Params
	{
	public:
		class FString                                              DeviceUrl;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MediaPlate.MediaPlateComponent.OnMediaEnd
	 */
	struct UMediaPlateComponent_OnMediaEnd_Params
	{	};

	/**
	 * Function MediaPlate.MediaPlateComponent.IsMediaPlatePlaying
	 */
	struct UMediaPlateComponent_IsMediaPlatePlaying_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MediaPlate.MediaPlateComponent.GetMeshRange
	 */
	struct UMediaPlateComponent_GetMeshRange_Params
	{
	public:
		struct FVector2D                                           ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MediaPlate.MediaPlateComponent.GetMediaTexture
	 */
	struct UMediaPlateComponent_GetMediaTexture_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8HZJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UMediaTexture*                                       ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MediaPlate.MediaPlateComponent.GetMediaPlayer
	 */
	struct UMediaPlateComponent_GetMediaPlayer_Params
	{
	public:
		class UMediaPlayer*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MediaPlate.MediaPlateComponent.GetLoop
	 */
	struct UMediaPlateComponent_GetLoop_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MediaPlate.MediaPlateComponent.GetLetterboxAspectRatio
	 */
	struct UMediaPlateComponent_GetLetterboxAspectRatio_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MediaPlate.MediaPlateComponent.GetIsAspectRatioAuto
	 */
	struct UMediaPlateComponent_GetIsAspectRatioAuto_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MediaPlate.MediaPlateComponent.Close
	 */
	struct UMediaPlateComponent_Close_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
