/* Hacer un programa que realice la serie fibonacci -> 1 1 2 3 5 8 13... n. */

#include <iostream>
#include <conio.h>

using namespace std;

main(){

    int elementos, anterior = 0, fibonacci = 1, suma = 1;;

    cout << "Ingresar la cantidad de elementos de la serie: ";
    cin >> elementos;

    cout << "La serie fibonacci de " << elementos << " es : ";

    for ( int i = 1; i <= elementos; i++ ){

        cout << fibonacci << ", "; // 1 1 2 3

        suma += anterior; // 1 2 3 5
        anterior = fibonacci; // 1 1 2 3

        fibonacci = suma; // 1 2 3 5

    }
    
    cout << " fin..." << endl; 
    getch();
}