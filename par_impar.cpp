/*Crear un programa que determine si un numero dado por el uuario es par o impar*/
#include <iostream>
using namespace std;
// Hecho por Freddy Fernandez.

main(){

    int valor;

    cout << "Ingresar un valor: ";
    cin >> valor;

    if (valor % 2 == 0)
        cout << "El numero " << valor << " es par." << endl;
    else
        cout << "El numero " << valor << " es impar." << endl;
    
}