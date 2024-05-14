/* Crear un programa que calcule el factorial de un numero n. */

#include <iostream>
#include <conio.h>
using namespace std;

main(){

    int n, i, factorial;

    cout << "Ingresar un numero de tipo entero: ";
    cin >> n;

    factorial = 1;

    for (i = n; i >= 1 ; i--){
        factorial *= i ;
    }

    cout << "El factorial del numero ingresado es: " << factorial << endl;

    getch();
}