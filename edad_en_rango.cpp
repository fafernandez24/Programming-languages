/* Escribir un programa que le solicite al usuario una edad(un entero) 
e indique en la salida estandar si la edad introducida esta en el rango [18 - 25]*/

#include <iostream>
using namespace std;
// Hecho por Freddy Fernandez

main(){

    int edad;

    cout << "Indica tu edad: " ;
    cin >> edad;

    if (edad < 18 && edad > 25)
        cout << "Tu edad(" << edad << ") esta fuera del rango[18-25]." << endl;
    else
        cout << "Tu edad(" << edad << ") se encuentra dentro del rango[18-25]." << endl;

}