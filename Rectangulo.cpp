//
// Created by Juan Galvez on 2019-11-17.
//

#include "Rectangulo.h"

Rectangulo::Rectangulo(const string & _aceptacion, double _posicion_x, double _posicion_y, double _num_filas, double num_columnas): aceptacion(_aceptacion), posicion_x(_posicion_x),
                                    posicion_y(_posicion_y), num_filas(_num_filas), num_columnas(num_columnas){}

std::ostream &operator<<(std::ostream &out, const Rectangulo &rec) {
    out<<rec.aceptacion<<" "<<rec.posicion_x<<" "<<rec.posicion_y<<" "<<rec.num_filas<<" "<<rec.num_columnas<<std::endl;
    return out;
}

bool Rectangulo::operator == (const Rectangulo &rec) {
    return ((this->posicion_x == rec.posicion_x) && (this->posicion_y == rec.posicion_y));
}

bool Rectangulo::operator>=(const Rectangulo &rec) {
    return (num_filas*num_columnas > rec.num_filas*rec.num_columnas);
    //dimension = area
}

bool Rectangulo::operator<=(const Rectangulo &rec) {
    return ((this->posicion_x <= rec.posicion_x) || (this->posicion_y <= rec.posicion_y) );
    //ORDENAR POR COORDENADAS, MIENTRAS MÁS PEGADO AL EJE DE COORDENADAS, MEJOR
}



//void Rectangulo::ordenar(const Rectangulo &rec) {

//}

