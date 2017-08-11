#include "Application.h"
#include "gl_core_4_4.h"
#include <glfw/glfw3.h>
#include <imgui/imgui.h>
#include <iostream>

Application::Application() : m_window(nullptr), m_gameOver(false)
{
}

Application::~Application()
{
}

bool Application::Run(const char* name, int width, int height, bool fullscreen)
{
	float currentTime = 0;
	float deltaTime = 0;
	float prevTime = 0;

	if (glfwInit() == GL_FALSE)
		return false;
	
	m_window = glfwCreateWindow(width, height, name, nullptr, nullptr);
	if (m_window == nullptr)
	{
		std::cout << "Failed to create GLFW window" << std::endl;
		glfwTerminate();
		return false;
	}



	glfwMakeContextCurrent(m_window);

	if (ogl_LoadFunctions() == ogl_LOAD_FAILED) {
		glfwDestroyWindow(m_window);
		glfwTerminate();
		return false;
	}


	glClearColor(0.5f, .05f, 1, 1);

	while (!m_gameOver)
	{
		currentTime = glfwGetTime();
		deltaTime = currentTime - prevTime;
		prevTime = currentTime;

		glfwPollEvents();


		if (glfwGetKey(m_window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
			glfwSetWindowShouldClose(m_window, true);

		update(deltaTime);
		draw();

		glfwSwapBuffers(m_window);

		m_gameOver = m_gameOver || glfwWindowShouldClose(m_window);
	}
	return true;
}
