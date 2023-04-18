cmake_minimum_required(VERSION 3.5)

project(Frostwolf)

find_package(Boost REQUIRED)
find_package(glfw3 CONFIG REQUIRED)
find_package(glad CONFIG REQUIRED)

set(CMAKE_CXX_STANDARD 11)

add_executable(frostwolf main.cpp)

target_link_libraries(frostwolf PRIVATE Boost::headers glfw glad::glad)
