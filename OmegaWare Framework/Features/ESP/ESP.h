#pragma once
#include "pch.h"

class ESP : public  Feature
{
private:
	bool Initalized = false;

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

	bool bAllDebug = false;
	bool bDrawAll = false;

	CG::FName Root;

	// Hostile
	std::vector<CG::FName> SpittersSmall;
	std::vector<CG::FName> SpittersAlpha;

	CG::FName Hog;
	CG::FName CliffHog;
	CG::FName AlphaHog;
	CG::FName NuclearHog;

	CG::FName SpiderChild;
	CG::FName Spider;
	CG::FName SpiderElite;

	// Passive
	CG::FName Doggo;
	CG::FName Frank;
	CG::FName Birb;

public:
	ESP() {};

	bool Setup() override;

	void Destroy() override;

	void HandleKeys() override {};

	void DrawMenuItems() override;

	void Render() override;

	void Run() override {};

private:
	void DrawAllOrigins()
	{
		Unreal* pUnreal = Cheat::unreal.get();
		if (!pUnreal)
			return;

		for (auto& Actor : Cheat::unreal.get()->Actors)
		{
			if (!Actor)
				return;

			auto RootComponent = Actor->RootComponent;
			if (!RootComponent)
				continue;

			auto Origin = RootComponent->RelativeLocation;

			CG::FVector2D Screen = pUnreal->W2S(Origin);
			if (Screen.IsValid())
				continue;

			ImGui::GetBackgroundDrawList()->AddText(Screen, White, Actor->GetName().c_str());
		}
	}

	void CreatureESP(CG::AFGCreature* Creature);

	void HatcherESP(CG::AFGCrabHatcher* Hatcher);

	void BugsESP(CG::AFGFlyingBabyCrab* Bug);
};