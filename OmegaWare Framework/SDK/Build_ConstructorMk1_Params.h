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
	 * Function Build_ConstructorMk1.Build_ConstructorMk1_C.GetManufacturingBackground
	 */
	struct ABuild_ConstructorMk1_C_GetManufacturingBackground_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UMaterial*                                           MaterialOptional;                                        // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_ConstructorMk1.Build_ConstructorMk1_C.CheckOnProductionChange
	 */
	struct ABuild_ConstructorMk1_C_CheckOnProductionChange_Params
	{
	public:
		bool                                                       IsProducing;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_O4HR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Build_ConstructorMk1.Build_ConstructorMk1_C.SetRTPCValue
	 */
	struct ABuild_ConstructorMk1_C_SetRTPCValue_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
