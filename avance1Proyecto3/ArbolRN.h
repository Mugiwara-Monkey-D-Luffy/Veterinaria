#pragma once
#include "NodoRN.h"
#include<iostream>
#include<fstream>
using namespace std;

class ArbolRN {
private:
    // Funciones de rotación
    void rotacionIzquierda(NodoRN* nodo);

    void rotacionDerecha(NodoRN* nodo);

    // Función que realiza el rebalanceo del árbol después de la inserción de un nuevo nodo
    void rebalancear(NodoRN* nodo);

    void mostrarPreorden(NodoRN* nodo);

    void reporteTratamientos(NodoRN* nodo, ofstream& archivo) {

        if (nodo == NULL) {
            return;
        }
        reporteTratamientos(nodo->izq, archivo);

        archivo << nodo->codTratamiento << " " << nodo->nombre << " $" << nodo->precioUnitario << endl;

        reporteTratamientos(nodo->der, archivo);
    }

public:
    NodoRN* raiz;

    ArbolRN();

    // Inserta un nuevo nodo en el árbol
    void insertarTratamiento(NodoRN* nuevoNodo);

    NodoRN* buscarTratamiento(int valor);

    void cargarTratamiento();

    void reemplazarNodo(NodoRN* nodoEliminar, NodoRN* nodoReemplazo);

    void eliminar(int pCodTratamiento);

    void rebalancearEliminar(NodoRN* nodo, NodoRN* padre);

    void mostrarTratamientos();

    void reporteTratamientos() {

        ofstream archivo("Reporte Tratamientos.txt");
        reporteTratamientos(raiz, archivo);
        archivo.close();
    }
};