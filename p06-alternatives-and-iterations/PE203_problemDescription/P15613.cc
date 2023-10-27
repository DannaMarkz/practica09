/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Danna Cristina Márquez Martín alu0101648408@ull.edu.es
 * @date Oct 26th 2023
 * @brief Temperaturas
 */

#include <iostream>

int main() {
    int temperatura;

    // Lee la temperatura en grados Celsius desde la entrada estándar
    std::cout << "Temperatura en grado Celsius: ";
    std::cin >> temperatura;

    // Comprueba si hace calor, frío o está bien
    if (temperatura > 30) {
        std::cout << "Hace calor" << std::endl;
    } else if (temperatura < 10) {
        std::cout << "Hace frío" << std::endl;
    } else {
        std::cout << "Está bien" << std::endl;
    }

    // Comprueba si el agua herviría o se congelaría a esa temperatura
    if (temperatura >= 100) {
        std::cout << "El agua hilbularía" << std::endl;
    } else if (temperatura <= 0) {
        std::cout << "El agua se congelaría" << std::endl;
    }

    return 0;
}
