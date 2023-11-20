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
	 * Class DataflowCore.DataflowSettings
	 * Size -> 0x00A8 (FullSize[0x00E0] - InheritedSize[0x0038])
	 */
	class UDataflowSettings : public UDeveloperSettings
	{
	public:
		struct FLinearColor                                        ArrayPinTypeColor;                                       // 0x0038(0x0010) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ManagedArrayCollectionPinTypeColor;                      // 0x0048(0x0010) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        BoxPinTypeColor;                                         // 0x0058(0x0010) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        SpherePinTypeColor;                                      // 0x0068(0x0010) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FName, struct FNodeColors>                      NodeColorsMap;                                           // 0x0078(0x0050) Edit, Config, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7QRP[0x18];                                  // 0x00C8(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
