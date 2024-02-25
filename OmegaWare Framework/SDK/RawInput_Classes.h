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
	 * Class RawInput.RawInputFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class URawInputFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		TArray<struct FRegisteredDeviceInfo> STATIC_GetRegisteredDevices();
		static UClass* StaticClass();
	};

	/**
	 * Class RawInput.RawInputSettings
	 * Size -> 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
	 */
	class URawInputSettings : public UDeveloperSettings
	{
	public:
		TArray<struct FRawInputDeviceConfiguration>                DeviceConfigurations;                                    // 0x0038(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
		bool                                                       bRegisterDefaultDevice;                                  // 0x0048(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_478B[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
