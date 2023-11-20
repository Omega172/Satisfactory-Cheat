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
	 * Function TemplateSequence.TemplateSequenceActor.SetSequence
	 */
	struct ATemplateSequenceActor_SetSequence_Params
	{
	public:
		class UTemplateSequence*                                   InSequence;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TemplateSequence.TemplateSequenceActor.SetBinding
	 */
	struct ATemplateSequenceActor_SetBinding_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bOverridesDefault;                                       // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TemplateSequence.TemplateSequenceActor.LoadSequence
	 */
	struct ATemplateSequenceActor_LoadSequence_Params
	{
	public:
		class UTemplateSequence*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TemplateSequence.TemplateSequenceActor.GetSequencePlayer
	 */
	struct ATemplateSequenceActor_GetSequencePlayer_Params
	{
	public:
		class UTemplateSequencePlayer*                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TemplateSequence.TemplateSequenceActor.GetSequence
	 */
	struct ATemplateSequenceActor_GetSequence_Params
	{
	public:
		class UTemplateSequence*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TemplateSequence.TemplateSequencePlayer.CreateTemplateSequencePlayer
	 */
	struct UTemplateSequencePlayer_CreateTemplateSequencePlayer_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTemplateSequence*                                   TemplateSequence;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FMovieSceneSequencePlaybackSettings                 Settings;                                                // 0x0010(0x0020)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		class ATemplateSequenceActor*                              OutActor;                                                // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTemplateSequencePlayer*                             ReturnValue;                                             // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TemplateSequence.SequenceCameraShakeTestUtil.GetPostProcessBlendCache
	 */
	struct USequenceCameraShakeTestUtil_GetPostProcessBlendCache_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    PPIndex;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_FMJL[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPostProcessSettings                                OutPPSettings;                                           // 0x0010(0x06E0)  (Parm, OutParm, NativeAccessSpecifierPublic)
		float                                                      OutPPBlendWeight;                                        // 0x06F0(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x06F4(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TemplateSequence.SequenceCameraShakeTestUtil.GetLastFrameCameraCachePOV
	 */
	struct USequenceCameraShakeTestUtil_GetLastFrameCameraCachePOV_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_X2VH[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FMinimalViewInfo                                    ReturnValue;                                             // 0x0010(0x07C0)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TemplateSequence.SequenceCameraShakeTestUtil.GetCameraCachePOV
	 */
	struct USequenceCameraShakeTestUtil_GetCameraCachePOV_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_P9XV[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FMinimalViewInfo                                    ReturnValue;                                             // 0x0010(0x07C0)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
