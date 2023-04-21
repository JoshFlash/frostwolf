#ifndef RENDERER_H
#define RENDERER_H

#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <vector>
#include <string>

class Renderer {
public:
    Renderer();
    ~Renderer();

    void initialize(GLFWwindow* window);
    void render();
    void terminate();

private:
    unsigned int shaderProgram;
    std::vector<unsigned int> VAOs;
    std::vector<unsigned int> textures;

    unsigned int loadTexture(const char* path);
    GLuint compileShader(const std::string &source, GLenum shaderType);
    void setupShaders();
    void setupCubes();
};
#endif // RENDERER_H
