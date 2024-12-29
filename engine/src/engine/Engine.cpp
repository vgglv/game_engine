#include "Engine.hpp"
#include "GLFW/glfw3.h"

using namespace GameEngine;

void Engine::setGameResolution(int _width, int _height) {
	width = _width;
	height = _height;
}

void Engine::setGameTitle(const std::string& _title) {
	title = _title;
}

static void error_callback(int error, const char* description) {
    fprintf(stderr, "Error: %s\n", description);
}

bool Engine::startMainLoop() {
	glfwSetErrorCallback(error_callback);

	if (!glfwInit()) {
		return false;
	}

	auto window = glfwCreateWindow(width, height, title.c_str(), NULL, NULL);
	if (!window) {
		glfwTerminate();
		return false;
	}

	//glfwSetKeyCallback(window, key_callback);
	//glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);
	//glfwSetMouseButtonCallback(window, mouse_button_callback);
	//glfwSetCursorPosCallback(window, cursor_position_callback);
	//glfwSetScrollCallback(window, scroll_callback);

	glfwMakeContextCurrent(window);
	//gladLoadGL(glfwGetProcAddress);
	glfwSwapInterval(1);

	glfwGetFramebufferSize(window, &width, &height);
	//framebuffer_size_callback(window, width, height);

	while (glfwWindowShouldClose(window) == 0) {
		glfwPollEvents();
	}
	glfwTerminate();
	return true;
}
