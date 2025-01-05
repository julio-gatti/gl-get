cmake_minimum_required(VERSION 3.5)

project(gl-get)

# Context creation
link_libraries(glfw)

add_executable(context main.c)

# OpenGL implementation
link_libraries(GL)

add_executable(glGetString get_string.c)
add_executable(glGetStringi get_stringi.c)
add_executable(glGetInteger get_integer.c)
add_executable(glGet get.c)
