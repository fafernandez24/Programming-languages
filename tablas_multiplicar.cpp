/* Realizar un programa que solicite un numero entero menor o igual a 10 y muestre  su tabla de multiplicar. */

#include <iostream>
#include <conio.h>
using namespace std;
//Hecho por Freddy Fernandez

main(){

    int i, n;

    do{
        cout << "Ingresar un valor de tipo entero entre el 0 y el 10: ";
        cin >> n;
    } while ( n < 1 || n > 10 );

    for ( i = 1; i <= 10; i++){

        cout << n << " x " << i << " = " << n*i << endl;

    }
    getch();
}
