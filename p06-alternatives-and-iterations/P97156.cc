/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Danna Cristina Márquez Martín
 * @date Oct 22th 2023
 * @brief números en un intervalo

 #include <iostream>
using namespace std;
 */

#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Primer número: ";
    cin >> a;

    cout << "Segundo número: ";
    cin >> b;

    cout << "Los números entre " << a << " y " << b << " son: ";

    for (int i = a; i <= b; i++) {
        if (i > a) {
            cout << ", ";
        }
        cout << i;
    }

    cout << endl;

    return 0;
}
