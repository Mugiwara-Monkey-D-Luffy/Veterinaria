#pragma once
#include <string>
using namespace std;

class NodoBB {
public:

    string nombre;
    int codPais;
    int codCuidad;
    int codVisita;
    int idAnimal;
    int dia;
    int mes;
    int anio;
    int totalFactura;
    int formatoPago;

    NodoBB* izquierda;
    NodoBB* derecha;

    NodoBB() {

    }

    NodoBB(int codPais, string nombre) {
        this->codPais = codPais;
        this->nombre = nombre;
    }

    void MostrarNodoPais();
    void MostrarCuidad();
    void MostrarVisita();

    friend class ArbolBB;
    friend class ArbolAVL;
    friend class AgregarPais;
};