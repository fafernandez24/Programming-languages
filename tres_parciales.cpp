/* En una clase de 5 alumnos se han realizado tres examenes y se requiere determinar el numero de:

    (a) Alumnos que aprobaron todos los examenes.
    (b) Alumnos que aprobaron al menos un examen.
    (c) Alumnos que aprobaron unicamente el ultimo examen.

    Realice un programa que permita la lectura de los datos y el calculo de las estadisticas.

*/

#include <iostream>
#include <conio.h>
using namespace std;

main(){

    int alumnos = 5, exam1, exam2, exam3, paso_todos = 0, paso_alguno = 0, paso_ultimo = 0;

    for (int i = 1; i <= alumnos; i++){

        cout << "Alumno " << i << endl;
        cout << "---------------------" << endl;

        cout << "Ingresar la nota del primer examen (1-20): ";
        cin >> exam1;

        cout << "Ingresar la nota del segundo examen (1-20): ";
        cin >> exam2;

        cout << "Ingresar la nota del tercer examen (1-20): ";
        cin >> exam3;

        if (exam1 > 9 && exam2 > 9 && exam3 > 9){
            paso_todos += 1;
            paso_alguno += 1;
        }

        else{
            if (exam1 < 9 && exam2 < 9 && exam3 > 9){
                paso_ultimo += 1;
            }
            
            if (exam1 > 9 || exam2 > 9 || exam3 > 9)
                paso_alguno += 1;
        }
    } 

    cout << "(a) Pasaron todos los examenes: " << paso_todos << " alumnos" << endl;
    cout << "(b) Paso uno de los examenes: " << paso_alguno << " alumnos" << endl;
    cout << "(c) Paso el ultimo examen: " << paso_ultimo << " alumnos" << endl;

    getch();
}