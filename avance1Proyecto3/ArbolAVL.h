#pragma once
#include "NodoAVL.h"
#include "ArbolB.h"

class ArbolAVL {
public:

    void mostrarMascota(NodoAVL* nodo);

    void ReportesMascotasCliente(NodoAVL* nodo, int idCliente, ofstream& archivo) {

        if (nodo == NULL) {
            return;
        }
        ReportesMascotasCliente(nodo->izquierda, idCliente, archivo);

        if (nodo->numCliente == idCliente) {

            archivo << nodo->numCliente << " " << nodo->idAnimal << " " << nodo->nombre << " " << nodo->tipoMascota << " " << nodo->raza << " ";
            archivo << nodo->diaNacimiento << "-" << nodo->mesNacimiento << "-" << nodo->anioNacimiento << " ";
            archivo << nodo->sexo << " " << nodo->color << " " << nodo->castrado << " ";
            archivo << nodo->diaVisita << "-" << nodo->mesVisita << "-" << nodo->anioVisita << "\n\n";
        }
        ReportesMascotasCliente(nodo->derecha, idCliente, archivo);
    }

    NodoAVL* raiz;

    ArbolAVL();

    NodoAVL* insertar(NodoAVL* raizActual, NodoAVL* nuevoNodo);

    NodoAVL* rotacionSimpleDerecha(NodoAVL* nodo);

    NodoAVL* rotacionSimpleIzquierda(NodoAVL* nodo);

    NodoAVL* rotacionDobleIzquierda(NodoAVL* nodo);

    NodoAVL* rotacionDobleDerecha(NodoAVL* nodo);

    void insertarMascota(NodoAVL* nuevoNodo);

    NodoAVL* buscarMascota(int valorBuscado);

    void cargarMascota(ArbolB* ArbolClientes);

    int calcularBalance(NodoAVL* nodo);

    NodoAVL* eliminarNodo(NodoAVL* nodo, int idAnimal);

    void eliminar(int idAnimal);

    void mostrarMascotas();

    void ReportesMascotasCliente(int idCliente) {

        ofstream archivo("Reporte de Mascotas de un Cliente.txt");
        ReportesMascotasCliente(raiz, idCliente, archivo);
        archivo.close();
    }

    int altura(NodoAVL* nodo);

};
