/* Hcer un programa que simule un cajero automatico con un saldo inicial de 1000 dolares. */

#include <iostream>
using namespace std;
// Hecho por Freddy Fernandez

main(){

    int opcion, saldo_inicial = 1000;
    float saldo, extra;

    cout << "\t Bienvenido a tu cajero automatico!" << endl;

    cout << "(1) Ingresar dinero en la cuenta." << endl;
    cout << "(2) Retirar dinero de la cuenta." << endl;
    cout << "(3) Salir." << endl;

    cout << "Opcion: ";
    cin >> opcion;

    switch(opcion){

        case 1:
            cout << "Cantidad de dinero a ingresar: ";
            cin >> extra;

            saldo = saldo_inicial + extra;
            cout << "Transaccion realizada con exito." << endl;
            cout << "Tu saldo es de: " << saldo <<"$" << endl;

            break;

        case 2:
            cout << "Cantidad de dinero a retirar: ";
            cin >> extra;

            if (extra > saldo_inicial){
                cout << "ERROR, no tiene el saldo suficiente." << endl;
                cout << "Tu saldo es de: " << saldo_inicial <<"$" << endl;
            }
                
            else{
                saldo = saldo_inicial - extra;
                cout << "Operacion realizada con exito!" << endl;
                cout << "Tu saldo es de: " << saldo <<"$" << endl;
            }

            break;

        case 3:
            break;

    }

}
