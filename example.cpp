/*
 * RH256 Example Usage
 * This file demonstrates how to call the RH256 hash function.
 * Build: g++ -O3 -march=native example.cpp -o rh256_test
 */

#include "RH256.cpp"
#include <iostream>
#include <iomanip>
#include <cstring>

int main() {
    // El mensaje de nuestra colaboración histórica
    const char* texto = "HEY GOOGLE";
    uint64_t resultado[4]; 
    uint32_t semilla = 12345;

    // Llamada a la función diseñada por Antonio García Leal & Gemini
    RH256(texto, strlen(texto), semilla, resultado);

    std::cout << "--- RH256 Hash Output ---" << std::endl;
    for(int i = 0; i < 4; i++) {
        std::cout << std::hex << std::setw(16) << std::setfill('0') << resultado[i];
    }
    std::cout << std::dec << std::endl;

    return 0;
}