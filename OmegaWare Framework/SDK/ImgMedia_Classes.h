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
	 * Class ImgMedia.ImgMediaSource
	 * Size -> 0x0048 (FullSize[0x00D0] - InheritedSize[0x0088])
	 */
	class UImgMediaSource : public UBaseMediaSource
	{
	public:
		bool                                                       IsPathRelativeToProjectRoot;                             // 0x0088(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5ZBF[0x3];                                   // 0x0089(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFrameRate                                          FrameRateOverride;                                       // 0x008C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UO42[0x4];                                   // 0x0094(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ProxyOverride;                                           // 0x0098(0x0010) Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFillGapsInSequence;                                     // 0x00A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_40RF[0x7];                                   // 0x00A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDirectoryPath                                      SequencePath;                                            // 0x00B0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1XKN[0x10];                                  // 0x00C0(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetTokenizedSequencePath(const class FString& Path);
		void SetSequencePath(const class FString& Path);
		void SetMipLevelDistance(float Distance);
		void RemoveTargetObject(class AActor* InActor);
		void RemoveGlobalCamera(class AActor* InActor);
		class FString GetSequencePath();
		void GetProxies(TArray<class FString>* OutProxies);
		void AddTargetObject(class AActor* InActor);
		void AddGlobalCamera(class AActor* InActor);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
