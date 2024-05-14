/* Escriba un programa que calcule x^y. donde tanto x como y son enteors positivos, sin utilizar la funcion pow. */

#include <iostream>
using namespace std;

main(){

    int x, y, opcion, contador, nfinal;

    contador = 2;

    cout << "Ingresar el valor de x: ";
    cin >> x;

    nfinal = x;

    cout << "Ingresar el valor de y: ";
    cin >> y;

    cout << "(1) Ciclo while" << endl;
    cout << "(2) Do while" << endl;
    cout << "(3) Ciclo for" << endl;
    cout << "(4) Salir" << endl;

    cout << "OPCION: ";
    cin >> opcion;

    switch(opcion){

        case 1:

            while ( contador <= y ){

                nfinal *= x;
                contador++;

            }

            cout << "El resultado es: " << nfinal << endl;
            break;
        
        case 2:

            do{

                nfinal *= x;
                contador++;

            } while ( contador <= y);

            cout << "El resultado es: " << nfinal << endl;
            break;

        case 3:

            for ( int i = 2; i <= y; i++){
                    nfinal *= x;
            }

            cout << "El resultado es: " << nfinal << endl;
            break;


        case 4:
            break;

    }    

}