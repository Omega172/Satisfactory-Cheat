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
	 * BlueprintGeneratedClass BPD_ResearchTreeNode.BPD_ResearchTreeNode_C
	 * Size -> 0x0090 (FullSize[0x00B8] - InheritedSize[0x0028])
	 */
	class UBPD_ResearchTreeNode_C : public UFGResearchTreeNode
	{
	public:
		struct FMAMTree_NodeData_Struct                            mNodeDataStruct;                                         // 0x0028(0x0090) Edit, BlueprintVisible, ContainsInstancedReference, ExposeOnSpawn, HasGetValueTypeHash

	public:
		class UClass* GetNodeSchematic();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
