//
// Created by Juan Galvez on 2019-11-17.
//

#ifndef PC3B_LECTURA_H
#define PC3B_LECTURA_H

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Rectangulo.h"
#include "Tablero.h"

using namespace std;

void Leer(const string &archivo, vector<Rectangulo> & c, vector<Tablero> & tablero ){

    ifstream datos(archivo, ios::in);

    try {

        if (datos.is_open()) {
            string acep;
            string posx;
            string posy;
            string numf;
            string numc;
            string numdefiguras;
            string numerofilas;
            string numerocolumnas;

            do {
                getline(datos, numdefiguras, ' ');
                getline(datos, numerofilas, ' ');
                getline(datos, numerocolumnas);
                tablero.emplace_back(Tablero(numdefiguras, numerofilas,numerocolumnas));
                double conver_figuras = atof(numdefiguras.c_str());
                int figuras = 0;
                while ((datos >> acep >> posx >> posy >>numf >>numc) && (figuras < conver_figuras)){ //SOLO SE VAN ACEPTAR EL NUMERO DE FIGURAS EN EL TABLERO (NUMDEFIGURAS)
                                                                                                    //COMO NUMDEFIGURAS = 10, SOLO SE ACEPTARÁN 10 FIGURAS.
                        //ACEPENTADO SI ES 'A' Y VERIFICANDO QUE EL RECTANGULO NO SEA MÁS GRANDE QUE EL TABLERO
                        if ((acep == "A") && (numf < numerofilas) && (numc < numerocolumnas)) {
                            c.emplace_back(Rectangulo(acep, posx, posy, numf, numc));
                            figuras++;

                    }
                }
            } while (datos.good());



        } else {
            throw logic_error("No se pudo abrir el archivo .in");
        }
    }
    catch (std::exception& e){
        cout<<e.what()<<endl;
    }
}
#endif //PC3B_LECTURA_H
