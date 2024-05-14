/* Crear un programa que calcule si un numero es primo*/

#include <iostream>
#include <conio.h>
using namespace std;

main(){

    int n, contador = 1;

    cout << "Ingresar un numero de tipo entero: ";
    cin >> n;

    for (int i = 2; i <= n; i++){
        if ( n % i == 0){
            contador += 1;
        }
    }

    if (contador <= 2)
        cout << "El numero ingresado es primo!" << endl;
    else
        cout << "El numero ingresado no es un numero primo!" << endl;

    getch();
}