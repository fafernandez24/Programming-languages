/* Hacer un programa que pida un valor y mientras este no sea igual a cero, contar cuantos numeros mayores a 0 habian sido ingresados. */

#include <iostream>
#include <conio.h>
using namespace std;
// Hecho por Freddy Fernandez

main(){

    int counter;
    float n;

    do{

    cout << "Ingresar un valor: ";
    cin >> n;

    if ( n > 0 )
        counter++;

    } while ( n != 0 );

    cout << "Ingresaste " << counter << " numeros mayores a 0." << endl;

    getch(); 

}


