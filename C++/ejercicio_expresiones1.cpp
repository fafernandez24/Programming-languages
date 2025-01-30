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

    answer = (a + b) / ( c - d);

    if (c - d == 0)
        cout << "ERROR, el denominador es 0" << endl << "Por ende, se considera una indeterminacion." << endl;
    else
        cout << "El valor de (a+b)/(c-d) es: " << answer << endl;

}
