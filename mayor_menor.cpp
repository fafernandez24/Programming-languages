#include <iostream>
using namespace std;
// Hecho por Freddy Fernandez

struct Nodo {
  int dato;
  Nodo *prox;
};

Nodo* CrearNodo(int valor){

    Nodo *nuevo = new Nodo;
    nuevo -> dato = valor;
    nuevo -> prox = NULL;
    return nuevo;
};

bool ListaVacia(Nodo *inicio){
    return inicio == NULL;
};

void InsertarUltimo(Nodo **inicio, int valor){
 
   Nodo *nuevo = CrearNodo(valor);
 
  // Si la lista esta vacia
    if (ListaVacia(*inicio))
       *inicio = nuevo;
    else 
     {
       // Recorremos la lista hasta el ultimo nodo
       Nodo *actual = *inicio;
       while (actual->prox != NULL) {
            actual = actual->prox;
        }
      // Insertamos el nuevo nodo al final de la lista
        actual->prox = nuevo;
     }
}

void MayorMenor(Nodo *inicio){

  int mayor = 0;
  int menor = 0;
  Nodo *mover = inicio;

  if (ListaVacia(inicio))
    cout << "La lista se encuentra vacia" << endl;
  else{

    while (mover != NULL){

      if (mayor < mover -> dato){
        mayor = mover -> dato;
      }
      mover = mover -> prox;
    }

    menor = mayor;
    mover = inicio;

    while (mover != NULL){
      if (mover -> dato < menor ){
        menor = mover -> dato;
      }
      mover = mover -> prox;
    }

    if (mover == NULL){
      cout << "El numero mayor es: " << mayor << endl;
      cout << "El numero menor: " << menor << endl;
    }
  }
}

main(){

  Nodo *primero;
  int valor = 0, i = 0, usuario = 0;

  cout << "Insertar numero de casillas: " << endl;
  cin >> usuario;

  while (i < usuario){
      cout << "Ingresar el valor de la casilla: " << i << endl;
      cin >> valor;

      CrearNodo(valor);
      InsertarUltimo(&primero, valor);
      i += 1;
  };

  MayorMenor(primero);

}
