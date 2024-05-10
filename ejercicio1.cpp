#include <iostream>
using namespace std;
// Hecho por Freddy Fernandez

main(){

    float precio_producto, iva, aux;

    cout << "Ingresar el precio de su producto: " << endl;
    cin >> precio_producto;

    cout << "Ingresar el porcentaje de iva: " << endl;
    cin >> iva;

    aux = ((iva * precio_producto) / 100) + precio_producto;

    cout << "Su producto al aplicarle el IVA, cuesta un total de: " << aux << "$" << endl;
}