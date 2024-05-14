#include <iostream>
using namespace std;
// Hecho por Freddy Fernandez

int main() {

    //Saber si un numero es par o impar
    int numero;

    cout << "Ingresar un numero: ";
    cin >> numero;

    if( numero % 2 == 0 ) {
        cout << "El numero " << numero << " es par!!";
    }

    else{
        cout << "El numero " << numero << " es impar!!";
    }

    return 0;
}