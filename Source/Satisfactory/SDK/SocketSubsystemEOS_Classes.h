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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class SocketSubsystemEOS.NetConnectionEOS
	 * Size -> 0x0008 (FullSize[0x1E50] - InheritedSize[0x1E48])
	 */
	class UNetConnectionEOS : public UIpConnection
	{
	public:
		unsigned char                                              UnknownData_V9T8[0x8];                                   // 0x1E48(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SocketSubsystemEOS.NetDriverEOSBase
	 * Size -> 0x0008 (FullSize[0x0868] - InheritedSize[0x0860])
	 */
	class UNetDriverEOSBase : public UIpNetDriver
	{
	public:
		bool                                                       bIsPassthrough;                                          // 0x0860(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsUsingP2PSockets;                                      // 0x0861(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JUTQ[0x6];                                   // 0x0862(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
