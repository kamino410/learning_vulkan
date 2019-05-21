#include <iostream>

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#define WINDOW_WIDTH 400
#define WINDOW_HEIGHT 300

int main() {
  std::cout << "Hello" << std::endl;

  if (!glfwInit()) {
    std::cerr << "Failed to initialize GLFW!" << std::endl;
    return 1;
  }

  if (!glfwVulkanSupported()) {
    std::cerr << "Vulkan is not supported!" << std::endl;
    return 1;
  }

  GLFWwindow *window = glfwCreateWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "test", NULL, NULL);
  glfwMakeContextCurrent(window);

  while (!glfwWindowShouldClose(window)) { glfwPollEvents(); }

  return 0;
}

