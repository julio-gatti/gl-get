#include <stdio.h>
#include <string.h>

#include <GLFW/glfw3.h>

#include "params.inl"

int main(int argc, char **argv)
{
  if (argc < 2) {
    puts("glGet <pname>");
    return 0;
  }
  glfwInit();
  GLFWwindow *window = glfwCreateWindow(640, 480, "OpenGL", 0, 0);
  if (!window) {
    glfwTerminate();
    return 1;
  }
  glfwMakeContextCurrent(window);

  //"GL_MAX_TEXTURE_SIZE: %d\n" // possibly 16384
  //"GL_MAX_TEXTURE_IMAGE_UNITS: %d\n" // possibly 32
  GLenum e = 0;
  /*if (!strcmp(argv[1], "GL_VENDOR")) {
    e = GL_VENDOR;
  }
  else if (!strcmp(argv[1], "GL_MAX_TEXTURE_SIZE")) {
    e = GL_MAX_TEXTURE_SIZE;
  }
  else if (!strcmp(argv[1], "GL_MAX_TEXTURE_IMAGE_UNITS")) {
    e = GL_MAX_TEXTURE_IMAGE_UNITS;
  }
  else {
    return 1;
  }*/
  for (int i = 0; i < sizeof(strings) / sizeof(strings[0]); i++) {
    if (!strcmp(argv[1], strings[i].first)) {
      e = strings[i].second;
      break;
    }
  }

  puts(glGetString(e));
  glfwDestroyWindow(window);
  glfwTerminate();
  return 0;
}
