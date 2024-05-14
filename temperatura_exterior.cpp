#include <iostream>
#include <conio.h>
using namespace std;

main (){

    int i; 
    float media, temperatura_base, temperatura_actual, temperatura_baja, temperatura_alta;

    cout << "Ingresar la temperatura inicial: ";
    cin >> temperatura_base;

    media = temperatura_base;
    temperatura_alta = temperatura_base;
    temperatura_baja = temperatura_base;

    for ( i = 0; i <= 24; i += 6 ){

        cout << "Ingresar temperatura actual: ";
        cin >> temperatura_actual;

        if ( temperatura_actual < temperatura_baja )
            temperatura_baja = temperatura_actual;

        else if( temperatura_actual > temperatura_alta)
            temperatura_alta = temperatura_actual;

        media += temperatura_actual;

    }

    media = media / 6;

    cout << "La media de temperatura fueron: " << media << " grados" << endl;
    cout << "La temperatura mas alta fueron: " << temperatura_alta << " grados" << endl;
    cout << "La temperatura mas baja fueron: " << temperatura_baja << " grados" << endl;

    getch();
}