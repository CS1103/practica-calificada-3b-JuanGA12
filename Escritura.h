//
// Created by Juan Galvez on 2019-11-17.
//

#ifndef PC3B_ESCRITURA_H
#define PC3B_ESCRITURA_H
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Rectangulo.h"
#include "Tablero.h"

void GenerarArchivo(vector <Rectangulo> &rec){
    //usando iteradores
    auto inicial = begin(rec);
    auto final = end(rec);
    ofstream archivo_salida("Rectangulos3.out", ios::out);

    for (; inicial != final; std::advance(inicial,1)) {
        archivo_salida  << *inicial;
    }
    //forma "normal"
    /*for(auto &i:rec){
        archivo_salida<<i;
    }*/
    archivo_salida.close();


}
#endif //PC3B_ESCRITURA_H
