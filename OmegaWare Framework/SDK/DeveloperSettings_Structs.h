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
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct DeveloperSettings.PlatformSettingsInstances
	 * Size -> 0x0058
	 */
	struct FPlatformSettingsInstances
	{
	public:
		class UPlatformSettings*                                   PlatformInstance;                                        // 0x0000(0x0008) ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FName, class UPlatformSettings*>                OtherPlatforms;                                          // 0x0008(0x0050) Transient, UObjectWrapper, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeveloperSettings.PerPlatformSettings
	 * Size -> 0x0010
	 */
	struct FPerPlatformSettings
	{
	public:
		TArray<class UPlatformSettings*>                           Settings;                                                // 0x0000(0x0010) Edit, ExportObject, EditFixedSize, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
