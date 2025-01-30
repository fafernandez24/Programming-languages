/* Escriba un programa que calcule el valor de 2^1 + 2^2 + 2^3 + ... + 2^n. */

#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

main(){

    int n, suma;

    cout << "Ingresar un valor de tipo entero: ";
    cin >> n;

    for ( int i = 1; i <= n; i++ ){
        suma += pow(2,i);
    }

    cout << "El resultado final de 2^1 + 2^2 + 2^3 + ... + 2^n es: " << suma << endl;
    getch();
}
