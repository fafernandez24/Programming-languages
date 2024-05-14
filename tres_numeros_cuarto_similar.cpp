/*Escribir un programa que lea de entrada estandar tres numeros.
Despues debe leer un cuarto numero e indicar si el numero coincide
con alguno de los introducidos previos a este.*/
#include <iostream>
using namespace std;

main(){

    int n1, n2, n3, n4;

    cout << "Ingresar un valor de tipo entero para n1: ";
    cin >> n1;

    cout << "Ingresar un valor de tipo entero para n2: ";
    cin >> n2;

    cout << "Ingresar un valor de tipo entero para n3: ";
    cin >> n3;

    cout << "Ingresar un valor de tipo entero para n4: ";
    cin >> n4;

    if (n4 == n1 || n4 == n2 || n4 == n3)
        cout << "El valor de n4 coincide con uno de los digitos ingresado anterioremente!" << endl;
    else
        cout << "El valor de n4, tristemente no coincide con ninguno de los valores ingresados anteriormente :(" << endl;

}