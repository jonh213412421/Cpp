#include <iostream>
#include <GLFW/glfw3.h>
#include <iostream>

int main() {

    glfwInit();

    // Cria janela
    GLFWwindow* window = glfwCreateWindow(800, 600, "Simple Window", nullptr, nullptr);
    if (!window) {
        std::cerr << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(window);
    glClearColor(0.0, 0.15, 0.25, 1.0);
    std::cout << "Modelo de placa de Video: " << glGetString(GL_RENDERER) << std::endl;
    std::cout << "Fabricante da place de video: " << glGetString(GL_VENDOR) << std::endl;

    while (!glfwWindowShouldClose(window)) {
        // Processa eventos de entrada
        glfwPollEvents();

        // Limpa o buffer de cor
        glClear(GL_COLOR_BUFFER_BIT);

        // Troca os buffers de renderização
        glfwSwapBuffers(window);
    }
    // printa detalhes da placa de video

    glfwTerminate();

    return 0;
}
