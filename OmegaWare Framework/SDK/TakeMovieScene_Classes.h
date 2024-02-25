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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class TakeMovieScene.MovieSceneTakeSection
	 * Size -> 0x0620 (FullSize[0x0710] - InheritedSize[0x00F0])
	 */
	class UMovieSceneTakeSection : public UMovieSceneSection
	{
	public:
		struct FMovieSceneIntegerChannel                           HoursCurve;                                              // 0x00F0(0x0100) NativeAccessSpecifierPublic
		struct FMovieSceneIntegerChannel                           MinutesCurve;                                            // 0x01F0(0x0100) NativeAccessSpecifierPublic
		struct FMovieSceneIntegerChannel                           SecondsCurve;                                            // 0x02F0(0x0100) NativeAccessSpecifierPublic
		struct FMovieSceneIntegerChannel                           FramesCurve;                                             // 0x03F0(0x0100) NativeAccessSpecifierPublic
		struct FMovieSceneFloatChannel                             SubFramesCurve;                                          // 0x04F0(0x0110) NativeAccessSpecifierPublic
		struct FMovieSceneStringChannel                            Slate;                                                   // 0x0600(0x0110) NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TakeMovieScene.MovieSceneTakeSettings
	 * Size -> 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
	 */
	class UMovieSceneTakeSettings : public UObject
	{
	public:
		class FString                                              HoursName;                                               // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MinutesName;                                             // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SecondsName;                                             // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              FramesName;                                              // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SubFramesName;                                           // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SlateName;                                               // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TakeMovieScene.MovieSceneTakeTrack
	 * Size -> 0x0010 (FullSize[0x00A8] - InheritedSize[0x0098])
	 */
	class UMovieSceneTakeTrack : public UMovieSceneNameableTrack
	{
	public:
		TArray<class UMovieSceneSection*>                          Sections;                                                // 0x0098(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
