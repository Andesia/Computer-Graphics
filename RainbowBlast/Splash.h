#pragma once
#include "glad/glad.h"
#include "GLFW/glfw3.h"
class Splash
{
	public:
		// settings
		const unsigned int SCR_WIDTH = 800;
		const unsigned int SCR_HEIGHT = 600;
		//methods
		int display(); //displays splah screen
		//void framebuffer_size_callback(GLFWwindow* window, int width, int height);
		//void processInput(GLFWwindow* window);


};

