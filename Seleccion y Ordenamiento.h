//
// Created by Juan Galvez on 2019-11-17.
//

#ifndef PC3B_SELECCION_Y_ORDENAMIENTO_H
#define PC3B_SELECCION_Y_ORDENAMIENTO_H

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Rectangulo.h"
#include "Tablero.h"

using namespace std;

void Selecionar_Rec(vector<Rectangulo> &recs) {

    auto it = recs.begin();
    vector<Rectangulo> s;
    for(;it != recs.end(); advance(it,1)) {
        for (auto it2 = recs.begin(); it2 != recs.end()-1; advance(it2, 1)) {
            if (*it == *it2) {
                if (*it >= *it2) {
                    recs.erase(it);
                }
            }

        }
    }
}
//ALGORITMO USADO DEL PROYECTO DE ORDNAMIENTO
template <typename iterator>
auto partition(iterator left, iterator right){
    auto i = left-1;

    for(auto it = left; it < right ; std::advance(it,1) )
    {

        if(*it <= *right)
        {
            using std::swap;
            ++i;
            swap(*i,*it);
        }
    }

    std::swap(*(i+1),*right);
    return ++i;
}

template <typename iterator>
void QuickSort(iterator left, iterator right) {
    if (left < right) {
        if (std::distance(left, right) >= 1) {
            auto pivot = partition(left, right);
            QuickSort(left, pivot - 1);
            QuickSort(pivot + 1, right);
        }
    }

}
template <typename Container>
void QuickSort(Container &c) {
    QuickSort(c.begin(), c.end()-1);
}





#endif //PC3B_SELECCION_Y_ORDENAMIENTO_H
