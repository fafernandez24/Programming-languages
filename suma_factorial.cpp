/* Escriba un programa que calcule 1! + 2! + 3! +...+ n!. */

#include <iostream>
#include <conio.h>
using namespace std;

main(){

    int n, factorial, suma_factorial;

    suma_factorial = 0;

    cout << "Ingresar un valor de tipo entero: ";
    cin >> n;

    for ( int i = n; i >= 1 ; i-- ){

        factorial = 1;

        for ( int j = i; j >= 1; j--){
            factorial *= j;
        }

        suma_factorial += factorial;

    }

    cout << "La suma de los factoriales del numero ingresado es: " << suma_factorial << endl;










}