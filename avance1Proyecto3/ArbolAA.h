#pragma once
#include "NodoAA.h"
#include "ArbolAVL.h"
using namespace std;

class ArbolAA {
private:

    void rotarIzquierda(NodoAA*&);
    void rotarDerecha(NodoAA*&);
    void rebalancear(NodoAA*&);

    void imprimirPreorden(NodoAA* nodo);

    void MedicamentoMascota(NodoAA* nodo, int idAnimal, ofstream& archivo) {

        if (nodo) {

            if (nodo->idAnimal == idAnimal) {
                archivo << nodo->idAnimal << " " << nodo->codMedicacion << " " << nodo->dia << "-" << nodo->mes << "-" << nodo->anio << " " << nodo->listaMedicamento << " $" << nodo->costoUnitario << " " << nodo->cantidad << " $" << nodo->costoTotal << "\n\n";
            }

            MedicamentoMascota(nodo->izquierda, idAnimal, archivo);
            MedicamentoMascota(nodo->derecha, idAnimal, archivo);
        }
    }
public:

    NodoAA* raiz;

    ArbolAA() {

        raiz = NULL;
    }
    void insertarMedicacion(NodoAA*&);

    NodoAA* buscarMedicacion(int valor);

    NodoAA* evaluarMedicacion(int pcodMedicacion, int idAnimal, int dia, int mes, int anio);

    void mostrarMedicamentos();

    void cargarMascota(ArbolAVL* ArbolMascotas);

    void eliminarNodoMedicaion(NodoAA*& nodo, int pCodMedicaion);

    void MedicamentoMascota(int idAnimal) {

        ofstream archivo("Reporte Medicamentos de Animal.txt");
        MedicamentoMascota(raiz, idAnimal, archivo);
        archivo.close();
    }
};