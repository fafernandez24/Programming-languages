/* Escriba un programa que calcule el valor de: 1+2+3+...+n. */

#include <iostream>
using namespace std;

main(){

    int n, suma, i;

    suma = 0;

    cout << "Ingresar un valor de tipo entero: ";
    cin >> n;

    for (i = 1; i <= n; i++){
        suma += i;
    }

    cout << "La suma de el numero y sus inferiores es: " << suma << endl;

}