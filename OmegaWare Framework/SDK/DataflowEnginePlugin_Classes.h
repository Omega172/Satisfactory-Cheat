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
	 * Class DataflowEnginePlugin.DataflowActor
	 * Size -> 0x0008 (FullSize[0x0300] - InheritedSize[0x02F8])
	 */
	class ADataflowActor : public AActor
	{
	public:
		class UDataflowComponent*                                  DataflowComponent;                                       // 0x02F8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DataflowEnginePlugin.DataflowComponent
	 * Size -> 0x0148 (FullSize[0x06B0] - InheritedSize[0x0568])
	 */
	class UDataflowComponent : public UPrimitiveComponent
	{
	public:
		unsigned char                                              UnknownData_0Q1E[0x8];                                   // 0x0568(0x0008) Fix Super Size
		unsigned char                                              UnknownData_UFVB[0x140];                                 // 0x0570(0x0140) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
