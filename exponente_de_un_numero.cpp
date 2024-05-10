/* Hacer un mnu que considere las siguientes opciones:

    Caso 1: Cubo de un numero
    Caso 2: Numero par o impar
    Caso 3: Salir
*/

#include <iostream>
#include <math.h>
using namespace std;
// Hecho por Freddy Fernandez

main(){

    int opcion, numero, exponente;

    cout << "(1) Exponente de un numero" << endl;
    cout << "(2) Numero par o impar" << endl;
    cout << "(3) Salir" << endl;

    cout << "OPCION: ";
    cin >> opcion;

    switch(opcion){

        case 1:
            cout << "Ingresar un numero: ";
            cin >> numero;

            cout << "Ingresar el valor del exponente: ";
            cin >> exponente;

            cout << "El valor de " << numero << "^" << exponente << " es: " << pow(numero,exponente) << endl;

            break;
        case 2:

            cout << "Ingresar un numero: ";
            cin >> numero;

            if (numero % 2 == 0)
                cout << numero << " es un numero par!" << endl;
            else
                cout << numero << " es un numero impar!" << endl;

            break;

        case 3:
            break;
    }

}
