#include <iostream>
#include <math.h>
using namespace std;
// Hecho por Freddy Fernandez

main(){
    int a, b, c;
    float x1, x2;

    cout << "Ingresar el valor de a: ";
    cin >> a;

    cout << "Ingresar el valor de b: ";
    cin >> b;

    cout << "Ingresar el valor de c: ";
    cin >> c;

    x1 = (-(b) + sqrt(pow(b,2)) * (4 * a * c)) / (2*a);
    x2 = (-(b) - sqrt(pow(b,2)) * (4 * a * c)) / (2*a);

    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;
}