#include "RH256.cpp" // Incluimos tu archivo con el hash
#include <iostream>
#include <iomanip>

int main() {
    const char* texto = "HEY GOOGLE";
    uint64_t resultado[4]; // Aquí guardaremos los 256 bits (4 x 64)

    RH256(texto, strlen(texto), 12345, resultado);

    std::cout << "--- RH256 Hash Output ---" << std::endl;
    for(int i = 0; i < 4; i++) {
        std::cout << std::hex << std::setw(16) << std::setfill('0') << resultado[i];
    }
    std::cout << std::dec << std::endl;

    return 0;
}
