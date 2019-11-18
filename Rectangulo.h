//
// Created by Juan Galvez on 2019-11-17.
//

#ifndef PC3B_RECTANGULO_H
#define PC3B_RECTANGULO_H

#include <iostream>
#include <string>

using namespace std;
class Rectangulo {
public:
    string aceptacion;
    double posicion_x;
    double posicion_y;
    double num_filas;
    double num_columnas;

    Rectangulo(const string &_aceptacion, double _posicion_x, double _posicion_y, double _num_filas, double num_columnas);

    Rectangulo(const string  & acp,  const std::string & posx, const std::string & posy, const std::string & numf, const std::string & numc) {
        aceptacion = acp;
        posicion_x = std::stod(posx);
        posicion_y = std::stod(posy);
        num_filas = std::stod(numf);
        num_columnas = std::stod(numc);
    };

    friend std::ostream& operator << (std::ostream & out, const Rectangulo & rec);
    bool operator ==(const Rectangulo & rec);
    bool operator >=(const Rectangulo & rec);
    bool operator <=(const Rectangulo & rec);



};


#endif //PC3B_RECTANGULO_H
