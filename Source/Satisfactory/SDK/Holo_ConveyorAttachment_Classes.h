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
	 * BlueprintGeneratedClass Holo_ConveyorAttachment.Holo_ConveyorAttachment_C
	 * Size -> 0x0008 (FullSize[0x06C8] - InheritedSize[0x06C0])
	 */
	class AHolo_ConveyorAttachment_C : public AFGConveyorAttachmentHologram
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x06C0(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void ReceiveConfigureComponents(class AFGBuildable* inBuildable);
		void ExecuteUbergraph_Holo_ConveyorAttachment(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
