#pragma once
#include "pch.h"


class PlayerMod : public Feature
{
private:
	bool Initialized = false;

	KeyBindToggle SpeedHackKey = KeyBindToggle(ImGuiKey_V);
	float fSpeedHackFactor = 10.f;
	bool bSpeedSwitch = false;

	float fOldSprintSpeed = 0;
	float fOldAcceleration = 0;

	KeyBind TeleportKey = KeyBind(ImGuiKey_T);
	int iTeleportOffset = 50;

public:
	PlayerMod() {}

	bool Setup();

	void Destroy();

	void HandleKeys();

	void PopulateMenu();

	void Render() {}

	void Run() {}

	void SaveConfig();

	void LoadConfig();
};