#pragma once

struct GLFWwindow;
class Application
{

public:
	Application();
	virtual ~Application();
	virtual bool Run(const char* name, int width, int height, bool fullscreen);
	virtual bool Startup() = 0;
	virtual bool update(float) = 0;
	virtual bool draw() = 0;
	GLFWwindow* m_window;
	bool m_gameOver;
};

