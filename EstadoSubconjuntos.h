//
// Created by rubik on 16/06/15.
//

#ifndef AFN_ESTADOSUBCONJUNTOS_H
#define AFN_ESTADOSUBCONJUNTOS_H

#include "iostream"
#include "Estado.h"

using namespace std;

class EstadoSubconjuntos {
private:
    string nombre;
    vector<Estado> subconjunto;

public:

    EstadoSubconjuntos(string nombre);

    const string &getNombre() const { return nombre; }

    void setNombre(const string &nombre) { EstadoSubconjuntos::nombre = nombre; }
};


#endif //AFN_ESTADOSUBCONJUNTOS_H
