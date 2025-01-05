cmake_minimum_required(VERSION 3.5)

project(gl_)

link_libraries(glfw)

add_executable(context main.c)
add_executable(glGetString main.c)
