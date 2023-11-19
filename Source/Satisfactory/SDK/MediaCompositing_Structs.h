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
	 * ScriptStruct MediaCompositing.MovieSceneMediaPlayerPropertySectionTemplate
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	struct FMovieSceneMediaPlayerPropertySectionTemplate : public FMovieScenePropertySectionTemplate
	{
	public:
		class UMediaSource*                                        MediaSource;                                             // 0x0038(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FFrameNumber                                        SectionStartFrame;                                       // 0x0040(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bLoop;                                                   // 0x0044(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_53ZA[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MediaCompositing.MovieSceneMediaSectionParams
	 * Size -> 0x0160
	 */
	struct FMovieSceneMediaSectionParams
	{
	public:
		class UMediaSoundComponent*                                MediaSoundComponent;                                     // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMediaSource*                                        MediaSource;                                             // 0x0008(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMovieSceneObjectBindingID                          MediaSourceProxy;                                        // 0x0010(0x0018) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MediaSourceProxyIndex;                                   // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B2W6[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMediaTexture*                                       MediaTexture;                                            // 0x0030(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMediaPlayer*                                        MediaPlayer;                                             // 0x0038(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFrameNumber                                        SectionStartFrame;                                       // 0x0040(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFrameNumber                                        SectionEndFrame;                                         // 0x0044(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLooping;                                                // 0x0048(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TLRL[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFrameNumber                                        StartFrameOffset;                                        // 0x004C(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMovieSceneFloatChannel                             ProxyTextureBlend;                                       // 0x0050(0x0110) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MediaCompositing.MovieSceneMediaSectionTemplate
	 * Size -> 0x0168 (FullSize[0x0188] - InheritedSize[0x0020])
	 */
	struct FMovieSceneMediaSectionTemplate : public FMovieSceneEvalTemplate
	{
	public:
		struct FMovieSceneMediaSectionParams                       Params;                                                  // 0x0020(0x0160) ContainsInstancedReference, NativeAccessSpecifierPrivate
		class UMovieSceneMediaSection*                             MediaSection;                                            // 0x0180(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
