/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Danna Cristina Márquez Martín
 * @date Oct 22th 2023
 * @brief letras mayúsculas y minúsculas

 #include <iostream>
using namespace std;
 */

#include <iostream>
using namespace std;

int main() {
    char letra;
    cout << "Ingresa una letra: ";
    cin >> letra;

    // Verifica si la letra es una letra minúscula (entre 'a' y 'z')
    if (letra >= 'a' && letra <= 'z') {
        // Convierte la letra en mayúscula restando la diferencia entre mayúsculas y minúsculas en ASCII
        letra = letra - ('a' - 'A');
    } else if (letra >= 'A' && letra <= 'Z') {
        // Convierte la letra en minúscula sumando la diferencia entre mayúsculas y minúsculas en ASCII
        letra = letra + ('a' - 'A');
    }

    cout << " " << letra << endl;

    return 0;
}

