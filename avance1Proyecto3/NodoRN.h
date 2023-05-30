#pragma once
#include <string>

enum Color { RED, BLACK };

using namespace std;

class NodoRN {
public:
    int codTratamiento;
    string nombre;
    int precioUnitario;

    Color color;
    NodoRN* izq;
    NodoRN* der;
    NodoRN* padre;

    NodoRN() {
        codTratamiento = 0;
        nombre = "";
        precioUnitario = 0;

        color = RED;
        izq = NULL;
        der = NULL;
        padre = NULL;
    }
    void MostrarTratamiento();
};