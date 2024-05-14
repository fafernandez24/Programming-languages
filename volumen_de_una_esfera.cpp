#include <iostream>
#include <cmath>
using namespace std;
// Hecho por Freddy Fernandez

int main() {

    double volumen, radio;
    const double PI = 3.14159;

    cout << "Ingresar el radio de la esfera: ";
    cin >> radio;

    volumen = (4 * PI * pow(radio, 3)) / 3;

    cout << "El volumen de la esfera es: " << volumen;

    return 0;
}