#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;

main(){

    int n, suma_exponencial = 0;

    cout << "Ingresar un valor de tipo entero: ";
    cin >> n;

    for ( int i = 1;  i <= n; i++ ){
        suma_exponencial += pow(n,i);
    }

    cout << "La suma de n^1 + n^2 + n^3 +...+ n^n es: " << suma_exponencial << endl;
    getch();
}