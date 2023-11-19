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
	 * Function ChaosSolverEngine.ChaosSolverActor.SetSolverActive
	 */
	struct AChaosSolverActor_SetSolverActive_Params
	{
	public:
		bool                                                       bActive;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosSolverEngine.ChaosSolverActor.SetAsCurrentWorldSolver
	 */
	struct AChaosSolverActor_SetAsCurrentWorldSolver_Params
	{	};

	/**
	 * Function ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary.ConvertPhysicsCollisionToHitResult
	 */
	struct UChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult_Params
	{
	public:
		struct FChaosPhysicsCollisionInfo                          PhysicsCollision;                                        // 0x0000(0x00C0)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FHitResult                                          ReturnValue;                                             // 0x00C0(0x00E8)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
