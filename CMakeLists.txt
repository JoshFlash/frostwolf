cmake_minimum_required(VERSION 3.5)

project(Frostwolf)

find_package(Boost REQUIRED)
find_package(glfw3 CONFIG REQUIRED)
find_package(glad CONFIG REQUIRED)
find_package(stb REQUIRED)
find_package(glm CONFIG REQUIRED)

set(CMAKE_CXX_STANDARD 11)

include_directories(${STB_INCLUDE_DIRS})

add_executable(frostwolf src/main.cpp src/renderer.cpp)

target_link_libraries(frostwolf PRIVATE Boost::headers glfw glad::glad)
