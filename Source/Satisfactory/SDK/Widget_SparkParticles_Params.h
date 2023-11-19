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
	 * Function Widget_SparkParticles.Widget_SparkParticles_C.CreateSparks
	 */
	struct UWidget_SparkParticles_C_CreateSparks_Params
	{
	public:
		int32_t                                                    NumberOfSparks;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_SparkParticles.Widget_SparkParticles_C.OnSparkBounce
	 */
	struct UWidget_SparkParticles_C_OnSparkBounce_Params
	{
	public:
		struct FVector2D                                           Position;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           Scale;                                                   // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_SparkParticles.Widget_SparkParticles_C.ExecuteUbergraph_Widget_SparkParticles
	 */
	struct UWidget_SparkParticles_C_ExecuteUbergraph_Widget_SparkParticles_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
