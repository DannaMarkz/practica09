/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Danna Cristina Márquez Martín alu0101648408@ull.edu.es
 * @date Oct 26th 2023
 * @brief Fechas correctas
 */

#include <iostream>

//d es día, m es mes y a es año
bool FechaCorrecta(int d, int m, int a) {
    return (a >= 1800 && a <= 9999) &&
           (m >= 1 && m <= 12) &&
           (d >= 1 && d <= 31);
}

int main() {
    int d, m, a;

    while (true) {
        std::cout << "Ingresar fecha (día mes año): ";
        if (!(std::cin >> d >> m >> a))
            break;

        if (FechaCorrecta(d, m, a)) {
            std::cout << "Fecha correcta" << std::endl;
        } else {
            std::cout << "Fecha incorrecta" << std::endl;
        }
    }

    return 0;
}
