﻿#pragma once

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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class GeometryCollectionTracks.MovieSceneGeometryCollectionSection
	 * Size -> 0x0038 (FullSize[0x0128] - InheritedSize[0x00F0])
	 */
	class UMovieSceneGeometryCollectionSection : public UMovieSceneSection
	{
	public:
		struct FMovieSceneGeometryCollectionParams                 Params;                                                  // 0x00F0(0x0038) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryCollectionTracks.MovieSceneGeometryCollectionTrack
	 * Size -> 0x0018 (FullSize[0x00B0] - InheritedSize[0x0098])
	 */
	class UMovieSceneGeometryCollectionTrack : public UMovieSceneNameableTrack
	{
	public:
		unsigned char                                              UnknownData_MK5F[0x8];                                   // 0x0098(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMovieSceneSection*>                          AnimationSections;                                       // 0x00A0(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
