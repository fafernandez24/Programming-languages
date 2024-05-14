#include <iostream>
using namespace std;

struct Nodo{
    int dato;
    Nodo *prox;
};

Nodo* CrearNodo(int valor){

    Nodo *nuevo = new Nodo;
    nuevo -> dato = valor;
    nuevo -> prox = NULL;

    return nuevo;
}

bool ListaVacia(Nodo *inicio){
    return inicio == NULL;
}

void InsertarUltimo(Nodo **inicio, int valor){

    Nodo *nuevo = CrearNodo(valor);

    if ( ListaVacia(*inicio))
        *inicio = nuevo;
    
    else{

        Nodo *aux = *inicio;
        while ( aux -> prox != NULL ){
            aux = aux -> prox;
        }

        aux -> prox = nuevo;
    }
}

void Eliminar(Nodo **inicio, int valor){
    Nodo *mover,*anterior = NULL; 
   
    if (ListaVacia(*inicio))
       cout<<"Lista esta vacia"<<endl;
    else {   
        mover = *inicio;
        while (mover != NULL && mover->dato != valor){
             anterior = mover;
             mover = mover->prox;
         }
        if (mover == NULL)
             cout<<"El elemento no existe en la lista "<<endl;
        else
           { if (mover == *inicio)
                *inicio=(*inicio)->prox;
             else
                anterior->prox = mover->prox;
             delete mover;  
           }      
   }
}

void MostrarLista(Nodo *inicio){

    Nodo *mover = inicio;

    if ( !ListaVacia(inicio)){
        while ( mover != NULL ){
            cout << mover -> dato << "->";
            mover = mover -> prox;
        }
        cout << "NULL" << endl;
    }
}

void EliminarImpar (Nodo **inicio){

    Nodo *aux = *inicio;
    int impar = 0;

    while ( aux != NULL ){

        if (aux -> dato % 2 != 0 ){
            impar = aux -> dato;
            Eliminar(&*inicio, impar);
            aux = *inicio;
        }

        aux = aux -> prox;
    }
}

void EliminarPrimo( Nodo **inicio){

    Nodo *aux = *inicio; //Nodo aux apunta a inicio;
    int n = 0; // Declaro una variable primo;
    int contador = 1; // Declaro la variable divisores;

    while ( aux != NULL ){

        n = aux -> dato;

        for (int i = 2; i <= n; i++){
            if ( n % i == 0){
                contador += 1;
            }
        }

        if (contador == 2){
            Eliminar(&*inicio, n);
            aux = *inicio;
        }

        contador = 1;
        aux = aux -> prox;
    }
}

void EliminarDigitosPares(Nodo **inicio){

    Nodo *aux = *inicio;

    



}

main(){

    Nodo *primero = NULL;
    int opcion, casillas, dato;

    cout << "Ingresar el numero de casillas que tendra la fila: ";
    cin >> casillas;

    for ( int i = 1; i <= casillas; i++ ){

        cout << "Ingresar el valor dentro de la casilla " << i << ": ";
        cin >> dato;

        InsertarUltimo(&primero, dato);
    }

    cout << "(1) Eliminar numeros impares" << endl;
    cout << "(2) Eliminar numeros primos" << endl;
    cout << "(3) Eliminar los numeros que no tienen un digito par" << endl;
    
    cout << "OPCION: ";
    cin >> opcion;

    switch (opcion){

        case 1:
            EliminarImpar(&primero);
            MostrarLista(primero);
            break;

        case 2:
            EliminarPrimo(&primero);
            MostrarLista(primero);
            break;
    }
}