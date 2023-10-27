/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Danna Cristina Márquez Martín
 * @date Oct 22th 2023
 * @brief máximo de tres números enteros

 #include <iostream>
using namespace std;
 */

#include <iostream>
using namespace std;

int main() {
    double numero1, numero2, numero3;

    cout << "Primer número: ";
    cin >> numero1;

    cout << "Segundo número: ";
    cin >> numero2;

    cout << "Tercer número: ";
    cin >> numero3;

    double maximo = numero1;

    if (numero2 > maximo) {
        maximo = numero2;
    }

    if (numero3 > maximo) {
        maximo = numero3;
    }

    cout << "El máximo de los tres números es: " << maximo << endl;

    return 0;
}
