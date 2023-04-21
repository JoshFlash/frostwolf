#include <iostream>
#include <boost/version.hpp>
#include <boost/algorithm/string.hpp>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include "renderer.h"

int main() {
    std::cout << "Hello, Frostwolf!" << std::endl;
    std::cout << "Boost version: " << BOOST_LIB_VERSION << std::endl;

    if (!glfwInit()) {
        std::cerr << "Failed to initialize GLFW" << std::endl;
        return -1;
    }

    GLFWwindow* window = glfwCreateWindow(1440, 900, "Frostwolf", nullptr, nullptr);
    if (!window) {
        std::cerr << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);

    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
        std::cerr << "Failed to initialize GLAD" << std::endl;
        glfwTerminate();
        return -1;
    }

    Renderer renderer;
    renderer.initialize(window);

    while (!glfwWindowShouldClose(window)) {
        renderer.render();

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    renderer.terminate();
    glfwTerminate();

    return 0;
}
