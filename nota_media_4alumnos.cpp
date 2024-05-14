#include <iostream>
using namespace std;
// Hecho por Freddy Fernandez

main(){

    int alumno1, alumno2, alumno3, alumno4;
    float media;

    cout << "Ingresar la nota final del primer estudiante: " << endl;
    cin >> alumno1;

    cout << "Ingresar la nota final del segundo estudiante: " << endl;
    cin >> alumno2;

    cout << "Ingresar la nota final del tercer estudiante: " << endl;
    cin >> alumno3;

    cout << "Ingresar la nota final del cuarto estudiante: " << endl;
    cin >> alumno4;

    media = (alumno1 + alumno2 + alumno3 + alumno4) / 4;

    cout << "La media de los 4 estudiantes es: " << media << endl;
}