#include <iostream>

using namespace std;

int main() {

//Determinar si un numero es positivo o negativo y cero!!

double n1;

cout << "Ingresar valor: ";
cin >> n1;

if( n1 > 0 ) {
    cout << "El numero " << n1 << " es positivo.";
}

else if( n1 == 0) {
    cout << "El numero es igual a 0";
}

else {
    cout << "El numero " << n1 << " es negativo.";
}

    return 0;
}