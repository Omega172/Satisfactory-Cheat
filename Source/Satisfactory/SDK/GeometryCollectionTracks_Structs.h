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
	 * ScriptStruct GeometryCollectionTracks.MovieSceneGeometryCollectionParams
	 * Size -> 0x0038
	 */
	struct FMovieSceneGeometryCollectionParams
	{
	public:
		unsigned char                                              UnknownData_4G1L[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftObjectPath                                     GeometryCollectionCache;                                 // 0x0008(0x0020) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFrameNumber                                        StartFrameOffset;                                        // 0x0028(0x0004) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFrameNumber                                        EndFrameOffset;                                          // 0x002C(0x0004) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PlayRate;                                                // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HGDY[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryCollectionTracks.MovieSceneGeometryCollectionSectionTemplateParameters
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	struct FMovieSceneGeometryCollectionSectionTemplateParameters : public FMovieSceneGeometryCollectionParams
	{
	public:
		struct FFrameNumber                                        SectionStartTime;                                        // 0x0038(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFrameNumber                                        SectionEndTime;                                          // 0x003C(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionTracks.MovieSceneGeometryCollectionSectionTemplate
	 * Size -> 0x0040 (FullSize[0x0060] - InheritedSize[0x0020])
	 */
	struct FMovieSceneGeometryCollectionSectionTemplate : public FMovieSceneEvalTemplate
	{
	public:
		struct FMovieSceneGeometryCollectionSectionTemplateParameters Params;                                                  // 0x0020(0x0040) NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
