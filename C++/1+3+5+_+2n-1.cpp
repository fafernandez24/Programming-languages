/* Escriba un programa que calcule el valor de: 1+3+5+...2n - 1 */
#include <iostream>
#include <conio.h>
using namespace std;

main(){

    int n, n2, suma, i;

    cout << "Ingresar un valor de tipo entero: ";
    cin >> n;

    n2 = (2*n) - 1;

    for ( i = 1; i < n2; i += 2 ){
        suma += i;
    }

    cout << "La suma de 1+3+5+...+2n-1 es: " << suma << endl;
    getch();
}
