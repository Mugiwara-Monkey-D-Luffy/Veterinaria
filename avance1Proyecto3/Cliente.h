#pragma once
#include <string>

using namespace std;

class Cliente {
public:

    int numCliente;
    string nombre;
    string direccion;
    int codPais;
    int codCuidad;
    int telefono;
    int dia;
    int mes;
    int anio;
    int descuento;
    int saldo;

    Cliente() {
        numCliente = 0;
        nombre = "";
        direccion = "";
        codPais = 0;
        codCuidad = 0;
        telefono = 0;
        dia = 0;
        mes = 0;
        anio = 0;
        descuento = 0;
        saldo = 0;
    }
    void MostrarCliente();
    bool CompareClients(Cliente* c1, Cliente* c2);
};
