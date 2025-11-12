
//#define GLFW_INCLUDE_GLU

#include <iostream>

//이 순서가 바뀌면 안됨
#include <GL/gl3w.h>
#include <GLFW/glfw3.h>

#include "MyGlWindow.h"


static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods)
{
	if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
		glfwSetWindowShouldClose(window, GLFW_TRUE);
}


int main(void)
{
	/* Initialize the library */
	if (!glfwInit())
	{
		// Initialization failed
		std::cout << "error" << std::endl;
		return 0;
	}
	//OpenGL 버전 지정: 별 상관 없음
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	//OpenGL 예전 기능 다 빼고, 신 기능만 쓰겠다.(예전 기능은 COMPATIBLE_PROFILE)
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);


	int width = 800;
	int height = 800;
	/* Create a windowed mode window and its OpenGL context */
	//u8"한글 창 이름" 가능
	GLFWwindow* window = glfwCreateWindow(width, height, "OpenGL FrameWork", NULL, NULL);
	if (!window) {
		glfwTerminate();
		return -1;
	}
	glfwMakeContextCurrent(window);
	if (gl3wInit()) {
		fprintf(stderr, "failed to initialize OpenGL\n");
		return -1;
	}
	if (!gl3wIsSupported(3, 2)) {
		fprintf(stderr, "OpenGL 3.2 not supported\n");
		return -1;
	}
	printf("OpenGL %s, GLSL %s\n", glGetString(GL_VERSION),
	glGetString(GL_SHADING_LANGUAGE_VERSION));

	glfwSwapInterval(1); //enable vsync


	printf("OpenGL %s, GLSL %s\n", glGetString(GL_VERSION), glGetString(GL_SHADING_LANGUAGE_VERSION));
	while (!glfwWindowShouldClose(window))
	{ //////////////////////////////
		/* Swap front and back buffers */
		glfwSwapBuffers(window);
		/* Poll for and process events */
		glfwPollEvents();
	}
	glfwDestroyWindow(window);
	glfwTerminate();

	glfwSetKeyCallback(window, key_callback); //static

	return 0;
}


