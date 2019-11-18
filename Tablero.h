//
// Created by Juan Galvez on 2019-11-17.
//

#ifndef PC3B_TABLERO_H
#define PC3B_TABLERO_H

#include <iostream>
#include <string>
using namespace std;
class Tablero {
public:
    double num_figuras;
    double num_filas;
    double num_columnas;

    Tablero(double _num_figuras, double _num_filas, double _num_columnas);

    Tablero(const std::string  & acp, const std::string  & posx, const std::string & posy) {
        num_figuras = std::stod(acp);
        num_filas = std::stod(posx);
        num_columnas = std::stod(posy);
    };

    friend std::ostream& operator << (std::ostream & out, const Tablero & ct);

};


#endif //PC3B_TABLERO_H
