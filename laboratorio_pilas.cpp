#include <iostream>
using namespace std;
//UCAB, hecho por Freddy Fernández.

struct Pila{
   string dato;
   Pila *prox;
};

Pila* crearPila(string valor){
    Pila *nuevo = new Pila;
    nuevo->dato = valor;
    nuevo->prox = NULL;
    return nuevo;
}

bool PilaVacia(Pila *pila){
    return pila==NULL;
}

Pila*  Tope(Pila *pila){
   if (!PilaVacia(pila))
      return pila; 
   else   
      return nullptr;    
}

void Apilar(Pila **pila, string valor){
   Pila *nuevo = crearPila(valor);
   nuevo->prox=*pila;
   *pila=nuevo;
}

void Desapilar(Pila **pila){
   Pila *temp;
     if (!PilaVacia(*pila))
      {
         temp = *pila;
        *pila = (*pila)->prox; 
         delete temp;
      } 
     else
       cout<<"Pila vacia imposible desapilar "<<endl;
}

void mostrarPila(Pila *pila){
  while (!PilaVacia(pila)) {
    if (pila -> dato == "carton" || (pila -> dato == "desechables")){
        cout << Tope(pila) -> dato<< "  ";
        cout << "No es necesario fregar este plato." << endl;
    }
    else if (pila -> dato == "porcelana"){
        cout << Tope(pila) -> dato << " ";
        cout << "Es necesario fregar este plato." << endl;
    }
    Desapilar(&pila);
  }
}

main(){
  int cantidad,i;
  string valor; 
  Pila *pila = NULL;

  cout << "BIENVENIDO AL RESTAURANTE AJO y OJO!!!" << endl;
  cout << "Con que eres el nuevo(a)." << endl;

  cout << "Indicar la cantidad de platos que seran apilados: ";
  cin >> cantidad; i = 0;
  while (i != cantidad) {
      cout << "Indica el tipo de plato(carton/desechables o porcelana): ";
      cin >> valor;
      Apilar(&pila,valor);
      i++;
   }

cout<<"Platos en la pila: "<<endl;
mostrarPila(pila);
cout << "AJO Y OJO! colorin colorado, el programa a finalizado." << endl;
}
