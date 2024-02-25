#pragma once
#include "pch.h"

class ESP : public  Feature
{
private:
	bool Initialized = false;

	bool bESP = true;
	int iESPDistance = 200;

	bool bIgnoreSpitters = false;
	bool bIgnoreHogs = false;
	bool bIgnoreSpiders = false;
	bool bIgnoreHatchers = true;
	bool bIgnoreExplodingBugs = false;
	bool bIgnoreDoggo = false;
	bool bIgnoreFrank = false;
	bool bIgnoreBirb = false;

	bool bBoxESP = true;
	bool bBoxName = true;
	bool bBoxCreatureSize = true;
	bool bBoxTamed = true;
	bool bBoxDistance = true;

	bool bNameESP = true;

	bool bESPDrawBones = false;
	bool bESPBonesDot = true;

	bool bDrawAll = false;

	bool GetBoxFromBBox(CG::FVector& vecLocation, CG::FVector& vecExtent, ImRect& rectOut, bool bAccurate = true);

public:
	ESP() {}

	bool Setup();

	void Destroy();

	void HandleKeys() {}

	void PopulateMenu();

	void Render();

	void Run() {};

	void SaveConfig();

	void LoadConfig();
};