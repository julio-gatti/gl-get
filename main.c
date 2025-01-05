#include <GLFW/glfw3.h>

int main(int argc, char **argv)
{
  glfwInit();
  GLFWwindow *window = glfwCreateWindow(640, 480, "OpenGL", 0, 0);
  //"GL_MAX_TEXTURE_SIZE: %d\n" // possibly 16384
  //"GL_MAX_TEXTURE_IMAGE_UNITS: %d\n" // possibly 32
  while (!glfwWindowShouldClose(window)) {
    glfwPollEvents();
  }
  glfwTerminate();
  return 0;
}
