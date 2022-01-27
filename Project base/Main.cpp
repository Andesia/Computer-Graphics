#include <GLFW\glfw3.h>
#include <iostream>

int main() {
    if (!glfwInit()) {
        std::cout << "Could not initialize GLFW" << std::endl;
    }
    else {
        std::cout << "GLFW initialized!" << std::endl;
        glfwTerminate();
    }

    std::cin.get();
    return 0;
}