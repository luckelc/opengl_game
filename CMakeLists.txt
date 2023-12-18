cmake_minimum_required(VERSION 3.12)

project(opengl)

# Find OpenGL package
find_package(OpenGL REQUIRED)

# Include directories for GLFW
include_directories(${OPENGL_INCLUDE_DIR})

# Add GLFW library
find_package(glfw3 REQUIRED)

# Add your source files
add_executable(opengl main.cpp)

# Link GLFW and OpenGL libraries
target_link_libraries(opengl glfw ${OPENGL_gl_LIBRARY})

