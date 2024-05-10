#include <iostream>
// Libreria para permitirnos abrir los ejecutables de nuestros programas
#include <conio.h>
using namespace std;
// Hecho por Freddy Fernandez

main(){

    int i = 100;

    while (i >= 1){
        
        cout << i << ", ";

        // i-- es lo mismo que i = i - 1 o i -= 1.
        i--;

    }
    // El getch nso permite abrir el ejecutable de nuestros programas sin que se cierren sin antes presionar alguna tecla.
    getch();
}