/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Danna Cristina Márquez Martín
 * @date Oct 22th 2023
 * @brief números armónicos

 #include <iostream>
using namespace std;
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;

    cout << "Ingresa un número natural: ";
    cin >> n;

    double h_n = 0.0;

    for (int i = 1; i <= n; i++) {
        h_n += 1.0 / i;
    }

    cout << "H_" << n << " = " << fixed << setprecision(4) << h_n << endl;

    return 0;
}
