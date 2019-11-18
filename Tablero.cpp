//
// Created by Juan Galvez on 2019-11-17.
//

#include "Tablero.h"

Tablero::Tablero(double _num_figuras, double _num_filas, double _num_columnas):num_figuras(_num_figuras),num_filas(_num_filas), num_columnas(_num_columnas) {

}

std::ostream &operator<<(std::ostream &out, const Tablero &ct) {
    out<<ct.num_figuras<<" "<<ct.num_filas<<" "<<ct.num_columnas<<std::endl;
    return out;
}
