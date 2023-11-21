#pragma once
#include "pch.h"

class ESP : public  Feature
{
private:
	bool Initalized = false;

	bool bESP = true;
	int iESPDistance = 200;

	bool bNameESP = true;

	bool bBoxESP = false;

	bool bIgnoreHatchers = true;

	bool bESPDrawBones = false;
	bool bESPBonesDot = true;

	bool bAllDebug = false;
	bool bDrawAll = false;

	CG::FName Root;

	// Hostile
	std::vector<CG::FName> Spitters;
	std::vector<CG::FName> Hogs;
	std::vector<CG::FName> Spiders;
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
		for (auto& Actor : Cheat::unreal.get()->Actors)
		{
			if (!Actor)
				return;

			auto RootComponent = Actor->RootComponent;
			if (!RootComponent)
				continue;

			auto Origin = RootComponent->RelativeLocation;

			CG::FVector2D Screen = Cheat::unreal.get()->W2S(Origin);
			if (Screen.IsValid())
				continue;

			ImGui::GetBackgroundDrawList()->AddText(Screen, White, Actor->GetName().c_str());
		}
	}

	void CreatureESP(CG::AFGCreature* Creature);

	void HatcherESP(CG::AFGCrabHatcher* Hatcher);

	void BugsESP(CG::AFGFlyingBabyCrab* Bug);
};