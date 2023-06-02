#pragma once
#include<iostream>
#include<fstream>
using namespace std;

class NodoAA {

public:
    int idAnimal;
    int codMedicacion;
    int dia;
    int mes;
    int anio;
    int listaMedicamento;
    int codTratamiento;
    int costoUnitario;
    int cantidad;
    int costoTotal;

    int nivel;
    NodoAA* izquierda;
    NodoAA* derecha;

    NodoAA() {

        idAnimal = 0;
        codMedicacion = 0;
        dia = 0;
        mes = 0;
        anio = 0;
        listaMedicamento = 0;
        costoUnitario = 0;
        cantidad = 0;
        costoTotal = 0;

        nivel = 1;
        izquierda = derecha = NULL;
    }

    void MostrarMedicacion();
};