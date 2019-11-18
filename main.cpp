#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include "Rectangulo.h"
#include "Tablero.h"
#include "Lectura.h"
#include "Seleccion y Ordenamiento.h"
#include "Escritura.h"

using namespace std;

int main() {


    vector<Rectangulo> rectangulos;
    vector<Tablero> tablero;

    Leer("rectangulos.in",rectangulos,tablero);

    cout<<"Tablero: "<<endl;
    for(auto&i:tablero){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Rectangulos: "<<endl;
    for(auto&i:rectangulos){
        cout<<i;
    }
    Selecionar_Rec(rectangulos);
    QuickSort(rectangulos);

    cout<<endl;

    cout<<"Rectangulos despues de seleccion y ordenamiento: "<<endl;
    for(auto&i:rectangulos){
        cout<<i;
    }
    GenerarArchivo(rectangulos);

}