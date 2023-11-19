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
	 * BlueprintGeneratedClass Equip_BushPlanter.Equip_BushPlanter_C
	 * Size -> 0x0008 (FullSize[0x04B8] - InheritedSize[0x04B0])
	 */
	class AEquip_BushPlanter_C : public AEquip_Decoration_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04B0(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void SetupActor(class AActor* InActor);
		void ExecuteUbergraph_Equip_BushPlanter(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
