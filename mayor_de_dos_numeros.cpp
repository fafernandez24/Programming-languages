/*Escribir un programa que lea dos numeros y determine cual es el mayor*/
#include <iostream>
using namespace std;
// Hecho por Freddy Fernandez.

main(){

    int opciones, n1, n2, n3;
    
    cout << "Opciones: " << endl;
    cout << "(1) Determinar el mayor de dos numeros." << endl;
    cout << "(2) Determinar el mayor de tres numeros." << endl;
    cout << "(3) Salir" << endl;

    cout << "Ingresar opcion: ";
    cin >> opciones;

    switch (opciones){
        case 1:
            cout << "Ingresar el valor de n1: ";
            cin >> n1;

            cout << "Ingresar el valor de n2: ";
            cin >> n2;

            if (n1 > n2){
                cout << "El valor de n1(" << n1 << ") es mayor al valor de n2(" << n2 << ")" << endl;
            }
            else if (n1 < n2){
                cout << "El valor de n2(" << n2 << ") es mayor al valor de n1(" << n1 << ")" << endl;
            }
            else
                cout << "n1 y n2 son iguales: " << n1 << endl;
            break;

        case 2:
            cout << "Ingresar el valor de n1: ";
            cin >> n1;

            cout << "Ingresar el valor de n2: ";
            cin >> n2;

            cout << "Ingresar el valor de n3: ";
            cin >> n3;

            if (n1 < n2){
                if (n2 == n3)
                    cout << "n3 y n2 son iguales, siendo mayores en comparacion a n1." << endl;
                else if (n2 < n3)
                    cout << "n3 es mayor que n2 y n1" << endl;
                else
                    cout << "n2 es mayor que n3 y n1" << endl;
            }
            else if (n1 > n2){
                if (n1 == n3)
                    cout << "n1 y n3 son iguales, siendo mayores en comparacion a n2." << endl;
                else if (n1 < n3)
                    cout << "n3 es mayor que n1 y n2" << endl;
                else
                    cout << "n1 es mayor que n3 y n2" << endl;
            }
            if(n1 == n2){
                if (n1 == n3)
                    cout << "n1, n2 y n3 son iguales" << endl;
                else
                    cout << "n3 es mayor a n1 y n2 que son iguales" << endl;
            }
            break;
        case 3:
            cout << "Te voy a echar de menos, pero al menos ahora podre hablar mal de ti sin que me oigas.";
            break;
        default:
            cout << "Esta opcion no se encuentra disponible" << endl;
            break;
    }
}
