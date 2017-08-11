#include "BunnyApp.h"
#include "imgui/imgui.h"
#include "gl_core_4_4.h"


BunnyApp::BunnyApp()
{
	//SetVariables();
	SetVariables();
}


BunnyApp::~BunnyApp()
{
}

bool BunnyApp::Startup()
{
	return false;
}

bool BunnyApp::update(float)
{

	return false;
}

bool BunnyApp::draw()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT | GL_STENCIL_BUFFER_BIT);
	//ImGui::Render();
	return false;
}

bool BunnyApp::SetColor(Color BunnyColor)
{
	switch (BunnyColor)
	{
	case 0:
		m_color = BunnyColor;
		return true;
		break;
	case 1:
		m_color = BunnyColor;
		return true;
		break;
	case 2:
		m_color = BunnyColor;
		return true;
		break;
	case 3:
		m_color = BunnyColor;
		return true;
		break;
	default:
		m_color = BunnyColor;
		return true;
		break;
	}
	return false;
}

void BunnyApp::SetVariables()
{
	int randColor = rand() % 4;
	//m_gender = rand() % 2;
	int rvb = rand() % 100;

	if (rvb <= 2)
		m_RVB = true;

	SetColor((Color)randColor);
}