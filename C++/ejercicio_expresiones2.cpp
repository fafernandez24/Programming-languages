#include <iostream>
using namespace std;
// Hecho por Freddy Fernandez

main(){

    float a, b, c, d, answer;

    cout << "Ingresar el valor de a: " << endl;
    cin >> a;

    cout << "Ingresar el valor de b: " << endl;
    cin >> b;

    cout << "Ingresar el valor de c: " << endl;
    cin >> c;

    cout << "Ingresar el valor de d: " << endl;
    cin >> d;

    answer = a + (b / (c-d));

    cout << "La expresion a + (b / (c-d)) es igual a: " << answer << endl;
}
