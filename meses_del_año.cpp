/* Mostrar los meses del año, pidiendole al usuario un numero entre (1-12),
y mostrar al mes que corresponde. */

#include <iostream>
using namespace std;
// Hecho por Freddy Fernandez

main(){

    int mes;

    cout << "Ingresar un numerp tipo entero del 1 al 12: ";
    cin >> mes;

    switch(mes){

        case 1:
            cout << "El numero 1 corresponde al mes de enero." << endl;
            break;
        case 2:
            cout << "El numero 2 corresponde al mes de febrero." << endl;
            break;
        case 3:
            cout << "El numero 3 corresponde al mes de marzo." << endl;
            break;
        case 4:
            cout << "El numero 4 corresponde al mes de abril." << endl;
            break;
        case 5:
            cout << "El numero 5 corresponde al mes de mayo." << endl;
            break;
        case 6:
            cout << "El numero 6 corresponde al mes de junio." << endl;
            break;
        case 7:
            cout << "El numero 7 corresponde al mes de julio." << endl;
            break;
        case 8:
            cout << "El numero 8 corresponde al mes de agosto." << endl;
            break;
        case 9:
            cout << "El numero 9 corresponde al mes de septiembre." << endl;
            break;
        case 10:
            cout << "El numero 10 corresponde al mes de octubre." << endl;
            break;
        case 11:
            cout << "El numero 11 corresponde al mes de noviembre." << endl;
            break;
        case 12:
            cout << "El numero 12 corresponde al mes de diciembre." << endl;
            break;
    }

}