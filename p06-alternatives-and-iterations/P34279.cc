/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Danna Cristina Márquez Martín
 * @date Oct 22th 2023
 * @brief agrega un segundo

 #include <iostream>
using namespace std;
 */

#include <iostream>
using namespace std;

int main() {
    int h, m, s;

    cout << "Hora (h): ";
    cin >> h;

    cout << "Minutos (m): ";
    cin >> m;

    cout << "Segundos (s): ";
    cin >> s;

    s++;  // Agrega un segundo

    if (s >= 60) {
        s = 0;
        m++;
    }

    if (m >= 60) {
        m = 0;
        h++;
    }

    if (h >= 24) {
        h = 0;
    }

    // Imprime la nueva hora en formato "HH:MM:SS"
    cout << "La nueva hora es: ";
    if (h < 10) cout << "0";
    cout << h << ":";
    if (m < 10) cout << "0";
    cout << m << ":";
    if (s < 10) cout << "0";
    cout << s << endl;

    return 0;
}
