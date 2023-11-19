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
	// # Structs
	// --------------------------------------------------
	/**
	 * UserDefinedStruct ManufacturerAudio.ManufacturerAudio
	 * Size -> 0x0010
	 */
	struct FManufacturerAudio
	{
	public:
		class UAkAudioEvent*                                       PostAkEvent_6_86F4F56D4B9E17A33C958CB085FAEE51;          // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		float                                                      NotifyStart_4_61456F06426D4079082DC69777C38DAC;          // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Duration_8_0D0EC0404A5974CAE415C68C2523D771;             // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
