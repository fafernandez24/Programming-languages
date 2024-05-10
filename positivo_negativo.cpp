/*Comprobar si un numero dado por el usuario es positivo o negativo*/
#include <iostream>
using namespace std;
// Hecho por Freddy Fernandez

main(){

    float valor;

    cout << "Ingresar un valor: " << endl;
    cin >> valor;

    if ( valor == 0)
        cout << "El valor es igual a 0" << endl;
    else if (valor < 0)
        cout << "El numero es negativo: " << valor << endl;
    else
        cout << "El numero es positivo: " << valor << endl;
        
}