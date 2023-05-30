#pragma once
#include "Cliente.h"

class NodoB {
public:
    vector<Cliente*> Clientes;
    vector<NodoB*> Llaves;
    bool esHoja;

    NodoB() {}

    NodoB(int MaxLlaves, bool esHoja) {
        Clientes.reserve(MaxLlaves);
        Llaves.reserve(MaxLlaves + 1);
        this->esHoja = esHoja;
    }

    void MostrarCliente();

    friend class ArbolAVL;
};