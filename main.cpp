#include <GLFW/glfw3.h>
#include <iostream>

int main() {
  int doesItWork = 2;
  // Initialize GLFW
  if (!glfwInit()) {
    return -1;
  }

  // Create a GLFW windowed mode window and its OpenGL context
  GLFWwindow *window =
      glfwCreateWindow(640, 480, "Hello World", nullptr, nullptr);
  if (!window) {
    glfwTerminate();
    return -1;
  }
  // Make the window's context current
  glfwMakeContextCurrent(window);

  // Loop until the user closes the window
  while (!glfwWindowShouldClose(window)) {
    // Render here, e.g., OpenGL commands go here
    std::cout << (doesItWork * doesItWork);
    // Swap front and back buffers
    glfwSwapBuffers(window);

    // Poll for and process events
    glfwPollEvents();
  }

  // Clean up
  glfwTerminate();
  return 0;
}
