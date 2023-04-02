#pragma once

#include "imgui.h"

class Theme
{
public:
	void Style();
	void Init();
	void InfLog();

	char Username[20];
	char Password[20];

	bool InfWindow = false;

private:
	/*float windowWidth = ImGui::GetContentRegionAvail().x;
	float buttonWidth = 200;
	float padding = (windowWidth - buttonWidth) * 0.5f;*/

	bool loader_active = true;
	bool LoginCheck = false;
};
